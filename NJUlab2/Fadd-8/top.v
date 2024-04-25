`include "FA_1.v"

module top(
    input [7:0] x, y,
    input cin,
    output [7:0] f,
    output cout
);

    wire [8:0] c;
    assign c[0] = cin;
    FA_1 fa0(x[0], y[0], c[0], f[0], c[1]);
    FA_1 fa1(x[1], y[1], c[1], f[1], c[2]);
    FA_1 fa2(x[2], y[2], c[2], f[2], c[3]);
    FA_1 fa3(x[3], y[3], c[3], f[3], c[4]);
    FA_1 fa4(x[4], y[4], c[4], f[4], c[5]); // 修复此处
    FA_1 fa5(x[5], y[5], c[5], f[5], c[6]); // 修复此处
    FA_1 fa6(x[6], y[6], c[6], f[6], c[7]); // 修复此处
    FA_1 fa7(x[7], y[7], c[7], f[7], c[8]); // 修复此处

    assign cout = c[8];

endmodule
