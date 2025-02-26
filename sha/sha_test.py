import cocotb
import cocotb.clock
from cocotb.triggers import RisingEdge, FallingEdge
from cocotb.clock import Clock
from cocotb.regression import TestFactory
import random as random
import string
import hashlib
import math

def encode_message(message):
    """Encodes a message into a 512-bit integer following the given rules."""
    message_bits = ''.join(format(ord(c), '08b') for c in message)  # Convert message to binary
    message_length = len(message_bits)
    print(f"Message length --> {message_length}")
    n = math.ceil(message_length/512)
    print(f"No of chunks --> {n}")


    if message_length >= ( (512*n) - 64):

        # Append '1' to the message bits
        message_bits += '1'
        
        # Pad with '0' until reaching a multiple of 512 bits
        message_bits = message_bits.ljust( (512*(n+1)) - 64 , '0')
        print(f"Message bits --> {message_bits}")
        
        # Append 64-bit representation of message length
        length_bits = format(message_length, '064b')
        
        # Combine into a full 512-bit binary string
        full_bits = message_bits + length_bits
        print(f"Full bits --> {full_bits}")

    else:
        # Append '1' to the message bits
        message_bits += '1'
        
        # Pad with '0' until reaching 448 bits
        message_bits = message_bits.ljust( ( (512*(n)) - 64 ), '0')
        
        # Append 64-bit representation of message length
        length_bits = format(message_length, '064b')
        
        # Combine into a full 512-bit binary string
        full_bits = message_bits + length_bits

    chunk_bin = []
    chunk_int = []
    print(f"Full bits length --> {len(full_bits)}")
    for i in range(0, len(full_bits), 512):
        chunk_bin.append(full_bits[i:i+512]) 
    for j in range(len(chunk_bin)):
        chunk_int.append(int(chunk_bin[j], 2))
    print(chunk_int)
    
    return chunk_int

async def input(test_message,dut):
    dut._log.info(f"Test message --> {test_message}")

async def reset(dut):

    await cocotb.start(Clock(dut.CLK, 1,"ns").start())
    #Enable pin high to give Reset signal
    await RisingEdge(dut.CLK)
    dut.EN_reset.value = 1
    
    #In next clock set Reset signal high and turn low in one clock cycle
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1

    #In next clock set enable reset signal low
    await RisingEdge(dut.CLK)
    dut.EN_reset.value = 0

async def drive_input(test_message, dut):

    encoded_values = []
    encoded_values = encode_message(test_message)
    dut._log.info(f"Encoded values --> {encoded_values}")

    #Wait for the next clock cycle to set the enable signal for getting the input message
    await RisingEdge(dut.CLK)
    out = 0x6a09e667bb67ae853c6ef372a54ff53a510e527f9b05688c1f83d9ab5be0cd19
    
    for i in range(len(encoded_values)):
        dut.EN_input_engine.value = 1
        dut.input_engine_pre_hash = out
        dut.input_engine_input_val.value = encoded_values[i]

        await RisingEdge(dut.CLK)
        dut.EN_input_engine.value = 0
        dut._log.info(f"EN_input_engine: {dut.EN_input_engine.value}")
    
        await RisingEdge(dut.RDY_output_engine_get)
        dut.EN_output_engine_get.value = 1
        out = dut.output_engine_get.value

        await FallingEdge(dut.RDY_output_engine_get)
        dut.EN_output_engine_get.value = 0

        await RisingEdge(dut.CLK)
        
    out = bin(out) #Changing the output to binary format for comparison
    dut._log.info(f"Actual output --> {out}")

    return out
    
async def reference_out(test_message,dut):
    sha256_code = hashlib.sha256()
    input = sha256_code.update(test_message.encode())
    output = sha256_code.hexdigest()
    output = bin(int(output,16))
    dut._log.info(f"""Reference out --> {output} """)
    return output

async def scoreboard(out,output):
    assert out == output, f"Error --> Reference out : {output} obtained_result : {hex(out)} "

async def main(dut, test_message):
    await reset(dut)

    # #Enter the input message
    # file = open("sha.txt","r")
    # test_message = file.read()

    #Actual output from the DUT
    out = await drive_input(test_message, dut) 

    #Reference model output
    output = await reference_out(test_message,dut) 

    #Comparing the actual output with the reference model output
    await scoreboard(out,output) 


list1 = [48,54,55,56,63,64,65,118,119,120,121,122,123,184]
msg = []
for i in range(len(list1)):
    characters = string.ascii_letters + string.digits 
    x = ''.join(random.choices(characters, k = list1[i]))
    msg.append(x)

print(msg)
tf = TestFactory(main)
tf.add_option("test_message", msg)
tf.generate_tests()