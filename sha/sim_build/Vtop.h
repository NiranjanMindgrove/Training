// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated_heavy.h"
#include "Vtop__Dpi.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLK,0,0);
    VL_IN8(RST_N,0,0);
    VL_IN8(EN_reset,0,0);
    VL_OUT8(RDY_reset,0,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(RDY_ready,0,0);
    VL_IN8(EN_input_engine,0,0);
    VL_OUT8(RDY_input_engine,0,0);
    VL_IN8(EN_output_engine_get,0,0);
    VL_OUT8(RDY_output_engine_get,0,0);
    VL_INW(input_engine_pre_hash,255,0,8);
    VL_INW(input_engine_input_val,511,0,16);
    VL_OUTW(output_engine_get,255,0,8);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mksequential_sha_engine__DOT__CLK;
        CData/*0:0*/ mksequential_sha_engine__DOT__RST_N;
        CData/*0:0*/ mksequential_sha_engine__DOT__EN_reset;
        CData/*0:0*/ mksequential_sha_engine__DOT__RDY_reset;
        CData/*0:0*/ mksequential_sha_engine__DOT__ready;
        CData/*0:0*/ mksequential_sha_engine__DOT__RDY_ready;
        CData/*0:0*/ mksequential_sha_engine__DOT__EN_input_engine;
        CData/*0:0*/ mksequential_sha_engine__DOT__RDY_input_engine;
        CData/*0:0*/ mksequential_sha_engine__DOT__EN_output_engine_get;
        CData/*0:0*/ mksequential_sha_engine__DOT__RDY_output_engine_get;
        CData/*5:0*/ mksequential_sha_engine__DOT__i;
        CData/*5:0*/ mksequential_sha_engine__DOT__i_D_IN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_h_0_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_h_1_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_h_2_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_h_3_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_h_4_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_h_5_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_h_6_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__i_h_7_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__initial_val_0_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__initial_val_1_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__initial_val_2_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__initial_val_3_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__initial_val_4_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__initial_val_5_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__initial_val_6_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__initial_val_7_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__pre_comp_EN;
        CData/*1:0*/ mksequential_sha_engine__DOT__state;
        CData/*1:0*/ mksequential_sha_engine__DOT__state_D_IN;
        CData/*0:0*/ mksequential_sha_engine__DOT__state_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_0_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_1_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_10_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_11_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_12_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_13_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_14_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_15_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_2_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_3_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_4_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_5_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_6_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_7_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_8_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__w_9_EN;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo_CLR;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo_DEQ;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo_EMPTY_N;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo_ENQ;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo_FULL_N;
        CData/*0:0*/ mksequential_sha_engine__DOT__CAN_FIRE_RL_hash;
        CData/*0:0*/ mksequential_sha_engine__DOT__CAN_FIRE_RL_routput;
        CData/*0:0*/ mksequential_sha_engine__DOT__CAN_FIRE___05F_me_check_0;
        CData/*0:0*/ mksequential_sha_engine__DOT__CAN_FIRE_input_engine;
        CData/*0:0*/ mksequential_sha_engine__DOT__CAN_FIRE_output_engine_get;
        CData/*0:0*/ mksequential_sha_engine__DOT__CAN_FIRE_reset;
        CData/*0:0*/ mksequential_sha_engine__DOT__WILL_FIRE_RL_hash;
        CData/*0:0*/ mksequential_sha_engine__DOT__WILL_FIRE_RL_routput;
        CData/*0:0*/ mksequential_sha_engine__DOT__WILL_FIRE___05F_me_check_0;
        CData/*0:0*/ mksequential_sha_engine__DOT__WILL_FIRE_input_engine;
    };
    struct {
        CData/*0:0*/ mksequential_sha_engine__DOT__WILL_FIRE_output_engine_get;
        CData/*0:0*/ mksequential_sha_engine__DOT__WILL_FIRE_reset;
        CData/*0:0*/ mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2;
        CData/*0:0*/ mksequential_sha_engine__DOT__MUX_state_write_1___05FSEL_3;
        CData/*5:0*/ mksequential_sha_engine__DOT__x___05Fh5420;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__CLK;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__RST;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__ENQ;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__DEQ;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__CLR;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__FULL_N;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__EMPTY_N;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__full_reg;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__d0di;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__d0d1;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__d0h;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__d1di;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__deqerror;
        CData/*0:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__enqerror;
        WData/*255:0*/ mksequential_sha_engine__DOT__input_engine_pre_hash[8];
        WData/*511:0*/ mksequential_sha_engine__DOT__input_engine_input_val[16];
        WData/*255:0*/ mksequential_sha_engine__DOT__output_engine_get[8];
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_0;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_0_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_1;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_1_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_2;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_2_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_3;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_3_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_4;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_4_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_5;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_5_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_6;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_6_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_7;
        IData/*31:0*/ mksequential_sha_engine__DOT__i_h_7_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_0;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_0_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_1;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_1_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_2;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_2_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_3;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_3_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_4;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_4_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_5;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_5_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_6;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_6_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_7;
        IData/*31:0*/ mksequential_sha_engine__DOT__initial_val_7_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__pre_comp;
        IData/*31:0*/ mksequential_sha_engine__DOT__pre_comp_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_0;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_0_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_1;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_1_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_10;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_10_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_11;
    };
    struct {
        IData/*31:0*/ mksequential_sha_engine__DOT__w_11_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_12;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_12_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_13;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_13_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_14;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_14_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_15;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_15_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_2;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_2_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_3;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_3_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_4;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_4_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_5;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_5_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_6;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_6_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_7;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_7_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_8;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_8_D_IN;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_9;
        IData/*31:0*/ mksequential_sha_engine__DOT__w_9_D_IN;
        WData/*255:0*/ mksequential_sha_engine__DOT__result_fifo_D_IN[8];
        WData/*255:0*/ mksequential_sha_engine__DOT__result_fifo_D_OUT[8];
        IData/*31:0*/ mksequential_sha_engine__DOT__MUX_i_h_0_write_1___05FVAL_1;
        IData/*31:0*/ mksequential_sha_engine__DOT__MUX_i_h_4_write_1___05FVAL_1;
        IData/*31:0*/ mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_1;
        IData/*31:0*/ mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_2;
        IData/*31:0*/ mksequential_sha_engine__DOT__MUX_w_15_write_1___05FVAL_1;
        IData/*31:0*/ mksequential_sha_engine__DOT__v___05Fh2361;
        IData/*31:0*/ mksequential_sha_engine__DOT__v___05Fh5778;
        IData/*31:0*/ mksequential_sha_engine__DOT__v___05Fh2355;
        IData/*31:0*/ mksequential_sha_engine__DOT__v___05Fh5772;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh2478;
        WData/*255:0*/ mksequential_sha_engine__DOT__res___05Fh5434[8];
        WData/*191:0*/ mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118[6];
        WData/*127:0*/ mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117[4];
        IData/*31:0*/ mksequential_sha_engine__DOT__tmp1___05Fh2403;
        IData/*31:0*/ mksequential_sha_engine__DOT__tmp2___05Fh2404;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh2477;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3473;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3475;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3489;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3491;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3678;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3695;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3717;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3719;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3904;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh3906;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh5131;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh5133;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh5164;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh5166;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh5296;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh5298;
        IData/*31:0*/ mksequential_sha_engine__DOT__x___05Fh7036;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh3476;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh3490;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh3492;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh3679;
    };
    struct {
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh3718;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh3720;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh3905;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh3907;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh5132;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh5134;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh5165;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh5167;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh5297;
        IData/*31:0*/ mksequential_sha_engine__DOT__y___05Fh5299;
        WData/*255:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__D_IN[8];
        WData/*255:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT[8];
        WData/*255:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg[8];
        WData/*255:0*/ mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg[8];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*5:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__CLK;
    CData/*0:0*/ __Vclklast__TOP__RST_N;
    CData/*0:0*/ __Vm_traceActivity[1];
    static IData/*31:0*/ __Vtable1_mksequential_sha_engine__DOT__y___05Fh2478[64];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void _combo__TOP__9(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedFst* tracep);
    static void traceChgTop0(void* userp, VerilatedFst* tracep);
    static void traceCleanup(void* userp, VerilatedFst* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
