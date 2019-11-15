//   ==================================================================
//   >>>>>>>>>>>>>>>>>>>>>>> COPYRIGHT NOTICE <<<<<<<<<<<<<<<<<<<<<<<<<
//   ------------------------------------------------------------------
//   Copyright (c) 2006-2011 by Lattice Semiconductor Corporation
//   ALL RIGHTS RESERVED
//   ------------------------------------------------------------------
//
//   IMPORTANT: THIS FILE IS AUTO-GENERATED BY THE LATTICEMICO SYSTEM.
//
//   Permission:
//
//      Lattice Semiconductor grants permission to use this code
//      pursuant to the terms of the Lattice Semiconductor Corporation
//      Open Source License Agreement.
//
//   Disclaimer:
//
//      Lattice Semiconductor provides no warranty regarding the use or
//      functionality of this code. It is the user's responsibility to
//      verify the user's design for consistency and functionality through
//      the use of formal verification methods.
//
//   --------------------------------------------------------------------
//
//                  Lattice Semiconductor Corporation
//                  5555 NE Moore Court
//                  Hillsboro, OR 97214
//                  U.S.A
//
//                  TEL: 1-800-Lattice (USA and Canada)
//                         503-286-8001 (other locations)
//
//                  web: http://www.latticesemi.com/
//                  email: techsupport@latticesemi.com
//
//   --------------------------------------------------------------------
//                         FILE DETAILS
// Project          : LatticeMico32
// File             : lm32_decoder.v
// Title            : Instruction decoder
// Dependencies     : lm32_include.v
// Version          : 6.1.17
//                  : Initial Release
// Version          : 7.0SP2, 3.0
//                  : No Change
// Version          : 3.1
//                  : Support for static branch prediction. Information about
//                  : branch type is generated and passed on to the predictor.
// Version          : 3.2
//                  : No change
// Version          : 3.3
//                  : Renamed port names that conflict with keywords reserved
//                  : in System-Verilog.
// =============================================================================

//   ==================================================================
//   >>>>>>>>>>>>>>>>>>>>>>> COPYRIGHT NOTICE <<<<<<<<<<<<<<<<<<<<<<<<<
//   ------------------------------------------------------------------
//   Copyright (c) 2006-2011 by Lattice Semiconductor Corporation
//   ALL RIGHTS RESERVED
//   ------------------------------------------------------------------
//
//   IMPORTANT: THIS FILE IS AUTO-GENERATED BY THE LATTICEMICO SYSTEM.
//
//   Permission:
//
//      Lattice Semiconductor grants permission to use this code
//      pursuant to the terms of the Lattice Semiconductor Corporation
//      Open Source License Agreement.
//
//   Disclaimer:
//
//      Lattice Semiconductor provides no warranty regarding the use or
//      functionality of this code. It is the user's responsibility to
//      verify the user's design for consistency and functionality through
//      the use of formal verification methods.
//
//   --------------------------------------------------------------------
//
//                  Lattice Semiconductor Corporation
//                  5555 NE Moore Court
//                  Hillsboro, OR 97214
//                  U.S.A
//
//                  TEL: 1-800-Lattice (USA and Canada)
//                         503-286-8001 (other locations)
//
//                  web: http://www.latticesemi.com/
//                  email: techsupport@latticesemi.com
//
//   --------------------------------------------------------------------
//                         FILE DETAILS
// Project          : LatticeMico32
// File             : lm32_include.v
// Title            : CPU global macros
// Version          : 6.1.17
//                  : Initial Release
// Version          : 7.0SP2, 3.0
//                  : No Change
// Version          : 3.1
//                  : No Change
// Version          : 3.2
//                  : No Change
// Version          : 3.3
//                  : Support for extended configuration register
// =============================================================================


//
// Common configuration options
//






// Enable Debugging
//`define CFG_JTAG_ENABLED
//`define CFG_JTAG_UART_ENABLED
//`define CFG_HW_DEBUG_ENABLED

// Enable MMU



//
// End of common configuration options
//


// Wishbone configuration

// Data-path width

// Register file size

// Standard register numbers

// Range of Program Counter. Two LSBs are always 0.

// Range of an instruction

// Adder operation

// Shift direction

// Bus errors

// Derive macro that indicates whether we have single-stepping or not

// Derive macro that indicates whether JTAG interface is required

// Derive macro that indicates whether ROM debug is required

// Derive macro that indicates whether we have a barrel-shifter or not

// Derive macro that indicates whether we have a multiplier or not

// Derive a macro that indicates whether or not the multi-cycle arithmetic unit is required

// Derive macro that indicates if we are using an EBR register file

// Revision number

// Logical operations - Function encoded directly in instruction

// Conditions for conditional branches

// Size of load or store instruction - Encoding corresponds to opcode

// Width and range of a CSR index

// CSR indices

// Values for WPC CSR

// TLB operation codes

// Exception IDs

// Exception Base Address

// Pipeline result selection mux controls




// Derive a macro to indicate if either of the caches are implemented

/////////////////////////////////////////////////////
// Interrupts
/////////////////////////////////////////////////////

// Always enable interrupts

// Currently this is fixed to 32 and should not be changed

/////////////////////////////////////////////////////
// General
/////////////////////////////////////////////////////

// Sub-word range types

// Word sub-byte indicies

// Word sub-halfword indices

// Use a synchronous reset

// Wishbone defines
// Refer to Wishbone System-on-Chip Interconnection Architecture
// These should probably be moved to a Wishbone common file

// Wishbone cycle types

// Wishbone burst types


// Index of opcode field in an instruction

// Opcodes - Some are only listed as 5 bits as their MSB is a don't care

/////////////////////////////////////////////////////
// Module interface
/////////////////////////////////////////////////////

module lm32_decoder (
    // ----- Inputs -------
    instruction,
    // ----- Outputs -------
    d_result_sel_0,
    d_result_sel_1,
    x_result_sel_csr,
    x_result_sel_mc_arith,
    x_result_sel_sext,
    x_result_sel_logic,
    x_result_sel_add,
    m_result_sel_compare,
    m_result_sel_shift,
    w_result_sel_load,
    w_result_sel_mul,
    x_bypass_enable,
    m_bypass_enable,
    read_enable_0,
    read_idx_0,
    read_enable_1,
    read_idx_1,
    write_enable,
    write_idx,
    immediate,
    branch_offset,
    load,
    store,
    size,
    sign_extend,
    adder_op,
    logic_op,
    direction,
    divide,
    modulus,
    branch,
    branch_reg,
    condition,
    bi_conditional,
    bi_unconditional,
    break_opcode,
    scall,
    eret,
    bret,
    csr_write_enable
    );

/////////////////////////////////////////////////////
// Inputs
/////////////////////////////////////////////////////

input [(32-1):0] instruction;       // Instruction to decode

/////////////////////////////////////////////////////
// Outputs
/////////////////////////////////////////////////////

output [0:0] d_result_sel_0;
reg    [0:0] d_result_sel_0;
output [1:0] d_result_sel_1;
reg    [1:0] d_result_sel_1;
output x_result_sel_csr;
reg    x_result_sel_csr;
output x_result_sel_mc_arith;
reg    x_result_sel_mc_arith;
output x_result_sel_sext;
reg    x_result_sel_sext;
output x_result_sel_logic;
reg    x_result_sel_logic;
output x_result_sel_add;
reg    x_result_sel_add;
output m_result_sel_compare;
reg    m_result_sel_compare;
output m_result_sel_shift;
reg    m_result_sel_shift;
output w_result_sel_load;
reg    w_result_sel_load;
output w_result_sel_mul;
reg    w_result_sel_mul;
output x_bypass_enable;
wire   x_bypass_enable;
output m_bypass_enable;
wire   m_bypass_enable;
output read_enable_0;
wire   read_enable_0;
output [(5-1):0] read_idx_0;
wire   [(5-1):0] read_idx_0;
output read_enable_1;
wire   read_enable_1;
output [(5-1):0] read_idx_1;
wire   [(5-1):0] read_idx_1;
output write_enable;
wire   write_enable;
output [(5-1):0] write_idx;
wire   [(5-1):0] write_idx;
output [(32-1):0] immediate;
wire   [(32-1):0] immediate;
output [((32-2)+2-1):2] branch_offset;
wire   [((32-2)+2-1):2] branch_offset;
output load;
wire   load;
output store;
wire   store;
output [1:0] size;
wire   [1:0] size;
output sign_extend;
wire   sign_extend;
output adder_op;
wire   adder_op;
output [3:0] logic_op;
wire   [3:0] logic_op;
output direction;
wire   direction;
output divide;
wire   divide;
output modulus;
wire   modulus;
output branch;
wire   branch;
output branch_reg;
wire   branch_reg;
output [(3-1):0] condition;
wire   [(3-1):0] condition;
output bi_conditional;
wire bi_conditional;
output bi_unconditional;
wire bi_unconditional;
output break_opcode;
wire   break_opcode;
output scall;
wire   scall;
output eret;
wire   eret;
output bret;
wire   bret;
output csr_write_enable;
wire   csr_write_enable;

/////////////////////////////////////////////////////
// Internal nets and registers
/////////////////////////////////////////////////////

wire [(32-1):0] extended_immediate;       // Zero or sign extended immediate
wire [(32-1):0] high_immediate;           // Immediate as high 16 bits
wire [(32-1):0] call_immediate;           // Call immediate
wire [(32-1):0] branch_immediate;         // Conditional branch immediate
wire sign_extend_immediate;                     // Whether the immediate should be sign extended (`TRUE) or zero extended (`FALSE)
wire select_high_immediate;                     // Whether to select the high immediate
wire select_call_immediate;                     // Whether to select the call immediate

/////////////////////////////////////////////////////
// Functions
/////////////////////////////////////////////////////

/////////////////////////////////////////////////////
// Combinational logic
/////////////////////////////////////////////////////

// Determine opcode
assign op_add    = instruction[30:26] == 5'b01101;
assign op_and    = instruction[30:26] == 5'b01000;
assign op_andhi  = instruction[31:26] == 6'b011000;
assign op_b      = instruction[31:26] == 6'b110000;
assign op_bi     = instruction[31:26] == 6'b111000;
assign op_be     = instruction[31:26] == 6'b010001;
assign op_bg     = instruction[31:26] == 6'b010010;
assign op_bge    = instruction[31:26] == 6'b010011;
assign op_bgeu   = instruction[31:26] == 6'b010100;
assign op_bgu    = instruction[31:26] == 6'b010101;
assign op_bne    = instruction[31:26] == 6'b010111;
assign op_call   = instruction[31:26] == 6'b110110;
assign op_calli  = instruction[31:26] == 6'b111110;
assign op_cmpe   = instruction[30:26] == 5'b11001;
assign op_cmpg   = instruction[30:26] == 5'b11010;
assign op_cmpge  = instruction[30:26] == 5'b11011;
assign op_cmpgeu = instruction[30:26] == 5'b11100;
assign op_cmpgu  = instruction[30:26] == 5'b11101;
assign op_cmpne  = instruction[30:26] == 5'b11111;
assign op_divu   = instruction[31:26] == 6'b100011;
assign op_lb     = instruction[31:26] == 6'b000100;
assign op_lbu    = instruction[31:26] == 6'b010000;
assign op_lh     = instruction[31:26] == 6'b000111;
assign op_lhu    = instruction[31:26] == 6'b001011;
assign op_lw     = instruction[31:26] == 6'b001010;
assign op_modu   = instruction[31:26] == 6'b110001;
assign op_mul    = instruction[30:26] == 5'b00010;
assign op_nor    = instruction[30:26] == 5'b00001;
assign op_or     = instruction[30:26] == 5'b01110;
assign op_orhi   = instruction[31:26] == 6'b011110;
assign op_raise  = instruction[31:26] == 6'b101011;
assign op_rcsr   = instruction[31:26] == 6'b100100;
assign op_sb     = instruction[31:26] == 6'b001100;
assign op_sextb  = instruction[31:26] == 6'b101100;
assign op_sexth  = instruction[31:26] == 6'b110111;
assign op_sh     = instruction[31:26] == 6'b000011;
assign op_sl     = instruction[30:26] == 5'b01111;
assign op_sr     = instruction[30:26] == 5'b00101;
assign op_sru    = instruction[30:26] == 5'b00000;
assign op_sub    = instruction[31:26] == 6'b110010;
assign op_sw     = instruction[31:26] == 6'b010110;
assign op_user   = instruction[31:26] == 6'b110011;
assign op_wcsr   = instruction[31:26] == 6'b110100;
assign op_xnor   = instruction[30:26] == 5'b01001;
assign op_xor    = instruction[30:26] == 5'b00110;

// Group opcodes by function
assign arith = op_add | op_sub;
assign logical = op_and | op_andhi | op_nor | op_or | op_orhi | op_xor | op_xnor;
assign cmp = op_cmpe | op_cmpg | op_cmpge | op_cmpgeu | op_cmpgu | op_cmpne;
assign bi_conditional = op_be | op_bg | op_bge | op_bgeu  | op_bgu | op_bne;
assign bi_unconditional = op_bi;
assign bra = op_b | bi_unconditional | bi_conditional;
assign call = op_call | op_calli;
assign shift = op_sl | op_sr | op_sru;
assign sext = op_sextb | op_sexth;
assign multiply = op_mul;
assign divide = op_divu;
assign modulus = op_modu;
assign load = op_lb | op_lbu | op_lh | op_lhu | op_lw;
assign store = op_sb | op_sh | op_sw;

// Select pipeline multiplexor controls
always @(*)
begin
    // D stage
    if (call)
        d_result_sel_0 = 1'b1;
    else
        d_result_sel_0 = 1'b0;
    if (call)
        d_result_sel_1 = 2'b00;
    else if ((instruction[31] == 1'b0) && !bra)
        d_result_sel_1 = 2'b10;
    else
        d_result_sel_1 = 2'b01;
    // X stage
    x_result_sel_csr = 1'b0;
    x_result_sel_mc_arith = 1'b0;
    x_result_sel_sext = 1'b0;
    x_result_sel_logic = 1'b0;
    x_result_sel_add = 1'b0;
    if (op_rcsr)
        x_result_sel_csr = 1'b1;
    else if (divide | modulus)
        x_result_sel_mc_arith = 1'b1;
    else if (sext)
        x_result_sel_sext = 1'b1;
    else if (logical)
        x_result_sel_logic = 1'b1;
    else
        x_result_sel_add = 1'b1;

    // M stage

    m_result_sel_compare = cmp;
    m_result_sel_shift = shift;

    // W stage
    w_result_sel_load = load;
    w_result_sel_mul = op_mul;
end

// Set if result is valid at end of X stage
assign x_bypass_enable =  arith
                        | logical
                        | divide
                        | modulus
                        | sext
                        | op_rcsr
                        ;
// Set if result is valid at end of M stage
assign m_bypass_enable = x_bypass_enable
                        | shift
                        | cmp
                        ;
// Register file read port 0
assign read_enable_0 = ~(op_bi | op_calli);
assign read_idx_0 = instruction[25:21];
// Register file read port 1
assign read_enable_1 = ~(op_bi | op_calli | load);
assign read_idx_1 = instruction[20:16];
// Register file write port
assign write_enable = ~(bra | op_raise | store | op_wcsr);
assign write_idx = call
                    ? 5'd29
                    : instruction[31] == 1'b0
                        ? instruction[20:16]
                        : instruction[15:11];

// Size of load/stores
assign size = instruction[27:26];
// Whether to sign or zero extend
assign sign_extend = instruction[28];
// Set adder_op to 1 to perform a subtraction
assign adder_op = op_sub | op_cmpe | op_cmpg | op_cmpge | op_cmpgeu | op_cmpgu | op_cmpne | bra;
// Logic operation (and, or, etc)
assign logic_op = instruction[29:26];
// Shift direction
assign direction = instruction[29];
// Control flow microcodes
assign branch = bra | call;
assign branch_reg = op_call | op_b;
assign condition = instruction[28:26];
assign break_opcode = op_raise & ~instruction[2];
assign scall = op_raise & instruction[2];
assign eret = op_b & (instruction[25:21] == 5'd30);
assign bret = op_b & (instruction[25:21] == 5'd31);
// CSR read/write
assign csr_write_enable = op_wcsr;

// Extract immediate from instruction

assign sign_extend_immediate = ~(op_and | op_cmpgeu | op_cmpgu | op_nor | op_or | op_xnor | op_xor);
assign select_high_immediate = op_andhi | op_orhi;
assign select_call_immediate = instruction[31];

assign high_immediate = {instruction[15:0], 16'h0000};
assign extended_immediate = {{16{sign_extend_immediate & instruction[15]}}, instruction[15:0]};
assign call_immediate = {{6{instruction[25]}}, instruction[25:0]};
assign branch_immediate = {{16{instruction[15]}}, instruction[15:0]};

assign immediate = select_high_immediate == 1'b1
                        ? high_immediate
                        : extended_immediate;

assign branch_offset = select_call_immediate == 1'b1
                        ? call_immediate
                        : branch_immediate;

endmodule

