TOPLEVEL_LANG ?= verilog
SIM ?= verilator

VERILOG_SOURCES = /home/niranjan/Documents/Training_Projects/HDL_Codes/Mux2x1/mux2x1.v

EXTRA_ARGS += --trace --trace-structs --trace-fst
WARNING_ARGS += -Wno -TIMESCALEMOD -Wno-WIDTH -Wno-UNOPT


TOPLEVEL = mux2x1
MODULE = mux2x1

include $(shell cocotb-config --makefiles)/Makefile.sim
