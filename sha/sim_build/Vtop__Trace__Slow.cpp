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
        tracep->declBit(c+1,"CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"RST_N",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"EN_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+4,"RDY_reset",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+5,"ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+6,"RDY_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+7,"input_engine_pre_hash",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declArray(c+15,"input_engine_input_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
        tracep->declBit(c+31,"EN_input_engine",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"RDY_input_engine",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"EN_output_engine_get",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+34,"output_engine_get",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declBit(c+42,"RDY_output_engine_get",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+43,"mksequential_sha_engine CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+44,"mksequential_sha_engine RST_N",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+45,"mksequential_sha_engine EN_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+46,"mksequential_sha_engine RDY_reset",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+47,"mksequential_sha_engine ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+48,"mksequential_sha_engine RDY_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+49,"mksequential_sha_engine input_engine_pre_hash",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declArray(c+57,"mksequential_sha_engine input_engine_input_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
        tracep->declBit(c+73,"mksequential_sha_engine EN_input_engine",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+74,"mksequential_sha_engine RDY_input_engine",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+75,"mksequential_sha_engine EN_output_engine_get",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+76,"mksequential_sha_engine output_engine_get",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declBit(c+84,"mksequential_sha_engine RDY_output_engine_get",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+85,"mksequential_sha_engine i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+86,"mksequential_sha_engine i_D_IN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBit(c+87,"mksequential_sha_engine i_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+88,"mksequential_sha_engine i_h_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+89,"mksequential_sha_engine i_h_0_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+90,"mksequential_sha_engine i_h_0_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+91,"mksequential_sha_engine i_h_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+92,"mksequential_sha_engine i_h_1_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+93,"mksequential_sha_engine i_h_1_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+94,"mksequential_sha_engine i_h_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+95,"mksequential_sha_engine i_h_2_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+96,"mksequential_sha_engine i_h_2_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+97,"mksequential_sha_engine i_h_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+98,"mksequential_sha_engine i_h_3_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+99,"mksequential_sha_engine i_h_3_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+100,"mksequential_sha_engine i_h_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+101,"mksequential_sha_engine i_h_4_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+102,"mksequential_sha_engine i_h_4_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+103,"mksequential_sha_engine i_h_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+104,"mksequential_sha_engine i_h_5_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+105,"mksequential_sha_engine i_h_5_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+106,"mksequential_sha_engine i_h_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+107,"mksequential_sha_engine i_h_6_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+108,"mksequential_sha_engine i_h_6_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+109,"mksequential_sha_engine i_h_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+110,"mksequential_sha_engine i_h_7_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+111,"mksequential_sha_engine i_h_7_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+112,"mksequential_sha_engine initial_val_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+113,"mksequential_sha_engine initial_val_0_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+114,"mksequential_sha_engine initial_val_0_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+115,"mksequential_sha_engine initial_val_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+116,"mksequential_sha_engine initial_val_1_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+117,"mksequential_sha_engine initial_val_1_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+118,"mksequential_sha_engine initial_val_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+119,"mksequential_sha_engine initial_val_2_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+120,"mksequential_sha_engine initial_val_2_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+121,"mksequential_sha_engine initial_val_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+122,"mksequential_sha_engine initial_val_3_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+123,"mksequential_sha_engine initial_val_3_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+124,"mksequential_sha_engine initial_val_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+125,"mksequential_sha_engine initial_val_4_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+126,"mksequential_sha_engine initial_val_4_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+127,"mksequential_sha_engine initial_val_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+128,"mksequential_sha_engine initial_val_5_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+129,"mksequential_sha_engine initial_val_5_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+130,"mksequential_sha_engine initial_val_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+131,"mksequential_sha_engine initial_val_6_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+132,"mksequential_sha_engine initial_val_6_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+133,"mksequential_sha_engine initial_val_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+134,"mksequential_sha_engine initial_val_7_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+135,"mksequential_sha_engine initial_val_7_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+136,"mksequential_sha_engine pre_comp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+137,"mksequential_sha_engine pre_comp_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+138,"mksequential_sha_engine pre_comp_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+139,"mksequential_sha_engine state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+140,"mksequential_sha_engine state_D_IN",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+141,"mksequential_sha_engine state_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+142,"mksequential_sha_engine w_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+143,"mksequential_sha_engine w_0_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+144,"mksequential_sha_engine w_0_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+145,"mksequential_sha_engine w_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+146,"mksequential_sha_engine w_1_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+147,"mksequential_sha_engine w_1_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+148,"mksequential_sha_engine w_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+149,"mksequential_sha_engine w_10_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+150,"mksequential_sha_engine w_10_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+151,"mksequential_sha_engine w_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+152,"mksequential_sha_engine w_11_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+153,"mksequential_sha_engine w_11_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+154,"mksequential_sha_engine w_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+155,"mksequential_sha_engine w_12_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+156,"mksequential_sha_engine w_12_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+157,"mksequential_sha_engine w_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+158,"mksequential_sha_engine w_13_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+159,"mksequential_sha_engine w_13_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+160,"mksequential_sha_engine w_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+161,"mksequential_sha_engine w_14_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+162,"mksequential_sha_engine w_14_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+163,"mksequential_sha_engine w_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+164,"mksequential_sha_engine w_15_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+165,"mksequential_sha_engine w_15_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+166,"mksequential_sha_engine w_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+167,"mksequential_sha_engine w_2_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+168,"mksequential_sha_engine w_2_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+169,"mksequential_sha_engine w_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+170,"mksequential_sha_engine w_3_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+171,"mksequential_sha_engine w_3_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+172,"mksequential_sha_engine w_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+173,"mksequential_sha_engine w_4_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+174,"mksequential_sha_engine w_4_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+175,"mksequential_sha_engine w_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+176,"mksequential_sha_engine w_5_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+177,"mksequential_sha_engine w_5_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+178,"mksequential_sha_engine w_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+179,"mksequential_sha_engine w_6_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+180,"mksequential_sha_engine w_6_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+181,"mksequential_sha_engine w_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+182,"mksequential_sha_engine w_7_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+183,"mksequential_sha_engine w_7_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+184,"mksequential_sha_engine w_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+185,"mksequential_sha_engine w_8_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+186,"mksequential_sha_engine w_8_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+187,"mksequential_sha_engine w_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+188,"mksequential_sha_engine w_9_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+189,"mksequential_sha_engine w_9_EN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+190,"mksequential_sha_engine result_fifo_D_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declArray(c+198,"mksequential_sha_engine result_fifo_D_OUT",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declBit(c+206,"mksequential_sha_engine result_fifo_CLR",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+207,"mksequential_sha_engine result_fifo_DEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+208,"mksequential_sha_engine result_fifo_EMPTY_N",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+209,"mksequential_sha_engine result_fifo_ENQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"mksequential_sha_engine result_fifo_FULL_N",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+211,"mksequential_sha_engine CAN_FIRE_RL_hash",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+212,"mksequential_sha_engine CAN_FIRE_RL_routput",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+213,"mksequential_sha_engine CAN_FIRE___me_check_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+214,"mksequential_sha_engine CAN_FIRE_input_engine",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+215,"mksequential_sha_engine CAN_FIRE_output_engine_get",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+216,"mksequential_sha_engine CAN_FIRE_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+217,"mksequential_sha_engine WILL_FIRE_RL_hash",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+218,"mksequential_sha_engine WILL_FIRE_RL_routput",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+219,"mksequential_sha_engine WILL_FIRE___me_check_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+220,"mksequential_sha_engine WILL_FIRE_input_engine",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+221,"mksequential_sha_engine WILL_FIRE_output_engine_get",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+222,"mksequential_sha_engine WILL_FIRE_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+223,"mksequential_sha_engine MUX_i_h_0_write_1__VAL_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+224,"mksequential_sha_engine MUX_i_h_4_write_1__VAL_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+225,"mksequential_sha_engine MUX_pre_comp_write_1__VAL_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+226,"mksequential_sha_engine MUX_pre_comp_write_1__VAL_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+227,"mksequential_sha_engine MUX_w_15_write_1__VAL_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+228,"mksequential_sha_engine MUX_i_write_1__SEL_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+229,"mksequential_sha_engine MUX_state_write_1__SEL_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+230,"mksequential_sha_engine v__h2361",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+231,"mksequential_sha_engine v__h5778",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+232,"mksequential_sha_engine v__h2355",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+233,"mksequential_sha_engine v__h5772",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+234,"mksequential_sha_engine y__h2478",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declArray(c+235,"mksequential_sha_engine res__h5434",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declArray(c+243,"mksequential_sha_engine i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3__ETC___d118",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 191,0);
        tracep->declArray(c+249,"mksequential_sha_engine i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5__ETC___d117",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 127,0);
        tracep->declBus(c+253,"mksequential_sha_engine tmp1__h2403",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+254,"mksequential_sha_engine tmp2__h2404",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+255,"mksequential_sha_engine x__h2477",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+256,"mksequential_sha_engine x__h3473",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+257,"mksequential_sha_engine x__h3475",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+258,"mksequential_sha_engine x__h3489",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+259,"mksequential_sha_engine x__h3491",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+260,"mksequential_sha_engine x__h3678",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+261,"mksequential_sha_engine x__h3695",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+262,"mksequential_sha_engine x__h3717",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+263,"mksequential_sha_engine x__h3719",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+264,"mksequential_sha_engine x__h3904",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+265,"mksequential_sha_engine x__h3906",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+266,"mksequential_sha_engine x__h5131",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+267,"mksequential_sha_engine x__h5133",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+268,"mksequential_sha_engine x__h5164",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+269,"mksequential_sha_engine x__h5166",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+270,"mksequential_sha_engine x__h5296",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+271,"mksequential_sha_engine x__h5298",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+272,"mksequential_sha_engine x__h7036",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+273,"mksequential_sha_engine y__h3476",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+274,"mksequential_sha_engine y__h3490",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+275,"mksequential_sha_engine y__h3492",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+276,"mksequential_sha_engine y__h3679",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+277,"mksequential_sha_engine y__h3718",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+278,"mksequential_sha_engine y__h3720",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+279,"mksequential_sha_engine y__h3905",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+280,"mksequential_sha_engine y__h3907",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+281,"mksequential_sha_engine y__h5132",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+282,"mksequential_sha_engine y__h5134",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+283,"mksequential_sha_engine y__h5165",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+284,"mksequential_sha_engine y__h5167",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+285,"mksequential_sha_engine y__h5297",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+286,"mksequential_sha_engine y__h5299",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+287,"mksequential_sha_engine x__h5420",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBus(c+335,"mksequential_sha_engine result_fifo width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+336,"mksequential_sha_engine result_fifo guarded",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBit(c+288,"mksequential_sha_engine result_fifo CLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+289,"mksequential_sha_engine result_fifo RST",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+290,"mksequential_sha_engine result_fifo D_IN",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declBit(c+298,"mksequential_sha_engine result_fifo ENQ",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+299,"mksequential_sha_engine result_fifo DEQ",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+300,"mksequential_sha_engine result_fifo CLR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+301,"mksequential_sha_engine result_fifo FULL_N",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+302,"mksequential_sha_engine result_fifo EMPTY_N",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+303,"mksequential_sha_engine result_fifo D_OUT",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
        tracep->declBit(c+311,"mksequential_sha_engine result_fifo full_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+312,"mksequential_sha_engine result_fifo empty_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declArray(c+313,"mksequential_sha_engine result_fifo data0_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 255,0);
        tracep->declArray(c+321,"mksequential_sha_engine result_fifo data1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 255,0);
        tracep->declBit(c+329,"mksequential_sha_engine result_fifo d0di",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+330,"mksequential_sha_engine result_fifo d0d1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+331,"mksequential_sha_engine result_fifo d0h",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+332,"mksequential_sha_engine result_fifo d1di",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+333,"mksequential_sha_engine result_fifo error_checks deqerror",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+334,"mksequential_sha_engine result_fifo error_checks enqerror",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
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
        tracep->fullBit(oldp+1,(vlTOPp->CLK));
        tracep->fullBit(oldp+2,(vlTOPp->RST_N));
        tracep->fullBit(oldp+3,(vlTOPp->EN_reset));
        tracep->fullBit(oldp+4,(vlTOPp->RDY_reset));
        tracep->fullBit(oldp+5,(vlTOPp->ready));
        tracep->fullBit(oldp+6,(vlTOPp->RDY_ready));
        tracep->fullWData(oldp+7,(vlTOPp->input_engine_pre_hash),256);
        tracep->fullWData(oldp+15,(vlTOPp->input_engine_input_val),512);
        tracep->fullBit(oldp+31,(vlTOPp->EN_input_engine));
        tracep->fullBit(oldp+32,(vlTOPp->RDY_input_engine));
        tracep->fullBit(oldp+33,(vlTOPp->EN_output_engine_get));
        tracep->fullWData(oldp+34,(vlTOPp->output_engine_get),256);
        tracep->fullBit(oldp+42,(vlTOPp->RDY_output_engine_get));
        tracep->fullBit(oldp+43,(vlTOPp->mksequential_sha_engine__DOT__CLK));
        tracep->fullBit(oldp+44,(vlTOPp->mksequential_sha_engine__DOT__RST_N));
        tracep->fullBit(oldp+45,(vlTOPp->mksequential_sha_engine__DOT__EN_reset));
        tracep->fullBit(oldp+46,(vlTOPp->mksequential_sha_engine__DOT__RDY_reset));
        tracep->fullBit(oldp+47,(vlTOPp->mksequential_sha_engine__DOT__ready));
        tracep->fullBit(oldp+48,(vlTOPp->mksequential_sha_engine__DOT__RDY_ready));
        tracep->fullWData(oldp+49,(vlTOPp->mksequential_sha_engine__DOT__input_engine_pre_hash),256);
        tracep->fullWData(oldp+57,(vlTOPp->mksequential_sha_engine__DOT__input_engine_input_val),512);
        tracep->fullBit(oldp+73,(vlTOPp->mksequential_sha_engine__DOT__EN_input_engine));
        tracep->fullBit(oldp+74,(vlTOPp->mksequential_sha_engine__DOT__RDY_input_engine));
        tracep->fullBit(oldp+75,(vlTOPp->mksequential_sha_engine__DOT__EN_output_engine_get));
        tracep->fullWData(oldp+76,(vlTOPp->mksequential_sha_engine__DOT__output_engine_get),256);
        tracep->fullBit(oldp+84,(vlTOPp->mksequential_sha_engine__DOT__RDY_output_engine_get));
        tracep->fullCData(oldp+85,(vlTOPp->mksequential_sha_engine__DOT__i),6);
        tracep->fullCData(oldp+86,(vlTOPp->mksequential_sha_engine__DOT__i_D_IN),6);
        tracep->fullBit(oldp+87,(vlTOPp->mksequential_sha_engine__DOT__i_EN));
        tracep->fullIData(oldp+88,(vlTOPp->mksequential_sha_engine__DOT__i_h_0),32);
        tracep->fullIData(oldp+89,(vlTOPp->mksequential_sha_engine__DOT__i_h_0_D_IN),32);
        tracep->fullBit(oldp+90,(vlTOPp->mksequential_sha_engine__DOT__i_h_0_EN));
        tracep->fullIData(oldp+91,(vlTOPp->mksequential_sha_engine__DOT__i_h_1),32);
        tracep->fullIData(oldp+92,(vlTOPp->mksequential_sha_engine__DOT__i_h_1_D_IN),32);
        tracep->fullBit(oldp+93,(vlTOPp->mksequential_sha_engine__DOT__i_h_1_EN));
        tracep->fullIData(oldp+94,(vlTOPp->mksequential_sha_engine__DOT__i_h_2),32);
        tracep->fullIData(oldp+95,(vlTOPp->mksequential_sha_engine__DOT__i_h_2_D_IN),32);
        tracep->fullBit(oldp+96,(vlTOPp->mksequential_sha_engine__DOT__i_h_2_EN));
        tracep->fullIData(oldp+97,(vlTOPp->mksequential_sha_engine__DOT__i_h_3),32);
        tracep->fullIData(oldp+98,(vlTOPp->mksequential_sha_engine__DOT__i_h_3_D_IN),32);
        tracep->fullBit(oldp+99,(vlTOPp->mksequential_sha_engine__DOT__i_h_3_EN));
        tracep->fullIData(oldp+100,(vlTOPp->mksequential_sha_engine__DOT__i_h_4),32);
        tracep->fullIData(oldp+101,(vlTOPp->mksequential_sha_engine__DOT__i_h_4_D_IN),32);
        tracep->fullBit(oldp+102,(vlTOPp->mksequential_sha_engine__DOT__i_h_4_EN));
        tracep->fullIData(oldp+103,(vlTOPp->mksequential_sha_engine__DOT__i_h_5),32);
        tracep->fullIData(oldp+104,(vlTOPp->mksequential_sha_engine__DOT__i_h_5_D_IN),32);
        tracep->fullBit(oldp+105,(vlTOPp->mksequential_sha_engine__DOT__i_h_5_EN));
        tracep->fullIData(oldp+106,(vlTOPp->mksequential_sha_engine__DOT__i_h_6),32);
        tracep->fullIData(oldp+107,(vlTOPp->mksequential_sha_engine__DOT__i_h_6_D_IN),32);
        tracep->fullBit(oldp+108,(vlTOPp->mksequential_sha_engine__DOT__i_h_6_EN));
        tracep->fullIData(oldp+109,(vlTOPp->mksequential_sha_engine__DOT__i_h_7),32);
        tracep->fullIData(oldp+110,(vlTOPp->mksequential_sha_engine__DOT__i_h_7_D_IN),32);
        tracep->fullBit(oldp+111,(vlTOPp->mksequential_sha_engine__DOT__i_h_7_EN));
        tracep->fullIData(oldp+112,(vlTOPp->mksequential_sha_engine__DOT__initial_val_0),32);
        tracep->fullIData(oldp+113,(vlTOPp->mksequential_sha_engine__DOT__initial_val_0_D_IN),32);
        tracep->fullBit(oldp+114,(vlTOPp->mksequential_sha_engine__DOT__initial_val_0_EN));
        tracep->fullIData(oldp+115,(vlTOPp->mksequential_sha_engine__DOT__initial_val_1),32);
        tracep->fullIData(oldp+116,(vlTOPp->mksequential_sha_engine__DOT__initial_val_1_D_IN),32);
        tracep->fullBit(oldp+117,(vlTOPp->mksequential_sha_engine__DOT__initial_val_1_EN));
        tracep->fullIData(oldp+118,(vlTOPp->mksequential_sha_engine__DOT__initial_val_2),32);
        tracep->fullIData(oldp+119,(vlTOPp->mksequential_sha_engine__DOT__initial_val_2_D_IN),32);
        tracep->fullBit(oldp+120,(vlTOPp->mksequential_sha_engine__DOT__initial_val_2_EN));
        tracep->fullIData(oldp+121,(vlTOPp->mksequential_sha_engine__DOT__initial_val_3),32);
        tracep->fullIData(oldp+122,(vlTOPp->mksequential_sha_engine__DOT__initial_val_3_D_IN),32);
        tracep->fullBit(oldp+123,(vlTOPp->mksequential_sha_engine__DOT__initial_val_3_EN));
        tracep->fullIData(oldp+124,(vlTOPp->mksequential_sha_engine__DOT__initial_val_4),32);
        tracep->fullIData(oldp+125,(vlTOPp->mksequential_sha_engine__DOT__initial_val_4_D_IN),32);
        tracep->fullBit(oldp+126,(vlTOPp->mksequential_sha_engine__DOT__initial_val_4_EN));
        tracep->fullIData(oldp+127,(vlTOPp->mksequential_sha_engine__DOT__initial_val_5),32);
        tracep->fullIData(oldp+128,(vlTOPp->mksequential_sha_engine__DOT__initial_val_5_D_IN),32);
        tracep->fullBit(oldp+129,(vlTOPp->mksequential_sha_engine__DOT__initial_val_5_EN));
        tracep->fullIData(oldp+130,(vlTOPp->mksequential_sha_engine__DOT__initial_val_6),32);
        tracep->fullIData(oldp+131,(vlTOPp->mksequential_sha_engine__DOT__initial_val_6_D_IN),32);
        tracep->fullBit(oldp+132,(vlTOPp->mksequential_sha_engine__DOT__initial_val_6_EN));
        tracep->fullIData(oldp+133,(vlTOPp->mksequential_sha_engine__DOT__initial_val_7),32);
        tracep->fullIData(oldp+134,(vlTOPp->mksequential_sha_engine__DOT__initial_val_7_D_IN),32);
        tracep->fullBit(oldp+135,(vlTOPp->mksequential_sha_engine__DOT__initial_val_7_EN));
        tracep->fullIData(oldp+136,(vlTOPp->mksequential_sha_engine__DOT__pre_comp),32);
        tracep->fullIData(oldp+137,(vlTOPp->mksequential_sha_engine__DOT__pre_comp_D_IN),32);
        tracep->fullBit(oldp+138,(vlTOPp->mksequential_sha_engine__DOT__pre_comp_EN));
        tracep->fullCData(oldp+139,(vlTOPp->mksequential_sha_engine__DOT__state),2);
        tracep->fullCData(oldp+140,(vlTOPp->mksequential_sha_engine__DOT__state_D_IN),2);
        tracep->fullBit(oldp+141,(vlTOPp->mksequential_sha_engine__DOT__state_EN));
        tracep->fullIData(oldp+142,(vlTOPp->mksequential_sha_engine__DOT__w_0),32);
        tracep->fullIData(oldp+143,(vlTOPp->mksequential_sha_engine__DOT__w_0_D_IN),32);
        tracep->fullBit(oldp+144,(vlTOPp->mksequential_sha_engine__DOT__w_0_EN));
        tracep->fullIData(oldp+145,(vlTOPp->mksequential_sha_engine__DOT__w_1),32);
        tracep->fullIData(oldp+146,(vlTOPp->mksequential_sha_engine__DOT__w_1_D_IN),32);
        tracep->fullBit(oldp+147,(vlTOPp->mksequential_sha_engine__DOT__w_1_EN));
        tracep->fullIData(oldp+148,(vlTOPp->mksequential_sha_engine__DOT__w_10),32);
        tracep->fullIData(oldp+149,(vlTOPp->mksequential_sha_engine__DOT__w_10_D_IN),32);
        tracep->fullBit(oldp+150,(vlTOPp->mksequential_sha_engine__DOT__w_10_EN));
        tracep->fullIData(oldp+151,(vlTOPp->mksequential_sha_engine__DOT__w_11),32);
        tracep->fullIData(oldp+152,(vlTOPp->mksequential_sha_engine__DOT__w_11_D_IN),32);
        tracep->fullBit(oldp+153,(vlTOPp->mksequential_sha_engine__DOT__w_11_EN));
        tracep->fullIData(oldp+154,(vlTOPp->mksequential_sha_engine__DOT__w_12),32);
        tracep->fullIData(oldp+155,(vlTOPp->mksequential_sha_engine__DOT__w_12_D_IN),32);
        tracep->fullBit(oldp+156,(vlTOPp->mksequential_sha_engine__DOT__w_12_EN));
        tracep->fullIData(oldp+157,(vlTOPp->mksequential_sha_engine__DOT__w_13),32);
        tracep->fullIData(oldp+158,(vlTOPp->mksequential_sha_engine__DOT__w_13_D_IN),32);
        tracep->fullBit(oldp+159,(vlTOPp->mksequential_sha_engine__DOT__w_13_EN));
        tracep->fullIData(oldp+160,(vlTOPp->mksequential_sha_engine__DOT__w_14),32);
        tracep->fullIData(oldp+161,(vlTOPp->mksequential_sha_engine__DOT__w_14_D_IN),32);
        tracep->fullBit(oldp+162,(vlTOPp->mksequential_sha_engine__DOT__w_14_EN));
        tracep->fullIData(oldp+163,(vlTOPp->mksequential_sha_engine__DOT__w_15),32);
        tracep->fullIData(oldp+164,(vlTOPp->mksequential_sha_engine__DOT__w_15_D_IN),32);
        tracep->fullBit(oldp+165,(vlTOPp->mksequential_sha_engine__DOT__w_15_EN));
        tracep->fullIData(oldp+166,(vlTOPp->mksequential_sha_engine__DOT__w_2),32);
        tracep->fullIData(oldp+167,(vlTOPp->mksequential_sha_engine__DOT__w_2_D_IN),32);
        tracep->fullBit(oldp+168,(vlTOPp->mksequential_sha_engine__DOT__w_2_EN));
        tracep->fullIData(oldp+169,(vlTOPp->mksequential_sha_engine__DOT__w_3),32);
        tracep->fullIData(oldp+170,(vlTOPp->mksequential_sha_engine__DOT__w_3_D_IN),32);
        tracep->fullBit(oldp+171,(vlTOPp->mksequential_sha_engine__DOT__w_3_EN));
        tracep->fullIData(oldp+172,(vlTOPp->mksequential_sha_engine__DOT__w_4),32);
        tracep->fullIData(oldp+173,(vlTOPp->mksequential_sha_engine__DOT__w_4_D_IN),32);
        tracep->fullBit(oldp+174,(vlTOPp->mksequential_sha_engine__DOT__w_4_EN));
        tracep->fullIData(oldp+175,(vlTOPp->mksequential_sha_engine__DOT__w_5),32);
        tracep->fullIData(oldp+176,(vlTOPp->mksequential_sha_engine__DOT__w_5_D_IN),32);
        tracep->fullBit(oldp+177,(vlTOPp->mksequential_sha_engine__DOT__w_5_EN));
        tracep->fullIData(oldp+178,(vlTOPp->mksequential_sha_engine__DOT__w_6),32);
        tracep->fullIData(oldp+179,(vlTOPp->mksequential_sha_engine__DOT__w_6_D_IN),32);
        tracep->fullBit(oldp+180,(vlTOPp->mksequential_sha_engine__DOT__w_6_EN));
        tracep->fullIData(oldp+181,(vlTOPp->mksequential_sha_engine__DOT__w_7),32);
        tracep->fullIData(oldp+182,(vlTOPp->mksequential_sha_engine__DOT__w_7_D_IN),32);
        tracep->fullBit(oldp+183,(vlTOPp->mksequential_sha_engine__DOT__w_7_EN));
        tracep->fullIData(oldp+184,(vlTOPp->mksequential_sha_engine__DOT__w_8),32);
        tracep->fullIData(oldp+185,(vlTOPp->mksequential_sha_engine__DOT__w_8_D_IN),32);
        tracep->fullBit(oldp+186,(vlTOPp->mksequential_sha_engine__DOT__w_8_EN));
        tracep->fullIData(oldp+187,(vlTOPp->mksequential_sha_engine__DOT__w_9),32);
        tracep->fullIData(oldp+188,(vlTOPp->mksequential_sha_engine__DOT__w_9_D_IN),32);
        tracep->fullBit(oldp+189,(vlTOPp->mksequential_sha_engine__DOT__w_9_EN));
        tracep->fullWData(oldp+190,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_IN),256);
        tracep->fullWData(oldp+198,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_D_OUT),256);
        tracep->fullBit(oldp+206,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_CLR));
        tracep->fullBit(oldp+207,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_DEQ));
        tracep->fullBit(oldp+208,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_EMPTY_N));
        tracep->fullBit(oldp+209,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_ENQ));
        tracep->fullBit(oldp+210,(vlTOPp->mksequential_sha_engine__DOT__result_fifo_FULL_N));
        tracep->fullBit(oldp+211,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_hash));
        tracep->fullBit(oldp+212,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_RL_routput));
        tracep->fullBit(oldp+213,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE___05F_me_check_0));
        tracep->fullBit(oldp+214,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_input_engine));
        tracep->fullBit(oldp+215,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_output_engine_get));
        tracep->fullBit(oldp+216,(vlTOPp->mksequential_sha_engine__DOT__CAN_FIRE_reset));
        tracep->fullBit(oldp+217,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_hash));
        tracep->fullBit(oldp+218,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_RL_routput));
        tracep->fullBit(oldp+219,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE___05F_me_check_0));
        tracep->fullBit(oldp+220,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_input_engine));
        tracep->fullBit(oldp+221,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_output_engine_get));
        tracep->fullBit(oldp+222,(vlTOPp->mksequential_sha_engine__DOT__WILL_FIRE_reset));
        tracep->fullIData(oldp+223,(vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_0_write_1___05FVAL_1),32);
        tracep->fullIData(oldp+224,(vlTOPp->mksequential_sha_engine__DOT__MUX_i_h_4_write_1___05FVAL_1),32);
        tracep->fullIData(oldp+225,(vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_1),32);
        tracep->fullIData(oldp+226,(vlTOPp->mksequential_sha_engine__DOT__MUX_pre_comp_write_1___05FVAL_2),32);
        tracep->fullIData(oldp+227,(vlTOPp->mksequential_sha_engine__DOT__MUX_w_15_write_1___05FVAL_1),32);
        tracep->fullBit(oldp+228,(vlTOPp->mksequential_sha_engine__DOT__MUX_i_write_1___05FSEL_2));
        tracep->fullBit(oldp+229,(vlTOPp->mksequential_sha_engine__DOT__MUX_state_write_1___05FSEL_3));
        tracep->fullIData(oldp+230,(vlTOPp->mksequential_sha_engine__DOT__v___05Fh2361),32);
        tracep->fullIData(oldp+231,(vlTOPp->mksequential_sha_engine__DOT__v___05Fh5778),32);
        tracep->fullIData(oldp+232,(vlTOPp->mksequential_sha_engine__DOT__v___05Fh2355),32);
        tracep->fullIData(oldp+233,(vlTOPp->mksequential_sha_engine__DOT__v___05Fh5772),32);
        tracep->fullIData(oldp+234,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh2478),32);
        tracep->fullWData(oldp+235,(vlTOPp->mksequential_sha_engine__DOT__res___05Fh5434),256);
        tracep->fullWData(oldp+243,(vlTOPp->mksequential_sha_engine__DOT__i_h_2_9_PLUS_initial_val_2_03_04_CONCAT_i_h_3___05FETC___05F_d118),192);
        tracep->fullWData(oldp+249,(vlTOPp->mksequential_sha_engine__DOT__i_h_4_5_PLUS_initial_val_4_07_08_CONCAT_i_h_5___05FETC___05F_d117),128);
        tracep->fullIData(oldp+253,(vlTOPp->mksequential_sha_engine__DOT__tmp1___05Fh2403),32);
        tracep->fullIData(oldp+254,(vlTOPp->mksequential_sha_engine__DOT__tmp2___05Fh2404),32);
        tracep->fullIData(oldp+255,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh2477),32);
        tracep->fullIData(oldp+256,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3473),32);
        tracep->fullIData(oldp+257,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3475),32);
        tracep->fullIData(oldp+258,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3489),32);
        tracep->fullIData(oldp+259,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3491),32);
        tracep->fullIData(oldp+260,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3678),32);
        tracep->fullIData(oldp+261,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3695),32);
        tracep->fullIData(oldp+262,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3717),32);
        tracep->fullIData(oldp+263,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3719),32);
        tracep->fullIData(oldp+264,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3904),32);
        tracep->fullIData(oldp+265,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh3906),32);
        tracep->fullIData(oldp+266,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5131),32);
        tracep->fullIData(oldp+267,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5133),32);
        tracep->fullIData(oldp+268,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5164),32);
        tracep->fullIData(oldp+269,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5166),32);
        tracep->fullIData(oldp+270,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5296),32);
        tracep->fullIData(oldp+271,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5298),32);
        tracep->fullIData(oldp+272,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh7036),32);
        tracep->fullIData(oldp+273,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3476),32);
        tracep->fullIData(oldp+274,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3490),32);
        tracep->fullIData(oldp+275,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3492),32);
        tracep->fullIData(oldp+276,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3679),32);
        tracep->fullIData(oldp+277,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3718),32);
        tracep->fullIData(oldp+278,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3720),32);
        tracep->fullIData(oldp+279,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3905),32);
        tracep->fullIData(oldp+280,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh3907),32);
        tracep->fullIData(oldp+281,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5132),32);
        tracep->fullIData(oldp+282,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5134),32);
        tracep->fullIData(oldp+283,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5165),32);
        tracep->fullIData(oldp+284,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5167),32);
        tracep->fullIData(oldp+285,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5297),32);
        tracep->fullIData(oldp+286,(vlTOPp->mksequential_sha_engine__DOT__y___05Fh5299),32);
        tracep->fullCData(oldp+287,(vlTOPp->mksequential_sha_engine__DOT__x___05Fh5420),6);
        tracep->fullBit(oldp+288,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__CLK));
        tracep->fullBit(oldp+289,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__RST));
        tracep->fullWData(oldp+290,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_IN),256);
        tracep->fullBit(oldp+298,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__ENQ));
        tracep->fullBit(oldp+299,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__DEQ));
        tracep->fullBit(oldp+300,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__CLR));
        tracep->fullBit(oldp+301,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__FULL_N));
        tracep->fullBit(oldp+302,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__EMPTY_N));
        tracep->fullWData(oldp+303,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__D_OUT),256);
        tracep->fullBit(oldp+311,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__full_reg));
        tracep->fullBit(oldp+312,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__empty_reg));
        tracep->fullWData(oldp+313,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data0_reg),256);
        tracep->fullWData(oldp+321,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__data1_reg),256);
        tracep->fullBit(oldp+329,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0di));
        tracep->fullBit(oldp+330,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0d1));
        tracep->fullBit(oldp+331,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d0h));
        tracep->fullBit(oldp+332,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__d1di));
        tracep->fullBit(oldp+333,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__deqerror));
        tracep->fullBit(oldp+334,(vlTOPp->mksequential_sha_engine__DOT__result_fifo__DOT__error_checks__DOT__enqerror));
        tracep->fullIData(oldp+335,(0x100U),32);
        tracep->fullBit(oldp+336,(1U));
    }
}
