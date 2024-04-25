module FA_1(
    input A,     // 输入信号 A
    input B,     // 输入信号 B
    input Cin,   // 输入进位信号 Cin
    output Sum,  // 输出和信号 Sum
    output Cout  // 输出进位信号 Cout
);

assign Sum=A^B^Cin;
assign Cout=(A&B)|(A&Cin)|(B&Cin);

endmodule
