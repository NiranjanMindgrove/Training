import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock 

@cocotb.test()
async def mux_test(dut):
	for i in range(128):
		# dut._log.info(f"{type(dut.inp.value)}")
		dut.inp.value =  i
		await Timer(1,units="ns")

		for j in range(8):
			dut.sel.value = j
			await Timer(1,units="ns")
			dut._log.info(f"in = {dut.inp.value} ; out = {dut.out.value} ; sel = {dut.sel.value}")

			dut._log.info(f"Select Line -> {j}")
			dut._log.info(f"Inputs -> {bin(i)}")

			string_value = str(dut.inp.value)
			string_value = string_value[::-1]
			dut._log.info(f"Inputs in string -> {string_value}")

			assert dut.out.value == int(string_value[j]), f"Error - in = {dut.inp.value} ; out = {dut.out.value} ; sel = {dut.sel.value} ; input @ {j} -> {string_value[j]}"
	dut._log.info("End of test") 
