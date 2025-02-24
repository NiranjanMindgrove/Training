import cocotb
import cocotb.clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge
from cocotb.clock import Clock
import hashlib

def encode_message(message):
    """Encodes a message into a 512-bit integer following SHA-256 padding rules."""
    message_bits = ''.join(format(ord(c), '08b') for c in message)  # Convert to binary
    message_length = len(message_bits)

    if message_length > 440:
        chunks = ((message_length + 72) // 512)
        message_bits += '1'
        message_bits = message_bits.ljust(512 * chunks, '0')
        length_bits = format(message_length, '064b')
        full_bits = message_bits + length_bits
    else:
        message_bits += '1'
        message_bits = message_bits.ljust(448, '0')
        length_bits = format(message_length, '064b')
        full_bits = message_bits + length_bits

    chunk_int = [int(full_bits[i:i+512], 2) for i in range(0, len(full_bits), 512)]
    return chunk_int

@cocotb.test()
async def multiple_chunks(dut):
    clock = Clock(dut.CLK, 1, units="ns")
    cocotb.start_soon(clock.start())

    # Reset Sequence
    await RisingEdge(dut.CLK)
    dut.EN_reset.value = 1
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    await RisingEdge(dut.CLK)
    dut.EN_reset.value = 0

    # Test Message
    test_message = "Hello, Cocotb!. I am the worlds strongestSDGSDaswaataasaaaawli64"
    dut._log.info(f"Test message --> {test_message}")
    
    encoded_values = encode_message(test_message)
    dut._log.info(f"Encoded values --> {encoded_values}")

    await RisingEdge(dut.CLK)
    out = 0x6a09e667bb67ae853c6ef372a54ff53a510e527f9b05688c1f83d9ab5be0cd19
    
    for i in range(len(encoded_values)):
        dut.EN_input_engine.value = 1
        dut.input_engine_pre_hash.value = out
        dut.input_engine_input_val.value = encoded_values[i]

        await RisingEdge(dut.CLK)
        dut.EN_input_engine.value = 0
    
        await RisingEdge(dut.RDY_output_engine_get) or Timer(1000, units="ns")  # Avoid infinite waiting
        dut.EN_output_engine_get.value = 1
        out = dut.output_engine_get.value

        await FallingEdge(dut.RDY_output_engine_get)
        dut.EN_output_engine_get.value = 0

    out = bin(out)  
    dut._log.info(f"Actual output --> {out}")

    # Reference Model Output
    sha256_code = hashlib.sha256()
    sha256_code.update(test_message.encode())
    output = bin(int(sha256_code.hexdigest(), 16))

    dut._log.info(f"Reference output --> {output}")
    assert int(out, 2) == int(output, 2), f"Mismatch: Reference {output} vs. Obtained {out}"
