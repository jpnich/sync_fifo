`timescale 1ns/1ps

module fifo_tb;

    reg clk;
    reg rst;
    reg w_en;
    reg rd_en;
    reg [7:0] in;
    reg [7:0] out;
    wire full;
    wire empty;

    fifo uut(
        .clk(clk),
        .rst(rst),
        .w_en(w_en),
        .rd_en(rd_en),
        .in(in),
        .out(out),
        .full(full),
        .empty(empty)
    );

    always #5 clk = ~clk;

    initial begin
        $dumpfile("fifo.vcd");
        $dumpvars(0, fifo_tb);

    end

    initial begin
        clk = 0;
        rst = 1;
        w_en = 0;
        rd_en = 0;
        in = 0;

       // $monitor ("T=%d | w_en=%b | rd_en=%b | in=%b | out=%b | full=%b | empty=%b | pos=%d",
        //           $time, w_en, rd_en, in, out, full, empty, uut.pos);

        #10
        rst = 0;

        #10
        if(empty)
            $display("Empty");
        else
            $display("Error");

        @(negedge clk);
        w_en = 1;
        in = 16'hA1;

        @(negedge clk);
        in = 16'hB2;

        @(negedge clk);
        in = 16'Hc3;
        w_en = 0;

        if(uut.pos == 2)
            $display("pos = 3");
        else
            $display("Error");
            
        rd_en = 1;
        
        for(int i = 0; i < 3; i++) begin
            @(negedge clk);
            $display("%b", out);
        end

        rd_en = 0;

        #1
        if(empty)
            $display("Empty");
        else
            $display("Error");

        @(negedge clk);
        w_en = 1;
        in = 16'h00;

        for(int i = 0; i < 16; i++) begin
            @(negedge clk);
            in++;
        end

        w_en = 0;

        if(full)
            $display("Full");
        else
            $display("Error");

        @(negedge clk);
        rd_en = 1;
        w_en = 1;
        in = 16'hFF;

        @(negedge clk);
        rd_en = 0;
        w_en = 0;

        if(uut.pos == 15)
            $display("pos is at end");
        else
            $display("Error");

        $finish;
    end
endmodule

