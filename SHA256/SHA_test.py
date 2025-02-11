import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock

@cocotb.test()
async def SHA_test(dut):

    await cocotb.start(Clock(dut.clk, 1, units="ns").start())
    rst = start = [0,1]
    list1 = []
    inp_string = "Hi, this is Mindgrove"
    input_values = inp_string.encode("utf-8").hex()
    dut._log.info(f"================================================================================================================================")
    dut._log.info(f"Input Hex -> {input_values}")

    dut._log.info(f"Type -> type(dut.message.value) -> {type(dut.message.value)}) :: type(input_values) -> {type(input_values)}")
    output_values = 0b0001011011011100001101101000101010001001101101000010100010110010010010000101010010000100001100010011101110100110011110100011100100010010110010100000001111110010101100101011010000100100001010010001011101001010010011111000101100111101110010000100111001000100


    for i in rst:
        dut.reset.value = rst[i]
        await Timer(1, units="ns")
        for k in range (1):
            dut._log.info(f"Type of message value -> {type(dut.message.value)}")
            dut.message.value = input_values
            await Timer(50, units="ns")
            dut._log.info(f" reset -> {dut.reset.value}")

            dut._log.info(f"================================================================================================================================")
            
            dut._log.info(f"Error : Input value -> {dut.message.value}")
            
            dut._log.info("================================================================================================================================")
            
            dut._log.info(f"Hex Value of the Expected output -> {hex(output_values)}") 
            dut._log.info(f"Expected Output Value -> {bin(output_values)}")

            dut._log.info("================================================================================================================================")
            
            dut._log.info(f"Hex Value of actual O/P -> {hex(dut.hash.value)}")    
            dut._log.info(f"Actual O/P -> {dut.hash.value}")

            dut._log.info("================================================================================================================================")
            
            dut._log.info("================================================================================================================================") 
        
            assert hex(dut.hash.value) == hex(output_values), f" Error :  Expected Output Value -> {output_values} : Out Value -> {dut.hash.value} "
            
            dut._log.info(f"Done Bit -> {dut.done.value}")
    dut._log.info("End of test")
