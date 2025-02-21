import cocotb
import cocotb.clock
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock
import hashlib

def encode_message(message):
    """Encodes a message into a 512-bit integer following the given rules."""
    message_bits = ''.join(format(ord(c), '08b') for c in message)  # Convert message to binary
    message_length = len(message_bits)
    
    if message_length > 447:
        raise ValueError("Message too long to fit in 448 bits")
    
    # Append '1' to the message bits
    message_bits += '1'
    
    # Pad with '0' until reaching 448 bits
    message_bits = message_bits.ljust(448, '0')
    
    # Append 64-bit representation of message length
    length_bits = format(message_length, '064b')
    
    # Combine into a full 512-bit binary string
    full_bits = message_bits + length_bits
    return int(full_bits, 2)

    
@cocotb.test()

async def single_chunk(dut):

    await cocotb.start(Clock(dut.CLK, 1,"ns").start())
    """Testbench to drive a 512-bit input signal in a Verilog module following the specified encoding.""" 

    #Reset signal
    await RisingEdge(dut.CLK)
    dut.EN_reset.value = 1

    await RisingEdge(dut.CLK)
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1

    await RisingEdge(dut.CLK)
    dut.EN_reset.value = 0

    

    #Setting the enable signal for getting the input message
    await RisingEdge(dut.CLK)
    dut.EN_input_engine.value = 1

    test_message = "Hello, Cocotb!"
    encoded_value = encode_message(test_message)
    dut.input_engine_input_val.value = encoded_value

    dut.input_engine_pre_hash = 0x6a09e667bb67ae853c6ef372a54ff53a510e527f9b05688c1f83d9ab5be0cd19

    await RisingEdge(dut.CLK)
    dut.EN_input_engine.value = 0
    dut._log.info(f"EN_input_engine: {dut.EN_input_engine.value}")

    
    #Initialize Hash Value
    await RisingEdge(dut.CLK)
    dut._log.info(f"Initial Hash values in Binary format --> {dut.input_engine_pre_hash}")
    
    await RisingEdge(dut.RDY_output_engine_get)
    dut.EN_output_engine_get.value = 1

    await RisingEdge(dut.CLK)
    out = dut.output_engine_get.value
    out = bin(out) #Changing the output to binary format for comparison
    dut._log.info(f"Actual output --> {out}")

    #Reference model output
    sha256_code = hashlib.sha256()
    input = sha256_code.update(b"Hello, Cocotb!")
    output = sha256_code.hexdigest()
    output = bin(int(output,16))

    dut._log.info(f"Reference model output --> {output}")
    dut._log.info(f"Type ref_out --> {type(output)} ------>>>> Type actual_out --> {type(out)}")
    assert out == output, f"Error --> Reference out : {output} obtained_result : {hex(out)} "

