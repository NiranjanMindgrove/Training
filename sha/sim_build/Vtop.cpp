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
            VL_FATAL_MT("/home/niranjan/Documents/Training_Projects/HDL_Codes/sha/mksequential_sha_engine.v", 40, "",
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
            VL_FATAL_MT("/home/niranjan/Documents/Training_Projects/HDL_Codes/sha/mksequential_sha_engine.v", 40, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
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
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__CLK 
        = vlTOPp->mksequential_sha_engine__DOT__CLK;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__RST 
        = vlTOPp->mksequential_sha_engine__DOT__RST_N;
    vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_2 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh7036 
           + vlTOPp->input_engine_pre_hash[0U]);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_6_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_6 
                = vlTOPp->mksequential_sha_engine__DOT__w_6_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_5_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_5 
                = vlTOPp->mksequential_sha_engine__DOT__w_5_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_4_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_4 
                = vlTOPp->mksequential_sha_engine__DOT__w_4_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_3_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_3 
                = vlTOPp->mksequential_sha_engine__DOT__w_3_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_2_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_2 
                = vlTOPp->mksequential_sha_engine__DOT__w_2_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_15_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_15 
                = vlTOPp->mksequential_sha_engine__DOT__w_15_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_15 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_13_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_13 
                = vlTOPp->mksequential_sha_engine__DOT__w_13_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_13 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_12_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_12 
                = vlTOPp->mksequential_sha_engine__DOT__w_12_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_12 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_8_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_8 
                = vlTOPp->mksequential_sha_engine__DOT__w_8_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_8 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_7_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_7 
                = vlTOPp->mksequential_sha_engine__DOT__w_7_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_10_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_10 
                = vlTOPp->mksequential_sha_engine__DOT__w_10_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_10 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_11_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_11 
                = vlTOPp->mksequential_sha_engine__DOT__w_11_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_11 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__initial_val_1_EN) {
            vlTOPp->mksequential_sha_engine__DOT__initial_val_1 
                = vlTOPp->mksequential_sha_engine__DOT__initial_val_1_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__initial_val_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__initial_val_0_EN) {
            vlTOPp->mksequential_sha_engine__DOT__initial_val_0 
                = vlTOPp->mksequential_sha_engine__DOT__initial_val_0_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__initial_val_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__initial_val_2_EN) {
            vlTOPp->mksequential_sha_engine__DOT__initial_val_2 
                = vlTOPp->mksequential_sha_engine__DOT__initial_val_2_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__initial_val_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__initial_val_3_EN) {
            vlTOPp->mksequential_sha_engine__DOT__initial_val_3 
                = vlTOPp->mksequential_sha_engine__DOT__initial_val_3_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__initial_val_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__pre_comp_EN) {
            vlTOPp->mksequential_sha_engine__DOT__pre_comp 
                = vlTOPp->mksequential_sha_engine__DOT__pre_comp_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__pre_comp = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_0_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_0 
                = vlTOPp->mksequential_sha_engine__DOT__w_0_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_h_3_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i_h_3 
                = vlTOPp->mksequential_sha_engine__DOT__i_h_3_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_3 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_9_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_9 
                = vlTOPp->mksequential_sha_engine__DOT__w_9_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_9 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__initial_val_6_EN) {
            vlTOPp->mksequential_sha_engine__DOT__initial_val_6 
                = vlTOPp->mksequential_sha_engine__DOT__initial_val_6_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__initial_val_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__initial_val_4_EN) {
            vlTOPp->mksequential_sha_engine__DOT__initial_val_4 
                = vlTOPp->mksequential_sha_engine__DOT__initial_val_4_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__initial_val_4 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__initial_val_5_EN) {
            vlTOPp->mksequential_sha_engine__DOT__initial_val_5 
                = vlTOPp->mksequential_sha_engine__DOT__initial_val_5_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__initial_val_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__initial_val_7_EN) {
            vlTOPp->mksequential_sha_engine__DOT__initial_val_7 
                = vlTOPp->mksequential_sha_engine__DOT__initial_val_7_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__initial_val_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_h_7_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i_h_7 
                = vlTOPp->mksequential_sha_engine__DOT__i_h_7_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_7 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_h_1_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i_h_1 
                = vlTOPp->mksequential_sha_engine__DOT__i_h_1_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_h_2_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i_h_2 
                = vlTOPp->mksequential_sha_engine__DOT__i_h_2_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_2 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_14_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_14 
                = vlTOPp->mksequential_sha_engine__DOT__w_14_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_14 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_h_5_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i_h_5 
                = vlTOPp->mksequential_sha_engine__DOT__i_h_5_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_5 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_h_6_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i_h_6 
                = vlTOPp->mksequential_sha_engine__DOT__i_h_6_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_6 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_h_0_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i_h_0 
                = vlTOPp->mksequential_sha_engine__DOT__i_h_0_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_0 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__w_1_EN) {
            vlTOPp->mksequential_sha_engine__DOT__w_1 
                = vlTOPp->mksequential_sha_engine__DOT__w_1_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__w_1 = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__state_EN) {
            vlTOPp->mksequential_sha_engine__DOT__state 
                = vlTOPp->mksequential_sha_engine__DOT__state_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__state = 0U;
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_h_4_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i_h_4 
                = vlTOPp->mksequential_sha_engine__DOT__i_h_4_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i_h_4 = 0U;
    }
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
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh3476 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3678 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3679);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3475 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3489 
           ^ vlTOPp->mksequential_sha_engine__DOT__y___05Fh3490);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5131 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh5133 
           + vlTOPp->mksequential_sha_engine__DOT__y___05Fh5134);
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh3473 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3475 
           + vlTOPp->mksequential_sha_engine__DOT__y___05Fh3476);
    vlTOPp->mksequential_sha_engine__DOT__MUX_w_15_write_1___05FVAL_1 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh5131 
           + vlTOPp->mksequential_sha_engine__DOT__y___05Fh5132);
    vlTOPp->mksequential_sha_engine__DOT__tmp1___05Fh2403 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh3473 
           + vlTOPp->mksequential_sha_engine__DOT__pre_comp);
    vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_0_write_1___05FVAL_1 
        = (vlTOPp->mksequential_sha_engine__DOT__tmp1___05Fh2403 
           + vlTOPp->mksequential_sha_engine__DOT__tmp2___05Fh2404);
    vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_4_write_1___05FVAL_1 
        = (vlTOPp->mksequential_sha_engine__DOT__i_h_3 
           + vlTOPp->mksequential_sha_engine__DOT__tmp1___05Fh2403);
}

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__5\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg;
    WData/*255:0*/ __Vtemp8[8];
    WData/*255:0*/ __Vtemp16[8];
    // Body
    __Vdly__mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__deqerror = 0U;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__enqerror = 0U;
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg)) 
                         & (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ)))) {
            vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__deqerror = 1U;
            VL_WRITEF("Warning: FIFO2: %Nmksequential_sha_engine.result_fifo.error_checks -- Dequeuing from empty fifo\n",
                      vlSymsp->name());
        }
        if (VL_UNLIKELY(((~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg)) 
                         & (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ)))) {
            VL_WRITEF("Warning: FIFO2: %Nmksequential_sha_engine.result_fifo.error_checks -- Enqueuing to a full fifo\n",
                      vlSymsp->name());
            vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__enqerror = 1U;
        }
    }
    __Vtemp8[1U] = ((((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di))) 
                      & vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[1U]) 
                     | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1))) 
                        & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[1U])) 
                    | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h))) 
                       & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[1U]));
    __Vtemp8[2U] = ((((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di))) 
                      & vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[2U]) 
                     | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1))) 
                        & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[2U])) 
                    | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h))) 
                       & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[2U]));
    __Vtemp8[3U] = ((((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di))) 
                      & vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[3U]) 
                     | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1))) 
                        & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[3U])) 
                    | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h))) 
                       & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[3U]));
    __Vtemp8[4U] = ((((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di))) 
                      & vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[4U]) 
                     | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1))) 
                        & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[4U])) 
                    | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h))) 
                       & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[4U]));
    __Vtemp8[5U] = ((((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di))) 
                      & vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[5U]) 
                     | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1))) 
                        & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[5U])) 
                    | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h))) 
                       & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[5U]));
    __Vtemp8[6U] = ((((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di))) 
                      & vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[6U]) 
                     | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1))) 
                        & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[6U])) 
                    | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h))) 
                       & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[6U]));
    __Vtemp8[7U] = ((((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di))) 
                      & vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[7U]) 
                     | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1))) 
                        & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[7U])) 
                    | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h))) 
                       & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[7U]));
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[0U] 
        = ((((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di))) 
             & vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[0U]) 
            | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1))) 
               & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[0U])) 
           | ((- (IData)((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h))) 
              & vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[0U]));
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[1U] 
        = __Vtemp8[1U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[2U] 
        = __Vtemp8[2U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[3U] 
        = __Vtemp8[3U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[4U] 
        = __Vtemp8[4U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[5U] 
        = __Vtemp8[5U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[6U] 
        = __Vtemp8[6U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[7U] 
        = __Vtemp8[7U];
    if (vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d1di) {
        __Vtemp16[1U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[1U];
        __Vtemp16[2U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[2U];
        __Vtemp16[3U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[3U];
        __Vtemp16[4U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[4U];
        __Vtemp16[5U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[5U];
        __Vtemp16[6U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[6U];
        __Vtemp16[7U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[7U];
        vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[0U] 
            = vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN[0U];
    } else {
        __Vtemp16[1U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[1U];
        __Vtemp16[2U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[2U];
        __Vtemp16[3U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[3U];
        __Vtemp16[4U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[4U];
        __Vtemp16[5U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[5U];
        __Vtemp16[6U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[6U];
        __Vtemp16[7U] = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[7U];
        vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[0U] 
            = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[0U];
    }
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[1U] 
        = __Vtemp16[1U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[2U] 
        = __Vtemp16[2U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[3U] 
        = __Vtemp16[3U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[4U] 
        = __Vtemp16[4U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[5U] 
        = __Vtemp16[5U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[6U] 
        = __Vtemp16[6U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[7U] 
        = __Vtemp16[7U];
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__result_fifo_CLR) {
            __Vdly__mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg = 0U;
        } else {
            if (((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ) 
                 & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ)))) {
                __Vdly__mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg = 1U;
            } else {
                if (((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ) 
                     & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ)))) {
                    __Vdly__mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg 
                        = (1U & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg)));
                }
            }
        }
    } else {
        __Vdly__mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg = 0U;
    }
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
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__result_fifo_CLR) {
            vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg = 1U;
        } else {
            if (((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ) 
                 & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ)))) {
                vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg 
                    = (1U & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg)));
            } else {
                if (((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ) 
                     & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ)))) {
                    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg = 1U;
                }
            }
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg = 1U;
    }
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
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg 
        = __Vdly__mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg;
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
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__FULL_N 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__EMPTY_N 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg;
    vlTOPp->output_engine_get[0U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[0U];
    vlTOPp->output_engine_get[1U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[1U];
    vlTOPp->output_engine_get[2U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[2U];
    vlTOPp->output_engine_get[3U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[3U];
    vlTOPp->output_engine_get[4U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[4U];
    vlTOPp->output_engine_get[5U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[5U];
    vlTOPp->output_engine_get[6U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[6U];
    vlTOPp->output_engine_get[7U] = vlTOPp->mksequential_sha_engine__DOT__output_engine_get[7U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_FULL_N 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__FULL_N;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_EMPTY_N 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__EMPTY_N;
    vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_output_engine_get 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_EMPTY_N;
    vlTOPp->mksequential_sha_engine__DOT__RDY_output_engine_get 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_EMPTY_N;
    vlTOPp->RDY_output_engine_get = vlTOPp->mksequential_sha_engine__DOT__RDY_output_engine_get;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->EN_input_engine)) {
            VL_WRITEF("SHA: Engine input value %x\n",
                      512,vlTOPp->input_engine_input_val);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->EN_output_engine_get)) {
            VL_WRITEF("SHA: Engine output value %x\n",
                      256,vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT);
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) {
            vlTOPp->mksequential_sha_engine__DOT__v___05Fh2361 
                = (IData)(VL_TIME_UNITED_Q(1000));
        }
    }
    vlTOPp->mksequential_sha_engine__DOT__v___05Fh2355 
        = VL_DIV_III(32, vlTOPp->mksequential_sha_engine__DOT__v___05Fh2361, (IData)(0xaU));
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash)) {
            VL_WRITEF("SHA:%8x State:Hash Action:Hash cycle-%8x\n",
                      32,vlTOPp->mksequential_sha_engine__DOT__v___05Fh2355,
                      6,(IData)(vlTOPp->mksequential_sha_engine__DOT__i));
        }
    }
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput) {
            vlTOPp->mksequential_sha_engine__DOT__v___05Fh5778 
                = (IData)(VL_TIME_UNITED_Q(1000));
        }
    }
    vlTOPp->mksequential_sha_engine__DOT__v___05Fh5772 
        = VL_DIV_III(32, vlTOPp->mksequential_sha_engine__DOT__v___05Fh5778, (IData)(0xaU));
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput)) {
            VL_WRITEF("SHA:%8x State:Output Action:Output Digest:%64x\n",
                      32,vlTOPp->mksequential_sha_engine__DOT__v___05Fh5772,
                      256,vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434);
        }
    }
    if (vlTOPp->RST_N) {
        if (VL_UNLIKELY(((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
                         & (IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput)))) {
            VL_WRITEF("Error: \"crypto-box/sha256/v2//sequential_sha_engine.bsv\", line 86, column 25: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_hash] and [RL_routput] )\n  fired in the same clock cycle.\n\n");
        }
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mksequential_sha_engine__DOT__initial_val_1_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_1_D_IN 
        = vlTOPp->input_engine_pre_hash[6U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_0_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_0_D_IN 
        = vlTOPp->input_engine_pre_hash[7U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_2_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_2_D_IN 
        = vlTOPp->input_engine_pre_hash[5U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_3_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_3_D_IN 
        = vlTOPp->input_engine_pre_hash[4U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_6_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_6_D_IN 
        = vlTOPp->input_engine_pre_hash[1U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_4_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_4_D_IN 
        = vlTOPp->input_engine_pre_hash[3U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_5_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_5_D_IN 
        = vlTOPp->input_engine_pre_hash[2U];
    vlTOPp->mksequential_sha_engine__DOT__initial_val_7_EN 
        = vlTOPp->EN_input_engine;
    vlTOPp->mksequential_sha_engine__DOT__initial_val_7_D_IN 
        = vlTOPp->input_engine_pre_hash[0U];
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_CLR 
        = vlTOPp->EN_reset;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ 
        = vlTOPp->EN_output_engine_get;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__CLR 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_CLR;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__DEQ 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ) 
           & (~ (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__8\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_routput 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_FULL_N) 
           & (2U == (IData)(vlTOPp->mksequential_sha_engine__DOT__state)));
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
    vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash 
        = vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_hash;
    vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput 
        = vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_routput;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ 
        = vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_routput;
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
    if (vlTOPp->RST_N) {
        if (vlTOPp->mksequential_sha_engine__DOT__i_EN) {
            vlTOPp->mksequential_sha_engine__DOT__i 
                = vlTOPp->mksequential_sha_engine__DOT__i_D_IN;
        }
    } else {
        vlTOPp->mksequential_sha_engine__DOT__i = 0U;
    }
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__ENQ 
        = vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ;
    vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d1di 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ) 
           & (IData)(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg));
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
    vlTOPp->mksequential_sha_engine__DOT__x___05Fh5420 
        = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->mksequential_sha_engine__DOT__i)));
    vlTOPp->mksequential_sha_engine__DOT__MUX_state_write_1___05FSEL_3 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           & (0x3fU == (IData)(vlTOPp->mksequential_sha_engine__DOT__i)));
    vlTOPp->mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2 
        = ((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
           & (0x3fU != (IData)(vlTOPp->mksequential_sha_engine__DOT__i)));
    vlTOPp->__Vtableidx1 = vlTOPp->mksequential_sha_engine__DOT__x___05Fh5420;
    vlTOPp->mksequential_sha_engine__DOT__y___05Fh2478 
        = vlTOPp->__Vtable1_mksequential_sha_engine__DOT__y___05Fh2478
        [vlTOPp->__Vtableidx1];
    vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_1 
        = (vlTOPp->mksequential_sha_engine__DOT__x___05Fh2477 
           + vlTOPp->mksequential_sha_engine__DOT__y___05Fh2478);
}

VL_INLINE_OPT void Vtop::_combo__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__9\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
        vlTOPp->mksequential_sha_engine__DOT__i_h_0_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_0_write_1___05FVAL_1;
        vlTOPp->mksequential_sha_engine__DOT__i_h_4_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_4_write_1___05FVAL_1;
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
        vlTOPp->mksequential_sha_engine__DOT__i_h_0_D_IN 
            = vlTOPp->input_engine_pre_hash[7U];
        vlTOPp->mksequential_sha_engine__DOT__i_h_4_D_IN 
            = vlTOPp->input_engine_pre_hash[3U];
    }
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
    vlTOPp->mksequential_sha_engine__DOT__state_EN 
        = (((((IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash) 
              & (0x3fU == (IData)(vlTOPp->mksequential_sha_engine__DOT__i))) 
             | (IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput)) 
            | (IData)(vlTOPp->EN_reset)) | (IData)(vlTOPp->EN_input_engine));
    vlTOPp->mksequential_sha_engine__DOT__state_D_IN 
        = (((IData)(vlTOPp->EN_reset) | (IData)(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput))
            ? 0U : ((IData)(vlTOPp->mksequential_sha_engine__DOT__MUX_state_write_1___05FSEL_3)
                     ? 2U : ((IData)(vlTOPp->EN_input_engine)
                              ? 1U : 0U)));
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
        vlTOPp->mksequential_sha_engine__DOT__w_15_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__MUX_w_15_write_1___05FVAL_1;
        vlTOPp->mksequential_sha_engine__DOT__pre_comp_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_1;
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
        vlTOPp->mksequential_sha_engine__DOT__w_15_D_IN 
            = vlTOPp->input_engine_input_val[0U];
        vlTOPp->mksequential_sha_engine__DOT__pre_comp_D_IN 
            = vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_2;
    }
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->CLK)) & (IData)(vlTOPp->__Vclklast__TOP__CLK))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
         | ((~ (IData)(vlTOPp->RST_N)) & (IData)(vlTOPp->__Vclklast__TOP__RST_N)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RST_N = vlTOPp->RST_N;
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
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((EN_reset & 0xfeU))) {
        Verilated::overWidthError("EN_reset");}
    if (VL_UNLIKELY((EN_input_engine & 0xfeU))) {
        Verilated::overWidthError("EN_input_engine");}
    if (VL_UNLIKELY((EN_output_engine_get & 0xfeU))) {
        Verilated::overWidthError("EN_output_engine_get");}
}
#endif  // VL_DEBUG
