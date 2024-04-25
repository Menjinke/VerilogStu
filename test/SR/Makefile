
run:
	@verilator --cc --exe --build -j 0 -Wall sim_main.cpp Top.v -trace
	@./obj_dir/VTop

sim: run
	@gtkwave dump.vcd

format:
	@clang-format -i sim_main.cpp
clean:
	@rm -rf obj_dir
