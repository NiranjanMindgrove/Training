import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock

@cocotb.test()
async def add_test(dut):

    a = b = cin = [0,1]

    for i in range(2):
        dut.a.value = a[i]
        await Timer(1,units="ns")

        for j in range(2):
            dut.b.value = b[j]
            await Timer(1,units="ns")

            for k in range(2):
                dut.cin.value = cin[k]
                await Timer(1,units="ns")

                dut._log.info(f"Error - a-> {dut.a.value} ; b-> {dut.b.value} ; cin-> {dut.cin.value}; sum->{dut.sum.value} ; cout->{dut.carry.value} ")

                assert dut.sum.value == (a[i]^b[j]^cin[k]), f"Error - a-> {dut.a.value} ; b-> {dut.b.value} ; cin-> {dut.cin.value}; sum->{dut.sum.value} ; cout->{dut.carry.value} "
                assert dut.carry.value == (a[i]&b[j] | b[j]&cin[k] | cin[k]&a[i]), f"Error - a-> {dut.a.value} ; b-> {dut.b.value} ; cin-> {dut.cin.value}; sum->{dut.sum.value} ; cout->{dut.carry.value} "

    dut._log.info("End of test")