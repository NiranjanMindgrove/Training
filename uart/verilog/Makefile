TOPLEVEL_LANG ?= verilog
SIM ?= verilator

VERILOG_SOURCES = /home/niranjan/Documents/Training_Projects/HDL_Codes/uart/verilog/mkuart.v

EXTRA_ARGS += --trace --trace-structs --trace-fst --no-timing
WARNING_ARGS += -Wno -TIMESCALEMOD -Wno-WIDTH -Wno-UNOPT


TOPLEVEL = mkuart
MODULE = uart_test

include $(shell cocotb-config --makefiles)/Makefile.sim
