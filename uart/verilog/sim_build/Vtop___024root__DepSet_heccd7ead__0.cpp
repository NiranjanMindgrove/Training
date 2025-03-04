// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*5:0*/, 4> Vtop__ConstPool__TABLE_h871f94ab_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ mkuart__DOT____VdfgRegularize_h44a04759_0_29;
    mkuart__DOT____VdfgRegularize_h44a04759_0_29 = 0;
    CData/*0:0*/ mkuart__DOT____VdfgRegularize_h44a04759_0_35;
    mkuart__DOT____VdfgRegularize_h44a04759_0_35 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.mkuart__DOT__read_req_addr = vlSelfRef.read_req_addr;
    vlSelfRef.mkuart__DOT__read_req_size = vlSelfRef.read_req_size;
    vlSelfRef.mkuart__DOT__EN_read_req = vlSelfRef.EN_read_req;
    vlSelfRef.mkuart__DOT__write_req_addr = vlSelfRef.write_req_addr;
    vlSelfRef.mkuart__DOT__write_req_data = vlSelfRef.write_req_data;
    vlSelfRef.mkuart__DOT__write_req_size = vlSelfRef.write_req_size;
    vlSelfRef.mkuart__DOT__EN_write_req = vlSelfRef.EN_write_req;
    vlSelfRef.mkuart__DOT__io_SIN = vlSelfRef.io_SIN;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__DATA_A 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_A;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__DATA_B 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_B;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__ADDB 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDB;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__DATA_C 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_C;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__SETC 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETC;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__DATA_F 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_F;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__sEN 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvData_sEN;
    vlSelfRef.io_SOUT_EN = vlSelfRef.mkuart__DOT__uart_uart_out_enable;
    vlSelfRef.mkuart__DOT__io_SOUT_EN = vlSelfRef.mkuart__DOT__uart_uart_out_enable;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_D_IN 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1;
    vlSelfRef.mkuart__DOT__WILL_FIRE_read_req = vlSelfRef.EN_read_req;
    vlSelfRef.mkuart__DOT__WILL_FIRE_write_req = vlSelfRef.EN_write_req;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_Q_OUT 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__Q_OUT 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dD_OUT 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1;
    vlSelfRef.RDY_read_req = vlSelfRef.mkuart__DOT__RDY_read_req;
    vlSelfRef.RDY_write_req = vlSelfRef.mkuart__DOT__RDY_write_req;
    vlSelfRef.io_SOUT = vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut;
    vlSelfRef.mkuart__DOT__io_SOUT = vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut;
    vlSelfRef.__SYM__interrupt = vlSelfRef.mkuart__DOT__interrupt;
    vlSelfRef.outp_ready = vlSelfRef.mkuart__DOT__outp_ready;
    vlSelfRef.can_take_inp = vlSelfRef.mkuart__DOT__can_take_inp;
    vlSelfRef.uart_ren = vlSelfRef.mkuart__DOT__uart_ren;
    vlSelfRef.mkuart__DOT__uart_baud_value_EN = ((IData)(vlSelfRef.EN_write_req) 
                                                 & (0U 
                                                    == 
                                                    (0x3fU 
                                                     & vlSelfRef.write_req_addr)));
    vlSelfRef.mkuart__DOT__uart_rg_delay_control_EN 
        = ((IData)(vlSelfRef.EN_write_req) & (0x10U 
                                              == (0x3fU 
                                                  & vlSelfRef.write_req_addr)));
    vlSelfRef.mkuart__DOT__uart_rg_interrupt_en_EN 
        = ((IData)(vlSelfRef.EN_write_req) & (0x18U 
                                              == (0x3fU 
                                                  & vlSelfRef.write_req_addr)));
    vlSelfRef.mkuart__DOT__uart_rg_rx_threshold_EN 
        = ((IData)(vlSelfRef.EN_write_req) & (0x20U 
                                              == (0x3fU 
                                                  & vlSelfRef.write_req_addr)));
    __Vtableidx1 = vlSelfRef.mkuart__DOT__uart_rg_char_decide;
    vlSelfRef.mkuart__DOT__uart_rg_charsize_D_IN = 
        Vtop__ConstPool__TABLE_h871f94ab_0[__Vtableidx1];
    vlSelfRef.mkuart__DOT__write_req = ((4U == (0x3fU 
                                                & vlSelfRef.write_req_addr)) 
                                        | ((0U == (0x3fU 
                                                   & vlSelfRef.write_req_addr)) 
                                           | ((0x10U 
                                               == (0x3fU 
                                                   & vlSelfRef.write_req_addr)) 
                                              | ((0x14U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelfRef.write_req_addr)) 
                                                 | ((0x18U 
                                                     == 
                                                     (0x3fU 
                                                      & vlSelfRef.write_req_addr)) 
                                                    | ((0xcU 
                                                        == 
                                                        (0x3fU 
                                                         & vlSelfRef.write_req_addr)) 
                                                       | (0x20U 
                                                          == 
                                                          (0x3fU 
                                                           & vlSelfRef.write_req_addr))))))));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData_sD_IN 
        = vlSelfRef.io_SIN;
    vlSelfRef.mkuart__DOT__x___05Fh7065 = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount)));
    vlSelfRef.mkuart__DOT__x___05Fh5361 = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount)));
    vlSelfRef.mkuart__DOT__x___05Fh11114 = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount)));
    vlSelfRef.mkuart__DOT__x___05Fh11088 = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)));
    vlSelfRef.mkuart__DOT__RST_N = vlSelfRef.RST_N;
    vlSelfRef.mkuart__DOT__CLK = vlSelfRef.CLK;
    vlSelfRef.mkuart__DOT__NOT_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_ua_ETC___05F_d170 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount) 
           >= (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold));
    if (vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1) {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_1 = 0U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_4 = 2U;
    } else {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_1 = 1U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_4 = 0U;
    }
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_2 
        = ((4U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount))
            ? ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1)
                ? 0U : 2U) : 1U);
    vlSelfRef.mkuart__DOT__x___05Fh15612 = (1U & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity)));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.EN_write_req) & (0xcU 
                                              == (0x3fU 
                                                  & vlSelfRef.write_req_addr)));
    vlSelfRef.mkuart__DOT__uart_rg_char_decide_EN = 
        ((IData)(vlSelfRef.EN_write_req) & (0x14U == 
                                            (0x3fU 
                                             & vlSelfRef.write_req_addr)));
    vlSelfRef.mkuart__DOT__x___05Fh14788 = (0xffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count)));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_7 
        = ((7U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount))
            ? 0U : 6U);
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_6 
        = (((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
            & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)))
            ? 0U : (((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
                     & (2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)))
                     ? 7U : (((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
                              & (1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)))
                              ? 6U : 5U)));
    vlSelfRef.mkuart__DOT__y___05Fh8232 = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize)));
    vlSelfRef.mkuart__DOT__y___05Fh8254 = (0x3fU & 
                                           ((IData)(2U) 
                                            + (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize)));
    vlSelfRef.mkuart__DOT__y___05Fh15222 = (0x3fU & 
                                            ((IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize) 
                                             - (IData)(1U)));
    vlSelfRef.mkuart__DOT__z___05Fh10207 = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1));
    vlSelfRef.mkuart__DOT__x___05Fh8568 = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7) 
                                            << 7U) 
                                           | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0))))))));
    vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold) 
            << 0x18U) | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold) 
                          << 0x10U) | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold) 
                                        << 8U) | (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold))));
    vlSelfRef.mkuart__DOT__return_data___05Fh18849 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_baud_value) 
            << 0x10U) | (IData)(vlSelfRef.mkuart__DOT__uart_baud_value));
    vlSelfRef.mkuart__DOT__return_data___05Fh19168 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_delay_control) 
            << 0x10U) | (IData)(vlSelfRef.mkuart__DOT__uart_rg_delay_control));
    vlSelfRef.mkuart__DOT__return_data___05Fh19487 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_interrupt_en) 
            << 0x10U) | (IData)(vlSelfRef.mkuart__DOT__uart_rg_interrupt_en));
    vlSelfRef.mkuart__DOT__return_data___05Fh18522 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_pullup_enable) 
            << 0x1dU) | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold) 
                          << 0x1aU) | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold) 
                                        << 0x17U) | 
                                       (((IData)(vlSelfRef.mkuart__DOT__uart_rg_char_decide) 
                                         << 0x15U) 
                                        | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_parity) 
                                            << 0x13U) 
                                           | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits) 
                                               << 0x11U) 
                                              | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_pullup_enable) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold) 
                                                        << 7U) 
                                                       | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_char_decide) 
                                                           << 5U) 
                                                          | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_parity) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits) 
                                                                << 1U))))))))))));
    vlSelfRef.mkuart__DOT__uart_uart_wr_rx_outp_ready_wget 
        = (((4U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold)) 
            & (8U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount))) 
           | (((3U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold)) 
               & (4U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount))) 
              | (((2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold)) 
                  & (2U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount))) 
                 | ((1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold)) 
                    & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount))))));
    vlSelfRef.mkuart__DOT__x_error_status___05Fh16125 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full) 
            << 4U) | (IData)(vlSelfRef.mkuart__DOT__uart_uart_error_status_register));
    mkuart__DOT____VdfgRegularize_h44a04759_0_29 = 
        ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
         & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__uart_uart_wr_tx_can_take_inp_wget 
        = (((4U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold)) 
            & (8U >= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount))) 
           | (((3U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold)) 
               & (4U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail))) 
              | (((2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold)) 
                  & (2U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail))) 
                 | ((1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold)) 
                    & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail))))));
    vlSelfRef.mkuart__DOT__x_wget___05Fh3636 = ((0U 
                                                 == (IData)(vlSelfRef.write_req_size))
                                                 ? 
                                                (0xffU 
                                                 & vlSelfRef.write_req_data)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.write_req_size))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelfRef.write_req_data)
                                                  : vlSelfRef.write_req_data));
    vlSelfRef.mkuart__DOT__parity_data___05Fh12810 
        = (0xf8U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                    << 3U));
    vlSelfRef.mkuart__DOT__parity_data___05Fh12805 
        = (0xfcU & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                    << 2U));
    vlSelfRef.mkuart__DOT__parity_data___05Fh12800 
        = (0xfeU & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                    << 1U));
    vlSelfRef.mkuart__DOT__x___05Fh21595 = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.write_req_size)));
    vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_rg_delay_control) 
           == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count));
    if ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount))) {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_2 = 0U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FVAL_1 
            = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280)
                ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh14788));
    } else {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_2 
            = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_out_enable)
                ? 2U : 1U);
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FVAL_1 = 0U;
    }
    vlSelfRef.mkuart__DOT__x___05Fh16473 = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.read_req_size)));
    vlSelfRef.mkuart__DOT__x___05Fh18133 = (0x3fU & 
                                            ((IData)(8U) 
                                             - (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize)));
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA 
        = ((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state))) 
           < (IData)(vlSelfRef.mkuart__DOT__uart_baud_value));
    vlSelfRef.write_req = vlSelfRef.mkuart__DOT__write_req;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__sD_IN 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvData_sD_IN;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__RST 
        = vlSelfRef.mkuart__DOT__RST_N;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__sRST 
        = vlSelfRef.mkuart__DOT__RST_N;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__CLK 
        = vlSelfRef.mkuart__DOT__CLK;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__sCLK 
        = vlSelfRef.mkuart__DOT__CLK;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dCLK 
        = vlSelfRef.mkuart__DOT__CLK;
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FVAL_2 
        = ((1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity))
            ? (IData)(vlSelfRef.mkuart__DOT__x___05Fh15612)
            : ((2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)) 
               & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity)));
    vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkuart__DOT__NOT_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_ua_ETC___05F_d170));
    vlSelfRef.mkuart__DOT__uart_rg_parity_EN = vlSelfRef.mkuart__DOT__uart_rg_char_decide_EN;
    vlSelfRef.mkuart__DOT__uart_rg_pullup_enable_EN 
        = vlSelfRef.mkuart__DOT__uart_rg_char_decide_EN;
    vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold_EN 
        = vlSelfRef.mkuart__DOT__uart_rg_char_decide_EN;
    vlSelfRef.mkuart__DOT__uart_rg_stopbits_EN = vlSelfRef.mkuart__DOT__uart_rg_char_decide_EN;
    vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold_EN 
        = vlSelfRef.mkuart__DOT__uart_rg_char_decide_EN;
    vlSelfRef.mkuart__DOT__IF_uart_uart_rRecvBitCount_7_EQ_uart_rg_charsi_ETC___05F_d129 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount) 
            == (IData)(vlSelfRef.mkuart__DOT__y___05Fh8232))
            ? (((0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)) 
                | (0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)))
                ? 6U : 5U) : (((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount) 
                               == (IData)(vlSelfRef.mkuart__DOT__y___05Fh8254))
                               ? 6U : 3U));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount) 
           == (IData)(vlSelfRef.mkuart__DOT__y___05Fh15222));
    if ((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount))) {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_3 = 3U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_5 = 5U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_8 = 0U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_4 
            = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299) 
                & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)))
                ? 5U : (((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299) 
                         & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)))
                         ? 8U : 4U));
    } else {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_3 = 2U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_5 = 8U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_8 = 7U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_4 = 3U;
    }
    vlSelfRef.mkuart__DOT__z___05Fh10214 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10207) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2));
    vlSelfRef.mkuart__DOT__x_wget___05Fh1480 = vlSelfRef.mkuart__DOT__x___05Fh8568;
    vlSelfRef.mkuart__DOT__return_data___05Fh16913 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_wr_tx_can_take_inp_wget) 
            << 0x1aU) | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_wr_rx_outp_ready_wget) 
                          << 0x19U) | (((IData)(vlSelfRef.mkuart__DOT__x_error_status___05Fh16125) 
                                        << 0x14U) | 
                                       (((0x10U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                         << 0x13U) 
                                        | (((0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                            << 0x12U) 
                                           | (((0x10U 
                                                == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
                                               << 0x11U) 
                                              | (((IData)(mkuart__DOT____VdfgRegularize_h44a04759_0_29) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_wr_tx_can_take_inp_wget) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_wr_rx_outp_ready_wget) 
                                                        << 9U) 
                                                       | (((IData)(vlSelfRef.mkuart__DOT__x_error_status___05Fh16125) 
                                                           << 4U) 
                                                          | (((0x10U 
                                                               == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                                              << 3U) 
                                                             | (((0U 
                                                                  != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                                                 << 2U) 
                                                                | (((0x10U 
                                                                     == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
                                                                    << 1U) 
                                                                   | (IData)(mkuart__DOT____VdfgRegularize_h44a04759_0_29))))))))))))));
    vlSelfRef.mkuart__DOT__uart_rg_char_decide_D_IN 
        = (3U & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
                 >> 5U));
    vlSelfRef.mkuart__DOT__uart_rg_interrupt_en_D_IN 
        = (0x1ffU & vlSelfRef.mkuart__DOT__x_wget___05Fh3636);
    vlSelfRef.mkuart__DOT__uart_rg_parity_D_IN = (3U 
                                                  & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
                                                     >> 3U));
    vlSelfRef.mkuart__DOT__uart_rg_pullup_enable_D_IN 
        = (1U & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
                 >> 0xdU));
    vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold_D_IN 
        = (7U & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
                 >> 0xaU));
    vlSelfRef.mkuart__DOT__uart_rg_rx_threshold_D_IN 
        = (0x1fU & vlSelfRef.mkuart__DOT__x_wget___05Fh3636);
    vlSelfRef.mkuart__DOT__uart_rg_stopbits_D_IN = 
        (3U & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
               >> 1U));
    vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold_D_IN 
        = (7U & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
                 >> 7U));
    vlSelfRef.mkuart__DOT__x___05Fh21670 = vlSelfRef.mkuart__DOT__x_wget___05Fh3636;
    vlSelfRef.mkuart__DOT__uart_baud_value_D_IN = (0xffffU 
                                                   & vlSelfRef.mkuart__DOT__x_wget___05Fh3636);
    vlSelfRef.mkuart__DOT__MUX_uart_uart_fifo_almost_full_write_1___05FVAL_2 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full) 
           & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
              >> 8U));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_error_status_register) 
           & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
              >> 4U));
    vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246 
        = (0xffU & ((5U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize))
                     ? (IData)(vlSelfRef.mkuart__DOT__parity_data___05Fh12810)
                     : ((6U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize))
                         ? (IData)(vlSelfRef.mkuart__DOT__parity_data___05Fh12805)
                         : ((7U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize))
                             ? (IData)(vlSelfRef.mkuart__DOT__parity_data___05Fh12800)
                             : vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U]))));
    vlSelfRef.mkuart__DOT__value___05Fh21629 = ((2U 
                                                 == (IData)(vlSelfRef.write_req_size))
                                                 ? 4U
                                                 : (IData)(vlSelfRef.mkuart__DOT__x___05Fh21595));
    vlSelfRef.mkuart__DOT__value___05Fh16504 = ((2U 
                                                 == (IData)(vlSelfRef.read_req_size))
                                                 ? 4U
                                                 : (IData)(vlSelfRef.mkuart__DOT__x___05Fh16473));
    vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d386 
        = (0xffU & VL_SHIFTR_III(8,8,6, (0xffU & (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] 
                                                  >> 8U)), (IData)(vlSelfRef.mkuart__DOT__x___05Fh18133)));
    vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382 
        = (0xffU & VL_SHIFTR_III(8,8,6, (0xffU & vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U]), (IData)(vlSelfRef.mkuart__DOT__x___05Fh18133)));
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__ADDA 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_value_PLUS_1_6___05FETC___05F_d78 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN 
        = (1U & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA)));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_3 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize) 
            == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount))
            ? ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity))
                ? ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits))
                    ? 6U : 5U) : 4U) : (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_rRecvBitCount_7_EQ_uart_rg_charsi_ETC___05F_d129));
    vlSelfRef.mkuart__DOT__z___05Fh10221 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10214) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3));
    vlSelfRef.mkuart__DOT__uart_rg_delay_control_D_IN 
        = vlSelfRef.mkuart__DOT__uart_baud_value_D_IN;
    vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__NOT_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_ua_ETC___05F_d170) 
           | (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_fifo_almost_full_write_1___05FVAL_2));
    vlSelfRef.mkuart__DOT__z___05Fh12725 = (1U & ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 1U)));
    vlSelfRef.mkuart__DOT___1_SL_IF_write_req_size_EQ_2_41_THEN_4_ELSE_0_C_ETC___05F_d458 
        = (0xfU & (((IData)(1U) << (IData)(vlSelfRef.mkuart__DOT__value___05Fh21629)) 
                   - (IData)(1U)));
    vlSelfRef.mkuart__DOT__b___05Fh21628 = vlSelfRef.mkuart__DOT__value___05Fh21629;
    vlSelfRef.mkuart__DOT__b___05Fh16503 = vlSelfRef.mkuart__DOT__value___05Fh16504;
    vlSelfRef.mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq2 
        = (0xffU & (((0U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504)) 
                     || (1U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504)))
                     ? (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382)
                     : VL_SHIFTR_III(8,8,6, (0xffU 
                                             & (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] 
                                                >> 0x10U)), (IData)(vlSelfRef.mkuart__DOT__x___05Fh18133))));
    vlSelfRef.mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq1 
        = (0xffU & ((0U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504))
                     ? (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382)
                     : ((1U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504))
                         ? (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d386)
                         : VL_SHIFTR_III(8,8,6, (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] 
                                                 >> 0x18U), (IData)(vlSelfRef.mkuart__DOT__x___05Fh18133)))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_bit_cell_time_counter 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_bit_cell_time_counter 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_bit_cell_time_counter 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_bit_cell_time_counter 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETF 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (5U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (1U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample 
        = ((2U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)) 
           & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
              & (0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount))));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (4U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (5U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (6U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (8U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (2U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (7U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (3U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (4U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (6U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (3U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (1U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__z___05Fh10228 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10221) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4));
    vlSelfRef.mkuart__DOT__z___05Fh12732 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12725) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 2U)));
    vlSelfRef.mkuart__DOT__x_wget___05Fh3695 = ((((8U 
                                                   & (IData)(vlSelfRef.mkuart__DOT___1_SL_IF_write_req_size_EQ_2_41_THEN_4_ELSE_0_C_ETC___05F_d458))
                                                   ? 0xffU
                                                   : 0U) 
                                                 << 0x18U) 
                                                | ((((4U 
                                                      & (IData)(vlSelfRef.mkuart__DOT___1_SL_IF_write_req_size_EQ_2_41_THEN_4_ELSE_0_C_ETC___05F_d458))
                                                      ? 0xffU
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | ((((2U 
                                                         & (IData)(vlSelfRef.mkuart__DOT___1_SL_IF_write_req_size_EQ_2_41_THEN_4_ELSE_0_C_ETC___05F_d458))
                                                         ? 0xffU
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((1U 
                                                          & (IData)(vlSelfRef.mkuart__DOT___1_SL_IF_write_req_size_EQ_2_41_THEN_4_ELSE_0_C_ETC___05F_d458))
                                                          ? 0xffU
                                                          : 0U))));
    vlSelfRef.mkuart__DOT__b___05Fh4299 = vlSelfRef.mkuart__DOT__b___05Fh21628;
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rwEnqCount_whas 
        = ((IData)(vlSelfRef.EN_write_req) & ((4U == 
                                               (0x3fU 
                                                & vlSelfRef.write_req_addr)) 
                                              & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail) 
                                                 >= (IData)(vlSelfRef.mkuart__DOT__b___05Fh21628))));
    vlSelfRef.mkuart__DOT__b___05Fh1787 = vlSelfRef.mkuart__DOT__b___05Fh16503;
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rwDeqCount_whas 
        = ((IData)(vlSelfRef.EN_read_req) & ((8U == 
                                              (0x3fU 
                                               & vlSelfRef.read_req_addr)) 
                                             & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount) 
                                                >= (IData)(vlSelfRef.mkuart__DOT__b___05Fh16503))));
    vlSelfRef.mkuart__DOT__IF_IF_read_req_size_EQ_2_56_THEN_4_ELSE_0_CONC_ETC___05F_d397 
        = (((IData)(vlSelfRef.mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq1) 
            << 8U) | (IData)(vlSelfRef.mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq2));
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__SETF 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETF;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_stop_first_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_find_center_of_bit_cell 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_parity_bit 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_parity_bit 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit1_5 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_parity_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_wait_for_start_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit;
    vlSelfRef.mkuart__DOT__uart_uart_pwRecvCellCountReset_whas 
        = (((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell) 
            & (4U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount))) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample) 
              | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)));
    vlSelfRef.mkuart__DOT__uart_uart_pwRecvResetBitCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_start_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit2 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time;
    vlSelfRef.mkuart__DOT__uart_uart_pwXmitEnableBitCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time) 
           & ((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
              & ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299)) 
                 | ((0U != (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)) 
                    & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity))))));
    vlSelfRef.mkuart__DOT___dand2uart_uart_pwXmitCellCountReset_EN_wset 
        = (((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2) 
            | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit) 
               | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time) 
                  | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit)))) 
           & (0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_shift_next_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit;
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_stop_last_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit;
    vlSelfRef.mkuart__DOT__uart_uart_error_status_register_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit));
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rwEnqCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit) 
           & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail)));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_buffer_shift 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_sample_pin 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_sample_pin 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN 
        = (((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1)) 
            & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_rl_delay_control 
        = vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control;
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_2 
        = ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280)) 
           & (IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_for_start_command 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command;
    vlSelfRef.mkuart__DOT__MUX_uart_uart_out_enable_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
           & ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
              & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280)));
    vlSelfRef.mkuart__DOT__uart_uart_pwXmitResetBitCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
           & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280) 
              | ((IData)(vlSelfRef.mkuart__DOT__uart_uart_out_enable) 
                 | (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)))));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_4 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5) 
              | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit) 
                 | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command))));
    mkuart__DOT____VdfgRegularize_h44a04759_0_35 = 
        ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
         & ((0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
            & (IData)(vlSelfRef.mkuart__DOT__uart_uart_out_enable)));
    vlSelfRef.mkuart__DOT__z___05Fh10235 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10228) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5));
    vlSelfRef.mkuart__DOT__z___05Fh12739 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12732) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 3U)));
    if (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rwEnqCount_whas) {
        vlSelfRef.mkuart__DOT__b___05Fh4267 = vlSelfRef.mkuart__DOT__b___05Fh21628;
        vlSelfRef.mkuart__DOT__value___05Fh4013 = vlSelfRef.mkuart__DOT__x_wget___05Fh3636;
        vlSelfRef.mkuart__DOT__value___05Fh4129 = vlSelfRef.mkuart__DOT__x_wget___05Fh3695;
    } else {
        vlSelfRef.mkuart__DOT__b___05Fh4267 = 0U;
        vlSelfRef.mkuart__DOT__value___05Fh4013 = 0U;
        vlSelfRef.mkuart__DOT__value___05Fh4129 = 0U;
    }
    vlSelfRef.mkuart__DOT__b___05Fh1755 = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rwDeqCount_whas)
                                            ? (IData)(vlSelfRef.mkuart__DOT__b___05Fh16503)
                                            : 0U);
    vlSelfRef.mkuart__DOT__y_avValue_fst___05Fh16577 
        = (((IData)(vlSelfRef.mkuart__DOT__IF_IF_read_req_size_EQ_2_56_THEN_4_ELSE_0_CONC_ETC___05F_d397) 
            << 0x10U) | ((((0U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504))
                            ? (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382)
                            : (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d386)) 
                          << 8U) | (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382)));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwRecvCellCountReset_whas)
            ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh5361));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwRecvResetBitCount_whas)
            ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh7065));
    if (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rwEnqCount_whas) {
        vlSelfRef.mkuart__DOT__b___05Fh2128 = 1U;
        vlSelfRef.mkuart__DOT__value___05Fh1874 = vlSelfRef.mkuart__DOT__x___05Fh8568;
        vlSelfRef.mkuart__DOT__value___05Fh1990 = 0xffU;
    } else {
        vlSelfRef.mkuart__DOT__b___05Fh2128 = 0U;
        vlSelfRef.mkuart__DOT__value___05Fh1874 = 0U;
        vlSelfRef.mkuart__DOT__value___05Fh1990 = 0U;
    }
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvState_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell) 
              | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample) 
                 | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit) 
                    | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit) 
                       | (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6))))));
    vlSelfRef.mkuart__DOT__uart_uart_pwRecvEnableBitCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit) 
           | (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvState_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)
            ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_1)
            : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell)
                ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_2)
                : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample)
                    ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_3)
                    : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit)
                        ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_4)
                        : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit)
                            ? 0U : ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6)
                                     ? 2U : 0U))))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitState_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
              | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit) 
                 | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time) 
                    | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit) 
                       | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit) 
                          | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5) 
                             | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2) 
                                | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit)))))))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitState_D_IN 
        = (((((((((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1) 
                  | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command)) 
                 | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit)) 
                | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time)) 
               | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit)) 
              | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit)) 
             | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5)) 
            | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2))
            ? ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1)
                ? 2U : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command)
                         ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_2)
                         : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit)
                             ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_3)
                             : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time)
                                 ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_4)
                                 : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit)
                                     ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_5)
                                     : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit)
                                         ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_6)
                                         : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5)
                                             ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_7)
                                             : (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_8))))))))
            : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit)
                ? 3U : 0U));
    vlSelfRef.mkuart__DOT__uart_uart_out_enable_D_IN 
        = (1U & (~ (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_out_enable_write_1___05FSEL_1)));
    vlSelfRef.mkuart__DOT__uart_uart_out_enable_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_out_enable_write_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwXmitResetBitCount_whas) 
           | (IData)(vlSelfRef.mkuart__DOT__uart_uart_pwXmitEnableBitCount_whas));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwXmitResetBitCount_whas)
            ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh11114));
    vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit)));
    vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FVAL_1)
            : ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkuart__DOT__x___05Fh14788)
                : 0U));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit) 
              | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit) 
                 | (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_4))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0)
            : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit)
                ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FVAL_2)
                : ((1U & (~ (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit))) 
                   && (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_4))));
    vlSelfRef.mkuart__DOT__uart_uart_pwXmitCellCountReset_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkuart__DOT___dand2uart_uart_pwXmitCellCountReset_EN_wset) 
              | (((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5) 
                  & (7U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount))) 
                 | ((IData)(mkuart__DOT____VdfgRegularize_h44a04759_0_35) 
                    | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit) 
                       & ((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
                          & ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)) 
                             | ((2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)) 
                                | (1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits))))))))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1) 
           | (IData)(mkuart__DOT____VdfgRegularize_h44a04759_0_35));
    vlSelfRef.mkuart__DOT__z___05Fh10242 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10235) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6));
    vlSelfRef.mkuart__DOT__z___05Fh12746 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12739) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 4U)));
    vlSelfRef.mkuart__DOT__x___05Fh4012[0U] = vlSelfRef.mkuart__DOT__value___05Fh4013;
    vlSelfRef.mkuart__DOT__x___05Fh4012[1U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4012[2U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4012[3U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4128[0U] = vlSelfRef.mkuart__DOT__value___05Fh4129;
    vlSelfRef.mkuart__DOT__x___05Fh4128[1U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4128[2U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4128[3U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1837 = ((IData)(vlSelfRef.mkuart__DOT__b___05Fh1755) 
                                           << 3U);
    VL_SHIFTR_WWI(128,128,8, vlSelfRef.mkuart__DOT__nextStorage___05Fh1609, vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage, 
                  ((IData)(vlSelfRef.mkuart__DOT__b___05Fh1755) 
                   << 3U));
    VL_SHIFTR_WWI(128,128,8, vlSelfRef.mkuart__DOT__nextMask___05Fh1610, vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask, 
                  ((IData)(vlSelfRef.mkuart__DOT__b___05Fh1755) 
                   << 3U));
    vlSelfRef.mkuart__DOT__value___05Fh1937 = (0x1fU 
                                               & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount) 
                                                  - (IData)(vlSelfRef.mkuart__DOT__b___05Fh1755)));
    vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
        = ((0x20U & vlSelfRef.read_req_addr) ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
            : ((0x10U & vlSelfRef.read_req_addr) ? 
               ((8U & vlSelfRef.read_req_addr) ? ((4U 
                                                   & vlSelfRef.read_req_addr)
                                                   ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.read_req_addr)
                                                    ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.read_req_addr)
                                                     ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                                                     : vlSelfRef.mkuart__DOT__return_data___05Fh19487)))
                 : ((4U & vlSelfRef.read_req_addr) ? 
                    ((2U & vlSelfRef.read_req_addr)
                      ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                      : ((1U & vlSelfRef.read_req_addr)
                          ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                          : vlSelfRef.mkuart__DOT__return_data___05Fh18522))
                     : ((2U & vlSelfRef.read_req_addr)
                         ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                         : ((1U & vlSelfRef.read_req_addr)
                             ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                             : vlSelfRef.mkuart__DOT__return_data___05Fh19168))))
                : ((8U & vlSelfRef.read_req_addr) ? 
                   ((4U & vlSelfRef.read_req_addr) ? 
                    ((2U & vlSelfRef.read_req_addr)
                      ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                      : ((1U & vlSelfRef.read_req_addr)
                          ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                          : vlSelfRef.mkuart__DOT__return_data___05Fh16913))
                     : ((2U & vlSelfRef.read_req_addr)
                         ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                         : ((1U & vlSelfRef.read_req_addr)
                             ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                             : vlSelfRef.mkuart__DOT__y_avValue_fst___05Fh16577)))
                    : ((4U & vlSelfRef.read_req_addr)
                        ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                        : ((2U & vlSelfRef.read_req_addr)
                            ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                            : ((1U & vlSelfRef.read_req_addr)
                                ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                                : vlSelfRef.mkuart__DOT__return_data___05Fh18849))))));
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail_D_IN 
        = (0x1fU & (((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail) 
                     + (IData)(vlSelfRef.mkuart__DOT__b___05Fh1755)) 
                    - (IData)(vlSelfRef.mkuart__DOT__b___05Fh2128)));
    vlSelfRef.mkuart__DOT__x___05Fh1873[0U] = vlSelfRef.mkuart__DOT__value___05Fh1874;
    vlSelfRef.mkuart__DOT__x___05Fh1873[1U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1873[2U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1873[3U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1989[0U] = vlSelfRef.mkuart__DOT__value___05Fh1990;
    vlSelfRef.mkuart__DOT__x___05Fh1989[1U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1989[2U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1989[3U] = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwRecvResetBitCount_whas) 
           | (IData)(vlSelfRef.mkuart__DOT__uart_uart_pwRecvEnableBitCount_whas));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwXmitCellCountReset_whas)
            ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh11088));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_load 
        = vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_buffer_load 
        = vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7_D_IN 
        = (1U & ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN)) 
                 | (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                    >> 7U)));
    if (vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN) {
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_D_IN 
            = (1U & vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U]);
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 1U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 2U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 3U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 4U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 5U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 6U));
    } else {
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7));
    }
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_shift 
        = ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN)) 
           & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit));
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rwDeqCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN) 
           & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)));
    vlSelfRef.mkuart__DOT__z___05Fh10249 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10242) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7));
    vlSelfRef.mkuart__DOT__z___05Fh12753 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12746) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 5U)));
    vlSelfRef.mkuart__DOT__x___05Fh1686[0U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh1609[0U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh1610[0U]);
    vlSelfRef.mkuart__DOT__x___05Fh1686[1U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh1609[1U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh1610[1U]);
    vlSelfRef.mkuart__DOT__x___05Fh1686[2U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh1609[2U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh1610[2U]);
    vlSelfRef.mkuart__DOT__x___05Fh1686[3U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh1609[3U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh1610[3U]);
    vlSelfRef.mkuart__DOT__x___05Fh1981 = ((IData)(vlSelfRef.mkuart__DOT__value___05Fh1937) 
                                           << 3U);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount_D_IN 
        = (0x1fU & ((IData)(vlSelfRef.mkuart__DOT__value___05Fh1937) 
                    + (IData)(vlSelfRef.mkuart__DOT__b___05Fh2128)));
    vlSelfRef.mkuart__DOT__a___05Fh16637 = ((vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424))));
    vlSelfRef.mkuart__DOT__a___05Fh16635 = ((vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424));
    VL_SHIFTL_WWI(128,128,8, vlSelfRef.mkuart__DOT__enqData___05Fh1615, vlSelfRef.mkuart__DOT__x___05Fh1873, 
                  ((IData)(vlSelfRef.mkuart__DOT__value___05Fh1937) 
                   << 3U));
    VL_SHIFTL_WWI(128,128,8, vlSelfRef.mkuart__DOT__enqMask___05Fh1616, vlSelfRef.mkuart__DOT__x___05Fh1989, 
                  ((IData)(vlSelfRef.mkuart__DOT__value___05Fh1937) 
                   << 3U));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_buffer_shift 
        = vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_shift;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN) 
           | (IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_shift));
    vlSelfRef.mkuart__DOT__b___05Fh3894 = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rwDeqCount_whas)
                                            ? 1U : 0U);
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_45_XOR_uart_uart_vrRe_ETC___05F_d159 
        = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10249) 
           ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvParity));
    vlSelfRef.mkuart__DOT__z___05Fh12760 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12753) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 6U)));
    vlSelfRef.mkuart__DOT__x___05Fh16334 = ((0U == (IData)(vlSelfRef.read_req_size))
                                             ? vlSelfRef.mkuart__DOT__a___05Fh16637
                                             : ((1U 
                                                 == (IData)(vlSelfRef.read_req_size))
                                                 ? vlSelfRef.mkuart__DOT__a___05Fh16635
                                                 : vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424));
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[0U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh1610[0U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh1616[0U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[1U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh1610[1U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh1616[1U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[2U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh1610[2U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh1616[2U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[3U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh1610[3U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh1616[3U]);
    vlSelfRef.mkuart__DOT__y___05Fh1687[0U] = (vlSelfRef.mkuart__DOT__enqData___05Fh1615[0U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh1616[0U]);
    vlSelfRef.mkuart__DOT__y___05Fh1687[1U] = (vlSelfRef.mkuart__DOT__enqData___05Fh1615[1U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh1616[1U]);
    vlSelfRef.mkuart__DOT__y___05Fh1687[2U] = (vlSelfRef.mkuart__DOT__enqData___05Fh1615[2U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh1616[2U]);
    vlSelfRef.mkuart__DOT__y___05Fh1687[3U] = (vlSelfRef.mkuart__DOT__enqData___05Fh1615[3U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh1616[3U]);
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__x___05Fh3976 = ((IData)(vlSelfRef.mkuart__DOT__b___05Fh3894) 
                                           << 3U);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail_D_IN 
        = (0x1fU & (((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail) 
                     + (IData)(vlSelfRef.mkuart__DOT__b___05Fh3894)) 
                    - (IData)(vlSelfRef.mkuart__DOT__b___05Fh4267)));
    VL_SHIFTR_WWI(128,128,8, vlSelfRef.mkuart__DOT__nextStorage___05Fh3765, vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage, 
                  ((IData)(vlSelfRef.mkuart__DOT__b___05Fh3894) 
                   << 3U));
    VL_SHIFTR_WWI(128,128,8, vlSelfRef.mkuart__DOT__nextMask___05Fh3766, vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask, 
                  ((IData)(vlSelfRef.mkuart__DOT__b___05Fh3894) 
                   << 3U));
    vlSelfRef.mkuart__DOT__value___05Fh4076 = (0x1fU 
                                               & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount) 
                                                  - (IData)(vlSelfRef.mkuart__DOT__b___05Fh3894)));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_2 
        = ((((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1)) 
             & (0U == (IData)(vlSelfRef.mkuart__DOT__x___05Fh8568))) 
            << 3U) | ((4U & ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1)) 
                             << 2U)) | (((0x10U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                         << 1U) | (
                                                   ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_45_XOR_uart_uart_vrRe_ETC___05F_d159)) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity))) 
                                                   | ((2U 
                                                       == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)) 
                                                      & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_45_XOR_uart_uart_vrRe_ETC___05F_d159))))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12760) 
           ^ ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
              >> 7U));
    vlSelfRef.mkuart__DOT__read_req = (((QData)((IData)(vlSelfRef.mkuart__DOT__x___05Fh16334)) 
                                        << 1U) | (QData)((IData)(
                                                                 ((0xcU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & vlSelfRef.read_req_addr)) 
                                                                  | ((8U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSelfRef.read_req_addr)) 
                                                                     | ((0x14U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & vlSelfRef.read_req_addr)) 
                                                                        | ((0U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & vlSelfRef.read_req_addr)) 
                                                                           | ((0x10U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & vlSelfRef.read_req_addr)) 
                                                                              | ((0x18U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.read_req_addr)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.read_req_addr)))))))))));
    vlSelfRef.mkuart__DOT__nextMask___05Fh1618[0U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[0U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh1618[1U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[1U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh1618[2U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[2U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh1618[3U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[3U];
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[0U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh1686[0U] 
           | vlSelfRef.mkuart__DOT__y___05Fh1687[0U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[1U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh1686[1U] 
           | vlSelfRef.mkuart__DOT__y___05Fh1687[1U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[2U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh1686[2U] 
           | vlSelfRef.mkuart__DOT__y___05Fh1687[2U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[3U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh1686[3U] 
           | vlSelfRef.mkuart__DOT__y___05Fh1687[3U]);
    vlSelfRef.mkuart__DOT__x___05Fh3839[0U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh3765[0U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh3766[0U]);
    vlSelfRef.mkuart__DOT__x___05Fh3839[1U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh3765[1U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh3766[1U]);
    vlSelfRef.mkuart__DOT__x___05Fh3839[2U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh3765[2U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh3766[2U]);
    vlSelfRef.mkuart__DOT__x___05Fh3839[3U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh3765[3U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh3766[3U]);
    vlSelfRef.mkuart__DOT__x___05Fh4120 = ((IData)(vlSelfRef.mkuart__DOT__value___05Fh4076) 
                                           << 3U);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount_D_IN 
        = (0x1fU & ((IData)(vlSelfRef.mkuart__DOT__value___05Fh4076) 
                    + (IData)(vlSelfRef.mkuart__DOT__b___05Fh4267)));
    VL_SHIFTL_WWI(128,128,8, vlSelfRef.mkuart__DOT__enqData___05Fh3771, vlSelfRef.mkuart__DOT__x___05Fh4012, 
                  ((IData)(vlSelfRef.mkuart__DOT__value___05Fh4076) 
                   << 3U));
    VL_SHIFTL_WWI(128,128,8, vlSelfRef.mkuart__DOT__enqMask___05Fh3772, vlSelfRef.mkuart__DOT__x___05Fh4128, 
                  ((IData)(vlSelfRef.mkuart__DOT__value___05Fh4076) 
                   << 3U));
    vlSelfRef.mkuart__DOT__uart_uart_error_status_register_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_1)
            : (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_2));
    vlSelfRef.read_req = vlSelfRef.mkuart__DOT__read_req;
    vlSelfRef.mkuart__DOT__nextStorage___05Fh1617[0U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[0U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh1617[1U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[1U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh1617[2U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[2U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh1617[3U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[3U];
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[0U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh3766[0U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh3772[0U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[1U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh3766[1U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh3772[1U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[2U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh3766[2U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh3772[2U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[3U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh3766[3U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh3772[3U]);
    vlSelfRef.mkuart__DOT__y___05Fh3840[0U] = (vlSelfRef.mkuart__DOT__enqData___05Fh3771[0U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh3772[0U]);
    vlSelfRef.mkuart__DOT__y___05Fh3840[1U] = (vlSelfRef.mkuart__DOT__enqData___05Fh3771[1U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh3772[1U]);
    vlSelfRef.mkuart__DOT__y___05Fh3840[2U] = (vlSelfRef.mkuart__DOT__enqData___05Fh3771[2U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh3772[2U]);
    vlSelfRef.mkuart__DOT__y___05Fh3840[3U] = (vlSelfRef.mkuart__DOT__enqData___05Fh3771[3U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh3772[3U]);
    vlSelfRef.mkuart__DOT__nextMask___05Fh3774[0U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[0U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh3774[1U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[1U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh3774[2U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[2U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh3774[3U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[3U];
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[0U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh3839[0U] 
           | vlSelfRef.mkuart__DOT__y___05Fh3840[0U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[1U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh3839[1U] 
           | vlSelfRef.mkuart__DOT__y___05Fh3840[1U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[2U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh3839[2U] 
           | vlSelfRef.mkuart__DOT__y___05Fh3840[2U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[3U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh3839[3U] 
           | vlSelfRef.mkuart__DOT__y___05Fh3840[3U]);
    vlSelfRef.mkuart__DOT__nextStorage___05Fh3773[0U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[0U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh3773[1U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[1U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh3773[2U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[2U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh3773[3U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[3U];
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
                          & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
                         & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT))))) {
            VL_WRITEF_NX("Error: \"devices/uart_v2/RS232_modified.bsv\", line 516, column 9: (R0002)\n  Conflict-free rules RL_uart_uart_receive_buffer_shift and\n  RL_uart_uart_receive_wait_for_start_bit called conflicting methods read and\n  write of module instance uart_uart_vrRecvBuffer_1.\n\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
                          & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
                         & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT))))) {
            VL_WRITEF_NX("Error: \"devices/uart_v2/RS232_modified.bsv\", line 516, column 9: (R0002)\n  Conflict-free rules RL_uart_uart_receive_buffer_shift and\n  RL_uart_uart_receive_wait_for_start_bit called conflicting methods read and\n  write of module instance uart_uart_vrRecvBuffer_2.\n\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
                          & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
                         & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT))))) {
            VL_WRITEF_NX("Error: \"devices/uart_v2/RS232_modified.bsv\", line 516, column 9: (R0002)\n  Conflict-free rules RL_uart_uart_receive_buffer_shift and\n  RL_uart_uart_receive_wait_for_start_bit called conflicting methods read and\n  write of module instance uart_uart_vrRecvBuffer_3.\n\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
                          & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
                         & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT))))) {
            VL_WRITEF_NX("Error: \"devices/uart_v2/RS232_modified.bsv\", line 516, column 9: (R0002)\n  Conflict-free rules RL_uart_uart_receive_buffer_shift and\n  RL_uart_uart_receive_wait_for_start_bit called conflicting methods read and\n  write of module instance uart_uart_vrRecvBuffer_4.\n\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
                          & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
                         & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT))))) {
            VL_WRITEF_NX("Error: \"devices/uart_v2/RS232_modified.bsv\", line 516, column 9: (R0002)\n  Conflict-free rules RL_uart_uart_receive_buffer_shift and\n  RL_uart_uart_receive_wait_for_start_bit called conflicting methods read and\n  write of module instance uart_uart_vrRecvBuffer_5.\n\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
                          & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
                         & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT))))) {
            VL_WRITEF_NX("Error: \"devices/uart_v2/RS232_modified.bsv\", line 516, column 9: (R0002)\n  Conflict-free rules RL_uart_uart_receive_buffer_shift and\n  RL_uart_uart_receive_wait_for_start_bit called conflicting methods read and\n  write of module instance uart_uart_vrRecvBuffer_6.\n\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
                          & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
                         & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT))))) {
            VL_WRITEF_NX("Error: \"devices/uart_v2/RS232_modified.bsv\", line 516, column 9: (R0002)\n  Conflict-free rules RL_uart_uart_receive_buffer_shift and\n  RL_uart_uart_receive_wait_for_start_bit called conflicting methods read and\n  write of module instance uart_uart_vrRecvBuffer_7.\n\n",0);
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state 
        = ((IData)(vlSelfRef.RST_N) ? (0xffffU & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETF)
                                                   ? (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_F)
                                                   : 
                                                  ((((IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETC)
                                                      ? (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_C)
                                                      : (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state)) 
                                                    + 
                                                    ((IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA)
                                                      ? (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_A)
                                                      : 0U)) 
                                                   + 
                                                   ((IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDB)
                                                     ? (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_DATA_B)
                                                     : 0U))))
            : 0U);
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_Q_OUT 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__Q_OUT 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ mkuart__DOT____VdfgRegularize_h44a04759_0_29;
    mkuart__DOT____VdfgRegularize_h44a04759_0_29 = 0;
    CData/*1:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1 
        = ((IData)(vlSelfRef.RST_N) && (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__sSyncReg));
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7 
                = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6 
                = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5 
                = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4 
                = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3 
                = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2 
                = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1 
                = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut 
                = vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0 
                = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[0U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[0U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[1U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[1U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[2U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[2U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[3U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[3U];
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[0U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[0U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[1U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[1U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[2U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[2U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[3U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[3U];
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rRecvParity 
                = vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount 
                = vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount 
                = vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_interrupt_en_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_interrupt_en 
                = vlSelfRef.mkuart__DOT__uart_rg_interrupt_en_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_pullup_enable_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_pullup_enable 
                = vlSelfRef.mkuart__DOT__uart_rg_pullup_enable_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_rx_threshold_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_rx_threshold 
                = vlSelfRef.mkuart__DOT__uart_rg_rx_threshold_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7 
                = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6 
                = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full 
                = vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_char_decide_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_char_decide 
                = vlSelfRef.mkuart__DOT__uart_rg_char_decide_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_error_status_register_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_error_status_register 
                = vlSelfRef.mkuart__DOT__uart_uart_error_status_register_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5 
                = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4 
                = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3 
                = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2 
                = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1 
                = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0 
                = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold 
                = vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold 
                = vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rXmitParity 
                = vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_stopbits_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_stopbits 
                = vlSelfRef.mkuart__DOT__uart_rg_stopbits_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_parity_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_parity = vlSelfRef.mkuart__DOT__uart_rg_parity_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount 
                = vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_out_enable_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_out_enable 
                = vlSelfRef.mkuart__DOT__uart_uart_out_enable_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count 
                = vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_delay_control_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_delay_control 
                = vlSelfRef.mkuart__DOT__uart_rg_delay_control_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rRecvState_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rRecvState 
                = vlSelfRef.mkuart__DOT__uart_uart_rRecvState_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[0U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[1U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[1U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[2U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[2U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[3U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[3U];
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[0U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[1U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[1U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[2U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[2U];
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[3U] 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[3U];
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount 
                = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_rg_charsize_EN) {
            vlSelfRef.mkuart__DOT__uart_rg_charsize 
                = vlSelfRef.mkuart__DOT__uart_rg_charsize_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount 
                = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rXmitState_EN) {
            vlSelfRef.mkuart__DOT__uart_uart_rXmitState 
                = vlSelfRef.mkuart__DOT__uart_uart_rXmitState_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_baud_value_EN) {
            vlSelfRef.mkuart__DOT__uart_baud_value 
                = vlSelfRef.mkuart__DOT__uart_baud_value_D_IN;
        }
        if (vlSelfRef.mkuart__DOT__uart_uart_rRecvData_sEN) {
            vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__sSyncReg 
                = vlSelfRef.mkuart__DOT__uart_uart_rRecvData_sD_IN;
        }
    } else {
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut = 1U;
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[0U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[1U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[2U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask[3U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[0U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[1U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[2U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask[3U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvParity = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount = 0U;
        vlSelfRef.mkuart__DOT__uart_rg_interrupt_en = 0U;
        vlSelfRef.mkuart__DOT__uart_rg_pullup_enable = 1U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail = 0x10U;
        vlSelfRef.mkuart__DOT__uart_rg_rx_threshold = 5U;
        vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full = 0U;
        vlSelfRef.mkuart__DOT__uart_rg_char_decide = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_error_status_register = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1 = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0 = 0U;
        vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold = 0U;
        vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rXmitParity = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail = 0x10U;
        vlSelfRef.mkuart__DOT__uart_rg_stopbits = 0U;
        vlSelfRef.mkuart__DOT__uart_rg_parity = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_out_enable = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count = 0U;
        vlSelfRef.mkuart__DOT__uart_rg_delay_control = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvState = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[1U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[2U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[3U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[1U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[2U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[3U] = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount = 0U;
        vlSelfRef.mkuart__DOT__uart_rg_charsize = 8U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rXmitState = 0U;
        vlSelfRef.mkuart__DOT__uart_baud_value = 5U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__sSyncReg = 0U;
    }
    vlSelfRef.io_SOUT = vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut;
    vlSelfRef.mkuart__DOT__io_SOUT = vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut;
    vlSelfRef.mkuart__DOT__x___05Fh11114 = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount)));
    vlSelfRef.mkuart__DOT__x___05Fh7065 = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount)));
    vlSelfRef.mkuart__DOT__return_data___05Fh19487 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_interrupt_en) 
            << 0x10U) | (IData)(vlSelfRef.mkuart__DOT__uart_rg_interrupt_en));
    vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold) 
            << 0x18U) | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold) 
                          << 0x10U) | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold) 
                                        << 8U) | (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold))));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_fifo_almost_full_write_1___05FVAL_2 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full) 
           & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
              >> 8U));
    __Vtableidx1 = vlSelfRef.mkuart__DOT__uart_rg_char_decide;
    vlSelfRef.mkuart__DOT__uart_rg_charsize_D_IN = 
        Vtop__ConstPool__TABLE_h871f94ab_0[__Vtableidx1];
    vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_error_status_register) 
           & (vlSelfRef.mkuart__DOT__x_wget___05Fh3636 
              >> 4U));
    vlSelfRef.mkuart__DOT__x_error_status___05Fh16125 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full) 
            << 4U) | (IData)(vlSelfRef.mkuart__DOT__uart_uart_error_status_register));
    vlSelfRef.mkuart__DOT__z___05Fh10207 = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1));
    vlSelfRef.mkuart__DOT__x___05Fh8568 = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7) 
                                            << 7U) 
                                           | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4) 
                                                     << 4U) 
                                                    | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3) 
                                                        << 3U) 
                                                       | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2) 
                                                           << 2U) 
                                                          | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0))))))));
    vlSelfRef.mkuart__DOT__x___05Fh15612 = (1U & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity)));
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rwEnqCount_whas 
        = ((IData)(vlSelfRef.EN_write_req) & ((4U == 
                                               (0x3fU 
                                                & vlSelfRef.write_req_addr)) 
                                              & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail) 
                                                 >= (IData)(vlSelfRef.mkuart__DOT__b___05Fh21628))));
    vlSelfRef.mkuart__DOT__return_data___05Fh18522 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_pullup_enable) 
            << 0x1dU) | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold) 
                          << 0x1aU) | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold) 
                                        << 0x17U) | 
                                       (((IData)(vlSelfRef.mkuart__DOT__uart_rg_char_decide) 
                                         << 0x15U) 
                                        | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_parity) 
                                            << 0x13U) 
                                           | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits) 
                                               << 0x11U) 
                                              | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_pullup_enable) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold) 
                                                        << 7U) 
                                                       | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_char_decide) 
                                                           << 5U) 
                                                          | (((IData)(vlSelfRef.mkuart__DOT__uart_rg_parity) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits) 
                                                                << 1U))))))))))));
    if (vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1) {
        vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_D_IN = 1U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT = 1U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dD_OUT = 1U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_1 = 0U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_4 = 2U;
    } else {
        vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_D_IN = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvData_dD_OUT = 0U;
        vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dD_OUT = 0U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_1 = 1U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_4 = 0U;
    }
    vlSelfRef.mkuart__DOT__x___05Fh11088 = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_7 
        = ((7U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount))
            ? 0U : 6U);
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_6 
        = (((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
            & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)))
            ? 0U : (((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
                     & (2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)))
                     ? 7U : (((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
                              & (1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)))
                              ? 6U : 5U)));
    vlSelfRef.io_SOUT_EN = vlSelfRef.mkuart__DOT__uart_uart_out_enable;
    vlSelfRef.mkuart__DOT__io_SOUT_EN = vlSelfRef.mkuart__DOT__uart_uart_out_enable;
    vlSelfRef.mkuart__DOT__NOT_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_ua_ETC___05F_d170 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount) 
           >= (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_threshold));
    vlSelfRef.mkuart__DOT__uart_uart_wr_rx_outp_ready_wget 
        = (((4U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold)) 
            & (8U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount))) 
           | (((3U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold)) 
               & (4U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount))) 
              | (((2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold)) 
                  & (2U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount))) 
                 | ((1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_rx_dma_threshold)) 
                    & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount))))));
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rwDeqCount_whas 
        = ((IData)(vlSelfRef.EN_read_req) & ((8U == 
                                              (0x3fU 
                                               & vlSelfRef.read_req_addr)) 
                                             & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount) 
                                                >= (IData)(vlSelfRef.mkuart__DOT__b___05Fh16503))));
    vlSelfRef.mkuart__DOT__x___05Fh14788 = (0xffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count)));
    vlSelfRef.mkuart__DOT__return_data___05Fh19168 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_delay_control) 
            << 0x10U) | (IData)(vlSelfRef.mkuart__DOT__uart_rg_delay_control));
    vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_rg_delay_control) 
           == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count));
    vlSelfRef.mkuart__DOT__parity_data___05Fh12810 
        = (0xf8U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                    << 3U));
    vlSelfRef.mkuart__DOT__parity_data___05Fh12805 
        = (0xfcU & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                    << 2U));
    vlSelfRef.mkuart__DOT__parity_data___05Fh12800 
        = (0xfeU & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                    << 1U));
    if ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount))) {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_2 = 0U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FVAL_1 
            = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280)
                ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh14788));
    } else {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_2 
            = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_out_enable)
                ? 2U : 1U);
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FVAL_1 = 0U;
    }
    vlSelfRef.mkuart__DOT__uart_uart_wr_tx_can_take_inp_wget 
        = (((4U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold)) 
            & (8U >= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount))) 
           | (((3U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold)) 
               & (4U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail))) 
              | (((2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold)) 
                  & (2U <= (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail))) 
                 | ((1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_tx_dma_threshold)) 
                    & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail))))));
    vlSelfRef.mkuart__DOT__y___05Fh8232 = (0x3fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize)));
    vlSelfRef.mkuart__DOT__y___05Fh8254 = (0x3fU & 
                                           ((IData)(2U) 
                                            + (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize)));
    vlSelfRef.mkuart__DOT__y___05Fh15222 = (0x3fU & 
                                            ((IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize) 
                                             - (IData)(1U)));
    vlSelfRef.mkuart__DOT__x___05Fh18133 = (0x3fU & 
                                            ((IData)(8U) 
                                             - (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize)));
    vlSelfRef.mkuart__DOT__x___05Fh5361 = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount)));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_2 
        = ((4U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount))
            ? ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1)
                ? 0U : 2U) : 1U);
    mkuart__DOT____VdfgRegularize_h44a04759_0_29 = 
        ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
         & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__return_data___05Fh18849 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_baud_value) 
            << 0x10U) | (IData)(vlSelfRef.mkuart__DOT__uart_baud_value));
    vlSelfRef.mkuart__DOT__z___05Fh10214 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10207) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2));
    vlSelfRef.mkuart__DOT__x_wget___05Fh1480 = vlSelfRef.mkuart__DOT__x___05Fh8568;
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FVAL_2 
        = ((1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity))
            ? (IData)(vlSelfRef.mkuart__DOT__x___05Fh15612)
            : ((2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)) 
               & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity)));
    if (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rwEnqCount_whas) {
        vlSelfRef.mkuart__DOT__b___05Fh4267 = vlSelfRef.mkuart__DOT__b___05Fh21628;
        vlSelfRef.mkuart__DOT__value___05Fh4013 = vlSelfRef.mkuart__DOT__x_wget___05Fh3636;
        vlSelfRef.mkuart__DOT__value___05Fh4129 = vlSelfRef.mkuart__DOT__x_wget___05Fh3695;
    } else {
        vlSelfRef.mkuart__DOT__b___05Fh4267 = 0U;
        vlSelfRef.mkuart__DOT__value___05Fh4013 = 0U;
        vlSelfRef.mkuart__DOT__value___05Fh4129 = 0U;
    }
    vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkuart__DOT__NOT_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_ua_ETC___05F_d170));
    vlSelfRef.mkuart__DOT__uart_uart_fifo_almost_full_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__NOT_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_ua_ETC___05F_d170) 
           | (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_fifo_almost_full_write_1___05FVAL_2));
    vlSelfRef.mkuart__DOT__b___05Fh1755 = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rwDeqCount_whas)
                                            ? (IData)(vlSelfRef.mkuart__DOT__b___05Fh16503)
                                            : 0U);
    vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246 
        = (0xffU & ((5U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize))
                     ? (IData)(vlSelfRef.mkuart__DOT__parity_data___05Fh12810)
                     : ((6U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize))
                         ? (IData)(vlSelfRef.mkuart__DOT__parity_data___05Fh12805)
                         : ((7U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize))
                             ? (IData)(vlSelfRef.mkuart__DOT__parity_data___05Fh12800)
                             : vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U]))));
    vlSelfRef.mkuart__DOT__IF_uart_uart_rRecvBitCount_7_EQ_uart_rg_charsi_ETC___05F_d129 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount) 
            == (IData)(vlSelfRef.mkuart__DOT__y___05Fh8232))
            ? (((0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)) 
                | (0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)))
                ? 6U : 5U) : (((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount) 
                               == (IData)(vlSelfRef.mkuart__DOT__y___05Fh8254))
                               ? 6U : 3U));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount) 
           == (IData)(vlSelfRef.mkuart__DOT__y___05Fh15222));
    if ((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount))) {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_3 = 3U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_5 = 5U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_8 = 0U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_4 
            = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299) 
                & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)))
                ? 5U : (((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299) 
                         & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)))
                         ? 8U : 4U));
    } else {
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_3 = 2U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_5 = 8U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_8 = 7U;
        vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_4 = 3U;
    }
    vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d386 
        = (0xffU & VL_SHIFTR_III(8,8,6, (0xffU & (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] 
                                                  >> 8U)), (IData)(vlSelfRef.mkuart__DOT__x___05Fh18133)));
    vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382 
        = (0xffU & VL_SHIFTR_III(8,8,6, (0xffU & vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U]), (IData)(vlSelfRef.mkuart__DOT__x___05Fh18133)));
    vlSelfRef.mkuart__DOT__return_data___05Fh16913 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_uart_wr_tx_can_take_inp_wget) 
            << 0x1aU) | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_wr_rx_outp_ready_wget) 
                          << 0x19U) | (((IData)(vlSelfRef.mkuart__DOT__x_error_status___05Fh16125) 
                                        << 0x14U) | 
                                       (((0x10U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                         << 0x13U) 
                                        | (((0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                            << 0x12U) 
                                           | (((0x10U 
                                                == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
                                               << 0x11U) 
                                              | (((IData)(mkuart__DOT____VdfgRegularize_h44a04759_0_29) 
                                                  << 0x10U) 
                                                 | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_wr_tx_can_take_inp_wget) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelfRef.mkuart__DOT__uart_uart_wr_rx_outp_ready_wget) 
                                                        << 9U) 
                                                       | (((IData)(vlSelfRef.mkuart__DOT__x_error_status___05Fh16125) 
                                                           << 4U) 
                                                          | (((0x10U 
                                                               == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                                              << 3U) 
                                                             | (((0U 
                                                                  != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                                                 << 2U) 
                                                                | (((0x10U 
                                                                     == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
                                                                    << 1U) 
                                                                   | (IData)(mkuart__DOT____VdfgRegularize_h44a04759_0_29))))))))))))));
    vlSelfRef.mkuart__DOT__z___05Fh10221 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10214) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3));
    vlSelfRef.mkuart__DOT__x___05Fh4012[0U] = vlSelfRef.mkuart__DOT__value___05Fh4013;
    vlSelfRef.mkuart__DOT__x___05Fh4012[1U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4012[2U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4012[3U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4128[0U] = vlSelfRef.mkuart__DOT__value___05Fh4129;
    vlSelfRef.mkuart__DOT__x___05Fh4128[1U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4128[2U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh4128[3U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1837 = ((IData)(vlSelfRef.mkuart__DOT__b___05Fh1755) 
                                           << 3U);
    VL_SHIFTR_WWI(128,128,8, vlSelfRef.mkuart__DOT__nextStorage___05Fh1609, vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage, 
                  ((IData)(vlSelfRef.mkuart__DOT__b___05Fh1755) 
                   << 3U));
    VL_SHIFTR_WWI(128,128,8, vlSelfRef.mkuart__DOT__nextMask___05Fh1610, vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask, 
                  ((IData)(vlSelfRef.mkuart__DOT__b___05Fh1755) 
                   << 3U));
    vlSelfRef.mkuart__DOT__value___05Fh1937 = (0x1fU 
                                               & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount) 
                                                  - (IData)(vlSelfRef.mkuart__DOT__b___05Fh1755)));
    vlSelfRef.mkuart__DOT__z___05Fh12725 = (1U & ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 1U)));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_3 
        = (((IData)(vlSelfRef.mkuart__DOT__uart_rg_charsize) 
            == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount))
            ? ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity))
                ? ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits))
                    ? 6U : 5U) : 4U) : (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_rRecvBitCount_7_EQ_uart_rg_charsi_ETC___05F_d129));
    vlSelfRef.mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq2 
        = (0xffU & (((0U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504)) 
                     || (1U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504)))
                     ? (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382)
                     : VL_SHIFTR_III(8,8,6, (0xffU 
                                             & (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] 
                                                >> 0x10U)), (IData)(vlSelfRef.mkuart__DOT__x___05Fh18133))));
    vlSelfRef.mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq1 
        = (0xffU & ((0U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504))
                     ? (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382)
                     : ((1U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504))
                         ? (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d386)
                         : VL_SHIFTR_III(8,8,6, (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage[0U] 
                                                 >> 0x18U), (IData)(vlSelfRef.mkuart__DOT__x___05Fh18133)))));
    vlSelfRef.mkuart__DOT__z___05Fh10228 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10221) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4));
    vlSelfRef.mkuart__DOT__x___05Fh1686[0U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh1609[0U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh1610[0U]);
    vlSelfRef.mkuart__DOT__x___05Fh1686[1U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh1609[1U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh1610[1U]);
    vlSelfRef.mkuart__DOT__x___05Fh1686[2U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh1609[2U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh1610[2U]);
    vlSelfRef.mkuart__DOT__x___05Fh1686[3U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh1609[3U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh1610[3U]);
    vlSelfRef.mkuart__DOT__x___05Fh1981 = ((IData)(vlSelfRef.mkuart__DOT__value___05Fh1937) 
                                           << 3U);
    vlSelfRef.mkuart__DOT__z___05Fh12732 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12725) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 2U)));
    vlSelfRef.mkuart__DOT__IF_IF_read_req_size_EQ_2_56_THEN_4_ELSE_0_CONC_ETC___05F_d397 
        = (((IData)(vlSelfRef.mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq1) 
            << 8U) | (IData)(vlSelfRef.mkuart__DOT__CASE_value6504_0_IF_uart_uart_fifoRecv_ifc_rDa_ETC___05Fq2));
    vlSelfRef.mkuart__DOT__z___05Fh10235 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10228) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5));
    vlSelfRef.mkuart__DOT__z___05Fh12739 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12732) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 3U)));
    vlSelfRef.mkuart__DOT__y_avValue_fst___05Fh16577 
        = (((IData)(vlSelfRef.mkuart__DOT__IF_IF_read_req_size_EQ_2_56_THEN_4_ELSE_0_CONC_ETC___05F_d397) 
            << 0x10U) | ((((0U == (IData)(vlSelfRef.mkuart__DOT__value___05Fh16504))
                            ? (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382)
                            : (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d386)) 
                          << 8U) | (IData)(vlSelfRef.mkuart__DOT__IF_uart_uart_fifoRecv_ifc_rDataCount_6_ULT_0_C_ETC___05F_d382)));
    vlSelfRef.mkuart__DOT__z___05Fh10242 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10235) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6));
    vlSelfRef.mkuart__DOT__z___05Fh12746 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12739) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 4U)));
    vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
        = ((0x20U & vlSelfRef.read_req_addr) ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
            : ((0x10U & vlSelfRef.read_req_addr) ? 
               ((8U & vlSelfRef.read_req_addr) ? ((4U 
                                                   & vlSelfRef.read_req_addr)
                                                   ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.read_req_addr)
                                                    ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.read_req_addr)
                                                     ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                                                     : vlSelfRef.mkuart__DOT__return_data___05Fh19487)))
                 : ((4U & vlSelfRef.read_req_addr) ? 
                    ((2U & vlSelfRef.read_req_addr)
                      ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                      : ((1U & vlSelfRef.read_req_addr)
                          ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                          : vlSelfRef.mkuart__DOT__return_data___05Fh18522))
                     : ((2U & vlSelfRef.read_req_addr)
                         ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                         : ((1U & vlSelfRef.read_req_addr)
                             ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                             : vlSelfRef.mkuart__DOT__return_data___05Fh19168))))
                : ((8U & vlSelfRef.read_req_addr) ? 
                   ((4U & vlSelfRef.read_req_addr) ? 
                    ((2U & vlSelfRef.read_req_addr)
                      ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                      : ((1U & vlSelfRef.read_req_addr)
                          ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                          : vlSelfRef.mkuart__DOT__return_data___05Fh16913))
                     : ((2U & vlSelfRef.read_req_addr)
                         ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                         : ((1U & vlSelfRef.read_req_addr)
                             ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                             : vlSelfRef.mkuart__DOT__y_avValue_fst___05Fh16577)))
                    : ((4U & vlSelfRef.read_req_addr)
                        ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                        : ((2U & vlSelfRef.read_req_addr)
                            ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                            : ((1U & vlSelfRef.read_req_addr)
                                ? vlSelfRef.mkuart__DOT___theResult___05F_fst___05Fh19805
                                : vlSelfRef.mkuart__DOT__return_data___05Fh18849))))));
    vlSelfRef.mkuart__DOT__z___05Fh10249 = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10242) 
                                            ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7));
    vlSelfRef.mkuart__DOT__z___05Fh12753 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12746) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 5U)));
    vlSelfRef.mkuart__DOT__a___05Fh16637 = ((vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424))));
    vlSelfRef.mkuart__DOT__a___05Fh16635 = ((vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_45_XOR_uart_uart_vrRe_ETC___05F_d159 
        = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh10249) 
           ^ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvParity));
    vlSelfRef.mkuart__DOT__z___05Fh12760 = (1U & ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12753) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
                                                   >> 6U)));
    vlSelfRef.mkuart__DOT__x___05Fh16334 = ((0U == (IData)(vlSelfRef.read_req_size))
                                             ? vlSelfRef.mkuart__DOT__a___05Fh16637
                                             : ((1U 
                                                 == (IData)(vlSelfRef.read_req_size))
                                                 ? vlSelfRef.mkuart__DOT__a___05Fh16635
                                                 : vlSelfRef.mkuart__DOT__IF_read_req_addr_BITS_5_TO_0_54_EQ_0xC_65_THEN_ETC___05F_d424));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_2 
        = ((((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1)) 
             & (0U == (IData)(vlSelfRef.mkuart__DOT__x___05Fh8568))) 
            << 3U) | ((4U & ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1)) 
                             << 2U)) | (((0x10U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount)) 
                                         << 1U) | (
                                                   ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_45_XOR_uart_uart_vrRe_ETC___05F_d159)) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity))) 
                                                   | ((2U 
                                                       == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)) 
                                                      & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_45_XOR_uart_uart_vrRe_ETC___05F_d159))))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__z___05Fh12760) 
           ^ ((IData)(vlSelfRef.mkuart__DOT__IF_uart_rg_charsize_14_EQ_7_34_THEN_uart_uart___05FETC___05F_d246) 
              >> 7U));
    vlSelfRef.mkuart__DOT__read_req = (((QData)((IData)(vlSelfRef.mkuart__DOT__x___05Fh16334)) 
                                        << 1U) | (QData)((IData)(
                                                                 ((0xcU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & vlSelfRef.read_req_addr)) 
                                                                  | ((8U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSelfRef.read_req_addr)) 
                                                                     | ((0x14U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & vlSelfRef.read_req_addr)) 
                                                                        | ((0U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & vlSelfRef.read_req_addr)) 
                                                                           | ((0x10U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & vlSelfRef.read_req_addr)) 
                                                                              | ((0x18U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.read_req_addr)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.read_req_addr)))))))))));
    vlSelfRef.mkuart__DOT__uart_uart_error_status_register_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_1)
            : (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FVAL_2));
    vlSelfRef.read_req = vlSelfRef.mkuart__DOT__read_req;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ mkuart__DOT____VdfgRegularize_h44a04759_0_35;
    mkuart__DOT____VdfgRegularize_h44a04759_0_35 = 0;
    // Body
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA 
        = ((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__q_state))) 
           < (IData)(vlSelfRef.mkuart__DOT__uart_baud_value));
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__ADDA 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_value_PLUS_1_6___05FETC___05F_d78 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN 
        = (1U & (~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_ADDA)));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_bit_cell_time_counter 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_bit_cell_time_counter 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_bit_cell_time_counter 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_bit_cell_time_counter 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETF 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (5U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (1U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample 
        = ((2U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)) 
           & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
              & (0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount))));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (4U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (5U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (6U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (8U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (2U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (7U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (3U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (4U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (6U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (3U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvState)));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (1U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_EN) 
           & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitState)));
    vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter__DOT__SETF 
        = vlSelfRef.mkuart__DOT__uart_uart_baudGen_rBaudCounter_SETF;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_stop_first_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_find_center_of_bit_cell 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_parity_bit 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_parity_bit 
        = vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit1_5 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_parity_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_wait_for_start_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit;
    vlSelfRef.mkuart__DOT__uart_uart_pwRecvCellCountReset_whas 
        = (((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell) 
            & (4U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount))) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample) 
              | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)));
    vlSelfRef.mkuart__DOT__uart_uart_pwRecvResetBitCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_start_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_send_stop_bit2 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time;
    vlSelfRef.mkuart__DOT__uart_uart_pwXmitEnableBitCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time) 
           & ((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
              & ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_20_EQ_uart_rg_charsize_ETC___05F_d299)) 
                 | ((0U != (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity)) 
                    & (0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_parity))))));
    vlSelfRef.mkuart__DOT___dand2uart_uart_pwXmitCellCountReset_EN_wset 
        = (((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2) 
            | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit) 
               | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time) 
                  | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit)))) 
           & (0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_shift_next_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit;
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_stop_last_bit 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit;
    vlSelfRef.mkuart__DOT__uart_uart_error_status_register_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_error_status_register_write_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit));
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rwEnqCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit) 
           & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail)));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_buffer_shift 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift;
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_receive_sample_pin 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_sample_pin 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1));
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN 
        = (((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvData__DOT__dSyncReg1)) 
            & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rRecvParity_EN) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_buffer_shift));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_rl_delay_control 
        = vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control;
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_2 
        = ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280)) 
           & (IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control) 
           & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_wait_for_start_command 
        = vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command;
    vlSelfRef.mkuart__DOT__MUX_uart_uart_out_enable_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
           & ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
              & (IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280)));
    vlSelfRef.mkuart__DOT__uart_uart_pwXmitResetBitCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control) 
           | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
           & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_78_EQ_uart_rg_delay_c_ETC___05F_d280) 
              | ((IData)(vlSelfRef.mkuart__DOT__uart_uart_out_enable) 
                 | (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)))));
    vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_4 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5) 
              | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit) 
                 | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command))));
    mkuart__DOT____VdfgRegularize_h44a04759_0_35 = 
        ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
         & ((0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)) 
            & (IData)(vlSelfRef.mkuart__DOT__uart_uart_out_enable)));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvCellCount_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwRecvCellCountReset_whas)
            ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh5361));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwRecvResetBitCount_whas)
            ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh7065));
    if (vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rwEnqCount_whas) {
        vlSelfRef.mkuart__DOT__b___05Fh2128 = 1U;
        vlSelfRef.mkuart__DOT__value___05Fh1874 = vlSelfRef.mkuart__DOT__x___05Fh8568;
        vlSelfRef.mkuart__DOT__value___05Fh1990 = 0xffU;
    } else {
        vlSelfRef.mkuart__DOT__b___05Fh2128 = 0U;
        vlSelfRef.mkuart__DOT__value___05Fh1874 = 0U;
        vlSelfRef.mkuart__DOT__value___05Fh1990 = 0U;
    }
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_1_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_2_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_3_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_4_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_5_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_6_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_7_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrRecvBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvState_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell) 
              | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample) 
                 | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit) 
                    | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit) 
                       | (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6))))));
    vlSelfRef.mkuart__DOT__uart_uart_pwRecvEnableBitCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit) 
           | (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6));
    vlSelfRef.mkuart__DOT__uart_uart_rRecvState_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_for_start_bit)
            ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_1)
            : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_find_center_of_bit_cell)
                ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_2)
                : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_wait_bit_cell_time_for_sample)
                    ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_3)
                    : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_first_bit)
                        ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FVAL_4)
                        : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_receive_stop_last_bit)
                            ? 0U : ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rRecvState_write_1___05FSEL_6)
                                     ? 2U : 0U))))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitState_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command) 
              | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit) 
                 | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time) 
                    | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit) 
                       | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit) 
                          | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5) 
                             | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2) 
                                | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit)))))))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitState_D_IN 
        = (((((((((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1) 
                  | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command)) 
                 | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit)) 
                | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time)) 
               | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit)) 
              | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit)) 
             | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5)) 
            | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit2))
            ? ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1)
                ? 2U : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_for_start_command)
                         ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_2)
                         : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit)
                             ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_3)
                             : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_wait_1_bit_cell_time)
                                 ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_4)
                                 : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit)
                                     ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_5)
                                     : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit)
                                         ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_6)
                                         : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5)
                                             ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_7)
                                             : (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FVAL_8))))))))
            : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit)
                ? 3U : 0U));
    vlSelfRef.mkuart__DOT__uart_uart_out_enable_D_IN 
        = (1U & (~ (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_out_enable_write_1___05FSEL_1)));
    vlSelfRef.mkuart__DOT__uart_uart_out_enable_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_out_enable_write_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_rl_delay_control));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwXmitResetBitCount_whas) 
           | (IData)(vlSelfRef.mkuart__DOT__uart_uart_pwXmitEnableBitCount_whas));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitBitCount_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwXmitResetBitCount_whas)
            ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh11114));
    vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit)));
    vlSelfRef.mkuart__DOT__uart_uart_rg_delay_count_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FVAL_1)
            : ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rg_delay_count_write_1___05FSEL_2)
                ? (IData)(vlSelfRef.mkuart__DOT__x___05Fh14788)
                : 0U));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit) 
              | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit) 
                 | (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_4))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitDataOut_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_1)
            ? (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0)
            : ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_parity_bit)
                ? (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FVAL_2)
                : ((1U & (~ (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_start_bit))) 
                   && (IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitDataOut_write_1___05FSEL_4))));
    vlSelfRef.mkuart__DOT__uart_uart_pwXmitCellCountReset_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkuart__DOT___dand2uart_uart_pwXmitCellCountReset_EN_wset) 
              | (((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit1_5) 
                  & (7U == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount))) 
                 | ((IData)(mkuart__DOT____VdfgRegularize_h44a04759_0_35) 
                    | ((IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_send_stop_bit) 
                       & ((0xfU == (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount)) 
                          & ((0U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)) 
                             | ((2U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits)) 
                                | (1U == (IData)(vlSelfRef.mkuart__DOT__uart_rg_stopbits))))))))));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__MUX_uart_uart_rXmitState_write_1___05FSEL_1) 
           | (IData)(mkuart__DOT____VdfgRegularize_h44a04759_0_35));
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataCount_D_IN 
        = (0x1fU & ((IData)(vlSelfRef.mkuart__DOT__value___05Fh1937) 
                    + (IData)(vlSelfRef.mkuart__DOT__b___05Fh2128)));
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail_D_IN 
        = (0x1fU & (((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rDataAvail) 
                     + (IData)(vlSelfRef.mkuart__DOT__b___05Fh1755)) 
                    - (IData)(vlSelfRef.mkuart__DOT__b___05Fh2128)));
    vlSelfRef.mkuart__DOT__x___05Fh1873[0U] = vlSelfRef.mkuart__DOT__value___05Fh1874;
    vlSelfRef.mkuart__DOT__x___05Fh1873[1U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1873[2U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1873[3U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1989[0U] = vlSelfRef.mkuart__DOT__value___05Fh1990;
    vlSelfRef.mkuart__DOT__x___05Fh1989[1U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1989[2U] = 0U;
    vlSelfRef.mkuart__DOT__x___05Fh1989[3U] = 0U;
    vlSelfRef.mkuart__DOT__uart_uart_rRecvBitCount_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwRecvResetBitCount_whas) 
           | (IData)(vlSelfRef.mkuart__DOT__uart_uart_pwRecvEnableBitCount_whas));
    vlSelfRef.mkuart__DOT__uart_uart_rXmitCellCount_D_IN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_pwXmitCellCountReset_whas)
            ? 0U : (IData)(vlSelfRef.mkuart__DOT__x___05Fh11088));
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_load 
        = vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN;
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_buffer_load 
        = vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7_D_IN 
        = (1U & ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN)) 
                 | (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                    >> 7U)));
    if (vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN) {
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_D_IN 
            = (1U & vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U]);
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 1U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 2U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 3U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 4U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 5U));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6_D_IN 
            = (1U & (vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage[0U] 
                     >> 6U));
    } else {
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6));
        vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6_D_IN 
            = (1U & (IData)(vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7));
    }
    vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_shift 
        = ((~ (IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN)) 
           & (IData)(vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_shift_next_bit));
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rwDeqCount_whas 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN) 
           & (0U != (IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount)));
    VL_SHIFTL_WWI(128,128,8, vlSelfRef.mkuart__DOT__enqData___05Fh1615, vlSelfRef.mkuart__DOT__x___05Fh1873, 
                  ((IData)(vlSelfRef.mkuart__DOT__value___05Fh1937) 
                   << 3U));
    VL_SHIFTL_WWI(128,128,8, vlSelfRef.mkuart__DOT__enqMask___05Fh1616, vlSelfRef.mkuart__DOT__x___05Fh1989, 
                  ((IData)(vlSelfRef.mkuart__DOT__value___05Fh1937) 
                   << 3U));
    vlSelfRef.mkuart__DOT__WILL_FIRE_RL_uart_uart_transmit_buffer_shift 
        = vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_shift;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN 
        = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_rXmitParity_EN) 
           | (IData)(vlSelfRef.mkuart__DOT__CAN_FIRE_RL_uart_uart_transmit_buffer_shift));
    vlSelfRef.mkuart__DOT__b___05Fh3894 = ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rwDeqCount_whas)
                                            ? 1U : 0U);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[0U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh1610[0U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh1616[0U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[1U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh1610[1U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh1616[1U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[2U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh1610[2U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh1616[2U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[3U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh1610[3U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh1616[3U]);
    vlSelfRef.mkuart__DOT__y___05Fh1687[0U] = (vlSelfRef.mkuart__DOT__enqData___05Fh1615[0U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh1616[0U]);
    vlSelfRef.mkuart__DOT__y___05Fh1687[1U] = (vlSelfRef.mkuart__DOT__enqData___05Fh1615[1U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh1616[1U]);
    vlSelfRef.mkuart__DOT__y___05Fh1687[2U] = (vlSelfRef.mkuart__DOT__enqData___05Fh1615[2U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh1616[2U]);
    vlSelfRef.mkuart__DOT__y___05Fh1687[3U] = (vlSelfRef.mkuart__DOT__enqData___05Fh1615[3U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh1616[3U]);
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_1_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_2_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_3_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_4_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_5_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_6_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_7_EN 
        = vlSelfRef.mkuart__DOT__uart_uart_vrXmitBuffer_0_EN;
    vlSelfRef.mkuart__DOT__x___05Fh3976 = ((IData)(vlSelfRef.mkuart__DOT__b___05Fh3894) 
                                           << 3U);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail_D_IN 
        = (0x1fU & (((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataAvail) 
                     + (IData)(vlSelfRef.mkuart__DOT__b___05Fh3894)) 
                    - (IData)(vlSelfRef.mkuart__DOT__b___05Fh4267)));
    VL_SHIFTR_WWI(128,128,8, vlSelfRef.mkuart__DOT__nextStorage___05Fh3765, vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage, 
                  ((IData)(vlSelfRef.mkuart__DOT__b___05Fh3894) 
                   << 3U));
    VL_SHIFTR_WWI(128,128,8, vlSelfRef.mkuart__DOT__nextMask___05Fh3766, vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask, 
                  ((IData)(vlSelfRef.mkuart__DOT__b___05Fh3894) 
                   << 3U));
    vlSelfRef.mkuart__DOT__value___05Fh4076 = (0x1fU 
                                               & ((IData)(vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount) 
                                                  - (IData)(vlSelfRef.mkuart__DOT__b___05Fh3894)));
    vlSelfRef.mkuart__DOT__nextMask___05Fh1618[0U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[0U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh1618[1U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[1U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh1618[2U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[2U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh1618[3U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorageMask_D_IN[3U];
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[0U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh1686[0U] 
           | vlSelfRef.mkuart__DOT__y___05Fh1687[0U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[1U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh1686[1U] 
           | vlSelfRef.mkuart__DOT__y___05Fh1687[1U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[2U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh1686[2U] 
           | vlSelfRef.mkuart__DOT__y___05Fh1687[2U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[3U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh1686[3U] 
           | vlSelfRef.mkuart__DOT__y___05Fh1687[3U]);
    vlSelfRef.mkuart__DOT__x___05Fh3839[0U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh3765[0U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh3766[0U]);
    vlSelfRef.mkuart__DOT__x___05Fh3839[1U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh3765[1U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh3766[1U]);
    vlSelfRef.mkuart__DOT__x___05Fh3839[2U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh3765[2U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh3766[2U]);
    vlSelfRef.mkuart__DOT__x___05Fh3839[3U] = (vlSelfRef.mkuart__DOT__nextStorage___05Fh3765[3U] 
                                               & vlSelfRef.mkuart__DOT__nextMask___05Fh3766[3U]);
    vlSelfRef.mkuart__DOT__x___05Fh4120 = ((IData)(vlSelfRef.mkuart__DOT__value___05Fh4076) 
                                           << 3U);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rDataCount_D_IN 
        = (0x1fU & ((IData)(vlSelfRef.mkuart__DOT__value___05Fh4076) 
                    + (IData)(vlSelfRef.mkuart__DOT__b___05Fh4267)));
    VL_SHIFTL_WWI(128,128,8, vlSelfRef.mkuart__DOT__enqData___05Fh3771, vlSelfRef.mkuart__DOT__x___05Fh4012, 
                  ((IData)(vlSelfRef.mkuart__DOT__value___05Fh4076) 
                   << 3U));
    VL_SHIFTL_WWI(128,128,8, vlSelfRef.mkuart__DOT__enqMask___05Fh3772, vlSelfRef.mkuart__DOT__x___05Fh4128, 
                  ((IData)(vlSelfRef.mkuart__DOT__value___05Fh4076) 
                   << 3U));
    vlSelfRef.mkuart__DOT__nextStorage___05Fh1617[0U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[0U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh1617[1U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[1U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh1617[2U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[2U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh1617[3U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoRecv_ifc_rStorage_D_IN[3U];
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[0U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh3766[0U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh3772[0U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[1U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh3766[1U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh3772[1U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[2U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh3766[2U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh3772[2U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[3U] 
        = (vlSelfRef.mkuart__DOT__nextMask___05Fh3766[3U] 
           | vlSelfRef.mkuart__DOT__enqMask___05Fh3772[3U]);
    vlSelfRef.mkuart__DOT__y___05Fh3840[0U] = (vlSelfRef.mkuart__DOT__enqData___05Fh3771[0U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh3772[0U]);
    vlSelfRef.mkuart__DOT__y___05Fh3840[1U] = (vlSelfRef.mkuart__DOT__enqData___05Fh3771[1U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh3772[1U]);
    vlSelfRef.mkuart__DOT__y___05Fh3840[2U] = (vlSelfRef.mkuart__DOT__enqData___05Fh3771[2U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh3772[2U]);
    vlSelfRef.mkuart__DOT__y___05Fh3840[3U] = (vlSelfRef.mkuart__DOT__enqData___05Fh3771[3U] 
                                               & vlSelfRef.mkuart__DOT__enqMask___05Fh3772[3U]);
    vlSelfRef.mkuart__DOT__nextMask___05Fh3774[0U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[0U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh3774[1U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[1U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh3774[2U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[2U];
    vlSelfRef.mkuart__DOT__nextMask___05Fh3774[3U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorageMask_D_IN[3U];
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[0U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh3839[0U] 
           | vlSelfRef.mkuart__DOT__y___05Fh3840[0U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[1U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh3839[1U] 
           | vlSelfRef.mkuart__DOT__y___05Fh3840[1U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[2U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh3839[2U] 
           | vlSelfRef.mkuart__DOT__y___05Fh3840[2U]);
    vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[3U] 
        = (vlSelfRef.mkuart__DOT__x___05Fh3839[3U] 
           | vlSelfRef.mkuart__DOT__y___05Fh3840[3U]);
    vlSelfRef.mkuart__DOT__nextStorage___05Fh3773[0U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[0U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh3773[1U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[1U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh3773[2U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[2U];
    vlSelfRef.mkuart__DOT__nextStorage___05Fh3773[3U] 
        = vlSelfRef.mkuart__DOT__uart_uart_fifoXmit_ifc_rStorage_D_IN[3U];
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/niranjan/Documents/Training_Projects/HDL_Codes/uart/verilog/mkuart.v", 49, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/niranjan/Documents/Training_Projects/HDL_Codes/uart/verilog/mkuart.v", 49, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/niranjan/Documents/Training_Projects/HDL_Codes/uart/verilog/mkuart.v", 49, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelfRef.RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((vlSelfRef.read_req_size & 0xfcU))) {
        Verilated::overWidthError("read_req_size");}
    if (VL_UNLIKELY((vlSelfRef.EN_read_req & 0xfeU))) {
        Verilated::overWidthError("EN_read_req");}
    if (VL_UNLIKELY((vlSelfRef.write_req_size & 0xfcU))) {
        Verilated::overWidthError("write_req_size");}
    if (VL_UNLIKELY((vlSelfRef.EN_write_req & 0xfeU))) {
        Verilated::overWidthError("EN_write_req");}
    if (VL_UNLIKELY((vlSelfRef.io_SIN & 0xfeU))) {
        Verilated::overWidthError("io_SIN");}
}
#endif  // VL_DEBUG
