module lpm_gate(data,gate,q);
input[7:0]data;
input gate;
output reg[7:0] q;
reg[7:0] out;

always@(1) 
	begin
		if (gate==1)
		begin
			q<=data;
		end
		else if(gate==0)
		begin
			q<=8'b0111_1111;
		end
	end
	
endmodule 