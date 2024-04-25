module m_mux21 (a,b,s,y);
    input a,b,s;
    output reg y;

    always @(*) begin
        if(s==0)
            y=a;
        else
            y=b;
    end
endmodule
