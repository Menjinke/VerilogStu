
run:
	@verilator --cc --exe --build -j 0 -Wall main.cpp top.v -trace
	@./obj_dir/Vtop

sim: run
	@gtkwave dump.vcd

clean: 
	@rm -rf ./obj_dir
