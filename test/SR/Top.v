/* verilator lint_off UNOPTFLAT */
module Top (Q, Qbar, S, R);
    output Q, Qbar;
    input S, R;
    
    nand n1(Q, S, Qbar);
    nand n2(Qbar, R, Q);
endmodule
