TOPLEVEL_LANG ?= verilog
SIM ?= verilator

VERILOG_SOURCES = /home/niranjan/Documents/Training_Projects/HDL_Codes/JK_Flop/JK.v

EXTRA_ARGS += --trace --trace-structs --trace-fst
WARNING_ARGS += -Wno -TIMESCALEMOD -Wno-WIDTH -Wno-UNOPT


TOPLEVEL = JK
MODULE = JK_test

include $(shell cocotb-config --makefiles)/Makefile.sim
