import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge
from cocotb.clock import Clock
import uart_bfm_1



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

    control = f"{0}{char_size:02b}{parity:02b}{stop:02b}{0}"
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

async def TX_reg_soc(dut, tx_msg, char_size):

    await RisingEdge(dut.CLK)

    dut.EN_write_req.value = 1
    dut.write_req_addr.value = int("04",16)
    dut.write_req_size.value = 0

    if(char_size == 0):
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
    elif(char_size == 1):
        value = bin(tx_msg)
        print(value)
        value = value[2:]
        print(value)
        value = value.rjust(8,'0')
        print(value)
        value = value[::-1]
        print(value)
        value = value[-1] + value[:-1]
        print(f"Value after right shift -- > {value}")
        value_bin = int(value,2)
        print(value)
        print(f"Value in binary --> {value_bin}")
        dut.write_req_data.value = value_bin 
        dut._log.info(f"Transmit Data --> {value_bin:08b}")
        await RisingEdge(dut.CLK)
        dut.EN_write_req.value = 0
    elif(char_size == 2):
        value = bin(tx_msg)
        print(value)
        value = value[2:]
        print(value)
        value = value.rjust(8,'0')
        print(value)
        value = value[::-1]
        print(value)
        value = value[-2:] + value[:-2]
        print(f"Value after right shift -- > {value}")
        value_bin = int(value,2)
        print(value)
        print(f"Value in binary --> {value_bin}")
        dut.write_req_data.value = value_bin 
        dut._log.info(f"Transmit Data --> {value_bin:08b}")
        await RisingEdge(dut.CLK)
        dut.EN_write_req.value = 0
    elif(char_size == 3):
        value = bin(tx_msg)
        print(value)
        value = value[2:]
        print(value)
        value = value.rjust(8,'0')
        print(value)
        value = value[::-1]
        print(value)
        value = value[-3:] + value[:-3]
        print(f"Value after right shift -- > {value}")
        value_bin = int(value,2)
        print(value)
        print(f"Value in binary --> {value_bin}")
        dut.write_req_data.value = value_bin 
        dut._log.info(f"Transmit Data --> {value_bin:08b}")
        await RisingEdge(dut.CLK)
        dut.EN_write_req.value = 0
        

async def tx_bfm_rx_soc(dut, rx_msg, char_size):
    rx_reg = await read_reg(dut, 0x8,0)
    rx_reg = str(rx_reg)
    print(f"RX_rex binary --> {rx_reg}")

    # if(char_size == 0):
    rx_reg = rx_reg[24+char_size:32]
    print(f"Before reversal --> {rx_reg}")
    #     rx_reg = rx_reg.ljust(8,'0')
    # elif(char_size == 1):
    #     rx_reg = rx_reg[25:32]
    #     print(f"Before reversal --> {rx_reg}")
    #     rx_reg = rx_reg.ljust(7,'0')
    # elif(char_size == 2):
    #     rx_reg = rx_reg[26:32]
    #     print(f"Before reversal --> {rx_reg}")
    #     rx_reg = rx_reg.ljust(6,'0')
    # elif(char_size == 3):
    #     rx_reg = rx_reg[27:32]
    #     print(f"Before reversal --> {rx_reg}")
    #     rx_reg = rx_reg.ljust(5,'0')

    rx_reg = rx_reg[::-1]
    print(rx_reg)
    assert rx_msg == int(rx_reg,2), f"Error Sent message --> {rx_msg} :: Recieved message --> {rx_reg}"
    print("DATA RECIEVED SUCCESSFULLY FROM BFM TO RTL")


async def inputs(dut):

    baud_rate = 921600
    stop = 2
    parity = 2
    char_size = 3
     

    a = 1 << 3 #TX FIFO FULL BIT
    b = 1 << 5 #RX FIFO FULL BIT
    tx_msg_full = 127
    c = 1<< 5
    rx_msg_full = 127

    dut._log.info(f"Data from SOC to BFM --> {bin(tx_msg_full)}")
    dut._log.info(f"Data from BFM to SOC --> {bin(rx_msg_full)}")

    return dut,baud_rate,stop,parity,char_size,a,b,c,tx_msg_full,rx_msg_full

# async def scoreboard(dut, parity_error_bit, tx_soc_rx_bfm_parity, data1):

#     assert parity_error_bit == 0 , f"Error in parity bit (Message sent from BFM to SOC)"
#     assert tx_soc_rx_bfm_parity == data1[-2], f"Error in parity bit (Message sent from SOC to BFM)"


@cocotb.test()
    
async def main(dut):

    dut,baud_rate,stop,parity,char_size,a,b,c,tx_msg_full,rx_msg_full = await inputs(dut)

    await reset(dut)
    dut.io_SIN.value = 1

    #Configure Baud Register
    baud = await baud_inp(dut,baud_rate)

    #Configure Control Register
     #00 - 8 bits , 01 - 7bits , 10 - 6 bits , 11 - 5 bits
    await control(dut, stop, parity, char_size)

    #Read Control register
    control_reg = await read_reg(dut,0x14,1)

    #Read the status register for finding the fifo not full value
    status_reg = await read_reg(dut, 0xC,1)
    
    #Check if TX full bit is set 

    if(a & status_reg):
        print("TX FIFO FULL")
    elif((b & status_reg)):
        print("RX FIFO FULL")
    else:
        print("TX FIFO not FULL")
        tx_msg_lst = []
        dut._log.info(f"Input in Binary --> {bin(tx_msg_full)}")
        tx_msg_full_bin = bin(tx_msg_full)
        tx_msg_full_bin = tx_msg_full_bin[2:]

        if(char_size == 0):
            length = len(tx_msg_full_bin)
            padded_tx_msg = tx_msg_full_bin.zfill((length + 7) // 8 * 8)

            for i in range(0,len(padded_tx_msg),8):
                tx_msg_lst.append(padded_tx_msg[i:i+8])
            print(tx_msg_lst)

        elif(char_size == 1):
            length = len(tx_msg_full_bin)
            print("Entered in this loop")
            padded_tx_msg = tx_msg_full_bin.zfill((length + 6) // 7 * 7)  # Pad to nearest multiple of 7

            for i in range(0,len(padded_tx_msg),7):
                tx_msg_lst.append(padded_tx_msg[i:i+7])
            print(tx_msg_lst)

        elif(char_size == 2):
            length = len(tx_msg_full_bin)
            print("Entered in this loop")
            padded_tx_msg = tx_msg_full_bin.zfill((length + 5) // 6 * 6)  # Pad to nearest multiple of 7

            for i in range(0,len(padded_tx_msg),6):
                tx_msg_lst.append(padded_tx_msg[i:i+6])
            print(tx_msg_lst)

        elif(char_size == 3):
            length = len(tx_msg_full_bin)
            print("Entered in this loop")
            padded_tx_msg = tx_msg_full_bin.zfill((length + 4) // 5 * 5)  # Pad to nearest multiple of 7

            for i in range(0,len(padded_tx_msg),5):
                tx_msg_lst.append(padded_tx_msg[i:i+5])
            print(tx_msg_lst)

        for i in tx_msg_lst:
            tx_msg = int(i,2)

            data = cocotb.start_soon(uart_bfm_1.recieve_bits(dut,tx_msg,stop,parity,char_size, baud))
            await TX_reg_soc(dut, tx_msg, char_size)   

            data1 =await data
            print(f"Data recieved in UART BFM --> {data1}")
 
    #Check status register for RX_not full
    status_rx_full = await read_reg(dut,0xC,1)
    
    if(c & status_rx_full):
        print("RX FULL, Reception failed")
    else:
        rx_msg_lst = []
        
        rx_msg_full_bin = bin(rx_msg_full)
        dut._log.info(f"Message about to be transmitted from BFM --> {rx_msg_full_bin}")
        
        rx_msg_full_bin = rx_msg_full_bin[2:]
        if(char_size == 0):
            length = len(rx_msg_full_bin)
            padded_rx_msg = rx_msg_full_bin.zfill((length + 7) // 8 * 8)

            for i in range(0,len(padded_rx_msg),8):
                tx_msg_lst.append(padded_rx_msg[i:i+8])
            print(rx_msg_lst)

        elif(char_size == 1):
            length = len(rx_msg_full_bin)
            print("Entered in this loop")
            padded_rx_msg = rx_msg_full_bin.zfill((length + 6) // 7 * 7)  # Pad to nearest multiple of 7

            for i in range(0,len(padded_rx_msg),7):
                rx_msg_lst.append(padded_rx_msg[i:i+7])
            print(f"RX MSG LIST -- > {rx_msg_lst}")

        elif(char_size == 2):
            length = len(rx_msg_full_bin)
            print("Entered in this loop")
            padded_rx_msg = rx_msg_full_bin.zfill((length + 5) // 6 * 6)  # Pad to nearest multiple of 6

            for i in range(0,len(padded_rx_msg),6):
                rx_msg_lst.append(padded_rx_msg[i:i+6])
            print(f"RX MSG LIST -- > {rx_msg_lst}")
        
        elif(char_size == 3):
            length = len(rx_msg_full_bin)
            print("Entered in this loop")
            padded_rx_msg = rx_msg_full_bin.zfill((length + 4) // 5 * 5)  # Pad to nearest multiple of 5

            for i in range(0,len(padded_rx_msg),5):
                rx_msg_lst.append(padded_rx_msg[i:i+5])
            print(f"RX MSG LIST -- > {rx_msg_lst}")
    
    for i in rx_msg_lst:
        rx_msg = int(i,2)
        await uart_bfm_1.transmit_bits(dut,rx_msg,stop,parity, char_size,  baud)
        await tx_bfm_rx_soc(dut, rx_msg, char_size)
        parity_status = await read_reg(dut, 0xC, 1)
        parity_error_bit = parity_status[-6]

        assert parity_error_bit == 0, f"Error in Parity (Message from BFM to SOC)"