// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__CLK__0 = vlSelfRef.CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__RST_N__0 = vlSelfRef.RST_N;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkuart__DOT__uart_baud_value = 0xaaaaU;
    vlSelfRef.mkuart__DOT__uart_rg_char_decide = 2U;
    vlSelfRef.mkuart__DOT__uart_rg_charsize = 0x2aU;
    vlSelfRef.mkuart__DOT__uart_rg_delay_control = 0xaaaaU;
    vlSelfRef.mkuart__DOT__uart_rg_interrupt_en = 0xaaaaU;
    vlSelfRef.mkuart__DOT__uart_rg_parity = 2U;
    vlSelfRef.mkuart__DOT__uart_rg_pullup_enable = 0U;
    vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold = 2U;
    vlSelfRef.mkuart__DOT__uart_rg_rx_threshold = 0xaU;
    vlSelfRef.mkuart__DOT__uart_rg_stopbits = 2U;
    vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold = 2U;
    vlSelfRef.mkuart__DOT__uart_uart_error_status_register = 0xaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail = 0xaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount = 0xaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail = 0xaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount = 0xaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[0U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[1U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[2U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[3U] = 0xaaaaaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_out_enable = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount = 0x2aU;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount = 0xaU;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvParity = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvState = 2U;
    vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount = 0x2aU;
    vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount = 0xaU;
    vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_rXmitParity = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_rXmitState = 0xaU;
    vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count = 0xaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6 = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7 = 0U;
    vlSelfRef.mkuart__DOT__RDY_read_req = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_read_req = 1U;
    vlSelfRef.mkuart__DOT__RDY_write_req = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_write_req = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_io_sin = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_io_sin = 1U;
    vlSelfRef.mkuart__DOT__interrupt = 0U;
    vlSelfRef.mkuart__DOT__outp_ready = 0U;
    vlSelfRef.mkuart__DOT__can_take_inp = 0U;
    vlSelfRef.mkuart__DOT__uart_ren = 0U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_rl_send_rx_threshold = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_rl_send_rx_threshold = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_rl_send_dma_threshold = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_rl_send_dma_threshold = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_dma_signals = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_rl_dma_signals = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_baudGen_baud_count_wire = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_baudGen_baud_count_wire = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_baud_generator_clock_enable = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_baud_generator_clock_enable = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_bit_counter = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_bit_counter = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_bit_counter = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_bit_counter = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_rl_set_charsize = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_rl_set_charsize = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_update_fifo_almost_full = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_rl_update_fifo_almost_full = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_fifoRecv_ifc_update = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_fifoRecv_ifc_update = 1U;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_fifoXmit_ifc_update = 1U;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_fifoXmit_ifc_update = 1U;
    vlSelfRef.mkuart__DOT__uart_rg_charsize_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_EN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_A = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_B = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_C = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_F = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDB = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETC = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData_sEN = 1U;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state = 0xaaaaU;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__sSyncReg = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1 = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/niranjan/Documents/Training_Projects/HDL_Codes/uart/verilog/mkuart.v", 49, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge RST_N)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge CLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge RST_N)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RST_N = VL_RAND_RESET_I(1);
    vlSelf->read_req_addr = VL_RAND_RESET_I(32);
    vlSelf->read_req_size = VL_RAND_RESET_I(2);
    vlSelf->EN_read_req = VL_RAND_RESET_I(1);
    vlSelf->read_req = VL_RAND_RESET_Q(33);
    vlSelf->RDY_read_req = VL_RAND_RESET_I(1);
    vlSelf->write_req_addr = VL_RAND_RESET_I(32);
    vlSelf->write_req_data = VL_RAND_RESET_I(32);
    vlSelf->write_req_size = VL_RAND_RESET_I(2);
    vlSelf->EN_write_req = VL_RAND_RESET_I(1);
    vlSelf->write_req = VL_RAND_RESET_I(1);
    vlSelf->RDY_write_req = VL_RAND_RESET_I(1);
    vlSelf->io_SIN = VL_RAND_RESET_I(1);
    vlSelf->io_SOUT = VL_RAND_RESET_I(1);
    vlSelf->io_SOUT_EN = VL_RAND_RESET_I(1);
    vlSelf->__SYM__interrupt = VL_RAND_RESET_I(1);
    vlSelf->outp_ready = VL_RAND_RESET_I(1);
    vlSelf->can_take_inp = VL_RAND_RESET_I(1);
    vlSelf->uart_ren = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__RST_N = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__read_req_addr = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__read_req_size = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__EN_read_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__read_req = VL_RAND_RESET_Q(33);
    vlSelf->mkuart__DOT__RDY_read_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__write_req_addr = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__write_req_data = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__write_req_size = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__EN_write_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__write_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__RDY_write_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__io_SIN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__io_SOUT = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__io_SOUT_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__interrupt = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__outp_ready = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__can_take_inp = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_ren = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rwDeqCount_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rwEnqCount_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rwDeqCount_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rwEnqCount_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_pwRecvCellCountReset_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_pwRecvEnableBitCount_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_pwRecvResetBitCount_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_pwXmitCellCountReset_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_pwXmitEnableBitCount_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_pwXmitResetBitCount_whas = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_wr_rx_outp_ready_wget = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_wr_tx_can_take_inp_wget = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_baud_value = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_baud_value_D_IN = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_baud_value_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_char_decide = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__uart_rg_char_decide_D_IN = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__uart_rg_char_decide_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_charsize = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__uart_rg_charsize_D_IN = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__uart_rg_charsize_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_delay_control = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_rg_delay_control_D_IN = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_rg_delay_control_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_interrupt_en = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_rg_interrupt_en_D_IN = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_rg_interrupt_en_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_parity = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__uart_rg_parity_D_IN = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__uart_rg_parity_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_pullup_enable = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_pullup_enable_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_pullup_enable_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_rx_dma_threshold = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__uart_rg_rx_dma_threshold_D_IN = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__uart_rg_rx_dma_threshold_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_rx_threshold = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_rg_rx_threshold_D_IN = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_rg_rx_threshold_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_stopbits = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__uart_rg_stopbits_D_IN = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__uart_rg_stopbits_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_rg_tx_dma_threshold = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__uart_rg_tx_dma_threshold_D_IN = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__uart_rg_tx_dma_threshold_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_error_status_register = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__uart_uart_error_status_register_D_IN = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__uart_uart_error_status_register_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail_D_IN = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount_D_IN = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN);
    vlSelf->mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail_D_IN = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount_D_IN = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_EN = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN);
    vlSelf->mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifo_almost_full = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifo_almost_full_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_fifo_almost_full_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_out_enable = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_out_enable_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_out_enable_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvBitCount = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__uart_uart_rRecvBitCount_D_IN = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__uart_uart_rRecvBitCount_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvCellCount = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__uart_uart_rRecvCellCount_D_IN = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__uart_uart_rRecvCellCount_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvParity = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvParity_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvParity_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvState = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__uart_uart_rRecvState_D_IN = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__uart_uart_rRecvState_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitBitCount = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__uart_uart_rXmitBitCount_D_IN = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__uart_uart_rXmitBitCount_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitCellCount = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__uart_uart_rXmitCellCount_D_IN = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__uart_uart_rXmitCellCount_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitDataOut = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitDataOut_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitDataOut_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitParity = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitParity_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitParity_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitState = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__uart_uart_rXmitState_D_IN = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__uart_uart_rXmitState_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rg_delay_count = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_rg_delay_count_D_IN = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_rg_delay_count_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_0 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_0_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_0_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_1 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_1_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_1_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_2 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_2_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_2_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_3 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_3_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_3_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_4 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_4_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_4_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_5 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_5_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_5_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_6 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_6_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_6_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_7 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_7_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_7_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_0 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_0_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_0_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_1 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_1_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_1_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_2 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_2_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_2_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_3 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_3_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_3_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_4 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_4_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_4_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_5 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_5_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_5_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_6 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_6_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_6_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_7 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_7_D_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrXmitBuffer_7_EN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_A = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_B = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_C = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_F = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_Q_OUT = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDB = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETC = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETF = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData_dD_OUT = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData_sD_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData_sEN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_rl_send_dma_threshold = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_rl_send_rx_threshold = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_rl_set_charsize = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_baudGen_baud_count_wire = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_baud_generator_clock_enable = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_fifoRecv_ifc_update = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_fifoXmit_ifc_update = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_bit_cell_time_counter = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_bit_counter = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_buffer_shift = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_find_center_of_bit_cell = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_sample_pin = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_stop_first_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_stop_last_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_wait_for_start_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_dma_signals = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_update_fifo_almost_full = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_bit_cell_time_counter = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_bit_counter = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_load = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_shift = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_start_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit1_5 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit2 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_shift_next_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_for_start_command = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_io_sin = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_read_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__CAN_FIRE_write_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_rl_send_dma_threshold = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_rl_send_rx_threshold = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_rl_set_charsize = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_baudGen_baud_count_wire = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_baud_generator_clock_enable = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_fifoRecv_ifc_update = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_fifoXmit_ifc_update = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_bit_cell_time_counter = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_bit_counter = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_sample_pin = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_rl_delay_control = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_rl_dma_signals = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_rl_update_fifo_almost_full = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_bit_cell_time_counter = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_bit_counter = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_buffer_load = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_buffer_shift = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_io_sin = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_read_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__WILL_FIRE_write_req = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FVAL_1 = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_1 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_2 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_2 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_3 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_4 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_5 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_6 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_7 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_8 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_1 = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_2 = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_3 = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_4 = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_fifo_almost_full_write_1___05FVAL_2 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_out_enable_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_4 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FVAL_2 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_1 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_2 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__x___05Fh16334 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__x_wget___05Fh3636 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq1 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq2 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__enqData___05Fh1615);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__enqData___05Fh3771);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__enqMask___05Fh1616);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__enqMask___05Fh3772);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__nextMask___05Fh1610);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__nextMask___05Fh1618);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__nextMask___05Fh3766);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__nextMask___05Fh3774);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__nextStorage___05Fh1609);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__nextStorage___05Fh1617);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__nextStorage___05Fh3765);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__nextStorage___05Fh3773);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__x___05Fh1686);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__x___05Fh1873);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__x___05Fh1989);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__x___05Fh3839);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__x___05Fh4012);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__x___05Fh4128);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__y___05Fh1687);
    VL_RAND_RESET_W(128, vlSelf->mkuart__DOT__y___05Fh3840);
    vlSelf->mkuart__DOT___theResult___05F_fst___05Fh19805 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__a___05Fh16635 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__a___05Fh16637 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__return_data___05Fh16913 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__return_data___05Fh18522 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__return_data___05Fh18849 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__return_data___05Fh19168 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__return_data___05Fh19487 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__value___05Fh4013 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__value___05Fh4129 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__x___05Fh1837 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__x___05Fh1981 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__x___05Fh21670 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__x___05Fh3976 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__x___05Fh4120 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__x_wget___05Fh3695 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__y_avValue_fst___05Fh16577 = VL_RAND_RESET_I(32);
    vlSelf->mkuart__DOT__IF_IF_read_req_size_EQ_2_56_THEN_4_ELSE_0_CONC_ETC___05F_d397 = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__x___05Fh14788 = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d386 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__parity_data___05Fh12800 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__parity_data___05Fh12805 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__parity_data___05Fh12810 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__value___05Fh1874 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__value___05Fh1990 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__x___05Fh8568 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__x_wget___05Fh1480 = VL_RAND_RESET_I(8);
    vlSelf->mkuart__DOT__x___05Fh11114 = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__x___05Fh18133 = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__x___05Fh7065 = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__y___05Fh15222 = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__y___05Fh8232 = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__y___05Fh8254 = VL_RAND_RESET_I(6);
    vlSelf->mkuart__DOT__b___05Fh16503 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__b___05Fh1755 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__b___05Fh1787 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__b___05Fh2128 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__b___05Fh21628 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__b___05Fh3894 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__b___05Fh4267 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__b___05Fh4299 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__value___05Fh1937 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__value___05Fh4076 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT__x_error_status___05Fh16125 = VL_RAND_RESET_I(5);
    vlSelf->mkuart__DOT___1_SL_IF_write_req_size_EQ_2_41_THEN_4_ELSE_0_C_ETC___05F_d458 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__x___05Fh11088 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__x___05Fh5361 = VL_RAND_RESET_I(4);
    vlSelf->mkuart__DOT__IF_uart_uart_rRecvBitCount_7_EQ_uart_rg_charsi_ETC___05F_d129 = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__value___05Fh16504 = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__value___05Fh21629 = VL_RAND_RESET_I(3);
    vlSelf->mkuart__DOT__x___05Fh16473 = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__x___05Fh21595 = VL_RAND_RESET_I(2);
    vlSelf->mkuart__DOT__NOT_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_ua_ETC___05F_d170 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT___dand2uart_uart_pwXmitCellCountReset_EN_wset = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter_value_PLUS_1_6___05FETC___05F_d78 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_vrRecvBuffer_0_45_XOR_uart_uart_vrRe_ETC___05F_d159 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__x___05Fh15612 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh10207 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh10214 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh10221 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh10228 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh10235 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh10242 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh10249 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh12725 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh12732 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh12739 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh12746 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh12753 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__z___05Fh12760 = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__RST = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__Q_OUT = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__DATA_A = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__ADDA = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__DATA_B = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__ADDB = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__DATA_C = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__SETC = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__DATA_F = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__SETF = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state = VL_RAND_RESET_I(16);
    vlSelf->mkuart__DOT__uart_uart_rRecvData__DOT__sCLK = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData__DOT__sRST = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData__DOT__dCLK = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData__DOT__sEN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData__DOT__sD_IN = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData__DOT__dD_OUT = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData__DOT__sSyncReg = VL_RAND_RESET_I(1);
    vlSelf->mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__RST_N__0 = VL_RAND_RESET_I(1);
}
