
run:
	@verilator --cc --exe --build -j 0 -Wall main.cpp m_mux21.v -trace
	@./obj_dir/Vm_mux21

sim: run
	@gtkwave dump.vcd
