import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock

@cocotb.test()
async def JK_test(dut):
    await cocotb.start(Clock(dut.clk,1,units="ns").start())
    
    dut._log.info(f"Initial q -> {dut.q.value} ; qbar -> {dut.qbar.value}")

    for i in range(2):
        dut.reset.value = i
        await Timer(1,units="ns")
        dut._log.info(f"After sending reset:  q -> {dut.q.value} ; qbar -> {dut.qbar.value}")
        q = dut.q.value
        qbar = dut.qbar.value

        for j in range(2):
            dut.J.value = j
            await Timer(1,units="ns")
            dut._log.info(f"After sending J:  q -> {dut.q.value} ; qbar -> {dut.qbar.value}")

            for k in range(2):
                dut.K.value = k
                await Timer(1, units="ns")

                dut._log.info(f"Values after sending K: reset -> {dut.reset.value} ; J -> {dut.J.value} ; K -> {dut.K.value} ; q -> {dut.q.value} ; qbar -> {dut.qbar.value}")
                
                if(dut.reset.value):
                    assert dut.q.value == 0, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"
                    assert dut.qbar.value == 1, f"Error : reset -> {dut.reset.value} ; q -> {dut.qbar.value}"

                elif(dut.J.value == 0 and dut.K.value == 0):
                    assert dut.q.value == q, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"
                    assert dut.qbar.value == qbar, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"

                elif(dut.J.value == 0 and dut.K.value == 1):
                    assert dut.q.value == 0, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"
                    assert dut.qbar.value == 1, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"

                elif(dut.J.value == 1 and dut.K.value == 0):
                    assert dut.q.value == 1, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"
                    assert dut.qbar.value == 0, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"
                
                else:
                    assert dut.q.value == ~int(q) & 1, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"
                    assert dut.qbar.value == ~int(qbar) & 1, f"Error : reset -> {dut.reset.value} ; q -> {dut.q.value}"
                
                q = dut.q.value
                dut._log.info(f"Previous q value -> {q}")
                qbar = dut.qbar.value
                dut._log.info(f"Previous qbar value -> {qbar}")
    dut._log.info("Test Ended")

                



