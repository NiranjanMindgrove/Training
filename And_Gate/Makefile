TOPLEVEL_LANG ?= verilog
SIM ?= verilator

VERILOG_SOURCES = /home/niranjan/Documents/Training_Projects/HDL_Codes/And_Gate/and.v

EXTRA_ARGS += --trace --trace-structs --trace-fst
WARNING_ARGS += -Wno -TIMESCALEMOD -Wno-WIDTH -Wno-UNOPT


TOPLEVEL = and_1
MODULE = and_test

include $(shell cocotb-config --makefiles)/Makefile.sim
