
run:
	@verilator --cc --exe --build -j 0 -Wall main.cpp decode24.v -trace
	@./obj_dir/Vdecode24

sim: run
	@gtkwave dump.vcd

clean: 
	@rm -rf ./obj_dir
