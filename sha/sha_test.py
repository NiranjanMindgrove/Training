import cocotb
import cocotb.clock
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock
import hashlib

@cocotb.test()


async def input_list(dut):
    hexa = ""
    msg_inp = ["This is Mindgrove"]
    for i in range(len(msg_inp)):
        for j in range(len(msg_inp[i])):
            ch = msg_inp[i][j]
            asci = ord(ch)
            val  = hex(asci).lstrip('0x').rstrip("L")
            hexa += val
        hex_inp.append(hexa)
        hexa = ""
    hex_inp = hexa
    dut._log.info(f"Input message in hex format --> {hex_inp}")
async def sha_test(dut, input_list):
    
     #Input message 
    

    await cocotb.start(Clock(dut.CLK, 1,"ns").start())

    for i in range(len(hex_inp)):
    # hex_inp = "6A09E667BB67AE853C6EF372A54FF53A510E527F9B05688C1F83D9AB5BE0CD19"
        int_inp = await int(hex_inp(i),16)
        await Timer(5,units="ns")
        dut.input_engine_pre_hash.value = int_inp 
        await Timer(5,units="ns")
        dut._log.info(f"Initial Hash values in integer format --> {int_inp}")
        dut._log.info(f"Initial Hash values in Binary format --> {dut.input_engine_pre_hash}")
        
        for i in range(2):
            await RisingEdge(dut.CLK)
            dut.RST_N.value = i
            await Timer(1,units="ns")
            dut._log.info(f"Value of reset --> {dut.RST_N.value}")

            await RisingEdge(dut.CLK)
            dut.EN_input_engine.value = 1
            dut._log.info(f"Input Datatype --> {type(dut.input_engine_input_val.value)}")
            message = "This is Mindgrove"
            message_bytes = message.encode('ascii').ljust(56,b'0')
            

            int_value = int.from_bytes(message_bytes, byteorder='big')
            dut.input_engine_input_val.value = int_value
            await Timer(5,units="ns")
            dut._log.info(f"Sent the input message --> {dut.input_engine_input_val.value}")
            await Timer(2,units="ns")

            # sha256_code = hashlib.sha256()
            # input = sha256_code.update(message_bytes)
            # output = sha256_code.hexdigest()
            # output_string = bin(int(output, 16))[2:].zfill(len(output) * 4)

            
            dut._log.info(f"The output engine --> {hex(dut.output_engine_get.value)}")
            # assert dut.result_fifo_D_OUT == output, f"Error --> out : {output_string} obtained_result : {dut.result_fifo_D_OUT} "

            dut.EN_output_engine_get.value = 1
            dut._log.info(f"The output value --> {dut.output_engine_get.value}")
        dut._log.info("Test Complete")
        
