import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge
from cocotb.clock import Clock
import uart_bfm_1
from cocotb.regression import TestFactory


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
        value = format(tx_msg, "08b")[::-1]
 
        value_bin = int(value,2)
        print(f"Value in binary --> {value_bin}")
        dut.write_req_data.value = value_bin 
        dut._log.info(f"Transmit Data --> {value_bin:08b}")
        
    else:
        value = format(tx_msg, "08b")[::-1]
        value = value[-(char_size)] + value[:-(char_size)] #Right shift Each bit to the corresponding character positions

        print(f"Value after right shift -- > {value}")
        value_bin = int(value,2)
 
        print(f"Value in binary --> {value_bin}")
        dut.write_req_data.value = value_bin 
        dut._log.info(f"Transmit Data --> {value_bin:08b}")
    await RisingEdge(dut.CLK)
    dut.EN_write_req.value = 0
    
async def tx_bfm_rx_soc(dut, rx_msg, char_size):
    rx_reg = await read_reg(dut, 0x8,0)
    rx_reg = str(rx_reg)
    print(f"RX_rex binary --> {rx_reg}")

    rx_reg = rx_reg[24+char_size:32]
    print(f"Before reversal --> {rx_reg}")

    rx_reg = rx_reg[::-1]
    print(rx_reg)
    assert rx_msg == int(rx_reg,2), f"Error Sent message --> {rx_msg} :: Recieved message --> {rx_reg}"
    print("DATA RECIEVED SUCCESSFULLY FROM BFM TO RTL")

async def transmitter(dut,a,tx_msg_full_list,char_size,stop,parity,baud):

    status_reg = await read_reg(dut, 0xC,1)

    while( (a & status_reg) != 1):
        print("TX FIFO FULL")
        for i in tx_msg_full_list:
            tx_msg_full = i
            tx_msg_lst = []
            dut._log.info(f"Input in Binary --> {bin(tx_msg_full)}")
            tx_msg_full_bin = format(tx_msg_full, "b")
            length = len(tx_msg_full_bin)
                
            padded_tx_msg = tx_msg_full_bin.zfill((length + (8-char_size-1)) // (8-char_size) * (8-char_size))

            for i in range(0,len(padded_tx_msg),8-char_size):
                tx_msg_lst.append(padded_tx_msg[i:i+(8-char_size)])
            print(tx_msg_lst)

            for i in tx_msg_lst:
                tx_msg = int(i,2)

                data = cocotb.start_soon(uart_bfm_1.recieve_bits(dut,tx_msg,stop,parity,char_size, baud))
                await TX_reg_soc(dut, tx_msg, char_size)   

                data1 =await data
                print(f"Data recieved in UART BFM --> {data1}")
        break

async def reciever(dut,char_size,stop,parity,baud,c,rx_msg_full_list):
    status_rx_full = await read_reg(dut,0xC,1)
    
    while ( (c & status_rx_full) != 1):
        for i in rx_msg_full_list:
            rx_msg_full = i
            rx_msg_lst = []
            
            rx_msg_full_bin = format(rx_msg_full,"b")
            dut._log.info(f"Message about to be transmitted from BFM --> {rx_msg_full_bin}")
            length = len(rx_msg_full_bin)
            
            padded_rx_msg = rx_msg_full_bin.zfill((length + (8-char_size-1) ) // (8-char_size) * (8-char_size))

            for i in range(0,len(padded_rx_msg),(8-char_size)):
                rx_msg_lst.append(padded_rx_msg[i:i+((8-char_size))])
            print(f"RX MSG LIST -- > {rx_msg_lst}")
        
            for i in rx_msg_lst:
                rx_msg = int(i,2)
                await uart_bfm_1.transmit_bits(dut,rx_msg,stop,parity, char_size,  baud)
                await tx_bfm_rx_soc(dut, rx_msg, char_size)
                parity_status = await read_reg(dut, 0xC, 1)
                parity_error_bit = parity_status[-6]

                assert parity_error_bit == 0, f"Error in Parity (Message from BFM to SOC)"
    
        break

async def half_duplex(dut,a,tx_msg_full_list,char_size,stop,parity,baud,c,rx_msg_full_list):

    #Read the status register for finding the fifo not full value
    status_reg = await read_reg(dut, 0xC,1)

    while( (a & status_reg) != 1):
        print("TX FIFO FULL")
        for i in tx_msg_full_list:
            tx_msg_full = i
            tx_msg_lst = []
            dut._log.info(f"Input in Binary --> {bin(tx_msg_full)}")
            tx_msg_full_bin = format(tx_msg_full, "b")
            length = len(tx_msg_full_bin)
                
            padded_tx_msg = tx_msg_full_bin.zfill((length + (8-char_size-1)) // (8-char_size) * (8-char_size))

            for i in range(0,len(padded_tx_msg),8-char_size):
                tx_msg_lst.append(padded_tx_msg[i:i+(8-char_size)])
            print(tx_msg_lst)

            for i in tx_msg_lst:
                tx_msg = int(i,2)

                data = cocotb.start_soon(uart_bfm_1.recieve_bits(dut,tx_msg,stop,parity,char_size, baud))
                await TX_reg_soc(dut, tx_msg, char_size)   

                data1 =await data
                print(f"Data recieved in UART BFM --> {data1}")
        break


    #Check status register for RX_not full
    status_rx_full = await read_reg(dut,0xC,1)
    
    while ( (c & status_rx_full) != 1):
        for i in rx_msg_full_list:
            rx_msg_full = i
            rx_msg_lst = []
            
            rx_msg_full_bin = format(rx_msg_full,"b")
            dut._log.info(f"Message about to be transmitted from BFM --> {rx_msg_full_bin}")
            length = len(rx_msg_full_bin)
            
            padded_rx_msg = rx_msg_full_bin.zfill((length + (8-char_size-1) ) // (8-char_size) * (8-char_size))

            for i in range(0,len(padded_rx_msg),(8-char_size)):
                rx_msg_lst.append(padded_rx_msg[i:i+((8-char_size))])
            print(f"RX MSG LIST -- > {rx_msg_lst}")
        
            for i in rx_msg_lst:
                rx_msg = int(i,2)
                await uart_bfm_1.transmit_bits(dut,rx_msg,stop,parity, char_size,  baud)
                await tx_bfm_rx_soc(dut, rx_msg, char_size)
                parity_status = await read_reg(dut, 0xC, 1)
                parity_error_bit = parity_status[-6]

                assert parity_error_bit == 0, f"Error in Parity (Message from BFM to SOC)"
    
        break

async def full_duplex(dut,a,tx_msg_full_list,char_size,stop,parity,baud,c,rx_msg_full_list):

    cocotb.start_soon(transmitter(dut,a,tx_msg_full_list,char_size,stop,parity,baud))

    await reciever(dut,char_size,stop,parity,baud,c,rx_msg_full_list)


async def main(dut,baud_rate,stop,parity,char_size,tx_msg_full_list,rx_msg_full_list,mode):

    await reset(dut)
    dut.io_SIN.value = 1

    a = 1 << 3 #TX FIFO FULL BIT
    #RX FIFO FULL BIT
    c = 1<< 5
    #Configure Baud Register
    baud = await baud_inp(dut,baud_rate)

    #Configure Control Register
     #00 - 8 bits , 01 - 7bits , 10 - 6 bits , 11 - 5 bits
    await control(dut, stop, parity, char_size)

    #Read Control register
    control_reg = await read_reg(dut,0x14,1)
    
    if(mode == 0):
        await transmitter(dut,a,tx_msg_full_list,char_size,stop,parity,baud)
    elif(mode == 1):
        await reciever(dut,char_size,stop,parity,baud,c,rx_msg_full_list)
    elif(mode == 2):
        await half_duplex(dut,a,tx_msg_full_list,char_size,stop,parity,baud,c,rx_msg_full_list)
    else:
        await full_duplex(dut,a,tx_msg_full_list,char_size,stop,parity,baud,c,rx_msg_full_list)
    

async def inputs(dut,baud_rate,stop,parity,char_size,tx_msg_full,rx_msg_full,mode):

    await main(dut,baud_rate,stop,parity,char_size,tx_msg_full,rx_msg_full,mode)
    for i in tx_msg_full:
        dut._log.info(f"Data from SOC to BFM --> {bin(i)}")
    for j in rx_msg_full:    
        dut._log.info(f"Data from BFM to SOC --> {bin(j)}")
    
tf = TestFactory(inputs)
tf.add_option("baud_rate",[62500000])
tf.add_option("stop",[0,1,2])
tf.add_option("parity",[0,1,2])
tf.add_option("char_size",[0,1,2,3])
tf.add_option(name = 'tx_msg_full', optionlist =[[0x8f,0xb5,0xc5,0xff], [0x01,0x05,0xab], [0xcb,0xbf,0x55], [0xca,0x23,0x81], [0x58,0xcf,0xad], [0xae,0xef,0xed], [0xeb,0xbc,0xbe], [0x12,0x57,0x89], [0xcd,0xba,0xbf], [0xfa,0xcd], [0xad,0x82,0xcd], [0xfb, 0xfa, 0xef], [0xff, 0xfa,0xfb], [0xaa,0xbb, 0xcc], [0xdd,0xee], [0x8f,0xb5,0xc5,0xff], [0x01,0x05,0xab], [0xcb,0xbf,0x55], [0xca,0x23,0x81], [0x58,0xcf,0xad], [0xae,0xef,0xed], [0xeb,0xbc,0xbe], [0x12,0x57,0x89], [0xcd,0xba,0xbf], [0xfa,0xcd], [0xad,0x82,0xcd], [0xfb, 0xfa, 0xef], [0xff, 0xfa,0xfb], [0xaa,0xbb, 0xcc], [0xdd,0xee]])
#tf.add_option(name = 'rx_msg_full', optionlist =[[0x8f,0xb5,0xc5,0xff], [0x01,0x05,0xab], [0xcb,0xbf,0x55], [0xca,0x23,0x81], [0x58,0xcf,0xad], [0xae,0xef,0xed], [0xeb,0xbc,0xbe], [0x12,0x57,0x89], [0xcd,0xba,0xbf], [0xfa,0xcd], [0xad,0x82,0xcd], [0xfb, 0xfa, 0xef], [0xff, 0xfa,0xfb], [0xaa,0xbb, 0xcc], [0xdd,0xee], [0x8f,0xb5,0xc5,0xff], [0x01,0x05,0xab], [0xcb,0xbf,0x55], [0xca,0x23,0x81], [0x58,0xcf,0xad], [0xae,0xef,0xed], [0xeb,0xbc,0xbe], [0x12,0x57,0x89], [0xcd,0xba,0xbf], [0xfa,0xcd], [0xad,0x82,0xcd], [0xfb, 0xfa, 0xef], [0xff, 0xfa,0xfb], [0xaa,0xbb, 0xcc], [0xdd,0xee]])

# tf.add_option("tx_msg_full",[[0x20,127,321321,12,12,1,12,12,1,12,12,12,12,1,21,21,21,2,12,1,2,12,12,1,21,2,12,12,1,21,2,12,1,21,1,2,1,2,1,212,1,12,1,1,1,2,12,1,211211,1212,121221121,12,12,212,12,1,21,2]])
tf.add_option("rx_msg_full",[[127,23132,12,5]])
tf.add_option("mode",[0,1,2,3])
tf.generate_tests()


@cocotb.test()

async def inputs(dut):

    baud_rate = 921600
    stop = 0
    parity = 0
    char_size = 0
    mode = 0 #0 - transmitter; 1- reciever; 2- half duplex; 3 - full duplex
     
    tx_msg_full = [127,1234814]
    rx_msg_full = [5]
    
    await main(dut,baud_rate,stop,parity,char_size,tx_msg_full,rx_msg_full,mode)

    for i in tx_msg_full:
        dut._log.info(f"Data from SOC to BFM --> {bin(i)}")
    for j in rx_msg_full:    
        dut._log.info(f"Data from BFM to SOC --> {bin(j)}")

    
