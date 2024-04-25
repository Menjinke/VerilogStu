#include "obj_dir/Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <arpa/inet.h>
#include <time.h>
VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;

static Vtop *top;

void step_and_dump_wave(){
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void sim_init(){
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

int RandNum(){
    int random_binary; // 存储随机二进制数的整数变量
    // 设置随机种子
    srand(time(NULL) + clock());

    // 生成8位随机二进制数
    random_binary = 0;
    for(int i = 0; i < 8; i++) {
        random_binary = (random_binary << 1) | (rand() % 2);
    }
    return random_binary;
}

int main()
{
    sim_init();

    printf("   in\t\tout\n");
    for (int i = 0; i < 20; i++){
        top->in = RandNum();
        step_and_dump_wave();
        printf("%8b\t%3b\n", top->in, top->pos);
    }
    sim_exit();
}