module FA_4(
    input [3:0] x, y,
    input cin,
    output [3:0] f,
    output cout
);

    wire [4:0] c;
    assign c[0] =cin;
    FA_1 fa0(x[0],y[0],c[0],f[0],c[1]);
    FA_1 fa1(x[1],y[1],c[1],f[1],c[2]);
    FA_1 fa2(x[2],y[2],c[2],f[2],c[3]);
    FA_1 fa3(x[3],y[3],c[3],f[3],c[4]);
    assign cout=c[4];
endmodule
