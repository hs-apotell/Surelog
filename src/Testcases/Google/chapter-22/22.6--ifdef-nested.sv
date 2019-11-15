/*
:name: 22.6--ifdef-nested
:description: Test
:should_fail: 0
:tags: 22.6
:type: preprocessing
*/
module test(out);
output out;
`define wow
`define nest_one
`define second_nest
`define nest_two
`ifdef wow
	initial $display("wow is defined");
	`ifdef nest_one
		initial $display("nest_one is defined");
		`ifdef nest_two
			initial $display("nest_two is defined");
		`else
			initial $display("nest_two is not defined");
		`endif
	`else
		initial $display("nest_one is not defined");
	`endif
`else
	initial $display("wow is not defined");
	`ifdef second_nest
		initial $display("second_nest is defined");
	`else
		initial $display("second_nest is not defined");
	`endif
`endif
endmodule
