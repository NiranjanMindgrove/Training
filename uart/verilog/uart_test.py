import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge
from cocotb.clock import Clock
import math
import uart_bfm
import string


async def reset(dut):

    cocotb.start_soon(Clock(dut.CLK,1,"ns").start())
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 0

    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1

async def baud_inp(dut,baud_rate):
    baud = round((10 ** 9) / (baud_rate*16)) # Fin = 1 Ghz 

    await RisingEdge(dut.CLK)
    dut.EN_write_req.value = 1
    dut.write_req_addr.value = 0x00 #Address of the baud register
    dut.write_req_size.value = 1 #Write the baud register in 16 bits
    dut.write_req_data.value = baud
    dut._log.info(f"Baud Value --> {baud} ::: Binary Baud value --> {bin(baud)}")
     
    await RisingEdge(dut.CLK)
    dut.EN_write_req.value = 0
    return baud

async def control(dut, stop, parity, char_size):

    await RisingEdge(dut.CLK)

    control = f"{0}{stop:02b}{parity:02b}{char_size:02b}{0}"
    dut.EN_write_req.value = 1
    dut.write_req_addr.value = int("14",16)
    dut.write_req_size.value = 1
    dut.write_req_data.value = int(control,2)

    await RisingEdge(dut.CLK)
    dut.EN_write_req.value = 0

async def read_reg(dut,addr,size):
    
    await RisingEdge(dut.CLK)
    dut.EN_read_req.value = 1
    dut.read_req_addr.value = addr
    dut.read_req_size.value = size

    await RisingEdge(dut.CLK)
    reg_data = dut.read_req.value
    dut._log.info(f"reg contents for address {hex(addr)} and size {size} --> {reg_data}")

    await  RisingEdge(dut.CLK)
    dut.EN_read_req.value = 0

    return reg_data

# async def tx_full(dut, status_reg):

async def TX_reg_soc(dut, tx_msg):

    await RisingEdge(dut.CLK)

    dut.EN_write_req.value = 1
    dut.write_req_addr.value = int("04",16)
    dut.write_req_size.value = 0

    value = bin(tx_msg)
    print(value)
    value = value[2:]
    print(value)
    value = value.rjust(8,'0')
    print(value)
    value = value[::-1]
    print(value)
    value_bin = int(value,2)
    print(f"Value in binary --> {value_bin}")
    dut.write_req_data.value = value_bin 
    dut._log.info(f"Transmit Data --> {value_bin:08b}")
    await RisingEdge(dut.CLK)
    dut.EN_write_req.value = 0

async def tx_bfm_rx_soc(dut, rx_msg):
     rx_reg = await read_reg(dut, 0x8,0)
     rx_reg = bin(rx_reg)
     print(f"RX_rex binary --> {rx_reg}")
     rx_reg = rx_reg[26:33]
     rx_reg = rx_reg[::-1]
     assert rx_msg == int(rx_reg,2), f"Error Sent message --> {rx_msg} :: Recieved message --> {rx_reg}"


@cocotb.test()

async def main(dut):
    await reset(dut)
    dut.io_SIN.value = 1
    #Configure Baud Register
    baud_rate = 921600
    baud = await baud_inp(dut,baud_rate)

    #Configure Control Register
    stop = 0
    parity = 0
    char_size = 0 #00 - 8 bits , 01 - 7bits , 10 - 6 bits , 11 - 5 bits
    await control(dut, stop, parity, char_size)

    #Read the status register for finding the fifo not full value
    status_reg = await read_reg(dut, 0xC,1)
    
    #Check if TX full bit is set 
    a = 1 << 3 #TX FIFO FULL BIT
    b = 1 << 5 #RX FIFO FULL BIT
    if(a & status_reg):
        print("TX FIFO FULL")
    elif((b & status_reg)):
        print("RX FIFO FULL")
    else:
        #Write in TX reg
        print("TX FIFO not FULL")
        tx_msg = 0x80
        data = cocotb.start_soon(uart_bfm.recieve_bits(dut,tx_msg,stop,parity,char_size, baud))
        await TX_reg_soc(dut, tx_msg)   

    data1 =await data
    print(f"Data recieved in UART BFM --> {data1}")

    #Check status register for RX_not full
    status_rx_full = await read_reg(dut,0xC,1)
    c = 1<< 5
    if(c & status_rx_full):
        print("RX FULL, Reception failed")
    else:
        rx_msg = 127
        await uart_bfm.transmit_bits(dut,rx_msg,stop,parity, char_size,  baud)
    
    # await Timer(100, units="us")
    #Read the RX reg
    
    
    await tx_bfm_rx_soc(dut, rx_msg)

    #Check for TX full
    # await tx_full(dut, status_reg)



    
    

    
    
