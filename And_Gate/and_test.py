import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock

@cocotb.test()
async def and_test(dut):
	a = [0,0,1,1]
	b = [1,0,1,0]
	y = [0,0,1,0]
	
	for i in range(4):
		dut.a.value = a[i]
		dut.b.value = b[i]
		await Timer(1,"ns")
		dut.log.info(f" a - {a[i]} ; b - {b[i]} ; y - {dut.y.value} ")
		assert dut.y.value == y[i], f"Error a - {a[i]} ; b - {b[i]} ; y - {dut.y.value} "
		
	dut._log.info("End of test")
	
	
	
		
