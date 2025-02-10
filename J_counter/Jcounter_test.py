import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock
import random

@cocotb.test()
async def jcounter(dut):
    rst = [0,1]

    await cocotb.start(Clock(dut.clk,1,units="ns").start())

    for i in range(5):
        dut.reset.value = random.choice(rst)
        await Timer(1,units="ns")
        dut._log.info(f"Reset -> {dut.reset.value}")

        dut._log.info(f"Output -> {dut.out.value}")
    dut.reset.value = 0
    dut._log.info(f"Count -> {dut.out.value}")
    await Timer(50,units="ns")
    dut._log.info("End of test")