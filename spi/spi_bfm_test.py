import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge

class slave:
    def __init__(self,dut):
        self.dut = dut
        self.clk = dut.clk
        self.rst = dut.RST_N
        self.write_addr = dut.mav_write_req_addr
        self.write_data = dut.mav_write_req_data
        self.write_size = dut.mav_write_req_size
        self.read_addr = dut.mav_read_req_addr
        self.read_size = dut.mav_read_req_size
        self.EN_write = dut.EN_mav_write_req
        self.EN_read = dut.EN_mav_read_req
        self.read_req = dut.mav_read_req
        self.mosi_in = dut.subifc_io_mosi_in_val
        self.ncs = dut.subifc_io_ncs_in_val
        self.sclk = dut.subifc_io_sclk_in_val
        self.miso = dut.subifc_io_miso_in_val
    
    async def slave_rx(self,tx_data):

        data =[]
        while( self.ncs == 1 ):
            await RisingEdge(self.sclk)
        for i in range(8):
            data.append(self.mosi_in.value)
            await RisingEdge(self.clk)
        data_str = ''.join(data)
        int_data = int(data_str,2)
        assert tx_data == int_data, f"Error in TX from SOC and RX in BFM ,, TX --> {tx_data} :: RX --> {int_data}"
    
    async def slave_tx(self,data,cpol,cpha):

        while( self.ncs == 1):
            await FallingEdge(self.sclk)
    
        for i in range(8):
            self.miso.value = int(data[i])
            await FallingEdge(self.sclk)



