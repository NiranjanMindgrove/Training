import cocotb
import random
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock

@cocotb.test()
async def count_test(dut):
    await cocotb.start(Clock(dut.clk,1,units="ns").start())
    rst = [0,1]

    for j in range(20):
        dut._log.info(f"Count -> {dut.count.value}")
        await Timer(1,units="ns")

    for i in range (5):
        dut.reset.value = random.choice(rst)
        await Timer(1,units="ns")
        dut._log.info(f"reset -> {dut.reset.value}")

        dut._log.info(f"Counter => {dut.count.value}")


    await Timer(10,units="ns")
    dut._log.info("End of Test")