module decode24 (
    input  [1:0] x,
    input  en,
    output reg [3:0] y
);

// Dataflow modeling using continuous assignments
assign y = (en) ? 
            (x == 2'd0) ? 4'b0001 :
            (x == 2'd1) ? 4'b0010 :
            (x == 2'd2) ? 4'b0100 :
            (x == 2'd3) ? 4'b1000 :
            4'b0000
         : 4'b0000;

endmodule
