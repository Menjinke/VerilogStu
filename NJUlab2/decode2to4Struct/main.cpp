#include "obj_dir/Vdecode24.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <arpa/inet.h>

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static Vdecode24 *top;

void step_and_dump_wave() {
  top->eval();
  contextp->timeInc(1);
  // contextp->time() 返回当前的仿真时间
  tfp->dump(contextp->time()); // 将当前仿真时间的信号值写入到波形文件中
}
void sim_init() {
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vdecode24;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit() {
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();

  printf("EN\tx\ty\n");

  top->en = 0b0;
  top->x = 0b00;
  step_and_dump_wave();
  printf("%b\t%2b\t%4b\n", top->en, top->x, top->y);

  top->x = 0b01;
  step_and_dump_wave();
  printf("%b\t%2b\t%4b\n", top->en, top->x, top->y);

  top->x = 0b10;
  step_and_dump_wave();
  printf("%b\t%2b\t%4b\n", top->en, top->x, top->y);

  top->x = 0b11;
  step_and_dump_wave();
  printf("%b\t%2b\t%4b\n", top->en, top->x, top->y);

  top->en = 0b1; // 使能信号开
  top->x = 0b00;
  step_and_dump_wave();
  printf("%b\t%2b\t%4b\n", top->en, top->x, top->y);

  top->x = 0b01;
  step_and_dump_wave();
  printf("%b\t%2b\t%4b\n", top->en, top->x, top->y);

  top->x = 0b10;
  step_and_dump_wave();
  printf("%b\t%2b\t%4b\n", top->en, top->x, top->y);

  top->x = 0b11;
  step_and_dump_wave();
  printf("%b\t%2b\t%4b\n", top->en, top->x, top->y);

  sim_exit();
}
