import cocotb
from cocotb.triggers import Timer, RisingEdge, FallingEdge


async def recieve_bits(dut,tx_msg,stop,parity,char_size,baud):
    
    
    await FallingEdge(dut.io_SOUT)
    data = []
    rate = (10 ** 9) / (16 * baud)
    bit1_in_nsecs = (1/rate) * (10 ** 9)

    data_size,odd,even = await parity_checker(dut,tx_msg,parity,char_size)
          
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
        dut._log.info(f"DATA --> {data}")        
    print(data)

    if(parity == 0):
        data_str = "".join(str(i) for i in data[1:data_size-1])
    else:
        data_str = "".join(str(i) for i in data[1:data_size-2])
    print(f"Data in string --> {data_str}")
    data_int = int(data_str,2)
    dut._log.info(f"Transmitted Integer value from SOC --> {tx_msg}")
    dut._log.info(f"Recieved Integer value in BFM --> {data_int}") 
    assert (tx_msg) == (data_int) , f"Error TX --> {hex(tx_msg)} :: RX --> {hex(data_int)}"
    
    if(parity == 1): #Odd Parity
          assert data[-2] == odd , f"Error for Odd Parity --> Recieved Data's Parity -> {data[-2]} :: Parity from the given data in TX -> {odd}" 
    elif(parity == 2): #Even Parity
          assert data[-2] == even , f"Error for Even Parity --> Recieved Data's Parity -> {data[-2]} :: Parity from the given data in TX -> {odd}"
    return data
    
async def transmit_bits(dut,rx_msg,stop,parity, char_size, baud):
    
    data_size,odd,even = parity_checker(dut,rx_msg,parity,char_size)
            
    if (parity == 0):
            data = 8-char_size
            rx_msg_bin = '0'+rx_msg_bin.rjust(data,'0')+'1'

    elif(parity == 1):
        data = 8-char_size 
        rx_msg_bin = '0' + rx_msg_bin.rjust(data,'0') + f"{odd}" +'1'

    elif(parity == 2):
        data = 8-char_size 
        rx_msg_bin = '0' + rx_msg_bin.rjust(data,'0') + f"{even}" +'1'

    rate = (10 ** 9) / (16 * baud)
    bit1_in_nsecs = (1/rate) * (10 ** 9)

    for i in range(len(rx_msg_bin)):
        dut.io_SIN.value = int(rx_msg_bin[i])
        await Timer(bit1_in_nsecs, units="ns")
        dut._log.info(f"Transmit message bits --> {dut.io_SIN.value}")
    await Timer(bit1_in_nsecs, units="ns") #Just giving it time to get the o/p
    return data_size
      
async def parity_checker(dut,tx_msg,parity,char_size):
      #PARITY CHECKER
    tx_msg_bin = bin(tx_msg)
    count_ones = tx_msg_bin.count("1")  # Count the number of 1s in the binary representation
    if count_ones % 2 == 0:
        even = 0
        odd = 1
    else:
        odd = 0
        even = 1
    print(f"odd --> {odd} : Even --> {even}")

    if (parity == 0):
        data_size = 10-char_size
        
    else:
          data_size = 10-char_size+1
    return data_size,odd,even