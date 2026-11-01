module fifo#(
    parameter DEPTH=8,
    parameter WIDTH=$clog2(DEPTH)
)(
    input wire clk,
    input wire rst,
    input wire w_en,
    input wire rd_en,
    input wire [7:0] in,
    output reg [7:0] out,
    output wire full,
    output wire empty
);

    reg [7:0] memory [0:DEPTH-1];
    reg [WIDTH-1:0] w_ptr;        //log2(16)=4
    reg [WIDTH-1:0] rd_ptr;
    reg [WIDTH+1:0] pos;

    assign full = (pos == DEPTH);
    assign empty = (pos == 0);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            w_ptr <= 0;
            rd_ptr <= 0;
            pos <= 0;
            out <= 0;
        end

        else begin
            if(w_en && !full) begin
                memory[w_ptr] <= in;
                w_ptr <= (w_ptr == DEPTH-1) ? 0 : w_ptr + 1; //loops otherwise
            end
            if(rd_en && !empty) begin
                out <= memory[rd_ptr];
                rd_ptr <= (rd_ptr == DEPTH-1) ? 0 : rd_ptr + 1;
            end
            case({w_en && !full, rd_en && !empty})         //obv pos won't change if equal
                2'b10: pos <= pos + 1;                  
                2'b01: pos <= pos - 1;                  
                default: pos <= pos;
            endcase
        end
    end
endmodule


