#include "obj_dir/Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <arpa/inet.h>
#include <random>

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static Vtop *top;

void step_and_dump_wave() {
  top->eval();
  contextp->timeInc(1);
  // contextp->time() 返回当前的仿真时间
  tfp->dump(contextp->time()); // 将当前仿真时间的信号值写入到波形文件中
}
void sim_init() {
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit() {
  step_and_dump_wave();
  tfp->close();
}
/**
 * 1位全加器仿真
 */
// void FADD_1bit()
// {
//   sim_init();

//   std::random_device rd;
//   std::mt19937 gen(rd());
//   // 定义均匀分布，范围是 [0, 1]
//   std::uniform_int_distribution<> dis(0, 1);
//   printf("Cin\tA\tB\tSum\tCout\n");
//   // Apply inputs and simulate
//   for (int i = 0; i < 20; ++i) {
//     top->Cin = dis(gen);
//     top->A = dis(gen);
//     top->B = dis(gen);
//     // Evaluate the model
//     step_and_dump_wave();

//     // Print sum
//     printf("%b\t%b\t%b\t%d\t%b\n", top->Cin, top->A, top->B, top->Sum,
//     top->Cout);
//   }
//   step_and_dump_wave();
//   sim_exit();
// }

/**
 * 4位串行进位加法器仿真
 */
// void FADD_4bit(){
//   sim_init();

//   std::random_device rd;
//   std::mt19937 gen(rd());
//   // 定义均匀分布，范围是 [0, 15]
//   std::uniform_int_distribution<> dis(0, 15);
//   std::uniform_int_distribution<> dis_1(0, 1);
//   printf("cin\tx\ty\ts\tcout\n");
//   // Apply inputs and simulate
//   for (int i = 0; i < 20; ++i) {
//     top->cin = dis_1(gen);
//     top->x = dis(gen);
//     top->y = dis(gen);
//     // Evaluate the model
//     step_and_dump_wave();

//     // Print
//     printf("%4b\t%4b\t%4b\t%4b\t%4b\n", top->cin, top->x, top->y, top->f,
//     top->cout);
//   }
//   step_and_dump_wave();
//   sim_exit();
// }

/**
 * 8位串行进位全加器
 */
void FADD_8bit() {
  sim_init();

  std::random_device rd;
  std::mt19937 gen(rd());
  // 定义均匀分布，范围是 [0, 15]
  std::uniform_int_distribution<> dis(0, 255);
  std::uniform_int_distribution<> dis_1(0, 1);
  printf("cin\t   x\t           y\t           s\t       cout\n");
  printf("------------------------------------------------------------\n");
  // Apply inputs and simulate
  for (int i = 0; i < 20; ++i) {
    top->cin = dis_1(gen);
    top->x = dis(gen);
    top->y = dis(gen);
    // Evaluate the model
    step_and_dump_wave();

    // Print
    printf("%b\t%08b(%d)\t%08b(%d)\t%08b(%d)\t%b\n", top->cin, top->x, top->x,
           top->y, top->y, top->f, top->f, top->cout);
  }
  step_and_dump_wave();
  sim_exit();
}

int main() {
  // FADD_4bit();
  FADD_8bit();
  return 0;
}