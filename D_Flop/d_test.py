import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock

async def clk(dut):
	for i in range(100):
		dut.clk.value = 0
		await Timer(1,"ns")
		dut.clk.value = 1


@cocotb.test()
async def dflop_test(dut):
	await cocotb.start(Clock(dut.clk,1,"ns").start())
	d=reset=preset = [0,1]
	
	for i in range(2):
		await RisingEdge(dut.clk)
		dut.reset.value = reset[i]
		await Timer(1, units='ns')
		dut._log.info(f"Sent reset value {reset[i]}")
		
		for j in range(2):
			await RisingEdge(dut.clk)
			dut.preset.value = preset[j]
			await Timer(1, units='ns')
			dut._log.info(f"Sent preset value {preset[j]}")
			
			for k in range(2):
				await RisingEdge(dut.clk)
				dut.d.value = d[k]
				await Timer(1, units= 'ns')
				dut._log.info(f"Sent d value {d[k]}")
				
				if reset[i] == 1:
					assert dut.q.value == 0, f"reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; q - {dut.q.value}"
					assert dut.qbar.value == 1, f"reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; qbar - {dut.qbar.value}"
					dut._log.info(f"Values reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; q - {dut.q.value} ; qbar - {dut.qbar.value} ")
				elif preset[j] == 1:
					assert dut.q.value == 1, f"reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; q - {dut.q.value}"
					assert dut.qbar.value == 0, f"reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; qbar - {dut.qbar.value}"
					dut._log.info(f"Values reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; q - {dut.q.value} ; qbar - {dut.qbar.value} ")
				else:
					assert dut.q.value == d[k], f"reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; q - {dut.q.value} ; qbar - {dut.qbar.value}"
					assert dut.qbar.value == ~d[k] & 1 , f"reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; q - {dut.q.value}; qbar - {dut.qbar.value}"
					dut._log.info(f"Values reset - {reset[i]} ; preset - {preset[j]} ; d - {d[k]} ; q - {dut.q.value} ; qbar - {dut.qbar.value} ")
	
	dut._log.info("End of Test")
