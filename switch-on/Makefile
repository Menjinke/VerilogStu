sim: compli run

compli:
	verilator -Wall --cc --exe --build sim_main.cpp top.v -trace

run:
	./obj_dir/Vtop
format:
	@clang-format -i sim_main.cpp
