import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge
from cocotb.clock import Clock

async def recieve_bits(dut,tx_msg,stop,parity,char_size,baud):
    
    
    await FallingEdge(dut.io_SOUT)
    data = []
    rate = (10 ** 9) / (16 * baud)
    bit1_in_nsecs = (1/rate) * (10 ** 9)

    if (parity == 0):
        if (char_size == 0):
                data_size = 10
        elif (char_size == 1):
                data_size = 9
        elif (char_size == 2):
                data_size = 8
        elif (char_size == 3):
                data_size = 7
    elif (parity >= 3):
          print("PARITY UNDEFINED")
    else:
          if (char_size == 0):
                data_size = 11
          elif (char_size == 1):
                data_size = 10
          elif (char_size == 2):
                data_size = 9
          elif (char_size == 3):
                data_size = 8
          
    print(f"Bits in nsecs --> {bit1_in_nsecs}")
    await Timer(bit1_in_nsecs/2,'ns')

    for i in range(data_size):
        data.append(dut.io_SOUT.value)
        await Timer(bit1_in_nsecs, units = "ns")
        if(i == (data_size-1)): #For stop bits 1 and 2, the time period is extended
            if(stop == 1):
                await Timer(0.5*bit1_in_nsecs, units = "ns")
            elif(stop == 2):
                await Timer(1*bit1_in_nsecs, units = "ns")         
    print(type(data))
    
    if(parity == 0):
        data_str = "".join(str(i) for i in data[1:data_size-1])
    else:
        data_str = "".join(str(i) for i in data[1:data_size-2])
    print(f"Data in string --> {data_str}")
    data_int = int(data_str,2)

    assert (tx_msg) == (data_int) , f"Error TX --> {hex(tx_msg)} :: RX --> {hex(data_int)}"
    return data
    
async def transmit_bits(dut,rx_msg,stop,parity, char_size, baud):
    rx_msg_bin = bin(rx_msg)
    rx_msg_bin = rx_msg_bin[2:]

    count_ones = rx_msg_bin.count("1")  # Count the number of 1s in the binary representation
    if count_ones % 2 == 0:
        even = 1
        odd = 0
    else:
        odd = 1
        even = 0
            
    if (parity == 0):
        if (char_size == 0):
                data = 8
                data_size = 10
                rx_msg_bin = rx_msg_bin.rjust(data,'0')
                rx_msg_bin = '0' + rx_msg_bin + '1'

        elif (char_size == 1):
                data = 7
                data_size = 9
                rx_msg_bin = rx_msg_bin.rjust(data,'0')
                rx_msg_bin = '0' + rx_msg_bin + '1'
        elif (char_size == 2):
                data = 6
                data_size = 8
                rx_msg_bin = rx_msg_bin.rjust(data,'0')
                rx_msg_bin = '0' + rx_msg_bin + '1'
        elif (char_size == 3):
                data = 5
                data_size = 7
                rx_msg_bin = rx_msg_bin.rjust(data,'0')
                rx_msg_bin = '0' + rx_msg_bin + '1'

    elif (parity >= 3):
          print("PARITY UNDEFINED")
    elif(parity == 1):
            if (char_size == 0):
                    data = 8
                    data_size = 11
                    rx_msg_bin = rx_msg_bin.rjust(data,'0')
                    rx_msg_bin = '0' + rx_msg_bin + f"{odd}" +'1'
            elif (char_size == 1):
                    data = 7
                    data_size = 10
                    rx_msg_bin = rx_msg_bin.rjust(data,'0')
                    rx_msg_bin = '0' + rx_msg_bin + f"{odd}" +'1'
            elif (char_size == 2):
                    data = 6
                    data_size = 9
                    rx_msg_bin = rx_msg_bin.rjust(data,'0')
                    rx_msg_bin = '0' + rx_msg_bin + f"{odd}" +'1'
            elif (char_size == 3):
                    data = 5
                    data_size = 8
                    rx_msg_bin = rx_msg_bin.rjust(data,'0')
                    rx_msg_bin = '0' + rx_msg_bin + f"{odd}" +'1'
    elif(parity == 2):
        if (char_size == 0):
                data = 8
                data_size = 11
                rx_msg_bin = rx_msg_bin.rjust(data,'0')
                rx_msg_bin = '0' + rx_msg_bin + f"{even}" +'1'
        elif (char_size == 1):
                data = 7
                data_size = 10
                rx_msg_bin = rx_msg_bin.rjust(data,'0')
                rx_msg_bin = '0' + rx_msg_bin + f"{even}" +'1'
        elif (char_size == 2):
                data = 6
                data_size = 9
                rx_msg_bin = rx_msg_bin.rjust(data,'0')
                rx_msg_bin = '0' + rx_msg_bin + f"{even}" +'1'
        elif (char_size == 3):
                data = 5
                data_size = 8
                rx_msg_bin = rx_msg_bin.rjust(data,'0')
                rx_msg_bin = '0' + rx_msg_bin + f"{even}" +'1'

    rate = (10 ** 9) / (16 * baud)
    bit1_in_nsecs = (1/rate) * (10 ** 9)

    for i in range(len(rx_msg_bin)):
        dut.io_SIN.value = int(rx_msg_bin[i])
        await Timer(bit1_in_nsecs, units="ns")
        dut._log.info(f"Transmit message bits --> {dut.io_SIN.value}")
    await Timer(bit1_in_nsecs, units="ns") #Just giving it time to get the o/p
    return data_size
      