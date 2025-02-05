#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f f1_cycle.vcd

# run Verilator to translate Verilog into C++, including C++ testbench 
verilator -Wall --cc --trace f1_cycle.sv --exe f1_cycle_tb.cpp

#build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vf1_cycle.mk Vf1_cycle

obj_dir/Vf1_cycle