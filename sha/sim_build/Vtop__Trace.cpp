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
        tracep->chgBit(oldp+0,(vlTOPp->CLK));
        tracep->chgBit(oldp+1,(vlTOPp->RST_N));
        tracep->chgBit(oldp+2,(vlTOPp->EN_reset));
        tracep->chgBit(oldp+3,(vlTOPp->RDY_reset));
        tracep->chgBit(oldp+4,(vlTOPp->ready));
        tracep->chgBit(oldp+5,(vlTOPp->RDY_ready));
        tracep->chgWData(oldp+6,(vlTOPp->input_engine_pre_hash),256);
        tracep->chgWData(oldp+14,(vlTOPp->input_engine_input_val),512);
        tracep->chgBit(oldp+30,(vlTOPp->EN_input_engine));
        tracep->chgBit(oldp+31,(vlTOPp->RDY_input_engine));
        tracep->chgBit(oldp+32,(vlTOPp->EN_output_engine_get));
        tracep->chgWData(oldp+33,(vlTOPp->output_engine_get),256);
        tracep->chgBit(oldp+41,(vlTOPp->RDY_output_engine_get));
        tracep->chgBit(oldp+42,(vlTOPp->mksequential_sha_engine__DOT__CLK));
        tracep->chgBit(oldp+43,(vlTOPp->mksequential_sha_engine__DOT__RST_N));
        tracep->chgBit(oldp+44,(vlTOPp->mksequential_sha_engine__DOT__EN_reset));
        tracep->chgBit(oldp+45,(vlTOPp->mksequential_sha_engine__DOT__RDY_reset));
        tracep->chgBit(oldp+46,(vlTOPp->mksequential_sha_engine__DOT__ready));
        tracep->chgBit(oldp+47,(vlTOPp->mksequential_sha_engine__DOT__RDY_ready));
        tracep->chgWData(oldp+48,(vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash),256);
        tracep->chgWData(oldp+56,(vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val),512);
        tracep->chgBit(oldp+72,(vlTOPp->mksequential_sha_engine__DOT__EN_input_engine));
        tracep->chgBit(oldp+73,(vlTOPp->mksequential_sha_engine__DOT__RDY_input_engine));
        tracep->chgBit(oldp+74,(vlTOPp->mksequential_sha_engine__DOT__EN_output_engine_get));
        tracep->chgWData(oldp+75,(vlTOPp->mksequential_sha_engine__DOT__output_engine_get),256);
        tracep->chgBit(oldp+83,(vlTOPp->mksequential_sha_engine__DOT__RDY_output_engine_get));
        tracep->chgCData(oldp+84,(vlTOPp->mksequential_sha_engine__DOT__i),6);
        tracep->chgCData(oldp+85,(vlTOPp->mksequential_sha_engine__DOT__i_D_IN),6);
        tracep->chgBit(oldp+86,(vlTOPp->mksequential_sha_engine__DOT__i_EN));
        tracep->chgIData(oldp+87,(vlTOPp->mksequential_sha_engine__DOT__i_h_0),32);
        tracep->chgIData(oldp+88,(vlTOPp->mksequential_sha_engine__DOT__i_h_0_D_IN),32);
        tracep->chgBit(oldp+89,(vlTOPp->mksequential_sha_engine__DOT__i_h_0_EN));
        tracep->chgIData(oldp+90,(vlTOPp->mksequential_sha_engine__DOT__i_h_1),32);
        tracep->chgIData(oldp+91,(vlTOPp->mksequential_sha_engine__DOT__i_h_1_D_IN),32);
        tracep->chgBit(oldp+92,(vlTOPp->mksequential_sha_engine__DOT__i_h_1_EN));
        tracep->chgIData(oldp+93,(vlTOPp->mksequential_sha_engine__DOT__i_h_2),32);
        tracep->chgIData(oldp+94,(vlTOPp->mksequential_sha_engine__DOT__i_h_2_D_IN),32);
        tracep->chgBit(oldp+95,(vlTOPp->mksequential_sha_engine__DOT__i_h_2_EN));
        tracep->chgIData(oldp+96,(vlTOPp->mksequential_sha_engine__DOT__i_h_3),32);
        tracep->chgIData(oldp+97,(vlTOPp->mksequential_sha_engine__DOT__i_h_3_D_IN),32);
        tracep->chgBit(oldp+98,(vlTOPp->mksequential_sha_engine__DOT__i_h_3_EN));
        tracep->chgIData(oldp+99,(vlTOPp->mksequential_sha_engine__DOT__i_h_4),32);
        tracep->chgIData(oldp+100,(vlTOPp->mksequential_sha_engine__DOT__i_h_4_D_IN),32);
        tracep->chgBit(oldp+101,(vlTOPp->mksequential_sha_engine__DOT__i_h_4_EN));
        tracep->chgIData(oldp+102,(vlTOPp->mksequential_sha_engine__DOT__i_h_5),32);
        tracep->chgIData(oldp+103,(vlTOPp->mksequential_sha_engine__DOT__i_h_5_D_IN),32);
        tracep->chgBit(oldp+104,(vlTOPp->mksequential_sha_engine__DOT__i_h_5_EN));
        tracep->chgIData(oldp+105,(vlTOPp->mksequential_sha_engine__DOT__i_h_6),32);
        tracep->chgIData(oldp+106,(vlTOPp->mksequential_sha_engine__DOT__i_h_6_D_IN),32);
        tracep->chgBit(oldp+107,(vlTOPp->mksequential_sha_engine__DOT__i_h_6_EN));
        tracep->chgIData(oldp+108,(vlTOPp->mksequential_sha_engine__DOT__i_h_7),32);
        tracep->chgIData(oldp+109,(vlTOPp->mksequential_sha_engine__DOT__i_h_7_D_IN),32);
        tracep->chgBit(oldp+110,(vlTOPp->mksequential_sha_engine__DOT__i_h_7_EN));
        tracep->chgIData(oldp+111,(vlTOPp->mksequential_sha_engine__DOT__initial_val_0),32);
        tracep->chgIData(oldp+112,(vlTOPp->mksequential_sha_engine__DOT__initial_val_0_D_IN),32);
        tracep->chgBit(oldp+113,(vlTOPp->mksequential_sha_engine__DOT__initial_val_0_EN));
        tracep->chgIData(oldp+114,(vlTOPp->mksequential_sha_engine__DOT__initial_val_1),32);
        tracep->chgIData(oldp+115,(vlTOPp->mksequential_sha_engine__DOT__initial_val_1_D_IN),32);
        tracep->chgBit(oldp+116,(vlTOPp->mksequential_sha_engine__DOT__initial_val_1_EN));
        tracep->chgIData(oldp+117,(vlTOPp->mksequential_sha_engine__DOT__initial_val_2),32);
        tracep->chgIData(oldp+118,(vlTOPp->mksequential_sha_engine__DOT__initial_val_2_D_IN),32);
        tracep->chgBit(oldp+119,(vlTOPp->mksequential_sha_engine__DOT__initial_val_2_EN));
        tracep->chgIData(oldp+120,(vlTOPp->mksequential_sha_engine__DOT__initial_val_3),32);
        tracep->chgIData(oldp+121,(vlTOPp->mksequential_sha_engine__DOT__initial_val_3_D_IN),32);
        tracep->chgBit(oldp+122,(vlTOPp->mksequential_sha_engine__DOT__initial_val_3_EN));
        tracep->chgIData(oldp+123,(vlTOPp->mksequential_sha_engine__DOT__initial_val_4),32);
        tracep->chgIData(oldp+124,(vlTOPp->mksequential_sha_engine__DOT__initial_val_4_D_IN),32);
        tracep->chgBit(oldp+125,(vlTOPp->mksequential_sha_engine__DOT__initial_val_4_EN));
        tracep->chgIData(oldp+126,(vlTOPp->mksequential_sha_engine__DOT__initial_val_5),32);
        tracep->chgIData(oldp+127,(vlTOPp->mksequential_sha_engine__DOT__initial_val_5_D_IN),32);
        tracep->chgBit(oldp+128,(vlTOPp->mksequential_sha_engine__DOT__initial_val_5_EN));
        tracep->chgIData(oldp+129,(vlTOPp->mksequential_sha_engine__DOT__initial_val_6),32);
        tracep->chgIData(oldp+130,(vlTOPp->mksequential_sha_engine__DOT__initial_val_6_D_IN),32);
        tracep->chgBit(oldp+131,(vlTOPp->mksequential_sha_engine__DOT__initial_val_6_EN));
        tracep->chgIData(oldp+132,(vlTOPp->mksequential_sha_engine__DOT__initial_val_7),32);
        tracep->chgIData(oldp+133,(vlTOPp->mksequential_sha_engine__DOT__initial_val_7_D_IN),32);
        tracep->chgBit(oldp+134,(vlTOPp->mksequential_sha_engine__DOT__initial_val_7_EN));
        tracep->chgIData(oldp+135,(vlTOPp->mksequential_sha_engine__DOT__pre_comp),32);
        tracep->chgIData(oldp+136,(vlTOPp->mksequential_sha_engine__DOT__pre_comp_D_IN),32);
        tracep->chgBit(oldp+137,(vlTOPp->mksequential_sha_engine__DOT__pre_comp_EN));
        tracep->chgCData(oldp+138,(vlTOPp->mksequential_sha_engine__DOT__state),2);
        tracep->chgCData(oldp+139,(vlTOPp->mksequential_sha_engine__DOT__state_D_IN),2);
        tracep->chgBit(oldp+140,(vlTOPp->mksequential_sha_engine__DOT__state_EN));
        tracep->chgIData(oldp+141,(vlTOPp->mksequential_sha_engine__DOT__w_0),32);
        tracep->chgIData(oldp+142,(vlTOPp->mksequential_sha_engine__DOT__w_0_D_IN),32);
        tracep->chgBit(oldp+143,(vlTOPp->mksequential_sha_engine__DOT__w_0_EN));
        tracep->chgIData(oldp+144,(vlTOPp->mksequential_sha_engine__DOT__w_1),32);
        tracep->chgIData(oldp+145,(vlTOPp->mksequential_sha_engine__DOT__w_1_D_IN),32);
        tracep->chgBit(oldp+146,(vlTOPp->mksequential_sha_engine__DOT__w_1_EN));
        tracep->chgIData(oldp+147,(vlTOPp->mksequential_sha_engine__DOT__w_10),32);
        tracep->chgIData(oldp+148,(vlTOPp->mksequential_sha_engine__DOT__w_10_D_IN),32);
        tracep->chgBit(oldp+149,(vlTOPp->mksequential_sha_engine__DOT__w_10_EN));
        tracep->chgIData(oldp+150,(vlTOPp->mksequential_sha_engine__DOT__w_11),32);
        tracep->chgIData(oldp+151,(vlTOPp->mksequential_sha_engine__DOT__w_11_D_IN),32);
        tracep->chgBit(oldp+152,(vlTOPp->mksequential_sha_engine__DOT__w_11_EN));
        tracep->chgIData(oldp+153,(vlTOPp->mksequential_sha_engine__DOT__w_12),32);
        tracep->chgIData(oldp+154,(vlTOPp->mksequential_sha_engine__DOT__w_12_D_IN),32);
        tracep->chgBit(oldp+155,(vlTOPp->mksequential_sha_engine__DOT__w_12_EN));
        tracep->chgIData(oldp+156,(vlTOPp->mksequential_sha_engine__DOT__w_13),32);
        tracep->chgIData(oldp+157,(vlTOPp->mksequential_sha_engine__DOT__w_13_D_IN),32);
        tracep->chgBit(oldp+158,(vlTOPp->mksequential_sha_engine__DOT__w_13_EN));
        tracep->chgIData(oldp+159,(vlTOPp->mksequential_sha_engine__DOT__w_14),32);
        tracep->chgIData(oldp+160,(vlTOPp->mksequential_sha_engine__DOT__w_14_D_IN),32);
        tracep->chgBit(oldp+161,(vlTOPp->mksequential_sha_engine__DOT__w_14_EN));
        tracep->chgIData(oldp+162,(vlTOPp->mksequential_sha_engine__DOT__w_15),32);
        tracep->chgIData(oldp+163,(vlTOPp->mksequential_sha_engine__DOT__w_15_D_IN),32);
        tracep->chgBit(oldp+164,(vlTOPp->mksequential_sha_engine__DOT__w_15_EN));
        tracep->chgIData(oldp+165,(vlTOPp->mksequential_sha_engine__DOT__w_2),32);
        tracep->chgIData(oldp+166,(vlTOPp->mksequential_sha_engine__DOT__w_2_D_IN),32);
        tracep->chgBit(oldp+167,(vlTOPp->mksequential_sha_engine__DOT__w_2_EN));
        tracep->chgIData(oldp+168,(vlTOPp->mksequential_sha_engine__DOT__w_3),32);
        tracep->chgIData(oldp+169,(vlTOPp->mksequential_sha_engine__DOT__w_3_D_IN),32);
        tracep->chgBit(oldp+170,(vlTOPp->mksequential_sha_engine__DOT__w_3_EN));
        tracep->chgIData(oldp+171,(vlTOPp->mksequential_sha_engine__DOT__w_4),32);
        tracep->chgIData(oldp+172,(vlTOPp->mksequential_sha_engine__DOT__w_4_D_IN),32);
        tracep->chgBit(oldp+173,(vlTOPp->mksequential_sha_engine__DOT__w_4_EN));
        tracep->chgIData(oldp+174,(vlTOPp->mksequential_sha_engine__DOT__w_5),32);
        tracep->chgIData(oldp+175,(vlTOPp->mksequential_sha_engine__DOT__w_5_D_IN),32);
        tracep->chgBit(oldp+176,(vlTOPp->mksequential_sha_engine__DOT__w_5_EN));
        tracep->chgIData(oldp+177,(vlTOPp->mksequential_sha_engine__DOT__w_6),32);
        tracep->chgIData(oldp+178,(vlTOPp->mksequential_sha_engine__DOT__w_6_D_IN),32);
        tracep->chgBit(oldp+179,(vlTOPp->mksequential_sha_engine__DOT__w_6_EN));
        tracep->chgIData(oldp+180,(vlTOPp->mksequential_sha_engine__DOT__w_7),32);
        tracep->chgIData(oldp+181,(vlTOPp->mksequential_sha_engine__DOT__w_7_D_IN),32);
        tracep->chgBit(oldp+182,(vlTOPp->mksequential_sha_engine__DOT__w_7_EN));
        tracep->chgIData(oldp+183,(vlTOPp->mksequential_sha_engine__DOT__w_8),32);
        tracep->chgIData(oldp+184,(vlTOPp->mksequential_sha_engine__DOT__w_8_D_IN),32);
        tracep->chgBit(oldp+185,(vlTOPp->mksequential_sha_engine__DOT__w_8_EN));
        tracep->chgIData(oldp+186,(vlTOPp->mksequential_sha_engine__DOT__w_9),32);
        tracep->chgIData(oldp+187,(vlTOPp->mksequential_sha_engine__DOT__w_9_D_IN),32);
        tracep->chgBit(oldp+188,(vlTOPp->mksequential_sha_engine__DOT__w_9_EN));
        tracep->chgWData(oldp+189,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN),256);
        tracep->chgWData(oldp+197,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT),256);
        tracep->chgBit(oldp+205,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_CLR));
        tracep->chgBit(oldp+206,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ));
        tracep->chgBit(oldp+207,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_EMPTY_N));
        tracep->chgBit(oldp+208,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ));
        tracep->chgBit(oldp+209,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_FULL_N));
        tracep->chgBit(oldp+210,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_hash));
        tracep->chgBit(oldp+211,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_routput));
        tracep->chgBit(oldp+212,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE___05F_me_check_0));
        tracep->chgBit(oldp+213,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_input_engine));
        tracep->chgBit(oldp+214,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_output_engine_get));
        tracep->chgBit(oldp+215,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_reset));
        tracep->chgBit(oldp+216,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash));
        tracep->chgBit(oldp+217,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput));
        tracep->chgBit(oldp+218,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE___05F_me_check_0));
        tracep->chgBit(oldp+219,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_input_engine));
        tracep->chgBit(oldp+220,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_output_engine_get));
        tracep->chgBit(oldp+221,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_reset));
        tracep->chgIData(oldp+222,(vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_0_write_1___05FVAL_1),32);
        tracep->chgIData(oldp+223,(vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_4_write_1___05FVAL_1),32);
        tracep->chgIData(oldp+224,(vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_1),32);
        tracep->chgIData(oldp+225,(vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_2),32);
        tracep->chgIData(oldp+226,(vlTOPp->mksequential_sha_engine__DOT__MUX_w_15_write_1___05FVAL_1),32);
        tracep->chgBit(oldp+227,(vlTOPp->mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2));
        tracep->chgBit(oldp+228,(vlTOPp->mksequential_sha_engine__DOT__MUX_state_write_1___05FSEL_3));
        tracep->chgIData(oldp+229,(vlTOPp->mksequential_sha_engine__DOT__v___05Fh2361),32);
        tracep->chgIData(oldp+230,(vlTOPp->mksequential_sha_engine__DOT__v___05Fh5778),32);
        tracep->chgIData(oldp+231,(vlTOPp->mksequential_sha_engine__DOT__v___05Fh2355),32);
        tracep->chgIData(oldp+232,(vlTOPp->mksequential_sha_engine__DOT__v___05Fh5772),32);
        tracep->chgIData(oldp+233,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh2478),32);
        tracep->chgWData(oldp+234,(vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434),256);
        tracep->chgWData(oldp+242,(vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118),192);
        tracep->chgWData(oldp+248,(vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117),128);
        tracep->chgIData(oldp+252,(vlTOPp->mksequential_sha_engine__DOT__tmp1___05Fh2403),32);
        tracep->chgIData(oldp+253,(vlTOPp->mksequential_sha_engine__DOT__tmp2___05Fh2404),32);
        tracep->chgIData(oldp+254,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh2477),32);
        tracep->chgIData(oldp+255,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3473),32);
        tracep->chgIData(oldp+256,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3475),32);
        tracep->chgIData(oldp+257,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3489),32);
        tracep->chgIData(oldp+258,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3491),32);
        tracep->chgIData(oldp+259,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3678),32);
        tracep->chgIData(oldp+260,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3695),32);
        tracep->chgIData(oldp+261,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3717),32);
        tracep->chgIData(oldp+262,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3719),32);
        tracep->chgIData(oldp+263,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3904),32);
        tracep->chgIData(oldp+264,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3906),32);
        tracep->chgIData(oldp+265,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5131),32);
        tracep->chgIData(oldp+266,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5133),32);
        tracep->chgIData(oldp+267,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5164),32);
        tracep->chgIData(oldp+268,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5166),32);
        tracep->chgIData(oldp+269,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5296),32);
        tracep->chgIData(oldp+270,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5298),32);
        tracep->chgIData(oldp+271,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh7036),32);
        tracep->chgIData(oldp+272,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3476),32);
        tracep->chgIData(oldp+273,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3490),32);
        tracep->chgIData(oldp+274,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3492),32);
        tracep->chgIData(oldp+275,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3679),32);
        tracep->chgIData(oldp+276,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3718),32);
        tracep->chgIData(oldp+277,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3720),32);
        tracep->chgIData(oldp+278,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3905),32);
        tracep->chgIData(oldp+279,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3907),32);
        tracep->chgIData(oldp+280,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5132),32);
        tracep->chgIData(oldp+281,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5134),32);
        tracep->chgIData(oldp+282,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5165),32);
        tracep->chgIData(oldp+283,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5167),32);
        tracep->chgIData(oldp+284,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5297),32);
        tracep->chgIData(oldp+285,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5299),32);
        tracep->chgCData(oldp+286,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5420),6);
        tracep->chgBit(oldp+287,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__CLK));
        tracep->chgBit(oldp+288,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__RST));
        tracep->chgWData(oldp+289,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN),256);
        tracep->chgBit(oldp+297,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__ENQ));
        tracep->chgBit(oldp+298,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__DEQ));
        tracep->chgBit(oldp+299,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__CLR));
        tracep->chgBit(oldp+300,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__FULL_N));
        tracep->chgBit(oldp+301,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__EMPTY_N));
        tracep->chgWData(oldp+302,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT),256);
        tracep->chgBit(oldp+310,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg));
        tracep->chgBit(oldp+311,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg));
        tracep->chgWData(oldp+312,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg),256);
        tracep->chgWData(oldp+320,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg),256);
        tracep->chgBit(oldp+328,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di));
        tracep->chgBit(oldp+329,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1));
        tracep->chgBit(oldp+330,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h));
        tracep->chgBit(oldp+331,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d1di));
        tracep->chgBit(oldp+332,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__deqerror));
        tracep->chgBit(oldp+333,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__enqerror));
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
