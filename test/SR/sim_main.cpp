#include "obj_dir/VTop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdlib> // 包含 rand() 函数
#include <ctime>

int main(int argc, char **argv) {
  // 初始化 Verilator
  Verilated::commandArgs(argc, argv);
  VerilatedContext *contextp = new VerilatedContext;
  VerilatedVcdC *tfp = new VerilatedVcdC;
  contextp->traceEverOn(true);

  // 创建 Verilator 仿真模型实例
  VTop *top = new VTop;

  top->trace(tfp, 0);
  tfp->open("dump.vcd");
  printf("S\tR\tQ\tQbar\n");
  printf("----------------------------\n");
  srand(time(NULL));
  for (int i = 0; i < 20; i++) {
    // 设置输入信号
    top->S = rand() % 2;
    top->R = rand() % 2;
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());

    // 获取输出信号
    bool q = top->Q;
    bool qbar = top->Qbar;

    // 输出仿真结果
    printf("%d\t%d\t%d\t%d\n", top->S, top->R, q, qbar);
  }

  // 释放仿真模型资源
  delete top;
  tfp->close();
  return 0;
}