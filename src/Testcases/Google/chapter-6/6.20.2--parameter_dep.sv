/*
:name: parameter_dep
:description: parameter depending on another parameter tests
:should_fail: 0
:tags: 6.20.2
*/
module top();
	parameter p1 = 123;
	parameter p2 = p1 * 3;
endmodule
