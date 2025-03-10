
`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif



// A one bit data synchronization module, where data is synchronized
// by passing through 2 registers of the destination clock
module SyncBit (
                sCLK,
                sRST,
                dCLK,
                dRST,
                sEN,
                sD_IN,
                dD_OUT
                );
   parameter init = 1'b0;       // initial value for all registers

   // Signals on source clock (sCLK)
   input     sCLK;
   input     sRST;
   input     sEN;
   input     sD_IN;

   // Signals on destination clock (dCLK)
   input     dCLK;
   input     dRST;
   output    dD_OUT;

   reg       sSyncReg;
   reg       dSyncReg1, dSyncReg2;

   assign    dD_OUT = dSyncReg2 ;

   always @(posedge sCLK or `BSV_RESET_EDGE sRST)
      begin
         if (sRST == `BSV_RESET_VALUE)
            begin
               sSyncReg <= `BSV_ASSIGNMENT_DELAY init ;
            end // if (sRST == `BSV_RESET_VALUE)
         else
            begin
               if ( sEN )
                 begin
                    sSyncReg <= `BSV_ASSIGNMENT_DELAY (sD_IN == 1'b1) ? 1'b1 : 1'b0  ;
                 end // if ( sEN )
            end // else: !if(sRST == `BSV_RESET_VALUE)
      end // always @ (posedge sCLK or `BSV_RESET_EDGE sRST)

   always @(posedge dCLK or `BSV_RESET_EDGE dRST)
      begin
         if (dRST == `BSV_RESET_VALUE)
            begin
               dSyncReg1 <= `BSV_ASSIGNMENT_DELAY init ;
               dSyncReg2 <= `BSV_ASSIGNMENT_DELAY init ;
            end // if (sRST == `BSV_RESET_VALUE)
         else
            begin
               dSyncReg1 <= `BSV_ASSIGNMENT_DELAY sSyncReg ; // clock domain crossing
               dSyncReg2 <= `BSV_ASSIGNMENT_DELAY dSyncReg1 ;
            end // else: !if(sRST == `BSV_RESET_VALUE)
      end // always @ (posedge dCLK or `BSV_RESET_EDGE sRST)


`ifdef BSV_NO_INITIAL_BLOCKS
`else // not BSV_NO_INITIAL_BLOCKS
   // synopsys translate_off
   initial
      begin
         sSyncReg  = init ;
         dSyncReg1 = init ;
         dSyncReg2 = init ;
      end // initial begin
   // synopsys translate_on
`endif // BSV_NO_INITIAL_BLOCKS

endmodule // BitSync
