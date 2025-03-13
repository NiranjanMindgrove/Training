import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge
from cocotb.clock import Clock

class Master:

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
    
    async def comms_control_reg(self,lsb_msb,comm_mode,data_size):

        comms_ctrl_reg = (0<<0) | (1<<1) | (lsb_msb<<2) | (1<<3) | (comm_mode << 4) | (data_size << 6) | (0 << 14) | (1 << 22) | (1 << 23) | (0 << 24) | (1<<25)
        
        await RisingEdge(self.clk)

        self.EN_write.value = 1
        self.write_addr.value =  0x00
        self.write_size.value = 2
        self.write_data.value = comms_ctrl_reg

        await RisingEdge(self.clk)

        self.EN_write.value = 0
         
    async def clock_ctrl(self,cpol,cpha,prescalar,ss_tx_delay,tx_ss_delay):

        control_reg = (cpol<<0) | (cpha<<1) | (prescalar<<2) | (ss_tx_delay<<16) | (tx_ss_delay<<24)
        await RisingEdge(self.clk)

        self.EN_write.value = 1
        self.write_addr.value = 0x04
        self.write_size.value = 2
        self.write_data.value = control_reg
        
        await RisingEdge(self.clk)

        self.EN_write.value = 0
    
    async def read_reg(self,addr,size):

        await RisingEdge(self.clk)
        self.EN_read.value = 1
        self.read_addr.value = addr
        self.read_size.value = size
        reg_value = self.read_req.value

        await RisingEdge(self.clk)
        self.EN_read.value = 0
    
        return reg_value
    
    async def pre_process_tx_data(self, data, data_size):

        data_bin = bin(data)[2:]  # Ensure correct bit-length ------------------------------- If zfill is imposed, it should be to the nearest multiple of datasize for the whole binary sequence.
        step_size = {8: 8, 16: 16, 32: 32}.get(data_size, 8)  # Default to 8 if invalid
        
        return [int(data_bin[i:i+step_size], 2) for i in range(0, len(data_bin), step_size)]

    async def soc_tx(self,tx_data_list,data_size):

        #shift_map = {8: [8], 16: [5, 6, 7, 8], 32: [0]}

        for i in tx_data_list:
            
            await RisingEdge(self.clk)
            status_reg = await self.read_reg(0x14,2) #FIFO STATUS REG

            # if(data_size == 8):
            #     while( ((1<<8) & status_reg)):
            #         await RisingEdge(self.clk)
                
            # elif(data_size == 16):
            #     while( ((1<<5) & status_reg) | ((1<<6) & status_reg) | ((1<<7) & status_reg) | ((1<<8) & status_reg)):
            #         await RisingEdge(self.clk)
    
            # else:
            #     while( ((1<<1) & status_reg) | ((1<<2) & status_reg) | ((1<<3) & status_reg) | ((1<<4) & status_reg) | ((1<<5) & status_reg) | ((1<<6) & status_reg) | ((1<<7) & status_reg) | ((1<<8) & status_reg) ):
            #         await RisingEdge(self.clk)

            bit_mask = {8: 1<<8 , 
                        16: sum( 1 << i for i in range(5,9)),
                        32: sum( 1 << i for i in range(1,9)) }
            mask = bit_mask.get(data_size,bit_mask[8])

            while(status_reg & mask):
                await RisingEdge(self.clk)

            self.EN_write.value = 1
            self.write_addr.value =  0x08
            self.write_size.value = 2
            self.write_data.value = i

            await RisingEdge(self.clk)

            self.EN_write.value = 0

    async def soc_rx(self,rx_data,data_size):

        await RisingEdge(self.clk)
        status_reg = await self.read_reg(0x14,2) #FIFO STATUS REG

        # if(data_size == 8):
        #     while( ((1<<9) & status_reg)):
        #         await RisingEdge(self.clk)
            
        # elif(data_size == 16):
        #     while( ((1<<9) & status_reg) | ((1<<10) & status_reg) | ((1<<11) & status_reg) | ((1<<12) & status_reg)):
        #         await RisingEdge(self.clk)

        # else:
        #     while( ((1<<9) & status_reg) | ((1<<10) & status_reg) | ((1<<11) & status_reg) | ((1<<12) & status_reg)| ((1<<13) & status_reg)| ((1<<14) & status_reg) | ((1<<15) & status_reg) | ((1<<16) & status_reg) ):
        #         await RisingEdge(self.clk)

        bit_mask = {8: (1<<8),
                    16: ( (1<<i) for i in range(5,9)),
                    32: ( (1<<i) for i in range(1,9))
                    }
        mask = bit_mask.get(data_size,bit_mask[8])
        while(status_reg & mask):
            await RisingEdge(self.clk)

        self.EN_read.value = 1

        await RisingEdge(self.clk)
        rx_addr = 0x0C
        rx_size = 0 
        rx_reg = self.read_reg(rx_addr,rx_size)

        assert rx_data == rx_reg, f"Error in TX from BFM and RX in SOC ,, TX --> {rx_data} :: RX --> {rx_reg}"

    async def reset(self):
        
        await RisingEdge(self.clk)
        self.rst.value = 0

        await RisingEdge(self.clk)
        self.rst.value = 1


async def main(dut):

    lsb_msb = 0
    comm_mode = 0 
    data_size = 8
    cpol = 0
    cpha = 0
    prescalar = 0
    ss_tx_delay = 0
    tx_ss_delay = 0
    data = [10]

    spi_rtl = Master()

    cocotb.start_soon(Clock(dut.clk,1,units="ns").start())

    await spi_rtl.reset()

    await spi_rtl.comms_control_reg(lsb_msb,comm_mode,data_size)

    await spi_rtl.clock_ctrl(cpol,cpha,prescalar,ss_tx_delay,tx_ss_delay)        

    for i in data:
        tx_data_list = await spi_rtl.pre_process_tx_data(i, data_size)

        await spi_rtl.soc_tx(tx_data_list,data_size)