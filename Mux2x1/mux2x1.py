import cocotb
from cocotb.triggers import Timer, RisingEdge

@cocotb.test()
async def mux_2test(dut):
	in0=in1=sel = [0,1]
	
	for i in range(2):
		dut.in0.value = in0[i]
		await Timer(1,units="ns")
		
		for j in range(2):
			dut.in1.value = in1[j]	
			await Timer(1,units="ns")
			
			for k in range(2):
				dut.sel.value = sel[k]
				await Timer(1,units="ns")
				dut.log.info(f"in0 = {dut.in0.value} ; in1 = {dut.in1.value} ; select = {dut.sel.value} ; out = {dut.out.value}")
				
				if sel[k] == 0:
					assert dut.out.value == in0[i], f"Error in0 = {dut.in0.value} ; in1 = {dut.in1.value} ; select = {dut.sel.value} ; out = {dut.out.value}"
				else:
					assert dut.out.value == in1[j], f"Error in0 = {dut.in0.value} ; in1 = {dut.in1.value} ; select = {dut.sel.value} ; out = {dut.out.value}"
	dut._log.info("Test Complete")
				  
		
