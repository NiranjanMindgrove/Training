TOPLEVEL_LANG ?= verilog
SIM ?= verilator

VERILOG_SOURCES = /home/niranjan/Documents/Training_Projects/HDL_Codes/Mux8x1/Mux8x1.v

EXTRA_ARGS += --trace --trace-structs --trace-fst
WARNING_ARGS += -Wno -TIMESCALEMOD -Wno-WIDTH -Wno-UNOPT


TOPLEVEL = mux8
MODULE = mux8

include $(shell cocotb-config --makefiles)/Makefile.sim
