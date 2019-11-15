//////////////////////////////////////////////////////////////////////
////                                                              ////
////  OR1200's 32x32 multiply for ASIC                            ////
////                                                              ////
////  This file is part of the OpenRISC 1200 project              ////
////  http://www.opencores.org/project,or1k                       ////
////                                                              ////
////  Description                                                 ////
////  32x32 multiply for ASIC                                     ////
////                                                              ////
////  To Do:                                                      ////
////   - make it smaller and faster                               ////
////                                                              ////
////  Author(s):                                                  ////
////      - Damjan Lampret, lampret@opencores.org                 ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
////                                                              ////
//// Copyright (C) 2000 Authors and OPENCORES.ORG                 ////
////                                                              ////
//// This source file may be used and distributed without         ////
//// restriction provided that this copyright statement is not    ////
//// removed from the file and that any derivative work contains  ////
//// the original copyright notice and the associated disclaimer. ////
////                                                              ////
//// This source file is free software; you can redistribute it   ////
//// and/or modify it under the terms of the GNU Lesser General   ////
//// Public License as published by the Free Software Foundation; ////
//// either version 2.1 of the License, or (at your option) any   ////
//// later version.                                               ////
////                                                              ////
//// This source is distributed in the hope that it will be       ////
//// useful, but WITHOUT ANY WARRANTY; without even the implied   ////
//// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR      ////
//// PURPOSE.  See the GNU Lesser General Public License for more ////
//// details.                                                     ////
////                                                              ////
//// You should have received a copy of the GNU Lesser General    ////
//// Public License along with this source; if not, download it   ////
//// from http://www.opencores.org/lgpl.shtml                     ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
//
// $Log: or1200_amultp2_32x32.v,v $
// Revision 2.0  2010/06/30 11:00:00  ORSoC
// No update 

// synopsys translate_off
`timescale 1ps/1ps
// synopsys translate_on
//////////////////////////////////////////////////////////////////////
////                                                              ////
////  OR1200's definitions                                        ////
////                                                              ////
////  This file is part of the OpenRISC 1200 project              ////
////  http://opencores.org/project,or1k                           ////
////                                                              ////
////  Description                                                 ////
////  Defines for the OR1200 core                                 ////
////                                                              ////
////  To Do:                                                      ////
////   - add parameters that are missing                          ////
////                                                              ////
////  Author(s):                                                  ////
////      - Damjan Lampret, lampret@opencores.org                 ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
////                                                              ////
//// Copyright (C) 2000 Authors and OPENCORES.ORG                 ////
////                                                              ////
//// This source file may be used and distributed without         ////
//// restriction provided that this copyright statement is not    ////
//// removed from the file and that any derivative work contains  ////
//// the original copyright notice and the associated disclaimer. ////
////                                                              ////
//// This source file is free software; you can redistribute it   ////
//// and/or modify it under the terms of the GNU Lesser General   ////
//// Public License as published by the Free Software Foundation; ////
//// either version 2.1 of the License, or (at your option) any   ////
//// later version.                                               ////
////                                                              ////
//// This source is distributed in the hope that it will be       ////
//// useful, but WITHOUT ANY WARRANTY; without even the implied   ////
//// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR      ////
//// PURPOSE.  See the GNU Lesser General Public License for more ////
//// details.                                                     ////
////                                                              ////
//// You should have received a copy of the GNU Lesser General    ////
//// Public License along with this source; if not, download it   ////
//// from http://www.opencores.org/lgpl.shtml                     ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
//
// $Log: or1200_defines.v,v $
// Revision 2.0  2010/06/30 11:00:00  ORSoC
// Minor update: 
// Defines added, bugs fixed. 

//
// Dump VCD
//
//`define OR1200_VCD_DUMP

//
// Generate debug messages during simulation
//
//`define OR1200_VERBOSE

////////////////////////////////////////////////////////
//
// Typical configuration for an ASIC
//

//
// Target ASIC memories
//
//`define OR1200_ARTISAN_SSP
//`define OR1200_ARTISAN_SDP
//`define OR1200_ARTISAN_STP
//`define OR1200_VIRTUALSILICON_SSP
//`define OR1200_VIRTUALSILICON_STP_T1
//`define OR1200_VIRTUALSILICON_STP_T2

//
// Do not implement Data cache
//

//
// Do not implement Insn cache
//

//
// Do not implement Data MMU
//
//`define OR1200_NO_DMMU

//
// Do not implement Insn MMU
//
//`define OR1200_NO_IMMU

//
// Select between ASIC optimized and generic multiplier
//
//`define OR1200_GENERIC_MULTP2_32X32

//
// Size/type of insn/data cache if implemented
//
// `define OR1200_IC_1W_4KB
// `define OR1200_IC_1W_8KB
// `define OR1200_DC_1W_8KB



//////////////////////////////////////////////////////////
//
// Do not change below unless you know what you are doing
//

//
// Reset active low
//
//`define OR1200_RST_ACT_LOW

//
// Enable RAM BIST
//
// At the moment this only works for Virtual Silicon
// single port RAMs. For other RAMs it has not effect.
// Special wrapper for VS RAMs needs to be provided
// with scan flops to facilitate bist scan.
//
//`define OR1200_BIST

//
// Register OR1200 WISHBONE outputs
// (must be defined/enabled)
//

//
// Register OR1200 WISHBONE inputs
//
// (must be undefined/disabled)
//
//`define OR1200_REGISTERED_INPUTS

//
// Disable bursts if they are not supported by the
// memory subsystem (only affect cache line fill)
//
//`define OR1200_NO_BURSTS
//

//
// WISHBONE retry counter range
//
// 2^value range for retry counter. Retry counter
// is activated whenever *wb_rty_i is asserted and
// until retry counter expires, corresponding
// WISHBONE interface is deactivated.
//
// To disable retry counters and *wb_rty_i all together,
// undefine this macro.
//
//`define OR1200_WB_RETRY 7

//
// WISHBONE Consecutive Address Burst
//
// This was used prior to WISHBONE B3 specification
// to identify bursts. It is no longer needed but
// remains enabled for compatibility with old designs.
//
// To remove *wb_cab_o ports undefine this macro.
//
//`define OR1200_WB_CAB

//
// WISHBONE B3 compatible interface
//
// This follows the WISHBONE B3 specification.
// It is not enabled by default because most
// designs still don't use WB b3.
//
// To enable *wb_cti_o/*wb_bte_o ports,
// define this macro.
//

//
// LOG all WISHBONE accesses
//

//
// Enable additional synthesis directives if using
// _Synopsys_ synthesis tool
//
//`define OR1200_ADDITIONAL_SYNOPSYS_DIRECTIVES

//
// Enables default statement in some case blocks
// and disables Synopsys synthesis directive full_case
//
// By default it is enabled. When disabled it
// can increase clock frequency.
//

//
// Operand width / register file address width
//
// (DO NOT CHANGE)
//

//
// l.add/l.addi/l.and and optional l.addc/l.addic
// also set (compare) flag when result of their
// operation equals zero
//
// At the time of writing this, default or32
// C/C++ compiler doesn't generate code that
// would benefit from this optimization.
//
// By default this optimization is disabled to
// save area.
//
//`define OR1200_ADDITIONAL_FLAG_MODIFIERS

//
// Implement l.addc/l.addic instructions
//
// By default implementation of l.addc/l.addic
// instructions is enabled in case you need them.
// If you don't use them, then disable implementation
// to save area.
//

//
// Implement l.sub instruction
//
// By default implementation of l.sub instructions
// is enabled to be compliant with the simulator.
// If you don't use carry bit, then disable
// implementation to save area.
//

//
// Implement carry bit SR[CY]
//
//
// By default implementation of SR[CY] is enabled
// to be compliant with the simulator. However SR[CY]
// is explicitly only used by l.addc/l.addic/l.sub
// instructions and if these three insns are not
// implemented there is not much point having SR[CY].
//

//
// Implement carry bit SR[OV]
//
// Compiler doesn't use this, but other code may like
// to.
//

//
// Implement carry bit SR[OVE]
//
// Overflow interrupt indicator. When enabled, SR[OV] flag
// does not remain asserted after exception.
//


//
// Implement rotate in the ALU
//
// At the time of writing this, or32
// C/C++ compiler doesn't generate rotate
// instructions. However or32 assembler
// can assemble code that uses rotate insn.
// This means that rotate instructions
// must be used manually inserted.
//
// By default implementation of rotate
// is disabled to save area and increase
// clock frequency.
//
//`define OR1200_IMPL_ALU_ROTATE

//
// Type of ALU compare to implement
//
// Try to find which synthesizes with
// most efficient logic use or highest speed.
//
//`define OR1200_IMPL_ALU_COMP1
//`define OR1200_IMPL_ALU_COMP2

//
// Implement Find First/Last '1'
//

//
// Implement l.cust5 ALU instruction
//
//`define OR1200_IMPL_ALU_CUST5

//
// Implement l.extXs and l.extXz instructions
//

//
// Implement multiplier
//
// By default multiplier is implemented
//

//
// Implement multiply-and-accumulate
//
// By default MAC is implemented. To
// implement MAC, multiplier (non-serial) needs to be
// implemented.
//
//`define OR1200_MAC_IMPLEMENTED

//
// Implement optional l.div/l.divu instructions
//
// By default divide instructions are not implemented
// to save area.
//
//

//
// Serial multiplier.
//
//`define OR1200_MULT_SERIAL

//
// Serial divider.
// Uncomment to use a serial divider, otherwise will
// be a generic parallel implementation.
//

//
// Implement HW Single Precision FPU
//
//`define OR1200_FPU_IMPLEMENTED

//
// Clock ratio RISC clock versus WB clock
//
// If you plan to run WB:RISC clock fixed to 1:1, disable
// both defines
//
// For WB:RISC 1:2 or 1:1, enable OR1200_CLKDIV_2_SUPPORTED
// and use clmode to set ratio
//
// For WB:RISC 1:4, 1:2 or 1:1, enable both defines and use
// clmode to set ratio
//
//`define OR1200_CLKDIV_2_SUPPORTED
//`define OR1200_CLKDIV_4_SUPPORTED

//
// Type of register file RAM
//
// Memory macro w/ two ports (see or1200_tpram_32x32.v)
//`define OR1200_RFRAM_TWOPORT
//
// Memory macro dual port (see or1200_dpram.v)

//
// Generic (flip-flop based) register file (see or1200_rfram_generic.v)
//`define OR1200_RFRAM_GENERIC
//  Generic register file supports - 16 registers 

//
// Type of mem2reg aligner to implement.
//
// Once OR1200_IMPL_MEM2REG2 yielded faster
// circuit, however with today tools it will
// most probably give you slower circuit.
//
//`define OR1200_IMPL_MEM2REG2

//
// Reset value and event
//
    
//
// ALUOPs
//
/* LS-nibble encodings correspond to bits [3:0] of instruction */

/* Values sent to ALU from decode unit - not defined by ISA */

// ALU instructions second opcode field

//
// MACOPs
//

//
// Shift/rotate ops
//

//
// Zero/Sign Extend ops
//

// Execution cycles per instruction

// Execution control which will "wait on" a module to finish


// Operand MUX selects

//
// BRANCHOPs
//

//
// LSUOPs
//
// Bit 0: sign extend
// Bits 1-2: 00 doubleword, 01 byte, 10 halfword, 11 singleword
// Bit 3: 0 load, 1 store

// Number of bits of load/store EA precalculated in ID stage
// for balancing ID and EX stages.
//
// Valid range: 2,3,...,30,31

// FETCHOPs

//
// Register File Write-Back OPs
//
// Bit 0: register file write enable
// Bits 3-1: write-back mux selects
//

// Compare instructions

//
// FP OPs
//
// MSbit indicates FPU operation valid
//
// FPU unit from Usselman takes 5 cycles from decode, so 4 ex. cycles
// FP instruction is double precision if bit 4 is set. We're a 32-bit 
// implementation thus do not support double precision FP 
// FP Compare instructions

//
// TAGs for instruction bus
//

//
// TAGs for data bus
//


//////////////////////////////////////////////
//
// ORBIS32 ISA specifics
//

// SHROT_OP position in machine word

//
// Instruction opcode groups (basic)
//
/* */
/* */
/* */
/* */

/////////////////////////////////////////////////////
//
// Exceptions
//

//
// Exception vectors per OR1K architecture:
// 0xPPPPP100 - reset
// 0xPPPPP200 - bus error
// ... etc
// where P represents exception prefix.
//
// Exception vectors can be customized as per
// the following formula:
// 0xPPPPPNVV - exception N
//
// P represents exception prefix
// N represents exception N
// VV represents length of the individual vector space,
//   usually it is 8 bits wide and starts with all bits zero
//

//
// PPPPP and VV parts
//
// Sum of these two defines needs to be 28
//

//
// N part width
//

//
// Definition of exception vectors
//
// To avoid implementation of a certain exception,
// simply comment out corresponding line
//


/////////////////////////////////////////////////////
//
// SPR groups
//

// Bits that define the group

// Width of the group bits

// Bits that define offset inside the group

// List of groups

/////////////////////////////////////////////////////
//
// System group
//

//
// System registers
//

//
// SR bits
//

//
// Bits that define offset inside the group
//

//
// Default Exception Prefix
//
// 1'b0 - OR1200_EXCEPT_EPH0_P (0x0000_0000)
// 1'b1 - OR1200_EXCEPT_EPH1_P (0xF000_0000)
//


//
// FPCSR bits
//

/////////////////////////////////////////////////////
//
// Power Management (PM)
//

// Define it if you want PM implemented
//`define OR1200_PM_IMPLEMENTED

// Bit positions inside PMR (don't change)

// PMR offset inside PM group of registers

// PM group

// Define if PMR can be read/written at any address inside PM group

// Define if reading PMR is allowed

// Define if unused PMR bits should be zero


/////////////////////////////////////////////////////
//
// Debug Unit (DU)
//

// Define it if you want DU implemented

//
// Define if you want HW Breakpoints
// (if HW breakpoints are not implemented
// only default software trapping is
// possible with l.trap insn - this is
// however already enough for use
// with or32 gdb)
//
//`define OR1200_DU_HWBKPTS

// Number of DVR/DCR pairs if HW breakpoints enabled
//	Comment / uncomment DU_DVRn / DU_DCRn pairs bellow according to this number ! 
//	DU_DVR0..DU_DVR7 should be uncommented for 8 DU_DVRDCR_PAIRS 

// Define if you want trace buffer
//	(for now only available for Xilinx Virtex FPGAs)
//`define OR1200_DU_TB_IMPLEMENTED


//
// Address offsets of DU registers inside DU group
//
// To not implement a register, doq not define its address
//

// Position of offset bits inside SPR address

// DCR bits

// DMR1 bits

// DMR2 bits

// DWCR bits

// DSR bits

// DRR bits

// Define if reading DU regs is allowed

// Define if unused DU registers bits should be zero

// Define if IF/LSU status is not needed by devel i/f

/////////////////////////////////////////////////////
//
// Programmable Interrupt Controller (PIC)
//

// Define it if you want PIC implemented

// Define number of interrupt inputs (2-31)

// Address offsets of PIC registers inside PIC group

// Position of offset bits inside SPR address

// Define if you want these PIC registers to be implemented

// Define if reading PIC registers is allowed

// Define if unused PIC register bits should be zero


/////////////////////////////////////////////////////
//
// Tick Timer (TT)
//

// Define it if you want TT implemented

// Address offsets of TT registers inside TT group

// Position of offset bits inside SPR group

// Define if you want these TT registers to be implemented

// TTMR bits

// Define if reading TT registers is allowed


//////////////////////////////////////////////
//
// MAC
//

//
// Shift {MACHI,MACLO} into destination register when executing l.macrc
//
// According to architecture manual there is no shift, so default value is 0.
// However the implementation has deviated in this from the arch manual and had
// hard coded shift by 28 bits which is a useful optimization for MP3 decoding 
// (if using libmad fixed point library). Shifts are no longer default setup, 
// but if you need to remain backward compatible, define your shift bits, which
// were normally
// dest_GPR = {MACHI,MACLO}[59:28]


//////////////////////////////////////////////
//
// Data MMU (DMMU)
//

//
// Address that selects between TLB TR and MR
//

//
// DTLBMR fields
//

//
// DTLBTR fields
//

//
// DTLB configuration
//

//
// Cache inhibit while DMMU is not enabled/implemented
//
// cache inhibited 0GB-4GB		1'b1
// cache inhibited 0GB-2GB		!dcpu_adr_i[31]
// cache inhibited 0GB-1GB 2GB-3GB	!dcpu_adr_i[30]
// cache inhibited 1GB-2GB 3GB-4GB	dcpu_adr_i[30]
// cache inhibited 2GB-4GB (default)	dcpu_adr_i[31]
// cached 0GB-4GB			1'b0
//


//////////////////////////////////////////////
//
// Insn MMU (IMMU)
//

//
// Address that selects between TLB TR and MR
//

//
// ITLBMR fields
//

//
// ITLBTR fields
//

//
// ITLB configuration
//

//
// Cache inhibit while IMMU is not enabled/implemented
// Note: all combinations that use icpu_adr_i cause async loop
//
// cache inhibited 0GB-4GB		1'b1
// cache inhibited 0GB-2GB		!icpu_adr_i[31]
// cache inhibited 0GB-1GB 2GB-3GB	!icpu_adr_i[30]
// cache inhibited 1GB-2GB 3GB-4GB	icpu_adr_i[30]
// cache inhibited 2GB-4GB (default)	icpu_adr_i[31]
// cached 0GB-4GB			1'b0
//


/////////////////////////////////////////////////
//
// Insn cache (IC)
//

// 4 for 16 byte line, 5 for 32 byte lines.
 
//
// IC configurations
//


/////////////////////////////////////////////////
//
// Data cache (DC)
//

// 4 for 16 bytes, 5 for 32 bytes
 
// Define to enable default behavior of cache as write through
// Turning this off enabled write back statergy
//

// Define to enable stores from the stack not doing writethrough.
// EXPERIMENTAL
//`define OR1200_DC_NOSTACKWRITETHROUGH

// Data cache SPR definitions
// Data cache group SPR addresses

//
// DC configurations
//


/////////////////////////////////////////////////
//
// Store buffer (SB)
//

//
// Store buffer
//
// It will improve performance by "caching" CPU stores
// using store buffer. This is most important for function
// prologues because DC can only work in write though mode
// and all stores would have to complete external WB writes
// to memory.
// Store buffer is between DC and data BIU.
// All stores will be stored into store buffer and immediately
// completed by the CPU, even though actual external writes
// will be performed later. As a consequence store buffer masks
// all data bus errors related to stores (data bus errors
// related to loads are delivered normally).
// All pending CPU loads will wait until store buffer is empty to
// ensure strict memory model. Right now this is necessary because
// we don't make destinction between cached and cache inhibited
// address space, so we simply empty store buffer until loads
// can begin.
//
// It makes design a bit bigger, depending what is the number of
// entries in SB FIFO. Number of entries can be changed further
// down.
//
//`define OR1200_SB_IMPLEMENTED

//
// Number of store buffer entries
//
// Verified number of entries are 4 and 8 entries
// (2 and 3 for OR1200_SB_LOG). OR1200_SB_ENTRIES must
// always match 2**OR1200_SB_LOG.
// To disable store buffer, undefine
// OR1200_SB_IMPLEMENTED.
//


/////////////////////////////////////////////////
//
// Quick Embedded Memory (QMEM)
//

//
// Quick Embedded Memory
//
// Instantiation of dedicated insn/data memory (RAM or ROM).
// Insn fetch has effective throughput 1insn / clock cycle.
// Data load takes two clock cycles / access, data store
// takes 1 clock cycle / access (if there is no insn fetch)).
// Memory instantiation is shared between insn and data,
// meaning if insn fetch are performed, data load/store
// performance will be lower.
//
// Main reason for QMEM is to put some time critical functions
// into this memory and to have predictable and fast access
// to these functions. (soft fpu, context switch, exception
// handlers, stack, etc)
//
// It makes design a bit bigger and slower. QMEM sits behind
// IMMU/DMMU so all addresses are physical (so the MMUs can be
// used with QMEM and QMEM is seen by the CPU just like any other
// memory in the system). IC/DC are sitting behind QMEM so the
// whole design timing might be worse with QMEM implemented.
//
//`define OR1200_QMEM_IMPLEMENTED

//
// Base address and mask of QMEM
//
// Base address defines first address of QMEM. Mask defines
// QMEM range in address space. Actual size of QMEM is however
// determined with instantiated RAM/ROM. However bigger
// mask will reserve more address space for QMEM, but also
// make design faster, while more tight mask will take
// less address space but also make design slower. If
// instantiated RAM/ROM is smaller than space reserved with
// the mask, instatiated RAM/ROM will also be shadowed
// at higher addresses in reserved space.
//

//
// QMEM interface byte-select capability
//
// To enable qmem_sel* ports, define this macro.
//
//`define OR1200_QMEM_BSEL

//
// QMEM interface acknowledge
//
// To enable qmem_ack port, define this macro.
//
//`define OR1200_QMEM_ACK

/////////////////////////////////////////////////////
//
// VR, UPR and Configuration Registers
//
//
// VR, UPR and configuration registers are optional. If 
// implemented, operating system can automatically figure
// out how to use the processor because it knows 
// what units are available in the processor and how they
// are configured.
//
// This section must be last in or1200_defines.v file so
// that all units are already configured and thus
// configuration registers are properly set.
// 

// Define if you want configuration registers implemented

// Define if you want full address decode inside SYS group

// Offsets of VR, UPR and CFGR registers

// VR fields

// VR values

// UPR fields

// UPR values

// CPUCFGR fields

// CPUCFGR values
     

// DMMUCFGR fields

// DMMUCFGR values

// IMMUCFGR fields

// IMMUCFGR values

// DCCFGR fields

// DCCFGR values

// ICCFGR fields

// ICCFGR values

// DCFGR fields

// DCFGR values

///////////////////////////////////////////////////////////////////////////////
// Boot Address Selection                                                    //
//                                                                           //
// Allows a definable boot address, potentially different to the usual reset //
// vector to allow for power-on code to be run, if desired.                  //
//                                                                           //
// OR1200_BOOT_ADR should be the 32-bit address of the boot location         //
//                                                                           //
// For default reset behavior uncomment the settings under the "Boot 0x100"  //
// comment below.                                                            //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////
// Boot from 0xf0000100
//`define OR1200_BOOT_ADR 32'hf0000100
// Boot from 0x100
 

module PP_LOW ( ONEPOS, ONENEG, TWONEG, INA, INB, PPBIT );
input  ONEPOS;
input  ONENEG;
input  TWONEG;
input  INA;
input  INB;
output PPBIT;
   assign PPBIT = (ONEPOS & INA) | (ONENEG & INB) | TWONEG;
endmodule


module PP_MIDDLE ( ONEPOS, ONENEG, TWOPOS, TWONEG, INA, INB, INC, IND, PPBIT );
input  ONEPOS;
input  ONENEG;
input  TWOPOS;
input  TWONEG;
input  INA;
input  INB;
input  INC;
input  IND;
output PPBIT;
   assign PPBIT =  ~ (( ~ (INA & TWOPOS)) & ( ~ (INB & TWONEG)) & ( ~ (INC & ONEPOS)) & ( ~ (IND & ONENEG)));
endmodule


module PP_HIGH ( ONEPOS, ONENEG, TWOPOS, TWONEG, INA, INB, PPBIT );
input  ONEPOS;
input  ONENEG;
input  TWOPOS;
input  TWONEG;
input  INA;
input  INB;
output PPBIT;
   assign PPBIT =  ~ ((INA & ONEPOS) | (INB & ONENEG) | (INA & TWOPOS) | (INB & TWONEG));
endmodule


module R_GATE ( INA, INB, INC, PPBIT );
input  INA;
input  INB;
input  INC;
output PPBIT;
   assign PPBIT = ( ~ (INA & INB)) & INC;
endmodule


module DECODER ( INA, INB, INC, TWOPOS, TWONEG, ONEPOS, ONENEG );
input  INA;
input  INB;
input  INC;
output TWOPOS;
output TWONEG;
output ONEPOS;
output ONENEG;
   assign TWOPOS =  ~ ( ~ (INA & INB & ( ~ INC)));
   assign TWONEG =  ~ ( ~ (( ~ INA) & ( ~ INB) & INC));
   assign ONEPOS = (( ~ INA) & INB & ( ~ INC)) | (( ~ INC) & ( ~ INB) & INA);
   assign ONENEG = (INA & ( ~ INB) & INC) | (INC & INB & ( ~ INA));
endmodule


module BOOTHCODER_33_32 ( OPA, OPB, SUMMAND );
input  [0:32] OPA;
input  [0:31] OPB;
output [0:575] SUMMAND;
   wire [0:32] INV_MULTIPLICAND;
   wire [0:63] INT_MULTIPLIER;
   wire LOGIC_ONE, LOGIC_ZERO;
   assign LOGIC_ONE = 1;
   assign LOGIC_ZERO = 0;
   DECODER DEC_0 (.INA (LOGIC_ZERO) , .INB (OPB[0]) , .INC (OPB[1]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) );
   assign INV_MULTIPLICAND[0] =  ~ OPA[0];
   PP_LOW PPL_0 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[0]) );
   R_GATE RGATE_0 (.INA (LOGIC_ZERO) , .INB (OPB[0]) , .INC (OPB[1]) , .PPBIT (SUMMAND[1]) );
   assign INV_MULTIPLICAND[1] =  ~ OPA[1];
   PP_MIDDLE PPM_0 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[2]) );
   assign INV_MULTIPLICAND[2] =  ~ OPA[2];
   PP_MIDDLE PPM_1 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[3]) );
   assign INV_MULTIPLICAND[3] =  ~ OPA[3];
   PP_MIDDLE PPM_2 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[6]) );
   assign INV_MULTIPLICAND[4] =  ~ OPA[4];
   PP_MIDDLE PPM_3 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[8]) );
   assign INV_MULTIPLICAND[5] =  ~ OPA[5];
   PP_MIDDLE PPM_4 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[12]) );
   assign INV_MULTIPLICAND[6] =  ~ OPA[6];
   PP_MIDDLE PPM_5 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[15]) );
   assign INV_MULTIPLICAND[7] =  ~ OPA[7];
   PP_MIDDLE PPM_6 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[20]) );
   assign INV_MULTIPLICAND[8] =  ~ OPA[8];
   PP_MIDDLE PPM_7 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[24]) );
   assign INV_MULTIPLICAND[9] =  ~ OPA[9];
   PP_MIDDLE PPM_8 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[30]) );
   assign INV_MULTIPLICAND[10] =  ~ OPA[10];
   PP_MIDDLE PPM_9 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[35]) );
   assign INV_MULTIPLICAND[11] =  ~ OPA[11];
   PP_MIDDLE PPM_10 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[42]) );
   assign INV_MULTIPLICAND[12] =  ~ OPA[12];
   PP_MIDDLE PPM_11 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[48]) );
   assign INV_MULTIPLICAND[13] =  ~ OPA[13];
   PP_MIDDLE PPM_12 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[56]) );
   assign INV_MULTIPLICAND[14] =  ~ OPA[14];
   PP_MIDDLE PPM_13 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[63]) );
   assign INV_MULTIPLICAND[15] =  ~ OPA[15];
   PP_MIDDLE PPM_14 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[72]) );
   assign INV_MULTIPLICAND[16] =  ~ OPA[16];
   PP_MIDDLE PPM_15 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[80]) );
   assign INV_MULTIPLICAND[17] =  ~ OPA[17];
   PP_MIDDLE PPM_16 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[90]) );
   assign INV_MULTIPLICAND[18] =  ~ OPA[18];
   PP_MIDDLE PPM_17 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[99]) );
   assign INV_MULTIPLICAND[19] =  ~ OPA[19];
   PP_MIDDLE PPM_18 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[110]) );
   assign INV_MULTIPLICAND[20] =  ~ OPA[20];
   PP_MIDDLE PPM_19 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[120]) );
   assign INV_MULTIPLICAND[21] =  ~ OPA[21];
   PP_MIDDLE PPM_20 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[132]) );
   assign INV_MULTIPLICAND[22] =  ~ OPA[22];
   PP_MIDDLE PPM_21 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[143]) );
   assign INV_MULTIPLICAND[23] =  ~ OPA[23];
   PP_MIDDLE PPM_22 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[156]) );
   assign INV_MULTIPLICAND[24] =  ~ OPA[24];
   PP_MIDDLE PPM_23 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[168]) );
   assign INV_MULTIPLICAND[25] =  ~ OPA[25];
   PP_MIDDLE PPM_24 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[182]) );
   assign INV_MULTIPLICAND[26] =  ~ OPA[26];
   PP_MIDDLE PPM_25 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[195]) );
   assign INV_MULTIPLICAND[27] =  ~ OPA[27];
   PP_MIDDLE PPM_26 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[210]) );
   assign INV_MULTIPLICAND[28] =  ~ OPA[28];
   PP_MIDDLE PPM_27 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[224]) );
   assign INV_MULTIPLICAND[29] =  ~ OPA[29];
   PP_MIDDLE PPM_28 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[240]) );
   assign INV_MULTIPLICAND[30] =  ~ OPA[30];
   PP_MIDDLE PPM_29 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[255]) );
   assign INV_MULTIPLICAND[31] =  ~ OPA[31];
   PP_MIDDLE PPM_30 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[272]) );
   assign INV_MULTIPLICAND[32] =  ~ OPA[32];
   PP_MIDDLE PPM_31 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[288]) );
   PP_HIGH PPH_0 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[0]) , .TWONEG (INT_MULTIPLIER[1]) , .ONEPOS (INT_MULTIPLIER[2]) , .ONENEG (INT_MULTIPLIER[3]) , .PPBIT (SUMMAND[304]) );
   assign SUMMAND[305] = 1;
   DECODER DEC_1 (.INA (OPB[1]) , .INB (OPB[2]) , .INC (OPB[3]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) );
   PP_LOW PPL_1 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[4]) );
   R_GATE RGATE_1 (.INA (OPB[1]) , .INB (OPB[2]) , .INC (OPB[3]) , .PPBIT (SUMMAND[5]) );
   PP_MIDDLE PPM_32 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[7]) );
   PP_MIDDLE PPM_33 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[9]) );
   PP_MIDDLE PPM_34 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[13]) );
   PP_MIDDLE PPM_35 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[16]) );
   PP_MIDDLE PPM_36 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[21]) );
   PP_MIDDLE PPM_37 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[25]) );
   PP_MIDDLE PPM_38 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[31]) );
   PP_MIDDLE PPM_39 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[36]) );
   PP_MIDDLE PPM_40 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[43]) );
   PP_MIDDLE PPM_41 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[49]) );
   PP_MIDDLE PPM_42 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[57]) );
   PP_MIDDLE PPM_43 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[64]) );
   PP_MIDDLE PPM_44 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[73]) );
   PP_MIDDLE PPM_45 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[81]) );
   PP_MIDDLE PPM_46 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[91]) );
   PP_MIDDLE PPM_47 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[100]) );
   PP_MIDDLE PPM_48 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[111]) );
   PP_MIDDLE PPM_49 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[121]) );
   PP_MIDDLE PPM_50 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[133]) );
   PP_MIDDLE PPM_51 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[144]) );
   PP_MIDDLE PPM_52 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[157]) );
   PP_MIDDLE PPM_53 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[169]) );
   PP_MIDDLE PPM_54 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[183]) );
   PP_MIDDLE PPM_55 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[196]) );
   PP_MIDDLE PPM_56 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[211]) );
   PP_MIDDLE PPM_57 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[225]) );
   PP_MIDDLE PPM_58 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[241]) );
   PP_MIDDLE PPM_59 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[256]) );
   PP_MIDDLE PPM_60 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[273]) );
   PP_MIDDLE PPM_61 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[289]) );
   PP_MIDDLE PPM_62 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[306]) );
   PP_MIDDLE PPM_63 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[321]) );
   assign SUMMAND[322] = LOGIC_ONE;
   PP_HIGH PPH_1 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[4]) , .TWONEG (INT_MULTIPLIER[5]) , .ONEPOS (INT_MULTIPLIER[6]) , .ONENEG (INT_MULTIPLIER[7]) , .PPBIT (SUMMAND[337]) );
   DECODER DEC_2 (.INA (OPB[3]) , .INB (OPB[4]) , .INC (OPB[5]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) );
   PP_LOW PPL_2 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[10]) );
   R_GATE RGATE_2 (.INA (OPB[3]) , .INB (OPB[4]) , .INC (OPB[5]) , .PPBIT (SUMMAND[11]) );
   PP_MIDDLE PPM_64 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[14]) );
   PP_MIDDLE PPM_65 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[17]) );
   PP_MIDDLE PPM_66 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[22]) );
   PP_MIDDLE PPM_67 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[26]) );
   PP_MIDDLE PPM_68 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[32]) );
   PP_MIDDLE PPM_69 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[37]) );
   PP_MIDDLE PPM_70 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[44]) );
   PP_MIDDLE PPM_71 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[50]) );
   PP_MIDDLE PPM_72 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[58]) );
   PP_MIDDLE PPM_73 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[65]) );
   PP_MIDDLE PPM_74 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[74]) );
   PP_MIDDLE PPM_75 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[82]) );
   PP_MIDDLE PPM_76 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[92]) );
   PP_MIDDLE PPM_77 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[101]) );
   PP_MIDDLE PPM_78 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[112]) );
   PP_MIDDLE PPM_79 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[122]) );
   PP_MIDDLE PPM_80 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[134]) );
   PP_MIDDLE PPM_81 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[145]) );
   PP_MIDDLE PPM_82 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[158]) );
   PP_MIDDLE PPM_83 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[170]) );
   PP_MIDDLE PPM_84 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[184]) );
   PP_MIDDLE PPM_85 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[197]) );
   PP_MIDDLE PPM_86 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[212]) );
   PP_MIDDLE PPM_87 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[226]) );
   PP_MIDDLE PPM_88 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[242]) );
   PP_MIDDLE PPM_89 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[257]) );
   PP_MIDDLE PPM_90 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[274]) );
   PP_MIDDLE PPM_91 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[290]) );
   PP_MIDDLE PPM_92 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[307]) );
   PP_MIDDLE PPM_93 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[323]) );
   PP_MIDDLE PPM_94 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[338]) );
   PP_MIDDLE PPM_95 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[352]) );
   assign SUMMAND[353] = LOGIC_ONE;
   PP_HIGH PPH_2 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[8]) , .TWONEG (INT_MULTIPLIER[9]) , .ONEPOS (INT_MULTIPLIER[10]) , .ONENEG (INT_MULTIPLIER[11]) , .PPBIT (SUMMAND[367]) );
   DECODER DEC_3 (.INA (OPB[5]) , .INB (OPB[6]) , .INC (OPB[7]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) );
   PP_LOW PPL_3 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[18]) );
   R_GATE RGATE_3 (.INA (OPB[5]) , .INB (OPB[6]) , .INC (OPB[7]) , .PPBIT (SUMMAND[19]) );
   PP_MIDDLE PPM_96 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[23]) );
   PP_MIDDLE PPM_97 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[27]) );
   PP_MIDDLE PPM_98 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[33]) );
   PP_MIDDLE PPM_99 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[38]) );
   PP_MIDDLE PPM_100 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[45]) );
   PP_MIDDLE PPM_101 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[51]) );
   PP_MIDDLE PPM_102 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[59]) );
   PP_MIDDLE PPM_103 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[66]) );
   PP_MIDDLE PPM_104 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[75]) );
   PP_MIDDLE PPM_105 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[83]) );
   PP_MIDDLE PPM_106 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[93]) );
   PP_MIDDLE PPM_107 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[102]) );
   PP_MIDDLE PPM_108 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[113]) );
   PP_MIDDLE PPM_109 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[123]) );
   PP_MIDDLE PPM_110 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[135]) );
   PP_MIDDLE PPM_111 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[146]) );
   PP_MIDDLE PPM_112 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[159]) );
   PP_MIDDLE PPM_113 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[171]) );
   PP_MIDDLE PPM_114 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[185]) );
   PP_MIDDLE PPM_115 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[198]) );
   PP_MIDDLE PPM_116 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[213]) );
   PP_MIDDLE PPM_117 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[227]) );
   PP_MIDDLE PPM_118 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[243]) );
   PP_MIDDLE PPM_119 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[258]) );
   PP_MIDDLE PPM_120 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[275]) );
   PP_MIDDLE PPM_121 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[291]) );
   PP_MIDDLE PPM_122 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[308]) );
   PP_MIDDLE PPM_123 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[324]) );
   PP_MIDDLE PPM_124 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[339]) );
   PP_MIDDLE PPM_125 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[354]) );
   PP_MIDDLE PPM_126 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[368]) );
   PP_MIDDLE PPM_127 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[381]) );
   assign SUMMAND[382] = LOGIC_ONE;
   PP_HIGH PPH_3 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[12]) , .TWONEG (INT_MULTIPLIER[13]) , .ONEPOS (INT_MULTIPLIER[14]) , .ONENEG (INT_MULTIPLIER[15]) , .PPBIT (SUMMAND[395]) );
   DECODER DEC_4 (.INA (OPB[7]) , .INB (OPB[8]) , .INC (OPB[9]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) );
   PP_LOW PPL_4 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[28]) );
   R_GATE RGATE_4 (.INA (OPB[7]) , .INB (OPB[8]) , .INC (OPB[9]) , .PPBIT (SUMMAND[29]) );
   PP_MIDDLE PPM_128 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[34]) );
   PP_MIDDLE PPM_129 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[39]) );
   PP_MIDDLE PPM_130 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[46]) );
   PP_MIDDLE PPM_131 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[52]) );
   PP_MIDDLE PPM_132 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[60]) );
   PP_MIDDLE PPM_133 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[67]) );
   PP_MIDDLE PPM_134 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[76]) );
   PP_MIDDLE PPM_135 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[84]) );
   PP_MIDDLE PPM_136 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[94]) );
   PP_MIDDLE PPM_137 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[103]) );
   PP_MIDDLE PPM_138 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[114]) );
   PP_MIDDLE PPM_139 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[124]) );
   PP_MIDDLE PPM_140 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[136]) );
   PP_MIDDLE PPM_141 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[147]) );
   PP_MIDDLE PPM_142 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[160]) );
   PP_MIDDLE PPM_143 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[172]) );
   PP_MIDDLE PPM_144 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[186]) );
   PP_MIDDLE PPM_145 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[199]) );
   PP_MIDDLE PPM_146 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[214]) );
   PP_MIDDLE PPM_147 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[228]) );
   PP_MIDDLE PPM_148 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[244]) );
   PP_MIDDLE PPM_149 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[259]) );
   PP_MIDDLE PPM_150 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[276]) );
   PP_MIDDLE PPM_151 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[292]) );
   PP_MIDDLE PPM_152 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[309]) );
   PP_MIDDLE PPM_153 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[325]) );
   PP_MIDDLE PPM_154 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[340]) );
   PP_MIDDLE PPM_155 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[355]) );
   PP_MIDDLE PPM_156 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[369]) );
   PP_MIDDLE PPM_157 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[383]) );
   PP_MIDDLE PPM_158 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[396]) );
   PP_MIDDLE PPM_159 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[408]) );
   assign SUMMAND[409] = LOGIC_ONE;
   PP_HIGH PPH_4 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[16]) , .TWONEG (INT_MULTIPLIER[17]) , .ONEPOS (INT_MULTIPLIER[18]) , .ONENEG (INT_MULTIPLIER[19]) , .PPBIT (SUMMAND[421]) );
   DECODER DEC_5 (.INA (OPB[9]) , .INB (OPB[10]) , .INC (OPB[11]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) );
   PP_LOW PPL_5 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[40]) );
   R_GATE RGATE_5 (.INA (OPB[9]) , .INB (OPB[10]) , .INC (OPB[11]) , .PPBIT (SUMMAND[41]) );
   PP_MIDDLE PPM_160 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[47]) );
   PP_MIDDLE PPM_161 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[53]) );
   PP_MIDDLE PPM_162 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[61]) );
   PP_MIDDLE PPM_163 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[68]) );
   PP_MIDDLE PPM_164 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[77]) );
   PP_MIDDLE PPM_165 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[85]) );
   PP_MIDDLE PPM_166 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[95]) );
   PP_MIDDLE PPM_167 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[104]) );
   PP_MIDDLE PPM_168 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[115]) );
   PP_MIDDLE PPM_169 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[125]) );
   PP_MIDDLE PPM_170 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[137]) );
   PP_MIDDLE PPM_171 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[148]) );
   PP_MIDDLE PPM_172 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[161]) );
   PP_MIDDLE PPM_173 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[173]) );
   PP_MIDDLE PPM_174 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[187]) );
   PP_MIDDLE PPM_175 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[200]) );
   PP_MIDDLE PPM_176 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[215]) );
   PP_MIDDLE PPM_177 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[229]) );
   PP_MIDDLE PPM_178 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[245]) );
   PP_MIDDLE PPM_179 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[260]) );
   PP_MIDDLE PPM_180 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[277]) );
   PP_MIDDLE PPM_181 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[293]) );
   PP_MIDDLE PPM_182 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[310]) );
   PP_MIDDLE PPM_183 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[326]) );
   PP_MIDDLE PPM_184 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[341]) );
   PP_MIDDLE PPM_185 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[356]) );
   PP_MIDDLE PPM_186 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[370]) );
   PP_MIDDLE PPM_187 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[384]) );
   PP_MIDDLE PPM_188 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[397]) );
   PP_MIDDLE PPM_189 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[410]) );
   PP_MIDDLE PPM_190 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[422]) );
   PP_MIDDLE PPM_191 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[433]) );
   assign SUMMAND[434] = LOGIC_ONE;
   PP_HIGH PPH_5 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[20]) , .TWONEG (INT_MULTIPLIER[21]) , .ONEPOS (INT_MULTIPLIER[22]) , .ONENEG (INT_MULTIPLIER[23]) , .PPBIT (SUMMAND[445]) );
   DECODER DEC_6 (.INA (OPB[11]) , .INB (OPB[12]) , .INC (OPB[13]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) );
   PP_LOW PPL_6 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[54]) );
   R_GATE RGATE_6 (.INA (OPB[11]) , .INB (OPB[12]) , .INC (OPB[13]) , .PPBIT (SUMMAND[55]) );
   PP_MIDDLE PPM_192 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[62]) );
   PP_MIDDLE PPM_193 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[69]) );
   PP_MIDDLE PPM_194 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[78]) );
   PP_MIDDLE PPM_195 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[86]) );
   PP_MIDDLE PPM_196 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[96]) );
   PP_MIDDLE PPM_197 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[105]) );
   PP_MIDDLE PPM_198 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[116]) );
   PP_MIDDLE PPM_199 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[126]) );
   PP_MIDDLE PPM_200 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[138]) );
   PP_MIDDLE PPM_201 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[149]) );
   PP_MIDDLE PPM_202 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[162]) );
   PP_MIDDLE PPM_203 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[174]) );
   PP_MIDDLE PPM_204 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[188]) );
   PP_MIDDLE PPM_205 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[201]) );
   PP_MIDDLE PPM_206 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[216]) );
   PP_MIDDLE PPM_207 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[230]) );
   PP_MIDDLE PPM_208 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[246]) );
   PP_MIDDLE PPM_209 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[261]) );
   PP_MIDDLE PPM_210 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[278]) );
   PP_MIDDLE PPM_211 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[294]) );
   PP_MIDDLE PPM_212 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[311]) );
   PP_MIDDLE PPM_213 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[327]) );
   PP_MIDDLE PPM_214 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[342]) );
   PP_MIDDLE PPM_215 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[357]) );
   PP_MIDDLE PPM_216 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[371]) );
   PP_MIDDLE PPM_217 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[385]) );
   PP_MIDDLE PPM_218 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[398]) );
   PP_MIDDLE PPM_219 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[411]) );
   PP_MIDDLE PPM_220 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[423]) );
   PP_MIDDLE PPM_221 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[435]) );
   PP_MIDDLE PPM_222 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[446]) );
   PP_MIDDLE PPM_223 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[456]) );
   assign SUMMAND[457] = LOGIC_ONE;
   PP_HIGH PPH_6 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[24]) , .TWONEG (INT_MULTIPLIER[25]) , .ONEPOS (INT_MULTIPLIER[26]) , .ONENEG (INT_MULTIPLIER[27]) , .PPBIT (SUMMAND[467]) );
   DECODER DEC_7 (.INA (OPB[13]) , .INB (OPB[14]) , .INC (OPB[15]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) );
   PP_LOW PPL_7 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[70]) );
   R_GATE RGATE_7 (.INA (OPB[13]) , .INB (OPB[14]) , .INC (OPB[15]) , .PPBIT (SUMMAND[71]) );
   PP_MIDDLE PPM_224 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[79]) );
   PP_MIDDLE PPM_225 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[87]) );
   PP_MIDDLE PPM_226 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[97]) );
   PP_MIDDLE PPM_227 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[106]) );
   PP_MIDDLE PPM_228 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[117]) );
   PP_MIDDLE PPM_229 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[127]) );
   PP_MIDDLE PPM_230 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[139]) );
   PP_MIDDLE PPM_231 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[150]) );
   PP_MIDDLE PPM_232 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[163]) );
   PP_MIDDLE PPM_233 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[175]) );
   PP_MIDDLE PPM_234 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[189]) );
   PP_MIDDLE PPM_235 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[202]) );
   PP_MIDDLE PPM_236 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[217]) );
   PP_MIDDLE PPM_237 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[231]) );
   PP_MIDDLE PPM_238 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[247]) );
   PP_MIDDLE PPM_239 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[262]) );
   PP_MIDDLE PPM_240 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[279]) );
   PP_MIDDLE PPM_241 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[295]) );
   PP_MIDDLE PPM_242 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[312]) );
   PP_MIDDLE PPM_243 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[328]) );
   PP_MIDDLE PPM_244 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[343]) );
   PP_MIDDLE PPM_245 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[358]) );
   PP_MIDDLE PPM_246 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[372]) );
   PP_MIDDLE PPM_247 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[386]) );
   PP_MIDDLE PPM_248 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[399]) );
   PP_MIDDLE PPM_249 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[412]) );
   PP_MIDDLE PPM_250 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[424]) );
   PP_MIDDLE PPM_251 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[436]) );
   PP_MIDDLE PPM_252 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[447]) );
   PP_MIDDLE PPM_253 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[458]) );
   PP_MIDDLE PPM_254 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[468]) );
   PP_MIDDLE PPM_255 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[477]) );
   assign SUMMAND[478] = LOGIC_ONE;
   PP_HIGH PPH_7 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[28]) , .TWONEG (INT_MULTIPLIER[29]) , .ONEPOS (INT_MULTIPLIER[30]) , .ONENEG (INT_MULTIPLIER[31]) , .PPBIT (SUMMAND[487]) );
   DECODER DEC_8 (.INA (OPB[15]) , .INB (OPB[16]) , .INC (OPB[17]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) );
   PP_LOW PPL_8 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[88]) );
   R_GATE RGATE_8 (.INA (OPB[15]) , .INB (OPB[16]) , .INC (OPB[17]) , .PPBIT (SUMMAND[89]) );
   PP_MIDDLE PPM_256 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[98]) );
   PP_MIDDLE PPM_257 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[107]) );
   PP_MIDDLE PPM_258 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[118]) );
   PP_MIDDLE PPM_259 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[128]) );
   PP_MIDDLE PPM_260 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[140]) );
   PP_MIDDLE PPM_261 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[151]) );
   PP_MIDDLE PPM_262 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[164]) );
   PP_MIDDLE PPM_263 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[176]) );
   PP_MIDDLE PPM_264 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[190]) );
   PP_MIDDLE PPM_265 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[203]) );
   PP_MIDDLE PPM_266 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[218]) );
   PP_MIDDLE PPM_267 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[232]) );
   PP_MIDDLE PPM_268 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[248]) );
   PP_MIDDLE PPM_269 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[263]) );
   PP_MIDDLE PPM_270 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[280]) );
   PP_MIDDLE PPM_271 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[296]) );
   PP_MIDDLE PPM_272 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[313]) );
   PP_MIDDLE PPM_273 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[329]) );
   PP_MIDDLE PPM_274 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[344]) );
   PP_MIDDLE PPM_275 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[359]) );
   PP_MIDDLE PPM_276 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[373]) );
   PP_MIDDLE PPM_277 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[387]) );
   PP_MIDDLE PPM_278 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[400]) );
   PP_MIDDLE PPM_279 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[413]) );
   PP_MIDDLE PPM_280 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[425]) );
   PP_MIDDLE PPM_281 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[437]) );
   PP_MIDDLE PPM_282 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[448]) );
   PP_MIDDLE PPM_283 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[459]) );
   PP_MIDDLE PPM_284 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[469]) );
   PP_MIDDLE PPM_285 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[479]) );
   PP_MIDDLE PPM_286 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[488]) );
   PP_MIDDLE PPM_287 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[496]) );
   assign SUMMAND[497] = LOGIC_ONE;
   PP_HIGH PPH_8 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[32]) , .TWONEG (INT_MULTIPLIER[33]) , .ONEPOS (INT_MULTIPLIER[34]) , .ONENEG (INT_MULTIPLIER[35]) , .PPBIT (SUMMAND[505]) );
   DECODER DEC_9 (.INA (OPB[17]) , .INB (OPB[18]) , .INC (OPB[19]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) );
   PP_LOW PPL_9 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[108]) );
   R_GATE RGATE_9 (.INA (OPB[17]) , .INB (OPB[18]) , .INC (OPB[19]) , .PPBIT (SUMMAND[109]) );
   PP_MIDDLE PPM_288 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[119]) );
   PP_MIDDLE PPM_289 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[129]) );
   PP_MIDDLE PPM_290 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[141]) );
   PP_MIDDLE PPM_291 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[152]) );
   PP_MIDDLE PPM_292 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[165]) );
   PP_MIDDLE PPM_293 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[177]) );
   PP_MIDDLE PPM_294 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[191]) );
   PP_MIDDLE PPM_295 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[204]) );
   PP_MIDDLE PPM_296 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[219]) );
   PP_MIDDLE PPM_297 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[233]) );
   PP_MIDDLE PPM_298 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[249]) );
   PP_MIDDLE PPM_299 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[264]) );
   PP_MIDDLE PPM_300 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[281]) );
   PP_MIDDLE PPM_301 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[297]) );
   PP_MIDDLE PPM_302 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[314]) );
   PP_MIDDLE PPM_303 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[330]) );
   PP_MIDDLE PPM_304 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[345]) );
   PP_MIDDLE PPM_305 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[360]) );
   PP_MIDDLE PPM_306 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[374]) );
   PP_MIDDLE PPM_307 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[388]) );
   PP_MIDDLE PPM_308 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[401]) );
   PP_MIDDLE PPM_309 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[414]) );
   PP_MIDDLE PPM_310 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[426]) );
   PP_MIDDLE PPM_311 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[438]) );
   PP_MIDDLE PPM_312 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[449]) );
   PP_MIDDLE PPM_313 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[460]) );
   PP_MIDDLE PPM_314 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[470]) );
   PP_MIDDLE PPM_315 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[480]) );
   PP_MIDDLE PPM_316 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[489]) );
   PP_MIDDLE PPM_317 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[498]) );
   PP_MIDDLE PPM_318 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[506]) );
   PP_MIDDLE PPM_319 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[513]) );
   assign SUMMAND[514] = LOGIC_ONE;
   PP_HIGH PPH_9 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[36]) , .TWONEG (INT_MULTIPLIER[37]) , .ONEPOS (INT_MULTIPLIER[38]) , .ONENEG (INT_MULTIPLIER[39]) , .PPBIT (SUMMAND[521]) );
   DECODER DEC_10 (.INA (OPB[19]) , .INB (OPB[20]) , .INC (OPB[21]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) );
   PP_LOW PPL_10 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[130]) );
   R_GATE RGATE_10 (.INA (OPB[19]) , .INB (OPB[20]) , .INC (OPB[21]) , .PPBIT (SUMMAND[131]) );
   PP_MIDDLE PPM_320 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[142]) );
   PP_MIDDLE PPM_321 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[153]) );
   PP_MIDDLE PPM_322 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[166]) );
   PP_MIDDLE PPM_323 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[178]) );
   PP_MIDDLE PPM_324 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[192]) );
   PP_MIDDLE PPM_325 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[205]) );
   PP_MIDDLE PPM_326 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[220]) );
   PP_MIDDLE PPM_327 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[234]) );
   PP_MIDDLE PPM_328 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[250]) );
   PP_MIDDLE PPM_329 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[265]) );
   PP_MIDDLE PPM_330 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[282]) );
   PP_MIDDLE PPM_331 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[298]) );
   PP_MIDDLE PPM_332 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[315]) );
   PP_MIDDLE PPM_333 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[331]) );
   PP_MIDDLE PPM_334 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[346]) );
   PP_MIDDLE PPM_335 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[361]) );
   PP_MIDDLE PPM_336 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[375]) );
   PP_MIDDLE PPM_337 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[389]) );
   PP_MIDDLE PPM_338 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[402]) );
   PP_MIDDLE PPM_339 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[415]) );
   PP_MIDDLE PPM_340 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[427]) );
   PP_MIDDLE PPM_341 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[439]) );
   PP_MIDDLE PPM_342 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[450]) );
   PP_MIDDLE PPM_343 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[461]) );
   PP_MIDDLE PPM_344 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[471]) );
   PP_MIDDLE PPM_345 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[481]) );
   PP_MIDDLE PPM_346 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[490]) );
   PP_MIDDLE PPM_347 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[499]) );
   PP_MIDDLE PPM_348 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[507]) );
   PP_MIDDLE PPM_349 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[515]) );
   PP_MIDDLE PPM_350 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[522]) );
   PP_MIDDLE PPM_351 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[528]) );
   assign SUMMAND[529] = LOGIC_ONE;
   PP_HIGH PPH_10 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[40]) , .TWONEG (INT_MULTIPLIER[41]) , .ONEPOS (INT_MULTIPLIER[42]) , .ONENEG (INT_MULTIPLIER[43]) , .PPBIT (SUMMAND[535]) );
   DECODER DEC_11 (.INA (OPB[21]) , .INB (OPB[22]) , .INC (OPB[23]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) );
   PP_LOW PPL_11 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[154]) );
   R_GATE RGATE_11 (.INA (OPB[21]) , .INB (OPB[22]) , .INC (OPB[23]) , .PPBIT (SUMMAND[155]) );
   PP_MIDDLE PPM_352 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[167]) );
   PP_MIDDLE PPM_353 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[179]) );
   PP_MIDDLE PPM_354 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[193]) );
   PP_MIDDLE PPM_355 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[206]) );
   PP_MIDDLE PPM_356 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[221]) );
   PP_MIDDLE PPM_357 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[235]) );
   PP_MIDDLE PPM_358 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[251]) );
   PP_MIDDLE PPM_359 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[266]) );
   PP_MIDDLE PPM_360 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[283]) );
   PP_MIDDLE PPM_361 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[299]) );
   PP_MIDDLE PPM_362 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[316]) );
   PP_MIDDLE PPM_363 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[332]) );
   PP_MIDDLE PPM_364 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[347]) );
   PP_MIDDLE PPM_365 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[362]) );
   PP_MIDDLE PPM_366 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[376]) );
   PP_MIDDLE PPM_367 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[390]) );
   PP_MIDDLE PPM_368 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[403]) );
   PP_MIDDLE PPM_369 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[416]) );
   PP_MIDDLE PPM_370 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[428]) );
   PP_MIDDLE PPM_371 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[440]) );
   PP_MIDDLE PPM_372 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[451]) );
   PP_MIDDLE PPM_373 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[462]) );
   PP_MIDDLE PPM_374 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[472]) );
   PP_MIDDLE PPM_375 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[482]) );
   PP_MIDDLE PPM_376 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[491]) );
   PP_MIDDLE PPM_377 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[500]) );
   PP_MIDDLE PPM_378 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[508]) );
   PP_MIDDLE PPM_379 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[516]) );
   PP_MIDDLE PPM_380 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[523]) );
   PP_MIDDLE PPM_381 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[530]) );
   PP_MIDDLE PPM_382 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[536]) );
   PP_MIDDLE PPM_383 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[541]) );
   assign SUMMAND[542] = LOGIC_ONE;
   PP_HIGH PPH_11 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[44]) , .TWONEG (INT_MULTIPLIER[45]) , .ONEPOS (INT_MULTIPLIER[46]) , .ONENEG (INT_MULTIPLIER[47]) , .PPBIT (SUMMAND[547]) );
   DECODER DEC_12 (.INA (OPB[23]) , .INB (OPB[24]) , .INC (OPB[25]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) );
   PP_LOW PPL_12 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[180]) );
   R_GATE RGATE_12 (.INA (OPB[23]) , .INB (OPB[24]) , .INC (OPB[25]) , .PPBIT (SUMMAND[181]) );
   PP_MIDDLE PPM_384 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[194]) );
   PP_MIDDLE PPM_385 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[207]) );
   PP_MIDDLE PPM_386 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[222]) );
   PP_MIDDLE PPM_387 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[236]) );
   PP_MIDDLE PPM_388 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[252]) );
   PP_MIDDLE PPM_389 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[267]) );
   PP_MIDDLE PPM_390 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[284]) );
   PP_MIDDLE PPM_391 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[300]) );
   PP_MIDDLE PPM_392 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[317]) );
   PP_MIDDLE PPM_393 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[333]) );
   PP_MIDDLE PPM_394 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[348]) );
   PP_MIDDLE PPM_395 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[363]) );
   PP_MIDDLE PPM_396 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[377]) );
   PP_MIDDLE PPM_397 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[391]) );
   PP_MIDDLE PPM_398 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[404]) );
   PP_MIDDLE PPM_399 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[417]) );
   PP_MIDDLE PPM_400 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[429]) );
   PP_MIDDLE PPM_401 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[441]) );
   PP_MIDDLE PPM_402 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[452]) );
   PP_MIDDLE PPM_403 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[463]) );
   PP_MIDDLE PPM_404 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[473]) );
   PP_MIDDLE PPM_405 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[483]) );
   PP_MIDDLE PPM_406 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[492]) );
   PP_MIDDLE PPM_407 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[501]) );
   PP_MIDDLE PPM_408 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[509]) );
   PP_MIDDLE PPM_409 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[517]) );
   PP_MIDDLE PPM_410 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[524]) );
   PP_MIDDLE PPM_411 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[531]) );
   PP_MIDDLE PPM_412 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[537]) );
   PP_MIDDLE PPM_413 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[543]) );
   PP_MIDDLE PPM_414 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[548]) );
   PP_MIDDLE PPM_415 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[552]) );
   assign SUMMAND[553] = LOGIC_ONE;
   PP_HIGH PPH_12 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[48]) , .TWONEG (INT_MULTIPLIER[49]) , .ONEPOS (INT_MULTIPLIER[50]) , .ONENEG (INT_MULTIPLIER[51]) , .PPBIT (SUMMAND[557]) );
   DECODER DEC_13 (.INA (OPB[25]) , .INB (OPB[26]) , .INC (OPB[27]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) );
   PP_LOW PPL_13 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[208]) );
   R_GATE RGATE_13 (.INA (OPB[25]) , .INB (OPB[26]) , .INC (OPB[27]) , .PPBIT (SUMMAND[209]) );
   PP_MIDDLE PPM_416 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[223]) );
   PP_MIDDLE PPM_417 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[237]) );
   PP_MIDDLE PPM_418 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[253]) );
   PP_MIDDLE PPM_419 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[268]) );
   PP_MIDDLE PPM_420 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[285]) );
   PP_MIDDLE PPM_421 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[301]) );
   PP_MIDDLE PPM_422 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[318]) );
   PP_MIDDLE PPM_423 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[334]) );
   PP_MIDDLE PPM_424 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[349]) );
   PP_MIDDLE PPM_425 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[364]) );
   PP_MIDDLE PPM_426 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[378]) );
   PP_MIDDLE PPM_427 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[392]) );
   PP_MIDDLE PPM_428 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[405]) );
   PP_MIDDLE PPM_429 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[418]) );
   PP_MIDDLE PPM_430 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[430]) );
   PP_MIDDLE PPM_431 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[442]) );
   PP_MIDDLE PPM_432 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[453]) );
   PP_MIDDLE PPM_433 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[464]) );
   PP_MIDDLE PPM_434 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[474]) );
   PP_MIDDLE PPM_435 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[484]) );
   PP_MIDDLE PPM_436 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[493]) );
   PP_MIDDLE PPM_437 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[502]) );
   PP_MIDDLE PPM_438 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[510]) );
   PP_MIDDLE PPM_439 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[518]) );
   PP_MIDDLE PPM_440 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[525]) );
   PP_MIDDLE PPM_441 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[532]) );
   PP_MIDDLE PPM_442 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[538]) );
   PP_MIDDLE PPM_443 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[544]) );
   PP_MIDDLE PPM_444 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[549]) );
   PP_MIDDLE PPM_445 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[554]) );
   PP_MIDDLE PPM_446 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[558]) );
   PP_MIDDLE PPM_447 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[561]) );
   assign SUMMAND[562] = LOGIC_ONE;
   PP_HIGH PPH_13 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[52]) , .TWONEG (INT_MULTIPLIER[53]) , .ONEPOS (INT_MULTIPLIER[54]) , .ONENEG (INT_MULTIPLIER[55]) , .PPBIT (SUMMAND[565]) );
   DECODER DEC_14 (.INA (OPB[27]) , .INB (OPB[28]) , .INC (OPB[29]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) );
   PP_LOW PPL_14 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[238]) );
   R_GATE RGATE_14 (.INA (OPB[27]) , .INB (OPB[28]) , .INC (OPB[29]) , .PPBIT (SUMMAND[239]) );
   PP_MIDDLE PPM_448 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[254]) );
   PP_MIDDLE PPM_449 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[269]) );
   PP_MIDDLE PPM_450 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[286]) );
   PP_MIDDLE PPM_451 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[302]) );
   PP_MIDDLE PPM_452 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[319]) );
   PP_MIDDLE PPM_453 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[335]) );
   PP_MIDDLE PPM_454 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[350]) );
   PP_MIDDLE PPM_455 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[365]) );
   PP_MIDDLE PPM_456 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[379]) );
   PP_MIDDLE PPM_457 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[393]) );
   PP_MIDDLE PPM_458 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[406]) );
   PP_MIDDLE PPM_459 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[419]) );
   PP_MIDDLE PPM_460 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[431]) );
   PP_MIDDLE PPM_461 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[443]) );
   PP_MIDDLE PPM_462 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[454]) );
   PP_MIDDLE PPM_463 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[465]) );
   PP_MIDDLE PPM_464 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[475]) );
   PP_MIDDLE PPM_465 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[485]) );
   PP_MIDDLE PPM_466 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[494]) );
   PP_MIDDLE PPM_467 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[503]) );
   PP_MIDDLE PPM_468 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[511]) );
   PP_MIDDLE PPM_469 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[519]) );
   PP_MIDDLE PPM_470 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[526]) );
   PP_MIDDLE PPM_471 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[533]) );
   PP_MIDDLE PPM_472 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[539]) );
   PP_MIDDLE PPM_473 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[545]) );
   PP_MIDDLE PPM_474 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[550]) );
   PP_MIDDLE PPM_475 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[555]) );
   PP_MIDDLE PPM_476 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[559]) );
   PP_MIDDLE PPM_477 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[563]) );
   PP_MIDDLE PPM_478 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[566]) );
   PP_MIDDLE PPM_479 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[568]) );
   assign SUMMAND[569] = LOGIC_ONE;
   PP_HIGH PPH_14 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[56]) , .TWONEG (INT_MULTIPLIER[57]) , .ONEPOS (INT_MULTIPLIER[58]) , .ONENEG (INT_MULTIPLIER[59]) , .PPBIT (SUMMAND[571]) );
   DECODER DEC_15 (.INA (OPB[29]) , .INB (OPB[30]) , .INC (OPB[31]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) );
   PP_LOW PPL_15 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[270]) );
   R_GATE RGATE_15 (.INA (OPB[29]) , .INB (OPB[30]) , .INC (OPB[31]) , .PPBIT (SUMMAND[271]) );
   PP_MIDDLE PPM_480 (.INA (OPA[0]) , .INB (INV_MULTIPLICAND[0]) , .INC (OPA[1]) , .IND (INV_MULTIPLICAND[1]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[287]) );
   PP_MIDDLE PPM_481 (.INA (OPA[1]) , .INB (INV_MULTIPLICAND[1]) , .INC (OPA[2]) , .IND (INV_MULTIPLICAND[2]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[303]) );
   PP_MIDDLE PPM_482 (.INA (OPA[2]) , .INB (INV_MULTIPLICAND[2]) , .INC (OPA[3]) , .IND (INV_MULTIPLICAND[3]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[320]) );
   PP_MIDDLE PPM_483 (.INA (OPA[3]) , .INB (INV_MULTIPLICAND[3]) , .INC (OPA[4]) , .IND (INV_MULTIPLICAND[4]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[336]) );
   PP_MIDDLE PPM_484 (.INA (OPA[4]) , .INB (INV_MULTIPLICAND[4]) , .INC (OPA[5]) , .IND (INV_MULTIPLICAND[5]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[351]) );
   PP_MIDDLE PPM_485 (.INA (OPA[5]) , .INB (INV_MULTIPLICAND[5]) , .INC (OPA[6]) , .IND (INV_MULTIPLICAND[6]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[366]) );
   PP_MIDDLE PPM_486 (.INA (OPA[6]) , .INB (INV_MULTIPLICAND[6]) , .INC (OPA[7]) , .IND (INV_MULTIPLICAND[7]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[380]) );
   PP_MIDDLE PPM_487 (.INA (OPA[7]) , .INB (INV_MULTIPLICAND[7]) , .INC (OPA[8]) , .IND (INV_MULTIPLICAND[8]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[394]) );
   PP_MIDDLE PPM_488 (.INA (OPA[8]) , .INB (INV_MULTIPLICAND[8]) , .INC (OPA[9]) , .IND (INV_MULTIPLICAND[9]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[407]) );
   PP_MIDDLE PPM_489 (.INA (OPA[9]) , .INB (INV_MULTIPLICAND[9]) , .INC (OPA[10]) , .IND (INV_MULTIPLICAND[10]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[420]) );
   PP_MIDDLE PPM_490 (.INA (OPA[10]) , .INB (INV_MULTIPLICAND[10]) , .INC (OPA[11]) , .IND (INV_MULTIPLICAND[11]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[432]) );
   PP_MIDDLE PPM_491 (.INA (OPA[11]) , .INB (INV_MULTIPLICAND[11]) , .INC (OPA[12]) , .IND (INV_MULTIPLICAND[12]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[444]) );
   PP_MIDDLE PPM_492 (.INA (OPA[12]) , .INB (INV_MULTIPLICAND[12]) , .INC (OPA[13]) , .IND (INV_MULTIPLICAND[13]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[455]) );
   PP_MIDDLE PPM_493 (.INA (OPA[13]) , .INB (INV_MULTIPLICAND[13]) , .INC (OPA[14]) , .IND (INV_MULTIPLICAND[14]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[466]) );
   PP_MIDDLE PPM_494 (.INA (OPA[14]) , .INB (INV_MULTIPLICAND[14]) , .INC (OPA[15]) , .IND (INV_MULTIPLICAND[15]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[476]) );
   PP_MIDDLE PPM_495 (.INA (OPA[15]) , .INB (INV_MULTIPLICAND[15]) , .INC (OPA[16]) , .IND (INV_MULTIPLICAND[16]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[486]) );
   PP_MIDDLE PPM_496 (.INA (OPA[16]) , .INB (INV_MULTIPLICAND[16]) , .INC (OPA[17]) , .IND (INV_MULTIPLICAND[17]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[495]) );
   PP_MIDDLE PPM_497 (.INA (OPA[17]) , .INB (INV_MULTIPLICAND[17]) , .INC (OPA[18]) , .IND (INV_MULTIPLICAND[18]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[504]) );
   PP_MIDDLE PPM_498 (.INA (OPA[18]) , .INB (INV_MULTIPLICAND[18]) , .INC (OPA[19]) , .IND (INV_MULTIPLICAND[19]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[512]) );
   PP_MIDDLE PPM_499 (.INA (OPA[19]) , .INB (INV_MULTIPLICAND[19]) , .INC (OPA[20]) , .IND (INV_MULTIPLICAND[20]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[520]) );
   PP_MIDDLE PPM_500 (.INA (OPA[20]) , .INB (INV_MULTIPLICAND[20]) , .INC (OPA[21]) , .IND (INV_MULTIPLICAND[21]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[527]) );
   PP_MIDDLE PPM_501 (.INA (OPA[21]) , .INB (INV_MULTIPLICAND[21]) , .INC (OPA[22]) , .IND (INV_MULTIPLICAND[22]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[534]) );
   PP_MIDDLE PPM_502 (.INA (OPA[22]) , .INB (INV_MULTIPLICAND[22]) , .INC (OPA[23]) , .IND (INV_MULTIPLICAND[23]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[540]) );
   PP_MIDDLE PPM_503 (.INA (OPA[23]) , .INB (INV_MULTIPLICAND[23]) , .INC (OPA[24]) , .IND (INV_MULTIPLICAND[24]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[546]) );
   PP_MIDDLE PPM_504 (.INA (OPA[24]) , .INB (INV_MULTIPLICAND[24]) , .INC (OPA[25]) , .IND (INV_MULTIPLICAND[25]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[551]) );
   PP_MIDDLE PPM_505 (.INA (OPA[25]) , .INB (INV_MULTIPLICAND[25]) , .INC (OPA[26]) , .IND (INV_MULTIPLICAND[26]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[556]) );
   PP_MIDDLE PPM_506 (.INA (OPA[26]) , .INB (INV_MULTIPLICAND[26]) , .INC (OPA[27]) , .IND (INV_MULTIPLICAND[27]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[560]) );
   PP_MIDDLE PPM_507 (.INA (OPA[27]) , .INB (INV_MULTIPLICAND[27]) , .INC (OPA[28]) , .IND (INV_MULTIPLICAND[28]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[564]) );
   PP_MIDDLE PPM_508 (.INA (OPA[28]) , .INB (INV_MULTIPLICAND[28]) , .INC (OPA[29]) , .IND (INV_MULTIPLICAND[29]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[567]) );
   PP_MIDDLE PPM_509 (.INA (OPA[29]) , .INB (INV_MULTIPLICAND[29]) , .INC (OPA[30]) , .IND (INV_MULTIPLICAND[30]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[570]) );
   PP_MIDDLE PPM_510 (.INA (OPA[30]) , .INB (INV_MULTIPLICAND[30]) , .INC (OPA[31]) , .IND (INV_MULTIPLICAND[31]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[572]) );
   PP_MIDDLE PPM_511 (.INA (OPA[31]) , .INB (INV_MULTIPLICAND[31]) , .INC (OPA[32]) , .IND (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[573]) );
   assign SUMMAND[574] = LOGIC_ONE;
   PP_HIGH PPH_15 (.INA (OPA[32]) , .INB (INV_MULTIPLICAND[32]) , .TWOPOS (INT_MULTIPLIER[60]) , .TWONEG (INT_MULTIPLIER[61]) , .ONEPOS (INT_MULTIPLIER[62]) , .ONENEG (INT_MULTIPLIER[63]) , .PPBIT (SUMMAND[575]) );
endmodule


module FULL_ADDER ( DATA_A, DATA_B, DATA_C, SAVE, CARRY );
input  DATA_A;
input  DATA_B;
input  DATA_C;
output SAVE;
output CARRY;
   wire TMP;
   assign TMP = DATA_A ^ DATA_B;
   assign SAVE = TMP ^ DATA_C;
   assign CARRY =  ~ (( ~ (TMP & DATA_C)) & ( ~ (DATA_A & DATA_B)));
endmodule


module HALF_ADDER ( DATA_A, DATA_B, SAVE, CARRY );
input  DATA_A;
input  DATA_B;
output SAVE;
output CARRY;
   assign SAVE = DATA_A ^ DATA_B;
   assign CARRY = DATA_A & DATA_B;
endmodule


module FLIPFLOP ( DIN, RST, CLK, DOUT );
input  DIN;
input  RST;
input  CLK;
output DOUT;
   reg DOUT_reg;
   always @ ( posedge RST or posedge CLK ) begin
      if (RST == (1'b1))
        DOUT_reg <= 1'b0;
      else
        DOUT_reg <=  DIN;
   end
   assign DOUT = DOUT_reg;
endmodule


module WALLACE_33_32 ( SUMMAND, RST, CLK, CARRY, SUM );
input  [0:575] SUMMAND;
input  RST;
input  CLK;
output [0:62] CARRY;
output [0:63] SUM;
   wire [0:7] LATCHED_PP;
   wire [0:523] INT_CARRY;
   wire [0:669] INT_SUM;
   HALF_ADDER HA_0 (.DATA_A (SUMMAND[0]) , .DATA_B (SUMMAND[1]) , .SAVE (INT_SUM[0]) , .CARRY (INT_CARRY[0]) );
   FLIPFLOP LA_0 (.DIN (INT_SUM[0]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[0]) );
   FLIPFLOP LA_1 (.DIN (INT_CARRY[0]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[0]) );
   assign INT_SUM[1] = SUMMAND[2];
   assign CARRY[1] = 0;
   FLIPFLOP LA_2 (.DIN (INT_SUM[1]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[1]) );
   FULL_ADDER FA_0 (.DATA_A (SUMMAND[3]) , .DATA_B (SUMMAND[4]) , .DATA_C (SUMMAND[5]) , .SAVE (INT_SUM[2]) , .CARRY (INT_CARRY[1]) );
   FLIPFLOP LA_3 (.DIN (INT_SUM[2]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[2]) );
   FLIPFLOP LA_4 (.DIN (INT_CARRY[1]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[2]) );
   HALF_ADDER HA_1 (.DATA_A (SUMMAND[6]) , .DATA_B (SUMMAND[7]) , .SAVE (INT_SUM[3]) , .CARRY (INT_CARRY[2]) );
   FLIPFLOP LA_5 (.DIN (INT_SUM[3]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[3]) );
   FLIPFLOP LA_6 (.DIN (INT_CARRY[2]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[3]) );
   FULL_ADDER FA_1 (.DATA_A (SUMMAND[8]) , .DATA_B (SUMMAND[9]) , .DATA_C (SUMMAND[10]) , .SAVE (INT_SUM[4]) , .CARRY (INT_CARRY[4]) );
   assign INT_SUM[5] = SUMMAND[11];
   HALF_ADDER HA_2 (.DATA_A (INT_SUM[4]) , .DATA_B (INT_SUM[5]) , .SAVE (INT_SUM[6]) , .CARRY (INT_CARRY[3]) );
   FLIPFLOP LA_7 (.DIN (INT_SUM[6]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[4]) );
   FLIPFLOP LA_8 (.DIN (INT_CARRY[3]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[4]) );
   FULL_ADDER FA_2 (.DATA_A (SUMMAND[12]) , .DATA_B (SUMMAND[13]) , .DATA_C (SUMMAND[14]) , .SAVE (INT_SUM[7]) , .CARRY (INT_CARRY[6]) );
   HALF_ADDER HA_3 (.DATA_A (INT_SUM[7]) , .DATA_B (INT_CARRY[4]) , .SAVE (INT_SUM[8]) , .CARRY (INT_CARRY[5]) );
   FLIPFLOP LA_9 (.DIN (INT_SUM[8]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[5]) );
   FLIPFLOP LA_10 (.DIN (INT_CARRY[5]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[5]) );
   FULL_ADDER FA_3 (.DATA_A (SUMMAND[15]) , .DATA_B (SUMMAND[16]) , .DATA_C (SUMMAND[17]) , .SAVE (INT_SUM[9]) , .CARRY (INT_CARRY[8]) );
   HALF_ADDER HA_4 (.DATA_A (SUMMAND[18]) , .DATA_B (SUMMAND[19]) , .SAVE (INT_SUM[10]) , .CARRY (INT_CARRY[9]) );
   FULL_ADDER FA_4 (.DATA_A (INT_SUM[9]) , .DATA_B (INT_SUM[10]) , .DATA_C (INT_CARRY[6]) , .SAVE (INT_SUM[11]) , .CARRY (INT_CARRY[7]) );
   FLIPFLOP LA_11 (.DIN (INT_SUM[11]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[6]) );
   FLIPFLOP LA_12 (.DIN (INT_CARRY[7]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[6]) );
   FULL_ADDER FA_5 (.DATA_A (SUMMAND[20]) , .DATA_B (SUMMAND[21]) , .DATA_C (SUMMAND[22]) , .SAVE (INT_SUM[12]) , .CARRY (INT_CARRY[11]) );
   assign INT_SUM[13] = SUMMAND[23];
   FULL_ADDER FA_6 (.DATA_A (INT_SUM[12]) , .DATA_B (INT_SUM[13]) , .DATA_C (INT_CARRY[8]) , .SAVE (INT_SUM[14]) , .CARRY (INT_CARRY[12]) );
   assign INT_SUM[15] = INT_CARRY[9];
   HALF_ADDER HA_5 (.DATA_A (INT_SUM[14]) , .DATA_B (INT_SUM[15]) , .SAVE (INT_SUM[16]) , .CARRY (INT_CARRY[10]) );
   FLIPFLOP LA_13 (.DIN (INT_SUM[16]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[7]) );
   FLIPFLOP LA_14 (.DIN (INT_CARRY[10]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[7]) );
   FULL_ADDER FA_7 (.DATA_A (SUMMAND[24]) , .DATA_B (SUMMAND[25]) , .DATA_C (SUMMAND[26]) , .SAVE (INT_SUM[17]) , .CARRY (INT_CARRY[14]) );
   FULL_ADDER FA_8 (.DATA_A (SUMMAND[27]) , .DATA_B (SUMMAND[28]) , .DATA_C (SUMMAND[29]) , .SAVE (INT_SUM[18]) , .CARRY (INT_CARRY[15]) );
   FULL_ADDER FA_9 (.DATA_A (INT_SUM[17]) , .DATA_B (INT_SUM[18]) , .DATA_C (INT_CARRY[11]) , .SAVE (INT_SUM[19]) , .CARRY (INT_CARRY[16]) );
   HALF_ADDER HA_6 (.DATA_A (INT_SUM[19]) , .DATA_B (INT_CARRY[12]) , .SAVE (INT_SUM[20]) , .CARRY (INT_CARRY[13]) );
   FLIPFLOP LA_15 (.DIN (INT_SUM[20]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[8]) );
   FLIPFLOP LA_16 (.DIN (INT_CARRY[13]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[8]) );
   FULL_ADDER FA_10 (.DATA_A (SUMMAND[30]) , .DATA_B (SUMMAND[31]) , .DATA_C (SUMMAND[32]) , .SAVE (INT_SUM[21]) , .CARRY (INT_CARRY[18]) );
   HALF_ADDER HA_7 (.DATA_A (SUMMAND[33]) , .DATA_B (SUMMAND[34]) , .SAVE (INT_SUM[22]) , .CARRY (INT_CARRY[19]) );
   FULL_ADDER FA_11 (.DATA_A (INT_SUM[21]) , .DATA_B (INT_SUM[22]) , .DATA_C (INT_CARRY[14]) , .SAVE (INT_SUM[23]) , .CARRY (INT_CARRY[20]) );
   assign INT_SUM[24] = INT_CARRY[15];
   FULL_ADDER FA_12 (.DATA_A (INT_SUM[23]) , .DATA_B (INT_SUM[24]) , .DATA_C (INT_CARRY[16]) , .SAVE (INT_SUM[25]) , .CARRY (INT_CARRY[17]) );
   FLIPFLOP LA_17 (.DIN (INT_SUM[25]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[9]) );
   FLIPFLOP LA_18 (.DIN (INT_CARRY[17]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[9]) );
   FULL_ADDER FA_13 (.DATA_A (SUMMAND[35]) , .DATA_B (SUMMAND[36]) , .DATA_C (SUMMAND[37]) , .SAVE (INT_SUM[26]) , .CARRY (INT_CARRY[22]) );
   FULL_ADDER FA_14 (.DATA_A (SUMMAND[38]) , .DATA_B (SUMMAND[39]) , .DATA_C (SUMMAND[40]) , .SAVE (INT_SUM[27]) , .CARRY (INT_CARRY[23]) );
   assign INT_SUM[28] = SUMMAND[41];
   FULL_ADDER FA_15 (.DATA_A (INT_SUM[26]) , .DATA_B (INT_SUM[27]) , .DATA_C (INT_SUM[28]) , .SAVE (INT_SUM[29]) , .CARRY (INT_CARRY[24]) );
   HALF_ADDER HA_8 (.DATA_A (INT_CARRY[18]) , .DATA_B (INT_CARRY[19]) , .SAVE (INT_SUM[30]) , .CARRY (INT_CARRY[25]) );
   FULL_ADDER FA_16 (.DATA_A (INT_SUM[29]) , .DATA_B (INT_SUM[30]) , .DATA_C (INT_CARRY[20]) , .SAVE (INT_SUM[31]) , .CARRY (INT_CARRY[21]) );
   FLIPFLOP LA_19 (.DIN (INT_SUM[31]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[10]) );
   FLIPFLOP LA_20 (.DIN (INT_CARRY[21]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[10]) );
   FULL_ADDER FA_17 (.DATA_A (SUMMAND[42]) , .DATA_B (SUMMAND[43]) , .DATA_C (SUMMAND[44]) , .SAVE (INT_SUM[32]) , .CARRY (INT_CARRY[27]) );
   FULL_ADDER FA_18 (.DATA_A (SUMMAND[45]) , .DATA_B (SUMMAND[46]) , .DATA_C (SUMMAND[47]) , .SAVE (INT_SUM[33]) , .CARRY (INT_CARRY[28]) );
   FULL_ADDER FA_19 (.DATA_A (INT_SUM[32]) , .DATA_B (INT_SUM[33]) , .DATA_C (INT_CARRY[22]) , .SAVE (INT_SUM[34]) , .CARRY (INT_CARRY[29]) );
   assign INT_SUM[35] = INT_CARRY[23];
   FULL_ADDER FA_20 (.DATA_A (INT_SUM[34]) , .DATA_B (INT_SUM[35]) , .DATA_C (INT_CARRY[24]) , .SAVE (INT_SUM[36]) , .CARRY (INT_CARRY[30]) );
   assign INT_SUM[37] = INT_CARRY[25];
   HALF_ADDER HA_9 (.DATA_A (INT_SUM[36]) , .DATA_B (INT_SUM[37]) , .SAVE (INT_SUM[38]) , .CARRY (INT_CARRY[26]) );
   FLIPFLOP LA_21 (.DIN (INT_SUM[38]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[11]) );
   FLIPFLOP LA_22 (.DIN (INT_CARRY[26]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[11]) );
   FULL_ADDER FA_21 (.DATA_A (SUMMAND[48]) , .DATA_B (SUMMAND[49]) , .DATA_C (SUMMAND[50]) , .SAVE (INT_SUM[39]) , .CARRY (INT_CARRY[32]) );
   FULL_ADDER FA_22 (.DATA_A (SUMMAND[51]) , .DATA_B (SUMMAND[52]) , .DATA_C (SUMMAND[53]) , .SAVE (INT_SUM[40]) , .CARRY (INT_CARRY[33]) );
   assign INT_SUM[41] = SUMMAND[54];
   assign INT_SUM[42] = SUMMAND[55];
   FULL_ADDER FA_23 (.DATA_A (INT_SUM[39]) , .DATA_B (INT_SUM[40]) , .DATA_C (INT_SUM[41]) , .SAVE (INT_SUM[43]) , .CARRY (INT_CARRY[34]) );
   FULL_ADDER FA_24 (.DATA_A (INT_SUM[42]) , .DATA_B (INT_CARRY[27]) , .DATA_C (INT_CARRY[28]) , .SAVE (INT_SUM[44]) , .CARRY (INT_CARRY[35]) );
   FULL_ADDER FA_25 (.DATA_A (INT_SUM[43]) , .DATA_B (INT_SUM[44]) , .DATA_C (INT_CARRY[29]) , .SAVE (INT_SUM[45]) , .CARRY (INT_CARRY[36]) );
   HALF_ADDER HA_10 (.DATA_A (INT_SUM[45]) , .DATA_B (INT_CARRY[30]) , .SAVE (INT_SUM[46]) , .CARRY (INT_CARRY[31]) );
   FLIPFLOP LA_23 (.DIN (INT_SUM[46]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[12]) );
   FLIPFLOP LA_24 (.DIN (INT_CARRY[31]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[12]) );
   FULL_ADDER FA_26 (.DATA_A (SUMMAND[56]) , .DATA_B (SUMMAND[57]) , .DATA_C (SUMMAND[58]) , .SAVE (INT_SUM[47]) , .CARRY (INT_CARRY[38]) );
   FULL_ADDER FA_27 (.DATA_A (SUMMAND[59]) , .DATA_B (SUMMAND[60]) , .DATA_C (SUMMAND[61]) , .SAVE (INT_SUM[48]) , .CARRY (INT_CARRY[39]) );
   assign INT_SUM[49] = SUMMAND[62];
   FULL_ADDER FA_28 (.DATA_A (INT_SUM[47]) , .DATA_B (INT_SUM[48]) , .DATA_C (INT_SUM[49]) , .SAVE (INT_SUM[50]) , .CARRY (INT_CARRY[40]) );
   HALF_ADDER HA_11 (.DATA_A (INT_CARRY[32]) , .DATA_B (INT_CARRY[33]) , .SAVE (INT_SUM[51]) , .CARRY (INT_CARRY[41]) );
   FULL_ADDER FA_29 (.DATA_A (INT_SUM[50]) , .DATA_B (INT_SUM[51]) , .DATA_C (INT_CARRY[34]) , .SAVE (INT_SUM[52]) , .CARRY (INT_CARRY[42]) );
   assign INT_SUM[53] = INT_CARRY[35];
   FULL_ADDER FA_30 (.DATA_A (INT_SUM[52]) , .DATA_B (INT_SUM[53]) , .DATA_C (INT_CARRY[36]) , .SAVE (INT_SUM[54]) , .CARRY (INT_CARRY[37]) );
   FLIPFLOP LA_25 (.DIN (INT_SUM[54]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[13]) );
   FLIPFLOP LA_26 (.DIN (INT_CARRY[37]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[13]) );
   FULL_ADDER FA_31 (.DATA_A (SUMMAND[63]) , .DATA_B (SUMMAND[64]) , .DATA_C (SUMMAND[65]) , .SAVE (INT_SUM[55]) , .CARRY (INT_CARRY[44]) );
   FULL_ADDER FA_32 (.DATA_A (SUMMAND[66]) , .DATA_B (SUMMAND[67]) , .DATA_C (SUMMAND[68]) , .SAVE (INT_SUM[56]) , .CARRY (INT_CARRY[45]) );
   FULL_ADDER FA_33 (.DATA_A (SUMMAND[69]) , .DATA_B (SUMMAND[70]) , .DATA_C (SUMMAND[71]) , .SAVE (INT_SUM[57]) , .CARRY (INT_CARRY[46]) );
   FULL_ADDER FA_34 (.DATA_A (INT_SUM[55]) , .DATA_B (INT_SUM[56]) , .DATA_C (INT_SUM[57]) , .SAVE (INT_SUM[58]) , .CARRY (INT_CARRY[47]) );
   HALF_ADDER HA_12 (.DATA_A (INT_CARRY[38]) , .DATA_B (INT_CARRY[39]) , .SAVE (INT_SUM[59]) , .CARRY (INT_CARRY[48]) );
   FULL_ADDER FA_35 (.DATA_A (INT_SUM[58]) , .DATA_B (INT_SUM[59]) , .DATA_C (INT_CARRY[40]) , .SAVE (INT_SUM[60]) , .CARRY (INT_CARRY[49]) );
   assign INT_SUM[61] = INT_CARRY[41];
   FULL_ADDER FA_36 (.DATA_A (INT_SUM[60]) , .DATA_B (INT_SUM[61]) , .DATA_C (INT_CARRY[42]) , .SAVE (INT_SUM[62]) , .CARRY (INT_CARRY[43]) );
   FLIPFLOP LA_27 (.DIN (INT_SUM[62]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[14]) );
   FLIPFLOP LA_28 (.DIN (INT_CARRY[43]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[14]) );
   FULL_ADDER FA_37 (.DATA_A (SUMMAND[72]) , .DATA_B (SUMMAND[73]) , .DATA_C (SUMMAND[74]) , .SAVE (INT_SUM[63]) , .CARRY (INT_CARRY[51]) );
   FULL_ADDER FA_38 (.DATA_A (SUMMAND[75]) , .DATA_B (SUMMAND[76]) , .DATA_C (SUMMAND[77]) , .SAVE (INT_SUM[64]) , .CARRY (INT_CARRY[52]) );
   HALF_ADDER HA_13 (.DATA_A (SUMMAND[78]) , .DATA_B (SUMMAND[79]) , .SAVE (INT_SUM[65]) , .CARRY (INT_CARRY[53]) );
   FULL_ADDER FA_39 (.DATA_A (INT_SUM[63]) , .DATA_B (INT_SUM[64]) , .DATA_C (INT_SUM[65]) , .SAVE (INT_SUM[66]) , .CARRY (INT_CARRY[54]) );
   FULL_ADDER FA_40 (.DATA_A (INT_CARRY[44]) , .DATA_B (INT_CARRY[45]) , .DATA_C (INT_CARRY[46]) , .SAVE (INT_SUM[67]) , .CARRY (INT_CARRY[55]) );
   FULL_ADDER FA_41 (.DATA_A (INT_SUM[66]) , .DATA_B (INT_SUM[67]) , .DATA_C (INT_CARRY[47]) , .SAVE (INT_SUM[68]) , .CARRY (INT_CARRY[56]) );
   assign INT_SUM[69] = INT_CARRY[48];
   FULL_ADDER FA_42 (.DATA_A (INT_SUM[68]) , .DATA_B (INT_SUM[69]) , .DATA_C (INT_CARRY[49]) , .SAVE (INT_SUM[70]) , .CARRY (INT_CARRY[50]) );
   FLIPFLOP LA_29 (.DIN (INT_SUM[70]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[15]) );
   FLIPFLOP LA_30 (.DIN (INT_CARRY[50]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[15]) );
   FULL_ADDER FA_43 (.DATA_A (SUMMAND[80]) , .DATA_B (SUMMAND[81]) , .DATA_C (SUMMAND[82]) , .SAVE (INT_SUM[71]) , .CARRY (INT_CARRY[58]) );
   FULL_ADDER FA_44 (.DATA_A (SUMMAND[83]) , .DATA_B (SUMMAND[84]) , .DATA_C (SUMMAND[85]) , .SAVE (INT_SUM[72]) , .CARRY (INT_CARRY[59]) );
   FULL_ADDER FA_45 (.DATA_A (SUMMAND[86]) , .DATA_B (SUMMAND[87]) , .DATA_C (SUMMAND[88]) , .SAVE (INT_SUM[73]) , .CARRY (INT_CARRY[60]) );
   assign INT_SUM[74] = SUMMAND[89];
   FULL_ADDER FA_46 (.DATA_A (INT_SUM[71]) , .DATA_B (INT_SUM[72]) , .DATA_C (INT_SUM[73]) , .SAVE (INT_SUM[75]) , .CARRY (INT_CARRY[61]) );
   FULL_ADDER FA_47 (.DATA_A (INT_SUM[74]) , .DATA_B (INT_CARRY[51]) , .DATA_C (INT_CARRY[52]) , .SAVE (INT_SUM[76]) , .CARRY (INT_CARRY[62]) );
   assign INT_SUM[77] = INT_CARRY[53];
   FULL_ADDER FA_48 (.DATA_A (INT_SUM[75]) , .DATA_B (INT_SUM[76]) , .DATA_C (INT_SUM[77]) , .SAVE (INT_SUM[78]) , .CARRY (INT_CARRY[63]) );
   HALF_ADDER HA_14 (.DATA_A (INT_CARRY[54]) , .DATA_B (INT_CARRY[55]) , .SAVE (INT_SUM[79]) , .CARRY (INT_CARRY[64]) );
   FULL_ADDER FA_49 (.DATA_A (INT_SUM[78]) , .DATA_B (INT_SUM[79]) , .DATA_C (INT_CARRY[56]) , .SAVE (INT_SUM[80]) , .CARRY (INT_CARRY[57]) );
   FLIPFLOP LA_31 (.DIN (INT_SUM[80]) , .RST(RST), .CLK (CLK) , .DOUT (SUM[16]) );
   FLIPFLOP LA_32 (.DIN (INT_CARRY[57]) , .RST(RST), .CLK (CLK) , .DOUT (CARRY[16]) );
   FULL_ADDER FA_50 (.DATA_A (SUMMAND[90]) , .DATA_B (SUMMAND[91]) , .DATA_C (SUMMAND[92]) , .SAVE (INT_SUM[81]) , .CARRY (INT_CARRY[65]) );
   FULL_ADDER FA_51 (.DATA_A (SUMMAND[93]) , .DATA_B (SUMMAND[94]) , .DATA_C (SUMMAND[95]) , .SAVE (INT_SUM[82]) , .CARRY (INT_CARRY[66]) );
   FULL_ADDER FA_52 (.DATA_A (SUMMAND[96]) , .DATA_B (SUMMAND[97]) , .DATA_C (SUMMAND[98]) , .SAVE (INT_SUM[83]) , .CARRY (INT_CARRY[67]) );
   FULL_ADDER FA_53 (.DATA_A (INT_SUM[81]) , .DATA_B (INT_SUM[82]) , .DATA_C (INT_SUM[83]) , .SAVE (INT_SUM[84]) , .CARRY (INT_CARRY[68]) );
   FULL_ADDER FA_54 (.DATA_A (INT_CARRY[58]) , .DATA_B (INT_CARRY[59]) , .DATA_C (INT_CARRY[60]) , .SAVE (INT_SUM[85]) , .CARRY (INT_CARRY[69]) );
   FULL_ADDER FA_55 (.DATA_A (INT_SUM[84]) , .DATA_B (INT_SUM[85]) , .DATA_C (INT_CARRY[61]) , .SAVE (INT_SUM[86]) , .CARRY (INT_CARRY[70]) );
   assign INT_SUM[87] = INT_CARRY[62];
   FULL_ADDER FA_56 (.DATA_A (INT_SUM[86]) , .DATA_B (INT_SUM[87]) , .DATA_C (INT_CARRY[63]) , .SAVE (INT_SUM[88]) , .CARRY (INT_CARRY[71]) );
   assign INT_SUM[90] = INT_CARRY[64];
   FLIPFLOP LA_33 (.DIN (INT_SUM[88]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[89]) );
   FLIPFLOP LA_34 (.DIN (INT_SUM[90]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[91]) );
   HALF_ADDER HA_15 (.DATA_A (INT_SUM[89]) , .DATA_B (INT_SUM[91]) , .SAVE (SUM[17]) , .CARRY (CARRY[17]) );
   FULL_ADDER FA_57 (.DATA_A (SUMMAND[99]) , .DATA_B (SUMMAND[100]) , .DATA_C (SUMMAND[101]) , .SAVE (INT_SUM[92]) , .CARRY (INT_CARRY[73]) );
   FULL_ADDER FA_58 (.DATA_A (SUMMAND[102]) , .DATA_B (SUMMAND[103]) , .DATA_C (SUMMAND[104]) , .SAVE (INT_SUM[93]) , .CARRY (INT_CARRY[74]) );
   FULL_ADDER FA_59 (.DATA_A (SUMMAND[105]) , .DATA_B (SUMMAND[106]) , .DATA_C (SUMMAND[107]) , .SAVE (INT_SUM[94]) , .CARRY (INT_CARRY[75]) );
   assign INT_SUM[95] = SUMMAND[108];
   assign INT_SUM[96] = SUMMAND[109];
   FULL_ADDER FA_60 (.DATA_A (INT_SUM[92]) , .DATA_B (INT_SUM[93]) , .DATA_C (INT_SUM[94]) , .SAVE (INT_SUM[97]) , .CARRY (INT_CARRY[76]) );
   FULL_ADDER FA_61 (.DATA_A (INT_SUM[95]) , .DATA_B (INT_SUM[96]) , .DATA_C (INT_CARRY[65]) , .SAVE (INT_SUM[98]) , .CARRY (INT_CARRY[77]) );
   assign INT_SUM[99] = INT_CARRY[66];
   assign INT_SUM[100] = INT_CARRY[67];
   FULL_ADDER FA_62 (.DATA_A (INT_SUM[97]) , .DATA_B (INT_SUM[98]) , .DATA_C (INT_SUM[99]) , .SAVE (INT_SUM[101]) , .CARRY (INT_CARRY[78]) );
   FULL_ADDER FA_63 (.DATA_A (INT_SUM[100]) , .DATA_B (INT_CARRY[68]) , .DATA_C (INT_CARRY[69]) , .SAVE (INT_SUM[102]) , .CARRY (INT_CARRY[79]) );
   FULL_ADDER FA_64 (.DATA_A (INT_SUM[101]) , .DATA_B (INT_SUM[102]) , .DATA_C (INT_CARRY[70]) , .SAVE (INT_SUM[103]) , .CARRY (INT_CARRY[80]) );
   FLIPFLOP LA_35 (.DIN (INT_SUM[103]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[104]) );
   FLIPFLOP LA_36 (.DIN (INT_CARRY[71]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[72]) );
   HALF_ADDER HA_16 (.DATA_A (INT_SUM[104]) , .DATA_B (INT_CARRY[72]) , .SAVE (SUM[18]) , .CARRY (CARRY[18]) );
   FULL_ADDER FA_65 (.DATA_A (SUMMAND[110]) , .DATA_B (SUMMAND[111]) , .DATA_C (SUMMAND[112]) , .SAVE (INT_SUM[105]) , .CARRY (INT_CARRY[82]) );
   FULL_ADDER FA_66 (.DATA_A (SUMMAND[113]) , .DATA_B (SUMMAND[114]) , .DATA_C (SUMMAND[115]) , .SAVE (INT_SUM[106]) , .CARRY (INT_CARRY[83]) );
   FULL_ADDER FA_67 (.DATA_A (SUMMAND[116]) , .DATA_B (SUMMAND[117]) , .DATA_C (SUMMAND[118]) , .SAVE (INT_SUM[107]) , .CARRY (INT_CARRY[84]) );
   assign INT_SUM[108] = SUMMAND[119];
   FULL_ADDER FA_68 (.DATA_A (INT_SUM[105]) , .DATA_B (INT_SUM[106]) , .DATA_C (INT_SUM[107]) , .SAVE (INT_SUM[109]) , .CARRY (INT_CARRY[85]) );
   FULL_ADDER FA_69 (.DATA_A (INT_SUM[108]) , .DATA_B (INT_CARRY[73]) , .DATA_C (INT_CARRY[74]) , .SAVE (INT_SUM[110]) , .CARRY (INT_CARRY[86]) );
   assign INT_SUM[111] = INT_CARRY[75];
   FULL_ADDER FA_70 (.DATA_A (INT_SUM[109]) , .DATA_B (INT_SUM[110]) , .DATA_C (INT_SUM[111]) , .SAVE (INT_SUM[112]) , .CARRY (INT_CARRY[87]) );
   HALF_ADDER HA_17 (.DATA_A (INT_CARRY[76]) , .DATA_B (INT_CARRY[77]) , .SAVE (INT_SUM[113]) , .CARRY (INT_CARRY[88]) );
   FULL_ADDER FA_71 (.DATA_A (INT_SUM[112]) , .DATA_B (INT_SUM[113]) , .DATA_C (INT_CARRY[78]) , .SAVE (INT_SUM[114]) , .CARRY (INT_CARRY[89]) );
   assign INT_SUM[116] = INT_CARRY[79];
   FLIPFLOP LA_37 (.DIN (INT_SUM[114]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[115]) );
   FLIPFLOP LA_38 (.DIN (INT_SUM[116]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[117]) );
   FLIPFLOP LA_39 (.DIN (INT_CARRY[80]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[81]) );
   FULL_ADDER FA_72 (.DATA_A (INT_SUM[115]) , .DATA_B (INT_SUM[117]) , .DATA_C (INT_CARRY[81]) , .SAVE (SUM[19]) , .CARRY (CARRY[19]) );
   FULL_ADDER FA_73 (.DATA_A (SUMMAND[120]) , .DATA_B (SUMMAND[121]) , .DATA_C (SUMMAND[122]) , .SAVE (INT_SUM[118]) , .CARRY (INT_CARRY[91]) );
   FULL_ADDER FA_74 (.DATA_A (SUMMAND[123]) , .DATA_B (SUMMAND[124]) , .DATA_C (SUMMAND[125]) , .SAVE (INT_SUM[119]) , .CARRY (INT_CARRY[92]) );
   FULL_ADDER FA_75 (.DATA_A (SUMMAND[126]) , .DATA_B (SUMMAND[127]) , .DATA_C (SUMMAND[128]) , .SAVE (INT_SUM[120]) , .CARRY (INT_CARRY[93]) );
   FULL_ADDER FA_76 (.DATA_A (SUMMAND[129]) , .DATA_B (SUMMAND[130]) , .DATA_C (SUMMAND[131]) , .SAVE (INT_SUM[121]) , .CARRY (INT_CARRY[94]) );
   FULL_ADDER FA_77 (.DATA_A (INT_SUM[118]) , .DATA_B (INT_SUM[119]) , .DATA_C (INT_SUM[120]) , .SAVE (INT_SUM[122]) , .CARRY (INT_CARRY[95]) );
   FULL_ADDER FA_78 (.DATA_A (INT_SUM[121]) , .DATA_B (INT_CARRY[82]) , .DATA_C (INT_CARRY[83]) , .SAVE (INT_SUM[123]) , .CARRY (INT_CARRY[96]) );
   assign INT_SUM[124] = INT_CARRY[84];
   FULL_ADDER FA_79 (.DATA_A (INT_SUM[122]) , .DATA_B (INT_SUM[123]) , .DATA_C (INT_SUM[124]) , .SAVE (INT_SUM[125]) , .CARRY (INT_CARRY[97]) );
   HALF_ADDER HA_18 (.DATA_A (INT_CARRY[85]) , .DATA_B (INT_CARRY[86]) , .SAVE (INT_SUM[126]) , .CARRY (INT_CARRY[98]) );
   FULL_ADDER FA_80 (.DATA_A (INT_SUM[125]) , .DATA_B (INT_SUM[126]) , .DATA_C (INT_CARRY[87]) , .SAVE (INT_SUM[127]) , .CARRY (INT_CARRY[99]) );
   assign INT_SUM[129] = INT_CARRY[88];
   FLIPFLOP LA_40 (.DIN (INT_SUM[127]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[128]) );
   FLIPFLOP LA_41 (.DIN (INT_SUM[129]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[130]) );
   FLIPFLOP LA_42 (.DIN (INT_CARRY[89]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[90]) );
   FULL_ADDER FA_81 (.DATA_A (INT_SUM[128]) , .DATA_B (INT_SUM[130]) , .DATA_C (INT_CARRY[90]) , .SAVE (SUM[20]) , .CARRY (CARRY[20]) );
   FULL_ADDER FA_82 (.DATA_A (SUMMAND[132]) , .DATA_B (SUMMAND[133]) , .DATA_C (SUMMAND[134]) , .SAVE (INT_SUM[131]) , .CARRY (INT_CARRY[101]) );
   FULL_ADDER FA_83 (.DATA_A (SUMMAND[135]) , .DATA_B (SUMMAND[136]) , .DATA_C (SUMMAND[137]) , .SAVE (INT_SUM[132]) , .CARRY (INT_CARRY[102]) );
   FULL_ADDER FA_84 (.DATA_A (SUMMAND[138]) , .DATA_B (SUMMAND[139]) , .DATA_C (SUMMAND[140]) , .SAVE (INT_SUM[133]) , .CARRY (INT_CARRY[103]) );
   assign INT_SUM[134] = SUMMAND[141];
   assign INT_SUM[135] = SUMMAND[142];
   FULL_ADDER FA_85 (.DATA_A (INT_SUM[131]) , .DATA_B (INT_SUM[132]) , .DATA_C (INT_SUM[133]) , .SAVE (INT_SUM[136]) , .CARRY (INT_CARRY[104]) );
   FULL_ADDER FA_86 (.DATA_A (INT_SUM[134]) , .DATA_B (INT_SUM[135]) , .DATA_C (INT_CARRY[91]) , .SAVE (INT_SUM[137]) , .CARRY (INT_CARRY[105]) );
   FULL_ADDER FA_87 (.DATA_A (INT_CARRY[92]) , .DATA_B (INT_CARRY[93]) , .DATA_C (INT_CARRY[94]) , .SAVE (INT_SUM[138]) , .CARRY (INT_CARRY[106]) );
   FULL_ADDER FA_88 (.DATA_A (INT_SUM[136]) , .DATA_B (INT_SUM[137]) , .DATA_C (INT_SUM[138]) , .SAVE (INT_SUM[139]) , .CARRY (INT_CARRY[107]) );
   HALF_ADDER HA_19 (.DATA_A (INT_CARRY[95]) , .DATA_B (INT_CARRY[96]) , .SAVE (INT_SUM[140]) , .CARRY (INT_CARRY[108]) );
   FULL_ADDER FA_89 (.DATA_A (INT_SUM[139]) , .DATA_B (INT_SUM[140]) , .DATA_C (INT_CARRY[97]) , .SAVE (INT_SUM[141]) , .CARRY (INT_CARRY[109]) );
   assign INT_SUM[143] = INT_CARRY[98];
   FLIPFLOP LA_43 (.DIN (INT_SUM[141]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[142]) );
   FLIPFLOP LA_44 (.DIN (INT_SUM[143]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[144]) );
   FLIPFLOP LA_45 (.DIN (INT_CARRY[99]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[100]) );
   FULL_ADDER FA_90 (.DATA_A (INT_SUM[142]) , .DATA_B (INT_SUM[144]) , .DATA_C (INT_CARRY[100]) , .SAVE (SUM[21]) , .CARRY (CARRY[21]) );
   FULL_ADDER FA_91 (.DATA_A (SUMMAND[143]) , .DATA_B (SUMMAND[144]) , .DATA_C (SUMMAND[145]) , .SAVE (INT_SUM[145]) , .CARRY (INT_CARRY[111]) );
   FULL_ADDER FA_92 (.DATA_A (SUMMAND[146]) , .DATA_B (SUMMAND[147]) , .DATA_C (SUMMAND[148]) , .SAVE (INT_SUM[146]) , .CARRY (INT_CARRY[112]) );
   FULL_ADDER FA_93 (.DATA_A (SUMMAND[149]) , .DATA_B (SUMMAND[150]) , .DATA_C (SUMMAND[151]) , .SAVE (INT_SUM[147]) , .CARRY (INT_CARRY[113]) );
   FULL_ADDER FA_94 (.DATA_A (SUMMAND[152]) , .DATA_B (SUMMAND[153]) , .DATA_C (SUMMAND[154]) , .SAVE (INT_SUM[148]) , .CARRY (INT_CARRY[114]) );
   assign INT_SUM[149] = SUMMAND[155];
   FULL_ADDER FA_95 (.DATA_A (INT_SUM[145]) , .DATA_B (INT_SUM[146]) , .DATA_C (INT_SUM[147]) , .SAVE (INT_SUM[150]) , .CARRY (INT_CARRY[115]) );
   FULL_ADDER FA_96 (.DATA_A (INT_SUM[148]) , .DATA_B (INT_SUM[149]) , .DATA_C (INT_CARRY[101]) , .SAVE (INT_SUM[151]) , .CARRY (INT_CARRY[116]) );
   HALF_ADDER HA_20 (.DATA_A (INT_CARRY[102]) , .DATA_B (INT_CARRY[103]) , .SAVE (INT_SUM[152]) , .CARRY (INT_CARRY[117]) );
   FULL_ADDER FA_97 (.DATA_A (INT_SUM[150]) , .DATA_B (INT_SUM[151]) , .DATA_C (INT_SUM[152]) , .SAVE (INT_SUM[153]) , .CARRY (INT_CARRY[118]) );
   FULL_ADDER FA_98 (.DATA_A (INT_CARRY[104]) , .DATA_B (INT_CARRY[105]) , .DATA_C (INT_CARRY[106]) , .SAVE (INT_SUM[154]) , .CARRY (INT_CARRY[119]) );
   FULL_ADDER FA_99 (.DATA_A (INT_SUM[153]) , .DATA_B (INT_SUM[154]) , .DATA_C (INT_CARRY[107]) , .SAVE (INT_SUM[155]) , .CARRY (INT_CARRY[120]) );
   assign INT_SUM[157] = INT_CARRY[108];
   FLIPFLOP LA_46 (.DIN (INT_SUM[155]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[156]) );
   FLIPFLOP LA_47 (.DIN (INT_SUM[157]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[158]) );
   FLIPFLOP LA_48 (.DIN (INT_CARRY[109]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[110]) );
   FULL_ADDER FA_100 (.DATA_A (INT_SUM[156]) , .DATA_B (INT_SUM[158]) , .DATA_C (INT_CARRY[110]) , .SAVE (SUM[22]) , .CARRY (CARRY[22]) );
   FULL_ADDER FA_101 (.DATA_A (SUMMAND[156]) , .DATA_B (SUMMAND[157]) , .DATA_C (SUMMAND[158]) , .SAVE (INT_SUM[159]) , .CARRY (INT_CARRY[122]) );
   FULL_ADDER FA_102 (.DATA_A (SUMMAND[159]) , .DATA_B (SUMMAND[160]) , .DATA_C (SUMMAND[161]) , .SAVE (INT_SUM[160]) , .CARRY (INT_CARRY[123]) );
   FULL_ADDER FA_103 (.DATA_A (SUMMAND[162]) , .DATA_B (SUMMAND[163]) , .DATA_C (SUMMAND[164]) , .SAVE (INT_SUM[161]) , .CARRY (INT_CARRY[124]) );
   FULL_ADDER FA_104 (.DATA_A (SUMMAND[165]) , .DATA_B (SUMMAND[166]) , .DATA_C (SUMMAND[167]) , .SAVE (INT_SUM[162]) , .CARRY (INT_CARRY[125]) );
   FULL_ADDER FA_105 (.DATA_A (INT_SUM[159]) , .DATA_B (INT_SUM[160]) , .DATA_C (INT_SUM[161]) , .SAVE (INT_SUM[163]) , .CARRY (INT_CARRY[126]) );
   FULL_ADDER FA_106 (.DATA_A (INT_SUM[162]) , .DATA_B (INT_CARRY[111]) , .DATA_C (INT_CARRY[112]) , .SAVE (INT_SUM[164]) , .CARRY (INT_CARRY[127]) );
   HALF_ADDER HA_21 (.DATA_A (INT_CARRY[113]) , .DATA_B (INT_CARRY[114]) , .SAVE (INT_SUM[165]) , .CARRY (INT_CARRY[128]) );
   FULL_ADDER FA_107 (.DATA_A (INT_SUM[163]) , .DATA_B (INT_SUM[164]) , .DATA_C (INT_SUM[165]) , .SAVE (INT_SUM[166]) , .CARRY (INT_CARRY[129]) );
   FULL_ADDER FA_108 (.DATA_A (INT_CARRY[115]) , .DATA_B (INT_CARRY[116]) , .DATA_C (INT_CARRY[117]) , .SAVE (INT_SUM[167]) , .CARRY (INT_CARRY[130]) );
   FULL_ADDER FA_109 (.DATA_A (INT_SUM[166]) , .DATA_B (INT_SUM[167]) , .DATA_C (INT_CARRY[118]) , .SAVE (INT_SUM[168]) , .CARRY (INT_CARRY[131]) );
   assign INT_SUM[170] = INT_CARRY[119];
   FLIPFLOP LA_49 (.DIN (INT_SUM[168]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[169]) );
   FLIPFLOP LA_50 (.DIN (INT_SUM[170]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[171]) );
   FLIPFLOP LA_51 (.DIN (INT_CARRY[120]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[121]) );
   FULL_ADDER FA_110 (.DATA_A (INT_SUM[169]) , .DATA_B (INT_SUM[171]) , .DATA_C (INT_CARRY[121]) , .SAVE (SUM[23]) , .CARRY (CARRY[23]) );
   FULL_ADDER FA_111 (.DATA_A (SUMMAND[168]) , .DATA_B (SUMMAND[169]) , .DATA_C (SUMMAND[170]) , .SAVE (INT_SUM[172]) , .CARRY (INT_CARRY[133]) );
   FULL_ADDER FA_112 (.DATA_A (SUMMAND[171]) , .DATA_B (SUMMAND[172]) , .DATA_C (SUMMAND[173]) , .SAVE (INT_SUM[173]) , .CARRY (INT_CARRY[134]) );
   FULL_ADDER FA_113 (.DATA_A (SUMMAND[174]) , .DATA_B (SUMMAND[175]) , .DATA_C (SUMMAND[176]) , .SAVE (INT_SUM[174]) , .CARRY (INT_CARRY[135]) );
   FULL_ADDER FA_114 (.DATA_A (SUMMAND[177]) , .DATA_B (SUMMAND[178]) , .DATA_C (SUMMAND[179]) , .SAVE (INT_SUM[175]) , .CARRY (INT_CARRY[136]) );
   HALF_ADDER HA_22 (.DATA_A (SUMMAND[180]) , .DATA_B (SUMMAND[181]) , .SAVE (INT_SUM[176]) , .CARRY (INT_CARRY[137]) );
   FULL_ADDER FA_115 (.DATA_A (INT_SUM[172]) , .DATA_B (INT_SUM[173]) , .DATA_C (INT_SUM[174]) , .SAVE (INT_SUM[177]) , .CARRY (INT_CARRY[138]) );
   FULL_ADDER FA_116 (.DATA_A (INT_SUM[175]) , .DATA_B (INT_SUM[176]) , .DATA_C (INT_CARRY[122]) , .SAVE (INT_SUM[178]) , .CARRY (INT_CARRY[139]) );
   FULL_ADDER FA_117 (.DATA_A (INT_CARRY[123]) , .DATA_B (INT_CARRY[124]) , .DATA_C (INT_CARRY[125]) , .SAVE (INT_SUM[179]) , .CARRY (INT_CARRY[140]) );
   FULL_ADDER FA_118 (.DATA_A (INT_SUM[177]) , .DATA_B (INT_SUM[178]) , .DATA_C (INT_SUM[179]) , .SAVE (INT_SUM[180]) , .CARRY (INT_CARRY[141]) );
   FULL_ADDER FA_119 (.DATA_A (INT_CARRY[126]) , .DATA_B (INT_CARRY[127]) , .DATA_C (INT_CARRY[128]) , .SAVE (INT_SUM[181]) , .CARRY (INT_CARRY[142]) );
   FULL_ADDER FA_120 (.DATA_A (INT_SUM[180]) , .DATA_B (INT_SUM[181]) , .DATA_C (INT_CARRY[129]) , .SAVE (INT_SUM[182]) , .CARRY (INT_CARRY[143]) );
   assign INT_SUM[184] = INT_CARRY[130];
   FLIPFLOP LA_52 (.DIN (INT_SUM[182]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[183]) );
   FLIPFLOP LA_53 (.DIN (INT_SUM[184]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[185]) );
   FLIPFLOP LA_54 (.DIN (INT_CARRY[131]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[132]) );
   FULL_ADDER FA_121 (.DATA_A (INT_SUM[183]) , .DATA_B (INT_SUM[185]) , .DATA_C (INT_CARRY[132]) , .SAVE (SUM[24]) , .CARRY (CARRY[24]) );
   FULL_ADDER FA_122 (.DATA_A (SUMMAND[182]) , .DATA_B (SUMMAND[183]) , .DATA_C (SUMMAND[184]) , .SAVE (INT_SUM[186]) , .CARRY (INT_CARRY[145]) );
   FULL_ADDER FA_123 (.DATA_A (SUMMAND[185]) , .DATA_B (SUMMAND[186]) , .DATA_C (SUMMAND[187]) , .SAVE (INT_SUM[187]) , .CARRY (INT_CARRY[146]) );
   FULL_ADDER FA_124 (.DATA_A (SUMMAND[188]) , .DATA_B (SUMMAND[189]) , .DATA_C (SUMMAND[190]) , .SAVE (INT_SUM[188]) , .CARRY (INT_CARRY[147]) );
   FULL_ADDER FA_125 (.DATA_A (SUMMAND[191]) , .DATA_B (SUMMAND[192]) , .DATA_C (SUMMAND[193]) , .SAVE (INT_SUM[189]) , .CARRY (INT_CARRY[148]) );
   assign INT_SUM[190] = SUMMAND[194];
   FULL_ADDER FA_126 (.DATA_A (INT_SUM[186]) , .DATA_B (INT_SUM[187]) , .DATA_C (INT_SUM[188]) , .SAVE (INT_SUM[191]) , .CARRY (INT_CARRY[149]) );
   FULL_ADDER FA_127 (.DATA_A (INT_SUM[189]) , .DATA_B (INT_SUM[190]) , .DATA_C (INT_CARRY[133]) , .SAVE (INT_SUM[192]) , .CARRY (INT_CARRY[150]) );
   FULL_ADDER FA_128 (.DATA_A (INT_CARRY[134]) , .DATA_B (INT_CARRY[135]) , .DATA_C (INT_CARRY[136]) , .SAVE (INT_SUM[193]) , .CARRY (INT_CARRY[151]) );
   assign INT_SUM[194] = INT_CARRY[137];
   FULL_ADDER FA_129 (.DATA_A (INT_SUM[191]) , .DATA_B (INT_SUM[192]) , .DATA_C (INT_SUM[193]) , .SAVE (INT_SUM[195]) , .CARRY (INT_CARRY[152]) );
   FULL_ADDER FA_130 (.DATA_A (INT_SUM[194]) , .DATA_B (INT_CARRY[138]) , .DATA_C (INT_CARRY[139]) , .SAVE (INT_SUM[196]) , .CARRY (INT_CARRY[153]) );
   assign INT_SUM[197] = INT_CARRY[140];
   FULL_ADDER FA_131 (.DATA_A (INT_SUM[195]) , .DATA_B (INT_SUM[196]) , .DATA_C (INT_SUM[197]) , .SAVE (INT_SUM[198]) , .CARRY (INT_CARRY[154]) );
   HALF_ADDER HA_23 (.DATA_A (INT_CARRY[141]) , .DATA_B (INT_CARRY[142]) , .SAVE (INT_SUM[200]) , .CARRY (INT_CARRY[156]) );
   FLIPFLOP LA_55 (.DIN (INT_SUM[198]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[199]) );
   FLIPFLOP LA_56 (.DIN (INT_SUM[200]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[201]) );
   FLIPFLOP LA_57 (.DIN (INT_CARRY[143]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[144]) );
   FULL_ADDER FA_132 (.DATA_A (INT_SUM[199]) , .DATA_B (INT_SUM[201]) , .DATA_C (INT_CARRY[144]) , .SAVE (SUM[25]) , .CARRY (CARRY[25]) );
   FULL_ADDER FA_133 (.DATA_A (SUMMAND[195]) , .DATA_B (SUMMAND[196]) , .DATA_C (SUMMAND[197]) , .SAVE (INT_SUM[202]) , .CARRY (INT_CARRY[158]) );
   FULL_ADDER FA_134 (.DATA_A (SUMMAND[198]) , .DATA_B (SUMMAND[199]) , .DATA_C (SUMMAND[200]) , .SAVE (INT_SUM[203]) , .CARRY (INT_CARRY[159]) );
   FULL_ADDER FA_135 (.DATA_A (SUMMAND[201]) , .DATA_B (SUMMAND[202]) , .DATA_C (SUMMAND[203]) , .SAVE (INT_SUM[204]) , .CARRY (INT_CARRY[160]) );
   FULL_ADDER FA_136 (.DATA_A (SUMMAND[204]) , .DATA_B (SUMMAND[205]) , .DATA_C (SUMMAND[206]) , .SAVE (INT_SUM[205]) , .CARRY (INT_CARRY[161]) );
   FULL_ADDER FA_137 (.DATA_A (SUMMAND[207]) , .DATA_B (SUMMAND[208]) , .DATA_C (SUMMAND[209]) , .SAVE (INT_SUM[206]) , .CARRY (INT_CARRY[162]) );
   FULL_ADDER FA_138 (.DATA_A (INT_SUM[202]) , .DATA_B (INT_SUM[203]) , .DATA_C (INT_SUM[204]) , .SAVE (INT_SUM[207]) , .CARRY (INT_CARRY[163]) );
   FULL_ADDER FA_139 (.DATA_A (INT_SUM[205]) , .DATA_B (INT_SUM[206]) , .DATA_C (INT_CARRY[145]) , .SAVE (INT_SUM[208]) , .CARRY (INT_CARRY[164]) );
   FULL_ADDER FA_140 (.DATA_A (INT_CARRY[146]) , .DATA_B (INT_CARRY[147]) , .DATA_C (INT_CARRY[148]) , .SAVE (INT_SUM[209]) , .CARRY (INT_CARRY[165]) );
   FULL_ADDER FA_141 (.DATA_A (INT_SUM[207]) , .DATA_B (INT_SUM[208]) , .DATA_C (INT_SUM[209]) , .SAVE (INT_SUM[210]) , .CARRY (INT_CARRY[166]) );
   FULL_ADDER FA_142 (.DATA_A (INT_CARRY[149]) , .DATA_B (INT_CARRY[150]) , .DATA_C (INT_CARRY[151]) , .SAVE (INT_SUM[211]) , .CARRY (INT_CARRY[167]) );
   FULL_ADDER FA_143 (.DATA_A (INT_SUM[210]) , .DATA_B (INT_SUM[211]) , .DATA_C (INT_CARRY[152]) , .SAVE (INT_SUM[212]) , .CARRY (INT_CARRY[168]) );
   assign INT_SUM[214] = INT_CARRY[153];
   FLIPFLOP LA_58 (.DIN (INT_SUM[212]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[213]) );
   FLIPFLOP LA_59 (.DIN (INT_SUM[214]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[215]) );
   FLIPFLOP LA_60 (.DIN (INT_CARRY[154]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[155]) );
   FULL_ADDER FA_144 (.DATA_A (INT_SUM[213]) , .DATA_B (INT_SUM[215]) , .DATA_C (INT_CARRY[155]) , .SAVE (INT_SUM[216]) , .CARRY (INT_CARRY[170]) );
   FLIPFLOP LA_61 (.DIN (INT_CARRY[156]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[157]) );
   assign INT_SUM[217] = INT_CARRY[157];
   HALF_ADDER HA_24 (.DATA_A (INT_SUM[216]) , .DATA_B (INT_SUM[217]) , .SAVE (SUM[26]) , .CARRY (CARRY[26]) );
   FULL_ADDER FA_145 (.DATA_A (SUMMAND[210]) , .DATA_B (SUMMAND[211]) , .DATA_C (SUMMAND[212]) , .SAVE (INT_SUM[218]) , .CARRY (INT_CARRY[171]) );
   FULL_ADDER FA_146 (.DATA_A (SUMMAND[213]) , .DATA_B (SUMMAND[214]) , .DATA_C (SUMMAND[215]) , .SAVE (INT_SUM[219]) , .CARRY (INT_CARRY[172]) );
   FULL_ADDER FA_147 (.DATA_A (SUMMAND[216]) , .DATA_B (SUMMAND[217]) , .DATA_C (SUMMAND[218]) , .SAVE (INT_SUM[220]) , .CARRY (INT_CARRY[173]) );
   FULL_ADDER FA_148 (.DATA_A (SUMMAND[219]) , .DATA_B (SUMMAND[220]) , .DATA_C (SUMMAND[221]) , .SAVE (INT_SUM[221]) , .CARRY (INT_CARRY[174]) );
   HALF_ADDER HA_25 (.DATA_A (SUMMAND[222]) , .DATA_B (SUMMAND[223]) , .SAVE (INT_SUM[222]) , .CARRY (INT_CARRY[175]) );
   FULL_ADDER FA_149 (.DATA_A (INT_SUM[218]) , .DATA_B (INT_SUM[219]) , .DATA_C (INT_SUM[220]) , .SAVE (INT_SUM[223]) , .CARRY (INT_CARRY[176]) );
   FULL_ADDER FA_150 (.DATA_A (INT_SUM[221]) , .DATA_B (INT_SUM[222]) , .DATA_C (INT_CARRY[158]) , .SAVE (INT_SUM[224]) , .CARRY (INT_CARRY[177]) );
   FULL_ADDER FA_151 (.DATA_A (INT_CARRY[159]) , .DATA_B (INT_CARRY[160]) , .DATA_C (INT_CARRY[161]) , .SAVE (INT_SUM[225]) , .CARRY (INT_CARRY[178]) );
   assign INT_SUM[226] = INT_CARRY[162];
   FULL_ADDER FA_152 (.DATA_A (INT_SUM[223]) , .DATA_B (INT_SUM[224]) , .DATA_C (INT_SUM[225]) , .SAVE (INT_SUM[227]) , .CARRY (INT_CARRY[179]) );
   FULL_ADDER FA_153 (.DATA_A (INT_SUM[226]) , .DATA_B (INT_CARRY[163]) , .DATA_C (INT_CARRY[164]) , .SAVE (INT_SUM[228]) , .CARRY (INT_CARRY[180]) );
   assign INT_SUM[229] = INT_CARRY[165];
   FULL_ADDER FA_154 (.DATA_A (INT_SUM[227]) , .DATA_B (INT_SUM[228]) , .DATA_C (INT_SUM[229]) , .SAVE (INT_SUM[230]) , .CARRY (INT_CARRY[181]) );
   assign INT_SUM[232] = INT_CARRY[166];
   assign INT_SUM[234] = INT_CARRY[167];
   FLIPFLOP LA_62 (.DIN (INT_SUM[230]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[231]) );
   FLIPFLOP LA_63 (.DIN (INT_SUM[232]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[233]) );
   FLIPFLOP LA_64 (.DIN (INT_SUM[234]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[235]) );
   FULL_ADDER FA_155 (.DATA_A (INT_SUM[231]) , .DATA_B (INT_SUM[233]) , .DATA_C (INT_SUM[235]) , .SAVE (INT_SUM[236]) , .CARRY (INT_CARRY[183]) );
   FLIPFLOP LA_65 (.DIN (INT_CARRY[168]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[169]) );
   assign INT_SUM[237] = INT_CARRY[169];
   FULL_ADDER FA_156 (.DATA_A (INT_SUM[236]) , .DATA_B (INT_SUM[237]) , .DATA_C (INT_CARRY[170]) , .SAVE (SUM[27]) , .CARRY (CARRY[27]) );
   FULL_ADDER FA_157 (.DATA_A (SUMMAND[224]) , .DATA_B (SUMMAND[225]) , .DATA_C (SUMMAND[226]) , .SAVE (INT_SUM[238]) , .CARRY (INT_CARRY[184]) );
   FULL_ADDER FA_158 (.DATA_A (SUMMAND[227]) , .DATA_B (SUMMAND[228]) , .DATA_C (SUMMAND[229]) , .SAVE (INT_SUM[239]) , .CARRY (INT_CARRY[185]) );
   FULL_ADDER FA_159 (.DATA_A (SUMMAND[230]) , .DATA_B (SUMMAND[231]) , .DATA_C (SUMMAND[232]) , .SAVE (INT_SUM[240]) , .CARRY (INT_CARRY[186]) );
   FULL_ADDER FA_160 (.DATA_A (SUMMAND[233]) , .DATA_B (SUMMAND[234]) , .DATA_C (SUMMAND[235]) , .SAVE (INT_SUM[241]) , .CARRY (INT_CARRY[187]) );
   FULL_ADDER FA_161 (.DATA_A (SUMMAND[236]) , .DATA_B (SUMMAND[237]) , .DATA_C (SUMMAND[238]) , .SAVE (INT_SUM[242]) , .CARRY (INT_CARRY[188]) );
   assign INT_SUM[243] = SUMMAND[239];
   FULL_ADDER FA_162 (.DATA_A (INT_SUM[238]) , .DATA_B (INT_SUM[239]) , .DATA_C (INT_SUM[240]) , .SAVE (INT_SUM[244]) , .CARRY (INT_CARRY[189]) );
   FULL_ADDER FA_163 (.DATA_A (INT_SUM[241]) , .DATA_B (INT_SUM[242]) , .DATA_C (INT_SUM[243]) , .SAVE (INT_SUM[245]) , .CARRY (INT_CARRY[190]) );
   FULL_ADDER FA_164 (.DATA_A (INT_CARRY[171]) , .DATA_B (INT_CARRY[172]) , .DATA_C (INT_CARRY[173]) , .SAVE (INT_SUM[246]) , .CARRY (INT_CARRY[191]) );
   assign INT_SUM[247] = INT_CARRY[174];
   assign INT_SUM[248] = INT_CARRY[175];
   FULL_ADDER FA_165 (.DATA_A (INT_SUM[244]) , .DATA_B (INT_SUM[245]) , .DATA_C (INT_SUM[246]) , .SAVE (INT_SUM[249]) , .CARRY (INT_CARRY[192]) );
   FULL_ADDER FA_166 (.DATA_A (INT_SUM[247]) , .DATA_B (INT_SUM[248]) , .DATA_C (INT_CARRY[176]) , .SAVE (INT_SUM[250]) , .CARRY (INT_CARRY[193]) );
   assign INT_SUM[251] = INT_CARRY[177];
   assign INT_SUM[252] = INT_CARRY[178];
   FULL_ADDER FA_167 (.DATA_A (INT_SUM[249]) , .DATA_B (INT_SUM[250]) , .DATA_C (INT_SUM[251]) , .SAVE (INT_SUM[253]) , .CARRY (INT_CARRY[194]) );
   FULL_ADDER FA_168 (.DATA_A (INT_SUM[252]) , .DATA_B (INT_CARRY[179]) , .DATA_C (INT_CARRY[180]) , .SAVE (INT_SUM[255]) , .CARRY (INT_CARRY[196]) );
   FLIPFLOP LA_66 (.DIN (INT_SUM[253]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[254]) );
   FLIPFLOP LA_67 (.DIN (INT_SUM[255]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[256]) );
   FLIPFLOP LA_68 (.DIN (INT_CARRY[181]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[182]) );
   FULL_ADDER FA_169 (.DATA_A (INT_SUM[254]) , .DATA_B (INT_SUM[256]) , .DATA_C (INT_CARRY[182]) , .SAVE (INT_SUM[257]) , .CARRY (INT_CARRY[198]) );
   HALF_ADDER HA_26 (.DATA_A (INT_SUM[257]) , .DATA_B (INT_CARRY[183]) , .SAVE (SUM[28]) , .CARRY (CARRY[28]) );
   FULL_ADDER FA_170 (.DATA_A (SUMMAND[240]) , .DATA_B (SUMMAND[241]) , .DATA_C (SUMMAND[242]) , .SAVE (INT_SUM[258]) , .CARRY (INT_CARRY[199]) );
   FULL_ADDER FA_171 (.DATA_A (SUMMAND[243]) , .DATA_B (SUMMAND[244]) , .DATA_C (SUMMAND[245]) , .SAVE (INT_SUM[259]) , .CARRY (INT_CARRY[200]) );
   FULL_ADDER FA_172 (.DATA_A (SUMMAND[246]) , .DATA_B (SUMMAND[247]) , .DATA_C (SUMMAND[248]) , .SAVE (INT_SUM[260]) , .CARRY (INT_CARRY[201]) );
   FULL_ADDER FA_173 (.DATA_A (SUMMAND[249]) , .DATA_B (SUMMAND[250]) , .DATA_C (SUMMAND[251]) , .SAVE (INT_SUM[261]) , .CARRY (INT_CARRY[202]) );
   FULL_ADDER FA_174 (.DATA_A (SUMMAND[252]) , .DATA_B (SUMMAND[253]) , .DATA_C (SUMMAND[254]) , .SAVE (INT_SUM[262]) , .CARRY (INT_CARRY[203]) );
   FULL_ADDER FA_175 (.DATA_A (INT_SUM[258]) , .DATA_B (INT_SUM[259]) , .DATA_C (INT_SUM[260]) , .SAVE (INT_SUM[263]) , .CARRY (INT_CARRY[204]) );
   FULL_ADDER FA_176 (.DATA_A (INT_SUM[261]) , .DATA_B (INT_SUM[262]) , .DATA_C (INT_CARRY[184]) , .SAVE (INT_SUM[264]) , .CARRY (INT_CARRY[205]) );
   FULL_ADDER FA_177 (.DATA_A (INT_CARRY[185]) , .DATA_B (INT_CARRY[186]) , .DATA_C (INT_CARRY[187]) , .SAVE (INT_SUM[265]) , .CARRY (INT_CARRY[206]) );
   assign INT_SUM[266] = INT_CARRY[188];
   FULL_ADDER FA_178 (.DATA_A (INT_SUM[263]) , .DATA_B (INT_SUM[264]) , .DATA_C (INT_SUM[265]) , .SAVE (INT_SUM[267]) , .CARRY (INT_CARRY[207]) );
   FULL_ADDER FA_179 (.DATA_A (INT_SUM[266]) , .DATA_B (INT_CARRY[189]) , .DATA_C (INT_CARRY[190]) , .SAVE (INT_SUM[268]) , .CARRY (INT_CARRY[208]) );
   assign INT_SUM[269] = INT_CARRY[191];
   FULL_ADDER FA_180 (.DATA_A (INT_SUM[267]) , .DATA_B (INT_SUM[268]) , .DATA_C (INT_SUM[269]) , .SAVE (INT_SUM[270]) , .CARRY (INT_CARRY[209]) );
   HALF_ADDER HA_27 (.DATA_A (INT_CARRY[192]) , .DATA_B (INT_CARRY[193]) , .SAVE (INT_SUM[272]) , .CARRY (INT_CARRY[211]) );
   FLIPFLOP LA_69 (.DIN (INT_SUM[270]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[271]) );
   FLIPFLOP LA_70 (.DIN (INT_SUM[272]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[273]) );
   FLIPFLOP LA_71 (.DIN (INT_CARRY[194]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[195]) );
   FULL_ADDER FA_181 (.DATA_A (INT_SUM[271]) , .DATA_B (INT_SUM[273]) , .DATA_C (INT_CARRY[195]) , .SAVE (INT_SUM[274]) , .CARRY (INT_CARRY[213]) );
   FLIPFLOP LA_72 (.DIN (INT_CARRY[196]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[197]) );
   assign INT_SUM[275] = INT_CARRY[197];
   FULL_ADDER FA_182 (.DATA_A (INT_SUM[274]) , .DATA_B (INT_SUM[275]) , .DATA_C (INT_CARRY[198]) , .SAVE (SUM[29]) , .CARRY (CARRY[29]) );
   FULL_ADDER FA_183 (.DATA_A (SUMMAND[255]) , .DATA_B (SUMMAND[256]) , .DATA_C (SUMMAND[257]) , .SAVE (INT_SUM[276]) , .CARRY (INT_CARRY[214]) );
   FULL_ADDER FA_184 (.DATA_A (SUMMAND[258]) , .DATA_B (SUMMAND[259]) , .DATA_C (SUMMAND[260]) , .SAVE (INT_SUM[277]) , .CARRY (INT_CARRY[215]) );
   FULL_ADDER FA_185 (.DATA_A (SUMMAND[261]) , .DATA_B (SUMMAND[262]) , .DATA_C (SUMMAND[263]) , .SAVE (INT_SUM[278]) , .CARRY (INT_CARRY[216]) );
   FULL_ADDER FA_186 (.DATA_A (SUMMAND[264]) , .DATA_B (SUMMAND[265]) , .DATA_C (SUMMAND[266]) , .SAVE (INT_SUM[279]) , .CARRY (INT_CARRY[217]) );
   FULL_ADDER FA_187 (.DATA_A (SUMMAND[267]) , .DATA_B (SUMMAND[268]) , .DATA_C (SUMMAND[269]) , .SAVE (INT_SUM[280]) , .CARRY (INT_CARRY[218]) );
   assign INT_SUM[281] = SUMMAND[270];
   assign INT_SUM[282] = SUMMAND[271];
   FULL_ADDER FA_188 (.DATA_A (INT_SUM[276]) , .DATA_B (INT_SUM[277]) , .DATA_C (INT_SUM[278]) , .SAVE (INT_SUM[283]) , .CARRY (INT_CARRY[219]) );
   FULL_ADDER FA_189 (.DATA_A (INT_SUM[279]) , .DATA_B (INT_SUM[280]) , .DATA_C (INT_SUM[281]) , .SAVE (INT_SUM[284]) , .CARRY (INT_CARRY[220]) );
   FULL_ADDER FA_190 (.DATA_A (INT_SUM[282]) , .DATA_B (INT_CARRY[199]) , .DATA_C (INT_CARRY[200]) , .SAVE (INT_SUM[285]) , .CARRY (INT_CARRY[221]) );
   FULL_ADDER FA_191 (.DATA_A (INT_CARRY[201]) , .DATA_B (INT_CARRY[202]) , .DATA_C (INT_CARRY[203]) , .SAVE (INT_SUM[286]) , .CARRY (INT_CARRY[222]) );
   FULL_ADDER FA_192 (.DATA_A (INT_SUM[283]) , .DATA_B (INT_SUM[284]) , .DATA_C (INT_SUM[285]) , .SAVE (INT_SUM[287]) , .CARRY (INT_CARRY[223]) );
   FULL_ADDER FA_193 (.DATA_A (INT_SUM[286]) , .DATA_B (INT_CARRY[204]) , .DATA_C (INT_CARRY[205]) , .SAVE (INT_SUM[288]) , .CARRY (INT_CARRY[224]) );
   assign INT_SUM[289] = INT_CARRY[206];
   FULL_ADDER FA_194 (.DATA_A (INT_SUM[287]) , .DATA_B (INT_SUM[288]) , .DATA_C (INT_SUM[289]) , .SAVE (INT_SUM[290]) , .CARRY (INT_CARRY[225]) );
   HALF_ADDER HA_28 (.DATA_A (INT_CARRY[207]) , .DATA_B (INT_CARRY[208]) , .SAVE (INT_SUM[292]) , .CARRY (INT_CARRY[227]) );
   FLIPFLOP LA_73 (.DIN (INT_SUM[290]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[291]) );
   FLIPFLOP LA_74 (.DIN (INT_SUM[292]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[293]) );
   FLIPFLOP LA_75 (.DIN (INT_CARRY[209]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[210]) );
   FULL_ADDER FA_195 (.DATA_A (INT_SUM[291]) , .DATA_B (INT_SUM[293]) , .DATA_C (INT_CARRY[210]) , .SAVE (INT_SUM[294]) , .CARRY (INT_CARRY[229]) );
   FLIPFLOP LA_76 (.DIN (INT_CARRY[211]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[212]) );
   assign INT_SUM[295] = INT_CARRY[212];
   FULL_ADDER FA_196 (.DATA_A (INT_SUM[294]) , .DATA_B (INT_SUM[295]) , .DATA_C (INT_CARRY[213]) , .SAVE (SUM[30]) , .CARRY (CARRY[30]) );
   FULL_ADDER FA_197 (.DATA_A (SUMMAND[272]) , .DATA_B (SUMMAND[273]) , .DATA_C (SUMMAND[274]) , .SAVE (INT_SUM[296]) , .CARRY (INT_CARRY[230]) );
   FULL_ADDER FA_198 (.DATA_A (SUMMAND[275]) , .DATA_B (SUMMAND[276]) , .DATA_C (SUMMAND[277]) , .SAVE (INT_SUM[297]) , .CARRY (INT_CARRY[231]) );
   FULL_ADDER FA_199 (.DATA_A (SUMMAND[278]) , .DATA_B (SUMMAND[279]) , .DATA_C (SUMMAND[280]) , .SAVE (INT_SUM[298]) , .CARRY (INT_CARRY[232]) );
   FULL_ADDER FA_200 (.DATA_A (SUMMAND[281]) , .DATA_B (SUMMAND[282]) , .DATA_C (SUMMAND[283]) , .SAVE (INT_SUM[299]) , .CARRY (INT_CARRY[233]) );
   FULL_ADDER FA_201 (.DATA_A (SUMMAND[284]) , .DATA_B (SUMMAND[285]) , .DATA_C (SUMMAND[286]) , .SAVE (INT_SUM[300]) , .CARRY (INT_CARRY[234]) );
   assign INT_SUM[301] = SUMMAND[287];
   FULL_ADDER FA_202 (.DATA_A (INT_SUM[296]) , .DATA_B (INT_SUM[297]) , .DATA_C (INT_SUM[298]) , .SAVE (INT_SUM[302]) , .CARRY (INT_CARRY[235]) );
   FULL_ADDER FA_203 (.DATA_A (INT_SUM[299]) , .DATA_B (INT_SUM[300]) , .DATA_C (INT_SUM[301]) , .SAVE (INT_SUM[303]) , .CARRY (INT_CARRY[236]) );
   FULL_ADDER FA_204 (.DATA_A (INT_CARRY[214]) , .DATA_B (INT_CARRY[215]) , .DATA_C (INT_CARRY[216]) , .SAVE (INT_SUM[304]) , .CARRY (INT_CARRY[237]) );
   assign INT_SUM[305] = INT_CARRY[217];
   assign INT_SUM[306] = INT_CARRY[218];
   FULL_ADDER FA_205 (.DATA_A (INT_SUM[302]) , .DATA_B (INT_SUM[303]) , .DATA_C (INT_SUM[304]) , .SAVE (INT_SUM[307]) , .CARRY (INT_CARRY[238]) );
   FULL_ADDER FA_206 (.DATA_A (INT_SUM[305]) , .DATA_B (INT_SUM[306]) , .DATA_C (INT_CARRY[219]) , .SAVE (INT_SUM[308]) , .CARRY (INT_CARRY[239]) );
   FULL_ADDER FA_207 (.DATA_A (INT_CARRY[220]) , .DATA_B (INT_CARRY[221]) , .DATA_C (INT_CARRY[222]) , .SAVE (INT_SUM[309]) , .CARRY (INT_CARRY[240]) );
   FULL_ADDER FA_208 (.DATA_A (INT_SUM[307]) , .DATA_B (INT_SUM[308]) , .DATA_C (INT_SUM[309]) , .SAVE (INT_SUM[310]) , .CARRY (INT_CARRY[241]) );
   HALF_ADDER HA_29 (.DATA_A (INT_CARRY[223]) , .DATA_B (INT_CARRY[224]) , .SAVE (INT_SUM[312]) , .CARRY (INT_CARRY[243]) );
   FLIPFLOP LA_77 (.DIN (INT_SUM[310]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[311]) );
   FLIPFLOP LA_78 (.DIN (INT_SUM[312]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[313]) );
   FLIPFLOP LA_79 (.DIN (INT_CARRY[225]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[226]) );
   FULL_ADDER FA_209 (.DATA_A (INT_SUM[311]) , .DATA_B (INT_SUM[313]) , .DATA_C (INT_CARRY[226]) , .SAVE (INT_SUM[314]) , .CARRY (INT_CARRY[245]) );
   FLIPFLOP LA_80 (.DIN (INT_CARRY[227]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[228]) );
   assign INT_SUM[315] = INT_CARRY[228];
   FULL_ADDER FA_210 (.DATA_A (INT_SUM[314]) , .DATA_B (INT_SUM[315]) , .DATA_C (INT_CARRY[229]) , .SAVE (SUM[31]) , .CARRY (CARRY[31]) );
   FULL_ADDER FA_211 (.DATA_A (SUMMAND[288]) , .DATA_B (SUMMAND[289]) , .DATA_C (SUMMAND[290]) , .SAVE (INT_SUM[316]) , .CARRY (INT_CARRY[246]) );
   FULL_ADDER FA_212 (.DATA_A (SUMMAND[291]) , .DATA_B (SUMMAND[292]) , .DATA_C (SUMMAND[293]) , .SAVE (INT_SUM[317]) , .CARRY (INT_CARRY[247]) );
   FULL_ADDER FA_213 (.DATA_A (SUMMAND[294]) , .DATA_B (SUMMAND[295]) , .DATA_C (SUMMAND[296]) , .SAVE (INT_SUM[318]) , .CARRY (INT_CARRY[248]) );
   FULL_ADDER FA_214 (.DATA_A (SUMMAND[297]) , .DATA_B (SUMMAND[298]) , .DATA_C (SUMMAND[299]) , .SAVE (INT_SUM[319]) , .CARRY (INT_CARRY[249]) );
   FULL_ADDER FA_215 (.DATA_A (SUMMAND[300]) , .DATA_B (SUMMAND[301]) , .DATA_C (SUMMAND[302]) , .SAVE (INT_SUM[320]) , .CARRY (INT_CARRY[250]) );
   assign INT_SUM[321] = SUMMAND[303];
   FULL_ADDER FA_216 (.DATA_A (INT_SUM[316]) , .DATA_B (INT_SUM[317]) , .DATA_C (INT_SUM[318]) , .SAVE (INT_SUM[322]) , .CARRY (INT_CARRY[251]) );
   FULL_ADDER FA_217 (.DATA_A (INT_SUM[319]) , .DATA_B (INT_SUM[320]) , .DATA_C (INT_SUM[321]) , .SAVE (INT_SUM[323]) , .CARRY (INT_CARRY[252]) );
   FULL_ADDER FA_218 (.DATA_A (INT_CARRY[230]) , .DATA_B (INT_CARRY[231]) , .DATA_C (INT_CARRY[232]) , .SAVE (INT_SUM[324]) , .CARRY (INT_CARRY[253]) );
   HALF_ADDER HA_30 (.DATA_A (INT_CARRY[233]) , .DATA_B (INT_CARRY[234]) , .SAVE (INT_SUM[325]) , .CARRY (INT_CARRY[254]) );
   FULL_ADDER FA_219 (.DATA_A (INT_SUM[322]) , .DATA_B (INT_SUM[323]) , .DATA_C (INT_SUM[324]) , .SAVE (INT_SUM[326]) , .CARRY (INT_CARRY[255]) );
   FULL_ADDER FA_220 (.DATA_A (INT_SUM[325]) , .DATA_B (INT_CARRY[235]) , .DATA_C (INT_CARRY[236]) , .SAVE (INT_SUM[327]) , .CARRY (INT_CARRY[256]) );
   assign INT_SUM[328] = INT_CARRY[237];
   FULL_ADDER FA_221 (.DATA_A (INT_SUM[326]) , .DATA_B (INT_SUM[327]) , .DATA_C (INT_SUM[328]) , .SAVE (INT_SUM[329]) , .CARRY (INT_CARRY[257]) );
   FULL_ADDER FA_222 (.DATA_A (INT_CARRY[238]) , .DATA_B (INT_CARRY[239]) , .DATA_C (INT_CARRY[240]) , .SAVE (INT_SUM[331]) , .CARRY (INT_CARRY[259]) );
   FLIPFLOP LA_81 (.DIN (INT_SUM[329]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[330]) );
   FLIPFLOP LA_82 (.DIN (INT_SUM[331]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[332]) );
   FLIPFLOP LA_83 (.DIN (INT_CARRY[241]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[242]) );
   FULL_ADDER FA_223 (.DATA_A (INT_SUM[330]) , .DATA_B (INT_SUM[332]) , .DATA_C (INT_CARRY[242]) , .SAVE (INT_SUM[333]) , .CARRY (INT_CARRY[261]) );
   FLIPFLOP LA_84 (.DIN (INT_CARRY[243]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[244]) );
   assign INT_SUM[334] = INT_CARRY[244];
   FULL_ADDER FA_224 (.DATA_A (INT_SUM[333]) , .DATA_B (INT_SUM[334]) , .DATA_C (INT_CARRY[245]) , .SAVE (SUM[32]) , .CARRY (CARRY[32]) );
   FULL_ADDER FA_225 (.DATA_A (SUMMAND[304]) , .DATA_B (SUMMAND[305]) , .DATA_C (SUMMAND[306]) , .SAVE (INT_SUM[335]) , .CARRY (INT_CARRY[262]) );
   FULL_ADDER FA_226 (.DATA_A (SUMMAND[307]) , .DATA_B (SUMMAND[308]) , .DATA_C (SUMMAND[309]) , .SAVE (INT_SUM[336]) , .CARRY (INT_CARRY[263]) );
   FULL_ADDER FA_227 (.DATA_A (SUMMAND[310]) , .DATA_B (SUMMAND[311]) , .DATA_C (SUMMAND[312]) , .SAVE (INT_SUM[337]) , .CARRY (INT_CARRY[264]) );
   FULL_ADDER FA_228 (.DATA_A (SUMMAND[313]) , .DATA_B (SUMMAND[314]) , .DATA_C (SUMMAND[315]) , .SAVE (INT_SUM[338]) , .CARRY (INT_CARRY[265]) );
   FULL_ADDER FA_229 (.DATA_A (SUMMAND[316]) , .DATA_B (SUMMAND[317]) , .DATA_C (SUMMAND[318]) , .SAVE (INT_SUM[339]) , .CARRY (INT_CARRY[266]) );
   assign INT_SUM[340] = SUMMAND[319];
   assign INT_SUM[341] = SUMMAND[320];
   FULL_ADDER FA_230 (.DATA_A (INT_SUM[335]) , .DATA_B (INT_SUM[336]) , .DATA_C (INT_SUM[337]) , .SAVE (INT_SUM[342]) , .CARRY (INT_CARRY[267]) );
   FULL_ADDER FA_231 (.DATA_A (INT_SUM[338]) , .DATA_B (INT_SUM[339]) , .DATA_C (INT_SUM[340]) , .SAVE (INT_SUM[343]) , .CARRY (INT_CARRY[268]) );
   FULL_ADDER FA_232 (.DATA_A (INT_SUM[341]) , .DATA_B (INT_CARRY[246]) , .DATA_C (INT_CARRY[247]) , .SAVE (INT_SUM[344]) , .CARRY (INT_CARRY[269]) );
   FULL_ADDER FA_233 (.DATA_A (INT_CARRY[248]) , .DATA_B (INT_CARRY[249]) , .DATA_C (INT_CARRY[250]) , .SAVE (INT_SUM[345]) , .CARRY (INT_CARRY[270]) );
   FULL_ADDER FA_234 (.DATA_A (INT_SUM[342]) , .DATA_B (INT_SUM[343]) , .DATA_C (INT_SUM[344]) , .SAVE (INT_SUM[346]) , .CARRY (INT_CARRY[271]) );
   FULL_ADDER FA_235 (.DATA_A (INT_SUM[345]) , .DATA_B (INT_CARRY[251]) , .DATA_C (INT_CARRY[252]) , .SAVE (INT_SUM[347]) , .CARRY (INT_CARRY[272]) );
   assign INT_SUM[348] = INT_CARRY[253];
   assign INT_SUM[349] = INT_CARRY[254];
   FULL_ADDER FA_236 (.DATA_A (INT_SUM[346]) , .DATA_B (INT_SUM[347]) , .DATA_C (INT_SUM[348]) , .SAVE (INT_SUM[350]) , .CARRY (INT_CARRY[273]) );
   FULL_ADDER FA_237 (.DATA_A (INT_SUM[349]) , .DATA_B (INT_CARRY[255]) , .DATA_C (INT_CARRY[256]) , .SAVE (INT_SUM[352]) , .CARRY (INT_CARRY[275]) );
   FLIPFLOP LA_85 (.DIN (INT_SUM[350]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[351]) );
   FLIPFLOP LA_86 (.DIN (INT_SUM[352]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[353]) );
   FLIPFLOP LA_87 (.DIN (INT_CARRY[257]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[258]) );
   FULL_ADDER FA_238 (.DATA_A (INT_SUM[351]) , .DATA_B (INT_SUM[353]) , .DATA_C (INT_CARRY[258]) , .SAVE (INT_SUM[354]) , .CARRY (INT_CARRY[277]) );
   FLIPFLOP LA_88 (.DIN (INT_CARRY[259]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[260]) );
   assign INT_SUM[355] = INT_CARRY[260];
   FULL_ADDER FA_239 (.DATA_A (INT_SUM[354]) , .DATA_B (INT_SUM[355]) , .DATA_C (INT_CARRY[261]) , .SAVE (SUM[33]) , .CARRY (CARRY[33]) );
   FULL_ADDER FA_240 (.DATA_A (SUMMAND[321]) , .DATA_B (SUMMAND[322]) , .DATA_C (SUMMAND[323]) , .SAVE (INT_SUM[356]) , .CARRY (INT_CARRY[278]) );
   FULL_ADDER FA_241 (.DATA_A (SUMMAND[324]) , .DATA_B (SUMMAND[325]) , .DATA_C (SUMMAND[326]) , .SAVE (INT_SUM[357]) , .CARRY (INT_CARRY[279]) );
   FULL_ADDER FA_242 (.DATA_A (SUMMAND[327]) , .DATA_B (SUMMAND[328]) , .DATA_C (SUMMAND[329]) , .SAVE (INT_SUM[358]) , .CARRY (INT_CARRY[280]) );
   FULL_ADDER FA_243 (.DATA_A (SUMMAND[330]) , .DATA_B (SUMMAND[331]) , .DATA_C (SUMMAND[332]) , .SAVE (INT_SUM[359]) , .CARRY (INT_CARRY[281]) );
   FULL_ADDER FA_244 (.DATA_A (SUMMAND[333]) , .DATA_B (SUMMAND[334]) , .DATA_C (SUMMAND[335]) , .SAVE (INT_SUM[360]) , .CARRY (INT_CARRY[282]) );
   assign INT_SUM[361] = SUMMAND[336];
   FULL_ADDER FA_245 (.DATA_A (INT_SUM[356]) , .DATA_B (INT_SUM[357]) , .DATA_C (INT_SUM[358]) , .SAVE (INT_SUM[362]) , .CARRY (INT_CARRY[283]) );
   FULL_ADDER FA_246 (.DATA_A (INT_SUM[359]) , .DATA_B (INT_SUM[360]) , .DATA_C (INT_SUM[361]) , .SAVE (INT_SUM[363]) , .CARRY (INT_CARRY[284]) );
   FULL_ADDER FA_247 (.DATA_A (INT_CARRY[262]) , .DATA_B (INT_CARRY[263]) , .DATA_C (INT_CARRY[264]) , .SAVE (INT_SUM[364]) , .CARRY (INT_CARRY[285]) );
   assign INT_SUM[365] = INT_CARRY[265];
   assign INT_SUM[366] = INT_CARRY[266];
   FULL_ADDER FA_248 (.DATA_A (INT_SUM[362]) , .DATA_B (INT_SUM[363]) , .DATA_C (INT_SUM[364]) , .SAVE (INT_SUM[367]) , .CARRY (INT_CARRY[286]) );
   FULL_ADDER FA_249 (.DATA_A (INT_SUM[365]) , .DATA_B (INT_SUM[366]) , .DATA_C (INT_CARRY[267]) , .SAVE (INT_SUM[368]) , .CARRY (INT_CARRY[287]) );
   FULL_ADDER FA_250 (.DATA_A (INT_CARRY[268]) , .DATA_B (INT_CARRY[269]) , .DATA_C (INT_CARRY[270]) , .SAVE (INT_SUM[369]) , .CARRY (INT_CARRY[288]) );
   FULL_ADDER FA_251 (.DATA_A (INT_SUM[367]) , .DATA_B (INT_SUM[368]) , .DATA_C (INT_SUM[369]) , .SAVE (INT_SUM[370]) , .CARRY (INT_CARRY[289]) );
   HALF_ADDER HA_31 (.DATA_A (INT_CARRY[271]) , .DATA_B (INT_CARRY[272]) , .SAVE (INT_SUM[372]) , .CARRY (INT_CARRY[291]) );
   FLIPFLOP LA_89 (.DIN (INT_SUM[370]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[371]) );
   FLIPFLOP LA_90 (.DIN (INT_SUM[372]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[373]) );
   FLIPFLOP LA_91 (.DIN (INT_CARRY[273]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[274]) );
   FULL_ADDER FA_252 (.DATA_A (INT_SUM[371]) , .DATA_B (INT_SUM[373]) , .DATA_C (INT_CARRY[274]) , .SAVE (INT_SUM[374]) , .CARRY (INT_CARRY[293]) );
   FLIPFLOP LA_92 (.DIN (INT_CARRY[275]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[276]) );
   assign INT_SUM[375] = INT_CARRY[276];
   FULL_ADDER FA_253 (.DATA_A (INT_SUM[374]) , .DATA_B (INT_SUM[375]) , .DATA_C (INT_CARRY[277]) , .SAVE (SUM[34]) , .CARRY (CARRY[34]) );
   FULL_ADDER FA_254 (.DATA_A (SUMMAND[337]) , .DATA_B (SUMMAND[338]) , .DATA_C (SUMMAND[339]) , .SAVE (INT_SUM[376]) , .CARRY (INT_CARRY[294]) );
   FULL_ADDER FA_255 (.DATA_A (SUMMAND[340]) , .DATA_B (SUMMAND[341]) , .DATA_C (SUMMAND[342]) , .SAVE (INT_SUM[377]) , .CARRY (INT_CARRY[295]) );
   FULL_ADDER FA_256 (.DATA_A (SUMMAND[343]) , .DATA_B (SUMMAND[344]) , .DATA_C (SUMMAND[345]) , .SAVE (INT_SUM[378]) , .CARRY (INT_CARRY[296]) );
   FULL_ADDER FA_257 (.DATA_A (SUMMAND[346]) , .DATA_B (SUMMAND[347]) , .DATA_C (SUMMAND[348]) , .SAVE (INT_SUM[379]) , .CARRY (INT_CARRY[297]) );
   FULL_ADDER FA_258 (.DATA_A (SUMMAND[349]) , .DATA_B (SUMMAND[350]) , .DATA_C (SUMMAND[351]) , .SAVE (INT_SUM[380]) , .CARRY (INT_CARRY[298]) );
   FULL_ADDER FA_259 (.DATA_A (INT_SUM[376]) , .DATA_B (INT_SUM[377]) , .DATA_C (INT_SUM[378]) , .SAVE (INT_SUM[381]) , .CARRY (INT_CARRY[299]) );
   FULL_ADDER FA_260 (.DATA_A (INT_SUM[379]) , .DATA_B (INT_SUM[380]) , .DATA_C (INT_CARRY[278]) , .SAVE (INT_SUM[382]) , .CARRY (INT_CARRY[300]) );
   FULL_ADDER FA_261 (.DATA_A (INT_CARRY[279]) , .DATA_B (INT_CARRY[280]) , .DATA_C (INT_CARRY[281]) , .SAVE (INT_SUM[383]) , .CARRY (INT_CARRY[301]) );
   assign INT_SUM[384] = INT_CARRY[282];
   FULL_ADDER FA_262 (.DATA_A (INT_SUM[381]) , .DATA_B (INT_SUM[382]) , .DATA_C (INT_SUM[383]) , .SAVE (INT_SUM[385]) , .CARRY (INT_CARRY[302]) );
   FULL_ADDER FA_263 (.DATA_A (INT_SUM[384]) , .DATA_B (INT_CARRY[283]) , .DATA_C (INT_CARRY[284]) , .SAVE (INT_SUM[386]) , .CARRY (INT_CARRY[303]) );
   assign INT_SUM[387] = INT_CARRY[285];
   FULL_ADDER FA_264 (.DATA_A (INT_SUM[385]) , .DATA_B (INT_SUM[386]) , .DATA_C (INT_SUM[387]) , .SAVE (INT_SUM[388]) , .CARRY (INT_CARRY[304]) );
   FULL_ADDER FA_265 (.DATA_A (INT_CARRY[286]) , .DATA_B (INT_CARRY[287]) , .DATA_C (INT_CARRY[288]) , .SAVE (INT_SUM[390]) , .CARRY (INT_CARRY[306]) );
   FLIPFLOP LA_93 (.DIN (INT_SUM[388]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[389]) );
   FLIPFLOP LA_94 (.DIN (INT_SUM[390]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[391]) );
   FLIPFLOP LA_95 (.DIN (INT_CARRY[289]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[290]) );
   FULL_ADDER FA_266 (.DATA_A (INT_SUM[389]) , .DATA_B (INT_SUM[391]) , .DATA_C (INT_CARRY[290]) , .SAVE (INT_SUM[392]) , .CARRY (INT_CARRY[308]) );
   FLIPFLOP LA_96 (.DIN (INT_CARRY[291]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[292]) );
   assign INT_SUM[393] = INT_CARRY[292];
   FULL_ADDER FA_267 (.DATA_A (INT_SUM[392]) , .DATA_B (INT_SUM[393]) , .DATA_C (INT_CARRY[293]) , .SAVE (SUM[35]) , .CARRY (CARRY[35]) );
   FULL_ADDER FA_268 (.DATA_A (SUMMAND[352]) , .DATA_B (SUMMAND[353]) , .DATA_C (SUMMAND[354]) , .SAVE (INT_SUM[394]) , .CARRY (INT_CARRY[309]) );
   FULL_ADDER FA_269 (.DATA_A (SUMMAND[355]) , .DATA_B (SUMMAND[356]) , .DATA_C (SUMMAND[357]) , .SAVE (INT_SUM[395]) , .CARRY (INT_CARRY[310]) );
   FULL_ADDER FA_270 (.DATA_A (SUMMAND[358]) , .DATA_B (SUMMAND[359]) , .DATA_C (SUMMAND[360]) , .SAVE (INT_SUM[396]) , .CARRY (INT_CARRY[311]) );
   FULL_ADDER FA_271 (.DATA_A (SUMMAND[361]) , .DATA_B (SUMMAND[362]) , .DATA_C (SUMMAND[363]) , .SAVE (INT_SUM[397]) , .CARRY (INT_CARRY[312]) );
   FULL_ADDER FA_272 (.DATA_A (SUMMAND[364]) , .DATA_B (SUMMAND[365]) , .DATA_C (SUMMAND[366]) , .SAVE (INT_SUM[398]) , .CARRY (INT_CARRY[313]) );
   FULL_ADDER FA_273 (.DATA_A (INT_SUM[394]) , .DATA_B (INT_SUM[395]) , .DATA_C (INT_SUM[396]) , .SAVE (INT_SUM[399]) , .CARRY (INT_CARRY[314]) );
   FULL_ADDER FA_274 (.DATA_A (INT_SUM[397]) , .DATA_B (INT_SUM[398]) , .DATA_C (INT_CARRY[294]) , .SAVE (INT_SUM[400]) , .CARRY (INT_CARRY[315]) );
   FULL_ADDER FA_275 (.DATA_A (INT_CARRY[295]) , .DATA_B (INT_CARRY[296]) , .DATA_C (INT_CARRY[297]) , .SAVE (INT_SUM[401]) , .CARRY (INT_CARRY[316]) );
   assign INT_SUM[402] = INT_CARRY[298];
   FULL_ADDER FA_276 (.DATA_A (INT_SUM[399]) , .DATA_B (INT_SUM[400]) , .DATA_C (INT_SUM[401]) , .SAVE (INT_SUM[403]) , .CARRY (INT_CARRY[317]) );
   FULL_ADDER FA_277 (.DATA_A (INT_SUM[402]) , .DATA_B (INT_CARRY[299]) , .DATA_C (INT_CARRY[300]) , .SAVE (INT_SUM[404]) , .CARRY (INT_CARRY[318]) );
   assign INT_SUM[405] = INT_CARRY[301];
   FULL_ADDER FA_278 (.DATA_A (INT_SUM[403]) , .DATA_B (INT_SUM[404]) , .DATA_C (INT_SUM[405]) , .SAVE (INT_SUM[406]) , .CARRY (INT_CARRY[319]) );
   HALF_ADDER HA_32 (.DATA_A (INT_CARRY[302]) , .DATA_B (INT_CARRY[303]) , .SAVE (INT_SUM[408]) , .CARRY (INT_CARRY[321]) );
   FLIPFLOP LA_97 (.DIN (INT_SUM[406]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[407]) );
   FLIPFLOP LA_98 (.DIN (INT_SUM[408]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[409]) );
   FLIPFLOP LA_99 (.DIN (INT_CARRY[304]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[305]) );
   FULL_ADDER FA_279 (.DATA_A (INT_SUM[407]) , .DATA_B (INT_SUM[409]) , .DATA_C (INT_CARRY[305]) , .SAVE (INT_SUM[410]) , .CARRY (INT_CARRY[323]) );
   FLIPFLOP LA_100 (.DIN (INT_CARRY[306]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[307]) );
   assign INT_SUM[411] = INT_CARRY[307];
   FULL_ADDER FA_280 (.DATA_A (INT_SUM[410]) , .DATA_B (INT_SUM[411]) , .DATA_C (INT_CARRY[308]) , .SAVE (SUM[36]) , .CARRY (CARRY[36]) );
   FULL_ADDER FA_281 (.DATA_A (SUMMAND[367]) , .DATA_B (SUMMAND[368]) , .DATA_C (SUMMAND[369]) , .SAVE (INT_SUM[412]) , .CARRY (INT_CARRY[324]) );
   FULL_ADDER FA_282 (.DATA_A (SUMMAND[370]) , .DATA_B (SUMMAND[371]) , .DATA_C (SUMMAND[372]) , .SAVE (INT_SUM[413]) , .CARRY (INT_CARRY[325]) );
   FULL_ADDER FA_283 (.DATA_A (SUMMAND[373]) , .DATA_B (SUMMAND[374]) , .DATA_C (SUMMAND[375]) , .SAVE (INT_SUM[414]) , .CARRY (INT_CARRY[326]) );
   FULL_ADDER FA_284 (.DATA_A (SUMMAND[376]) , .DATA_B (SUMMAND[377]) , .DATA_C (SUMMAND[378]) , .SAVE (INT_SUM[415]) , .CARRY (INT_CARRY[327]) );
   HALF_ADDER HA_33 (.DATA_A (SUMMAND[379]) , .DATA_B (SUMMAND[380]) , .SAVE (INT_SUM[416]) , .CARRY (INT_CARRY[328]) );
   FULL_ADDER FA_285 (.DATA_A (INT_SUM[412]) , .DATA_B (INT_SUM[413]) , .DATA_C (INT_SUM[414]) , .SAVE (INT_SUM[417]) , .CARRY (INT_CARRY[329]) );
   FULL_ADDER FA_286 (.DATA_A (INT_SUM[415]) , .DATA_B (INT_SUM[416]) , .DATA_C (INT_CARRY[309]) , .SAVE (INT_SUM[418]) , .CARRY (INT_CARRY[330]) );
   FULL_ADDER FA_287 (.DATA_A (INT_CARRY[310]) , .DATA_B (INT_CARRY[311]) , .DATA_C (INT_CARRY[312]) , .SAVE (INT_SUM[419]) , .CARRY (INT_CARRY[331]) );
   assign INT_SUM[420] = INT_CARRY[313];
   FULL_ADDER FA_288 (.DATA_A (INT_SUM[417]) , .DATA_B (INT_SUM[418]) , .DATA_C (INT_SUM[419]) , .SAVE (INT_SUM[421]) , .CARRY (INT_CARRY[332]) );
   FULL_ADDER FA_289 (.DATA_A (INT_SUM[420]) , .DATA_B (INT_CARRY[314]) , .DATA_C (INT_CARRY[315]) , .SAVE (INT_SUM[422]) , .CARRY (INT_CARRY[333]) );
   assign INT_SUM[423] = INT_CARRY[316];
   FULL_ADDER FA_290 (.DATA_A (INT_SUM[421]) , .DATA_B (INT_SUM[422]) , .DATA_C (INT_SUM[423]) , .SAVE (INT_SUM[424]) , .CARRY (INT_CARRY[334]) );
   HALF_ADDER HA_34 (.DATA_A (INT_CARRY[317]) , .DATA_B (INT_CARRY[318]) , .SAVE (INT_SUM[426]) , .CARRY (INT_CARRY[336]) );
   FLIPFLOP LA_101 (.DIN (INT_SUM[424]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[425]) );
   FLIPFLOP LA_102 (.DIN (INT_SUM[426]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[427]) );
   FLIPFLOP LA_103 (.DIN (INT_CARRY[319]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[320]) );
   FULL_ADDER FA_291 (.DATA_A (INT_SUM[425]) , .DATA_B (INT_SUM[427]) , .DATA_C (INT_CARRY[320]) , .SAVE (INT_SUM[428]) , .CARRY (INT_CARRY[338]) );
   FLIPFLOP LA_104 (.DIN (INT_CARRY[321]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[322]) );
   assign INT_SUM[429] = INT_CARRY[322];
   FULL_ADDER FA_292 (.DATA_A (INT_SUM[428]) , .DATA_B (INT_SUM[429]) , .DATA_C (INT_CARRY[323]) , .SAVE (SUM[37]) , .CARRY (CARRY[37]) );
   FULL_ADDER FA_293 (.DATA_A (SUMMAND[381]) , .DATA_B (SUMMAND[382]) , .DATA_C (SUMMAND[383]) , .SAVE (INT_SUM[430]) , .CARRY (INT_CARRY[339]) );
   FULL_ADDER FA_294 (.DATA_A (SUMMAND[384]) , .DATA_B (SUMMAND[385]) , .DATA_C (SUMMAND[386]) , .SAVE (INT_SUM[431]) , .CARRY (INT_CARRY[340]) );
   FULL_ADDER FA_295 (.DATA_A (SUMMAND[387]) , .DATA_B (SUMMAND[388]) , .DATA_C (SUMMAND[389]) , .SAVE (INT_SUM[432]) , .CARRY (INT_CARRY[341]) );
   FULL_ADDER FA_296 (.DATA_A (SUMMAND[390]) , .DATA_B (SUMMAND[391]) , .DATA_C (SUMMAND[392]) , .SAVE (INT_SUM[433]) , .CARRY (INT_CARRY[342]) );
   HALF_ADDER HA_35 (.DATA_A (SUMMAND[393]) , .DATA_B (SUMMAND[394]) , .SAVE (INT_SUM[434]) , .CARRY (INT_CARRY[343]) );
   FULL_ADDER FA_297 (.DATA_A (INT_SUM[430]) , .DATA_B (INT_SUM[431]) , .DATA_C (INT_SUM[432]) , .SAVE (INT_SUM[435]) , .CARRY (INT_CARRY[344]) );
   FULL_ADDER FA_298 (.DATA_A (INT_SUM[433]) , .DATA_B (INT_SUM[434]) , .DATA_C (INT_CARRY[324]) , .SAVE (INT_SUM[436]) , .CARRY (INT_CARRY[345]) );
   FULL_ADDER FA_299 (.DATA_A (INT_CARRY[325]) , .DATA_B (INT_CARRY[326]) , .DATA_C (INT_CARRY[327]) , .SAVE (INT_SUM[437]) , .CARRY (INT_CARRY[346]) );
   assign INT_SUM[438] = INT_CARRY[328];
   FULL_ADDER FA_300 (.DATA_A (INT_SUM[435]) , .DATA_B (INT_SUM[436]) , .DATA_C (INT_SUM[437]) , .SAVE (INT_SUM[439]) , .CARRY (INT_CARRY[347]) );
   FULL_ADDER FA_301 (.DATA_A (INT_SUM[438]) , .DATA_B (INT_CARRY[329]) , .DATA_C (INT_CARRY[330]) , .SAVE (INT_SUM[440]) , .CARRY (INT_CARRY[348]) );
   assign INT_SUM[441] = INT_CARRY[331];
   FULL_ADDER FA_302 (.DATA_A (INT_SUM[439]) , .DATA_B (INT_SUM[440]) , .DATA_C (INT_SUM[441]) , .SAVE (INT_SUM[442]) , .CARRY (INT_CARRY[349]) );
   HALF_ADDER HA_36 (.DATA_A (INT_CARRY[332]) , .DATA_B (INT_CARRY[333]) , .SAVE (INT_SUM[444]) , .CARRY (INT_CARRY[351]) );
   FLIPFLOP LA_105 (.DIN (INT_SUM[442]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[443]) );
   FLIPFLOP LA_106 (.DIN (INT_SUM[444]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[445]) );
   FLIPFLOP LA_107 (.DIN (INT_CARRY[334]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[335]) );
   FULL_ADDER FA_303 (.DATA_A (INT_SUM[443]) , .DATA_B (INT_SUM[445]) , .DATA_C (INT_CARRY[335]) , .SAVE (INT_SUM[446]) , .CARRY (INT_CARRY[353]) );
   FLIPFLOP LA_108 (.DIN (INT_CARRY[336]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[337]) );
   assign INT_SUM[447] = INT_CARRY[337];
   FULL_ADDER FA_304 (.DATA_A (INT_SUM[446]) , .DATA_B (INT_SUM[447]) , .DATA_C (INT_CARRY[338]) , .SAVE (SUM[38]) , .CARRY (CARRY[38]) );
   FULL_ADDER FA_305 (.DATA_A (SUMMAND[395]) , .DATA_B (SUMMAND[396]) , .DATA_C (SUMMAND[397]) , .SAVE (INT_SUM[448]) , .CARRY (INT_CARRY[354]) );
   FULL_ADDER FA_306 (.DATA_A (SUMMAND[398]) , .DATA_B (SUMMAND[399]) , .DATA_C (SUMMAND[400]) , .SAVE (INT_SUM[449]) , .CARRY (INT_CARRY[355]) );
   FULL_ADDER FA_307 (.DATA_A (SUMMAND[401]) , .DATA_B (SUMMAND[402]) , .DATA_C (SUMMAND[403]) , .SAVE (INT_SUM[450]) , .CARRY (INT_CARRY[356]) );
   FULL_ADDER FA_308 (.DATA_A (SUMMAND[404]) , .DATA_B (SUMMAND[405]) , .DATA_C (SUMMAND[406]) , .SAVE (INT_SUM[451]) , .CARRY (INT_CARRY[357]) );
   assign INT_SUM[452] = SUMMAND[407];
   FULL_ADDER FA_309 (.DATA_A (INT_SUM[448]) , .DATA_B (INT_SUM[449]) , .DATA_C (INT_SUM[450]) , .SAVE (INT_SUM[453]) , .CARRY (INT_CARRY[358]) );
   FULL_ADDER FA_310 (.DATA_A (INT_SUM[451]) , .DATA_B (INT_SUM[452]) , .DATA_C (INT_CARRY[339]) , .SAVE (INT_SUM[454]) , .CARRY (INT_CARRY[359]) );
   FULL_ADDER FA_311 (.DATA_A (INT_CARRY[340]) , .DATA_B (INT_CARRY[341]) , .DATA_C (INT_CARRY[342]) , .SAVE (INT_SUM[455]) , .CARRY (INT_CARRY[360]) );
   assign INT_SUM[456] = INT_CARRY[343];
   FULL_ADDER FA_312 (.DATA_A (INT_SUM[453]) , .DATA_B (INT_SUM[454]) , .DATA_C (INT_SUM[455]) , .SAVE (INT_SUM[457]) , .CARRY (INT_CARRY[361]) );
   FULL_ADDER FA_313 (.DATA_A (INT_SUM[456]) , .DATA_B (INT_CARRY[344]) , .DATA_C (INT_CARRY[345]) , .SAVE (INT_SUM[458]) , .CARRY (INT_CARRY[362]) );
   assign INT_SUM[459] = INT_CARRY[346];
   FULL_ADDER FA_314 (.DATA_A (INT_SUM[457]) , .DATA_B (INT_SUM[458]) , .DATA_C (INT_SUM[459]) , .SAVE (INT_SUM[460]) , .CARRY (INT_CARRY[363]) );
   HALF_ADDER HA_37 (.DATA_A (INT_CARRY[347]) , .DATA_B (INT_CARRY[348]) , .SAVE (INT_SUM[462]) , .CARRY (INT_CARRY[365]) );
   FLIPFLOP LA_109 (.DIN (INT_SUM[460]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[461]) );
   FLIPFLOP LA_110 (.DIN (INT_SUM[462]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[463]) );
   FLIPFLOP LA_111 (.DIN (INT_CARRY[349]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[350]) );
   FULL_ADDER FA_315 (.DATA_A (INT_SUM[461]) , .DATA_B (INT_SUM[463]) , .DATA_C (INT_CARRY[350]) , .SAVE (INT_SUM[464]) , .CARRY (INT_CARRY[367]) );
   FLIPFLOP LA_112 (.DIN (INT_CARRY[351]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[352]) );
   assign INT_SUM[465] = INT_CARRY[352];
   FULL_ADDER FA_316 (.DATA_A (INT_SUM[464]) , .DATA_B (INT_SUM[465]) , .DATA_C (INT_CARRY[353]) , .SAVE (SUM[39]) , .CARRY (CARRY[39]) );
   FULL_ADDER FA_317 (.DATA_A (SUMMAND[408]) , .DATA_B (SUMMAND[409]) , .DATA_C (SUMMAND[410]) , .SAVE (INT_SUM[466]) , .CARRY (INT_CARRY[368]) );
   FULL_ADDER FA_318 (.DATA_A (SUMMAND[411]) , .DATA_B (SUMMAND[412]) , .DATA_C (SUMMAND[413]) , .SAVE (INT_SUM[467]) , .CARRY (INT_CARRY[369]) );
   FULL_ADDER FA_319 (.DATA_A (SUMMAND[414]) , .DATA_B (SUMMAND[415]) , .DATA_C (SUMMAND[416]) , .SAVE (INT_SUM[468]) , .CARRY (INT_CARRY[370]) );
   FULL_ADDER FA_320 (.DATA_A (SUMMAND[417]) , .DATA_B (SUMMAND[418]) , .DATA_C (SUMMAND[419]) , .SAVE (INT_SUM[469]) , .CARRY (INT_CARRY[371]) );
   FULL_ADDER FA_321 (.DATA_A (SUMMAND[420]) , .DATA_B (INT_CARRY[354]) , .DATA_C (INT_CARRY[355]) , .SAVE (INT_SUM[470]) , .CARRY (INT_CARRY[372]) );
   assign INT_SUM[471] = INT_CARRY[356];
   assign INT_SUM[472] = INT_CARRY[357];
   FULL_ADDER FA_322 (.DATA_A (INT_SUM[466]) , .DATA_B (INT_SUM[467]) , .DATA_C (INT_SUM[468]) , .SAVE (INT_SUM[473]) , .CARRY (INT_CARRY[373]) );
   FULL_ADDER FA_323 (.DATA_A (INT_SUM[469]) , .DATA_B (INT_SUM[470]) , .DATA_C (INT_SUM[471]) , .SAVE (INT_SUM[474]) , .CARRY (INT_CARRY[374]) );
   FULL_ADDER FA_324 (.DATA_A (INT_SUM[472]) , .DATA_B (INT_CARRY[358]) , .DATA_C (INT_CARRY[359]) , .SAVE (INT_SUM[475]) , .CARRY (INT_CARRY[375]) );
   assign INT_SUM[476] = INT_CARRY[360];
   FULL_ADDER FA_325 (.DATA_A (INT_SUM[473]) , .DATA_B (INT_SUM[474]) , .DATA_C (INT_SUM[475]) , .SAVE (INT_SUM[477]) , .CARRY (INT_CARRY[376]) );
   FULL_ADDER FA_326 (.DATA_A (INT_SUM[476]) , .DATA_B (INT_CARRY[361]) , .DATA_C (INT_CARRY[362]) , .SAVE (INT_SUM[479]) , .CARRY (INT_CARRY[378]) );
   FLIPFLOP LA_113 (.DIN (INT_SUM[477]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[478]) );
   FLIPFLOP LA_114 (.DIN (INT_SUM[479]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[480]) );
   FLIPFLOP LA_115 (.DIN (INT_CARRY[363]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[364]) );
   FULL_ADDER FA_327 (.DATA_A (INT_SUM[478]) , .DATA_B (INT_SUM[480]) , .DATA_C (INT_CARRY[364]) , .SAVE (INT_SUM[481]) , .CARRY (INT_CARRY[380]) );
   FLIPFLOP LA_116 (.DIN (INT_CARRY[365]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[366]) );
   assign INT_SUM[482] = INT_CARRY[366];
   FULL_ADDER FA_328 (.DATA_A (INT_SUM[481]) , .DATA_B (INT_SUM[482]) , .DATA_C (INT_CARRY[367]) , .SAVE (SUM[40]) , .CARRY (CARRY[40]) );
   FULL_ADDER FA_329 (.DATA_A (SUMMAND[421]) , .DATA_B (SUMMAND[422]) , .DATA_C (SUMMAND[423]) , .SAVE (INT_SUM[483]) , .CARRY (INT_CARRY[381]) );
   FULL_ADDER FA_330 (.DATA_A (SUMMAND[424]) , .DATA_B (SUMMAND[425]) , .DATA_C (SUMMAND[426]) , .SAVE (INT_SUM[484]) , .CARRY (INT_CARRY[382]) );
   FULL_ADDER FA_331 (.DATA_A (SUMMAND[427]) , .DATA_B (SUMMAND[428]) , .DATA_C (SUMMAND[429]) , .SAVE (INT_SUM[485]) , .CARRY (INT_CARRY[383]) );
   FULL_ADDER FA_332 (.DATA_A (SUMMAND[430]) , .DATA_B (SUMMAND[431]) , .DATA_C (SUMMAND[432]) , .SAVE (INT_SUM[486]) , .CARRY (INT_CARRY[384]) );
   FULL_ADDER FA_333 (.DATA_A (INT_SUM[483]) , .DATA_B (INT_SUM[484]) , .DATA_C (INT_SUM[485]) , .SAVE (INT_SUM[487]) , .CARRY (INT_CARRY[385]) );
   FULL_ADDER FA_334 (.DATA_A (INT_SUM[486]) , .DATA_B (INT_CARRY[368]) , .DATA_C (INT_CARRY[369]) , .SAVE (INT_SUM[488]) , .CARRY (INT_CARRY[386]) );
   FULL_ADDER FA_335 (.DATA_A (INT_CARRY[370]) , .DATA_B (INT_CARRY[371]) , .DATA_C (INT_CARRY[372]) , .SAVE (INT_SUM[489]) , .CARRY (INT_CARRY[387]) );
   FULL_ADDER FA_336 (.DATA_A (INT_SUM[487]) , .DATA_B (INT_SUM[488]) , .DATA_C (INT_SUM[489]) , .SAVE (INT_SUM[490]) , .CARRY (INT_CARRY[388]) );
   FULL_ADDER FA_337 (.DATA_A (INT_CARRY[373]) , .DATA_B (INT_CARRY[374]) , .DATA_C (INT_CARRY[375]) , .SAVE (INT_SUM[492]) , .CARRY (INT_CARRY[390]) );
   FLIPFLOP LA_117 (.DIN (INT_SUM[490]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[491]) );
   FLIPFLOP LA_118 (.DIN (INT_SUM[492]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[493]) );
   FLIPFLOP LA_119 (.DIN (INT_CARRY[376]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[377]) );
   FULL_ADDER FA_338 (.DATA_A (INT_SUM[491]) , .DATA_B (INT_SUM[493]) , .DATA_C (INT_CARRY[377]) , .SAVE (INT_SUM[494]) , .CARRY (INT_CARRY[392]) );
   FLIPFLOP LA_120 (.DIN (INT_CARRY[378]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[379]) );
   assign INT_SUM[495] = INT_CARRY[379];
   FULL_ADDER FA_339 (.DATA_A (INT_SUM[494]) , .DATA_B (INT_SUM[495]) , .DATA_C (INT_CARRY[380]) , .SAVE (SUM[41]) , .CARRY (CARRY[41]) );
   FULL_ADDER FA_340 (.DATA_A (SUMMAND[433]) , .DATA_B (SUMMAND[434]) , .DATA_C (SUMMAND[435]) , .SAVE (INT_SUM[496]) , .CARRY (INT_CARRY[393]) );
   FULL_ADDER FA_341 (.DATA_A (SUMMAND[436]) , .DATA_B (SUMMAND[437]) , .DATA_C (SUMMAND[438]) , .SAVE (INT_SUM[497]) , .CARRY (INT_CARRY[394]) );
   FULL_ADDER FA_342 (.DATA_A (SUMMAND[439]) , .DATA_B (SUMMAND[440]) , .DATA_C (SUMMAND[441]) , .SAVE (INT_SUM[498]) , .CARRY (INT_CARRY[395]) );
   FULL_ADDER FA_343 (.DATA_A (SUMMAND[442]) , .DATA_B (SUMMAND[443]) , .DATA_C (SUMMAND[444]) , .SAVE (INT_SUM[499]) , .CARRY (INT_CARRY[396]) );
   FULL_ADDER FA_344 (.DATA_A (INT_SUM[496]) , .DATA_B (INT_SUM[497]) , .DATA_C (INT_SUM[498]) , .SAVE (INT_SUM[500]) , .CARRY (INT_CARRY[397]) );
   FULL_ADDER FA_345 (.DATA_A (INT_SUM[499]) , .DATA_B (INT_CARRY[381]) , .DATA_C (INT_CARRY[382]) , .SAVE (INT_SUM[501]) , .CARRY (INT_CARRY[398]) );
   HALF_ADDER HA_38 (.DATA_A (INT_CARRY[383]) , .DATA_B (INT_CARRY[384]) , .SAVE (INT_SUM[502]) , .CARRY (INT_CARRY[399]) );
   FULL_ADDER FA_346 (.DATA_A (INT_SUM[500]) , .DATA_B (INT_SUM[501]) , .DATA_C (INT_SUM[502]) , .SAVE (INT_SUM[503]) , .CARRY (INT_CARRY[400]) );
   FULL_ADDER FA_347 (.DATA_A (INT_CARRY[385]) , .DATA_B (INT_CARRY[386]) , .DATA_C (INT_CARRY[387]) , .SAVE (INT_SUM[505]) , .CARRY (INT_CARRY[402]) );
   FLIPFLOP LA_121 (.DIN (INT_SUM[503]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[504]) );
   FLIPFLOP LA_122 (.DIN (INT_SUM[505]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[506]) );
   FLIPFLOP LA_123 (.DIN (INT_CARRY[388]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[389]) );
   FULL_ADDER FA_348 (.DATA_A (INT_SUM[504]) , .DATA_B (INT_SUM[506]) , .DATA_C (INT_CARRY[389]) , .SAVE (INT_SUM[507]) , .CARRY (INT_CARRY[404]) );
   FLIPFLOP LA_124 (.DIN (INT_CARRY[390]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[391]) );
   assign INT_SUM[508] = INT_CARRY[391];
   FULL_ADDER FA_349 (.DATA_A (INT_SUM[507]) , .DATA_B (INT_SUM[508]) , .DATA_C (INT_CARRY[392]) , .SAVE (SUM[42]) , .CARRY (CARRY[42]) );
   FULL_ADDER FA_350 (.DATA_A (SUMMAND[445]) , .DATA_B (SUMMAND[446]) , .DATA_C (SUMMAND[447]) , .SAVE (INT_SUM[509]) , .CARRY (INT_CARRY[405]) );
   FULL_ADDER FA_351 (.DATA_A (SUMMAND[448]) , .DATA_B (SUMMAND[449]) , .DATA_C (SUMMAND[450]) , .SAVE (INT_SUM[510]) , .CARRY (INT_CARRY[406]) );
   FULL_ADDER FA_352 (.DATA_A (SUMMAND[451]) , .DATA_B (SUMMAND[452]) , .DATA_C (SUMMAND[453]) , .SAVE (INT_SUM[511]) , .CARRY (INT_CARRY[407]) );
   assign INT_SUM[512] = SUMMAND[454];
   assign INT_SUM[513] = SUMMAND[455];
   FULL_ADDER FA_353 (.DATA_A (INT_SUM[509]) , .DATA_B (INT_SUM[510]) , .DATA_C (INT_SUM[511]) , .SAVE (INT_SUM[514]) , .CARRY (INT_CARRY[408]) );
   FULL_ADDER FA_354 (.DATA_A (INT_SUM[512]) , .DATA_B (INT_SUM[513]) , .DATA_C (INT_CARRY[393]) , .SAVE (INT_SUM[515]) , .CARRY (INT_CARRY[409]) );
   FULL_ADDER FA_355 (.DATA_A (INT_CARRY[394]) , .DATA_B (INT_CARRY[395]) , .DATA_C (INT_CARRY[396]) , .SAVE (INT_SUM[516]) , .CARRY (INT_CARRY[410]) );
   FULL_ADDER FA_356 (.DATA_A (INT_SUM[514]) , .DATA_B (INT_SUM[515]) , .DATA_C (INT_SUM[516]) , .SAVE (INT_SUM[517]) , .CARRY (INT_CARRY[411]) );
   FULL_ADDER FA_357 (.DATA_A (INT_CARRY[397]) , .DATA_B (INT_CARRY[398]) , .DATA_C (INT_CARRY[399]) , .SAVE (INT_SUM[519]) , .CARRY (INT_CARRY[413]) );
   FLIPFLOP LA_125 (.DIN (INT_SUM[517]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[518]) );
   FLIPFLOP LA_126 (.DIN (INT_SUM[519]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[520]) );
   FLIPFLOP LA_127 (.DIN (INT_CARRY[400]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[401]) );
   FULL_ADDER FA_358 (.DATA_A (INT_SUM[518]) , .DATA_B (INT_SUM[520]) , .DATA_C (INT_CARRY[401]) , .SAVE (INT_SUM[521]) , .CARRY (INT_CARRY[415]) );
   FLIPFLOP LA_128 (.DIN (INT_CARRY[402]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[403]) );
   assign INT_SUM[522] = INT_CARRY[403];
   FULL_ADDER FA_359 (.DATA_A (INT_SUM[521]) , .DATA_B (INT_SUM[522]) , .DATA_C (INT_CARRY[404]) , .SAVE (SUM[43]) , .CARRY (CARRY[43]) );
   FULL_ADDER FA_360 (.DATA_A (SUMMAND[456]) , .DATA_B (SUMMAND[457]) , .DATA_C (SUMMAND[458]) , .SAVE (INT_SUM[523]) , .CARRY (INT_CARRY[416]) );
   FULL_ADDER FA_361 (.DATA_A (SUMMAND[459]) , .DATA_B (SUMMAND[460]) , .DATA_C (SUMMAND[461]) , .SAVE (INT_SUM[524]) , .CARRY (INT_CARRY[417]) );
   FULL_ADDER FA_362 (.DATA_A (SUMMAND[462]) , .DATA_B (SUMMAND[463]) , .DATA_C (SUMMAND[464]) , .SAVE (INT_SUM[525]) , .CARRY (INT_CARRY[418]) );
   HALF_ADDER HA_39 (.DATA_A (SUMMAND[465]) , .DATA_B (SUMMAND[466]) , .SAVE (INT_SUM[526]) , .CARRY (INT_CARRY[419]) );
   FULL_ADDER FA_363 (.DATA_A (INT_SUM[523]) , .DATA_B (INT_SUM[524]) , .DATA_C (INT_SUM[525]) , .SAVE (INT_SUM[527]) , .CARRY (INT_CARRY[420]) );
   FULL_ADDER FA_364 (.DATA_A (INT_SUM[526]) , .DATA_B (INT_CARRY[405]) , .DATA_C (INT_CARRY[406]) , .SAVE (INT_SUM[528]) , .CARRY (INT_CARRY[421]) );
   assign INT_SUM[529] = INT_CARRY[407];
   FULL_ADDER FA_365 (.DATA_A (INT_SUM[527]) , .DATA_B (INT_SUM[528]) , .DATA_C (INT_SUM[529]) , .SAVE (INT_SUM[530]) , .CARRY (INT_CARRY[422]) );
   FULL_ADDER FA_366 (.DATA_A (INT_CARRY[408]) , .DATA_B (INT_CARRY[409]) , .DATA_C (INT_CARRY[410]) , .SAVE (INT_SUM[532]) , .CARRY (INT_CARRY[424]) );
   FLIPFLOP LA_129 (.DIN (INT_SUM[530]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[531]) );
   FLIPFLOP LA_130 (.DIN (INT_SUM[532]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[533]) );
   FLIPFLOP LA_131 (.DIN (INT_CARRY[411]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[412]) );
   FULL_ADDER FA_367 (.DATA_A (INT_SUM[531]) , .DATA_B (INT_SUM[533]) , .DATA_C (INT_CARRY[412]) , .SAVE (INT_SUM[534]) , .CARRY (INT_CARRY[426]) );
   FLIPFLOP LA_132 (.DIN (INT_CARRY[413]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[414]) );
   assign INT_SUM[535] = INT_CARRY[414];
   FULL_ADDER FA_368 (.DATA_A (INT_SUM[534]) , .DATA_B (INT_SUM[535]) , .DATA_C (INT_CARRY[415]) , .SAVE (SUM[44]) , .CARRY (CARRY[44]) );
   FULL_ADDER FA_369 (.DATA_A (SUMMAND[467]) , .DATA_B (SUMMAND[468]) , .DATA_C (SUMMAND[469]) , .SAVE (INT_SUM[536]) , .CARRY (INT_CARRY[427]) );
   FULL_ADDER FA_370 (.DATA_A (SUMMAND[470]) , .DATA_B (SUMMAND[471]) , .DATA_C (SUMMAND[472]) , .SAVE (INT_SUM[537]) , .CARRY (INT_CARRY[428]) );
   FULL_ADDER FA_371 (.DATA_A (SUMMAND[473]) , .DATA_B (SUMMAND[474]) , .DATA_C (SUMMAND[475]) , .SAVE (INT_SUM[538]) , .CARRY (INT_CARRY[429]) );
   assign INT_SUM[539] = SUMMAND[476];
   FULL_ADDER FA_372 (.DATA_A (INT_SUM[536]) , .DATA_B (INT_SUM[537]) , .DATA_C (INT_SUM[538]) , .SAVE (INT_SUM[540]) , .CARRY (INT_CARRY[430]) );
   FULL_ADDER FA_373 (.DATA_A (INT_SUM[539]) , .DATA_B (INT_CARRY[416]) , .DATA_C (INT_CARRY[417]) , .SAVE (INT_SUM[541]) , .CARRY (INT_CARRY[431]) );
   assign INT_SUM[542] = INT_CARRY[418];
   assign INT_SUM[543] = INT_CARRY[419];
   FULL_ADDER FA_374 (.DATA_A (INT_SUM[540]) , .DATA_B (INT_SUM[541]) , .DATA_C (INT_SUM[542]) , .SAVE (INT_SUM[544]) , .CARRY (INT_CARRY[432]) );
   FULL_ADDER FA_375 (.DATA_A (INT_SUM[543]) , .DATA_B (INT_CARRY[420]) , .DATA_C (INT_CARRY[421]) , .SAVE (INT_SUM[546]) , .CARRY (INT_CARRY[434]) );
   FLIPFLOP LA_133 (.DIN (INT_SUM[544]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[545]) );
   FLIPFLOP LA_134 (.DIN (INT_SUM[546]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[547]) );
   FLIPFLOP LA_135 (.DIN (INT_CARRY[422]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[423]) );
   FULL_ADDER FA_376 (.DATA_A (INT_SUM[545]) , .DATA_B (INT_SUM[547]) , .DATA_C (INT_CARRY[423]) , .SAVE (INT_SUM[548]) , .CARRY (INT_CARRY[436]) );
   FLIPFLOP LA_136 (.DIN (INT_CARRY[424]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[425]) );
   assign INT_SUM[549] = INT_CARRY[425];
   FULL_ADDER FA_377 (.DATA_A (INT_SUM[548]) , .DATA_B (INT_SUM[549]) , .DATA_C (INT_CARRY[426]) , .SAVE (SUM[45]) , .CARRY (CARRY[45]) );
   FULL_ADDER FA_378 (.DATA_A (SUMMAND[477]) , .DATA_B (SUMMAND[478]) , .DATA_C (SUMMAND[479]) , .SAVE (INT_SUM[550]) , .CARRY (INT_CARRY[437]) );
   FULL_ADDER FA_379 (.DATA_A (SUMMAND[480]) , .DATA_B (SUMMAND[481]) , .DATA_C (SUMMAND[482]) , .SAVE (INT_SUM[551]) , .CARRY (INT_CARRY[438]) );
   FULL_ADDER FA_380 (.DATA_A (SUMMAND[483]) , .DATA_B (SUMMAND[484]) , .DATA_C (SUMMAND[485]) , .SAVE (INT_SUM[552]) , .CARRY (INT_CARRY[439]) );
   assign INT_SUM[553] = SUMMAND[486];
   FULL_ADDER FA_381 (.DATA_A (INT_SUM[550]) , .DATA_B (INT_SUM[551]) , .DATA_C (INT_SUM[552]) , .SAVE (INT_SUM[554]) , .CARRY (INT_CARRY[440]) );
   FULL_ADDER FA_382 (.DATA_A (INT_SUM[553]) , .DATA_B (INT_CARRY[427]) , .DATA_C (INT_CARRY[428]) , .SAVE (INT_SUM[555]) , .CARRY (INT_CARRY[441]) );
   assign INT_SUM[556] = INT_CARRY[429];
   FULL_ADDER FA_383 (.DATA_A (INT_SUM[554]) , .DATA_B (INT_SUM[555]) , .DATA_C (INT_SUM[556]) , .SAVE (INT_SUM[557]) , .CARRY (INT_CARRY[442]) );
   HALF_ADDER HA_40 (.DATA_A (INT_CARRY[430]) , .DATA_B (INT_CARRY[431]) , .SAVE (INT_SUM[559]) , .CARRY (INT_CARRY[444]) );
   FLIPFLOP LA_137 (.DIN (INT_SUM[557]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[558]) );
   FLIPFLOP LA_138 (.DIN (INT_SUM[559]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[560]) );
   FLIPFLOP LA_139 (.DIN (INT_CARRY[432]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[433]) );
   FULL_ADDER FA_384 (.DATA_A (INT_SUM[558]) , .DATA_B (INT_SUM[560]) , .DATA_C (INT_CARRY[433]) , .SAVE (INT_SUM[561]) , .CARRY (INT_CARRY[446]) );
   FLIPFLOP LA_140 (.DIN (INT_CARRY[434]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[435]) );
   assign INT_SUM[562] = INT_CARRY[435];
   FULL_ADDER FA_385 (.DATA_A (INT_SUM[561]) , .DATA_B (INT_SUM[562]) , .DATA_C (INT_CARRY[436]) , .SAVE (SUM[46]) , .CARRY (CARRY[46]) );
   FULL_ADDER FA_386 (.DATA_A (SUMMAND[487]) , .DATA_B (SUMMAND[488]) , .DATA_C (SUMMAND[489]) , .SAVE (INT_SUM[563]) , .CARRY (INT_CARRY[447]) );
   FULL_ADDER FA_387 (.DATA_A (SUMMAND[490]) , .DATA_B (SUMMAND[491]) , .DATA_C (SUMMAND[492]) , .SAVE (INT_SUM[564]) , .CARRY (INT_CARRY[448]) );
   FULL_ADDER FA_388 (.DATA_A (SUMMAND[493]) , .DATA_B (SUMMAND[494]) , .DATA_C (SUMMAND[495]) , .SAVE (INT_SUM[565]) , .CARRY (INT_CARRY[449]) );
   FULL_ADDER FA_389 (.DATA_A (INT_SUM[563]) , .DATA_B (INT_SUM[564]) , .DATA_C (INT_SUM[565]) , .SAVE (INT_SUM[566]) , .CARRY (INT_CARRY[450]) );
   FULL_ADDER FA_390 (.DATA_A (INT_CARRY[437]) , .DATA_B (INT_CARRY[438]) , .DATA_C (INT_CARRY[439]) , .SAVE (INT_SUM[567]) , .CARRY (INT_CARRY[451]) );
   FULL_ADDER FA_391 (.DATA_A (INT_SUM[566]) , .DATA_B (INT_SUM[567]) , .DATA_C (INT_CARRY[440]) , .SAVE (INT_SUM[568]) , .CARRY (INT_CARRY[452]) );
   assign INT_SUM[570] = INT_CARRY[441];
   FLIPFLOP LA_141 (.DIN (INT_SUM[568]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[569]) );
   FLIPFLOP LA_142 (.DIN (INT_SUM[570]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[571]) );
   FLIPFLOP LA_143 (.DIN (INT_CARRY[442]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[443]) );
   FULL_ADDER FA_392 (.DATA_A (INT_SUM[569]) , .DATA_B (INT_SUM[571]) , .DATA_C (INT_CARRY[443]) , .SAVE (INT_SUM[572]) , .CARRY (INT_CARRY[454]) );
   FLIPFLOP LA_144 (.DIN (INT_CARRY[444]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[445]) );
   assign INT_SUM[573] = INT_CARRY[445];
   FULL_ADDER FA_393 (.DATA_A (INT_SUM[572]) , .DATA_B (INT_SUM[573]) , .DATA_C (INT_CARRY[446]) , .SAVE (SUM[47]) , .CARRY (CARRY[47]) );
   FULL_ADDER FA_394 (.DATA_A (SUMMAND[496]) , .DATA_B (SUMMAND[497]) , .DATA_C (SUMMAND[498]) , .SAVE (INT_SUM[574]) , .CARRY (INT_CARRY[455]) );
   FULL_ADDER FA_395 (.DATA_A (SUMMAND[499]) , .DATA_B (SUMMAND[500]) , .DATA_C (SUMMAND[501]) , .SAVE (INT_SUM[575]) , .CARRY (INT_CARRY[456]) );
   FULL_ADDER FA_396 (.DATA_A (SUMMAND[502]) , .DATA_B (SUMMAND[503]) , .DATA_C (SUMMAND[504]) , .SAVE (INT_SUM[576]) , .CARRY (INT_CARRY[457]) );
   FULL_ADDER FA_397 (.DATA_A (INT_SUM[574]) , .DATA_B (INT_SUM[575]) , .DATA_C (INT_SUM[576]) , .SAVE (INT_SUM[577]) , .CARRY (INT_CARRY[458]) );
   FULL_ADDER FA_398 (.DATA_A (INT_CARRY[447]) , .DATA_B (INT_CARRY[448]) , .DATA_C (INT_CARRY[449]) , .SAVE (INT_SUM[578]) , .CARRY (INT_CARRY[459]) );
   FULL_ADDER FA_399 (.DATA_A (INT_SUM[577]) , .DATA_B (INT_SUM[578]) , .DATA_C (INT_CARRY[450]) , .SAVE (INT_SUM[579]) , .CARRY (INT_CARRY[460]) );
   assign INT_SUM[581] = INT_CARRY[451];
   FLIPFLOP LA_145 (.DIN (INT_SUM[579]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[580]) );
   FLIPFLOP LA_146 (.DIN (INT_SUM[581]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[582]) );
   FLIPFLOP LA_147 (.DIN (INT_CARRY[452]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[453]) );
   FULL_ADDER FA_400 (.DATA_A (INT_SUM[580]) , .DATA_B (INT_SUM[582]) , .DATA_C (INT_CARRY[453]) , .SAVE (INT_SUM[583]) , .CARRY (INT_CARRY[462]) );
   HALF_ADDER HA_41 (.DATA_A (INT_SUM[583]) , .DATA_B (INT_CARRY[454]) , .SAVE (SUM[48]) , .CARRY (CARRY[48]) );
   FULL_ADDER FA_401 (.DATA_A (SUMMAND[505]) , .DATA_B (SUMMAND[506]) , .DATA_C (SUMMAND[507]) , .SAVE (INT_SUM[584]) , .CARRY (INT_CARRY[463]) );
   FULL_ADDER FA_402 (.DATA_A (SUMMAND[508]) , .DATA_B (SUMMAND[509]) , .DATA_C (SUMMAND[510]) , .SAVE (INT_SUM[585]) , .CARRY (INT_CARRY[464]) );
   FULL_ADDER FA_403 (.DATA_A (SUMMAND[511]) , .DATA_B (SUMMAND[512]) , .DATA_C (INT_CARRY[455]) , .SAVE (INT_SUM[586]) , .CARRY (INT_CARRY[465]) );
   HALF_ADDER HA_42 (.DATA_A (INT_CARRY[456]) , .DATA_B (INT_CARRY[457]) , .SAVE (INT_SUM[587]) , .CARRY (INT_CARRY[466]) );
   FULL_ADDER FA_404 (.DATA_A (INT_SUM[584]) , .DATA_B (INT_SUM[585]) , .DATA_C (INT_SUM[586]) , .SAVE (INT_SUM[588]) , .CARRY (INT_CARRY[467]) );
   FULL_ADDER FA_405 (.DATA_A (INT_SUM[587]) , .DATA_B (INT_CARRY[458]) , .DATA_C (INT_CARRY[459]) , .SAVE (INT_SUM[590]) , .CARRY (INT_CARRY[469]) );
   FLIPFLOP LA_148 (.DIN (INT_SUM[588]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[589]) );
   FLIPFLOP LA_149 (.DIN (INT_SUM[590]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[591]) );
   FLIPFLOP LA_150 (.DIN (INT_CARRY[460]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[461]) );
   FULL_ADDER FA_406 (.DATA_A (INT_SUM[589]) , .DATA_B (INT_SUM[591]) , .DATA_C (INT_CARRY[461]) , .SAVE (INT_SUM[592]) , .CARRY (INT_CARRY[471]) );
   HALF_ADDER HA_43 (.DATA_A (INT_SUM[592]) , .DATA_B (INT_CARRY[462]) , .SAVE (SUM[49]) , .CARRY (CARRY[49]) );
   FULL_ADDER FA_407 (.DATA_A (SUMMAND[513]) , .DATA_B (SUMMAND[514]) , .DATA_C (SUMMAND[515]) , .SAVE (INT_SUM[593]) , .CARRY (INT_CARRY[472]) );
   FULL_ADDER FA_408 (.DATA_A (SUMMAND[516]) , .DATA_B (SUMMAND[517]) , .DATA_C (SUMMAND[518]) , .SAVE (INT_SUM[594]) , .CARRY (INT_CARRY[473]) );
   assign INT_SUM[595] = SUMMAND[519];
   assign INT_SUM[596] = SUMMAND[520];
   FULL_ADDER FA_409 (.DATA_A (INT_SUM[593]) , .DATA_B (INT_SUM[594]) , .DATA_C (INT_SUM[595]) , .SAVE (INT_SUM[597]) , .CARRY (INT_CARRY[474]) );
   assign INT_SUM[598] = INT_SUM[596];
   FULL_ADDER FA_410 (.DATA_A (INT_SUM[597]) , .DATA_B (INT_SUM[598]) , .DATA_C (INT_CARRY[463]) , .SAVE (INT_SUM[599]) , .CARRY (INT_CARRY[475]) );
   FULL_ADDER FA_411 (.DATA_A (INT_CARRY[464]) , .DATA_B (INT_CARRY[465]) , .DATA_C (INT_CARRY[466]) , .SAVE (INT_SUM[601]) , .CARRY (INT_CARRY[477]) );
   FLIPFLOP LA_151 (.DIN (INT_SUM[599]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[600]) );
   FLIPFLOP LA_152 (.DIN (INT_SUM[601]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[602]) );
   FLIPFLOP LA_153 (.DIN (INT_CARRY[467]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[468]) );
   FULL_ADDER FA_412 (.DATA_A (INT_SUM[600]) , .DATA_B (INT_SUM[602]) , .DATA_C (INT_CARRY[468]) , .SAVE (INT_SUM[603]) , .CARRY (INT_CARRY[479]) );
   FLIPFLOP LA_154 (.DIN (INT_CARRY[469]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[470]) );
   assign INT_SUM[604] = INT_CARRY[470];
   FULL_ADDER FA_413 (.DATA_A (INT_SUM[603]) , .DATA_B (INT_SUM[604]) , .DATA_C (INT_CARRY[471]) , .SAVE (SUM[50]) , .CARRY (CARRY[50]) );
   FULL_ADDER FA_414 (.DATA_A (SUMMAND[521]) , .DATA_B (SUMMAND[522]) , .DATA_C (SUMMAND[523]) , .SAVE (INT_SUM[605]) , .CARRY (INT_CARRY[480]) );
   FULL_ADDER FA_415 (.DATA_A (SUMMAND[524]) , .DATA_B (SUMMAND[525]) , .DATA_C (SUMMAND[526]) , .SAVE (INT_SUM[606]) , .CARRY (INT_CARRY[481]) );
   FULL_ADDER FA_416 (.DATA_A (SUMMAND[527]) , .DATA_B (INT_CARRY[472]) , .DATA_C (INT_CARRY[473]) , .SAVE (INT_SUM[607]) , .CARRY (INT_CARRY[482]) );
   FULL_ADDER FA_417 (.DATA_A (INT_SUM[605]) , .DATA_B (INT_SUM[606]) , .DATA_C (INT_SUM[607]) , .SAVE (INT_SUM[608]) , .CARRY (INT_CARRY[483]) );
   assign INT_SUM[610] = INT_CARRY[474];
   FLIPFLOP LA_155 (.DIN (INT_SUM[608]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[609]) );
   FLIPFLOP LA_156 (.DIN (INT_SUM[610]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[611]) );
   FLIPFLOP LA_157 (.DIN (INT_CARRY[475]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[476]) );
   FULL_ADDER FA_418 (.DATA_A (INT_SUM[609]) , .DATA_B (INT_SUM[611]) , .DATA_C (INT_CARRY[476]) , .SAVE (INT_SUM[612]) , .CARRY (INT_CARRY[485]) );
   FLIPFLOP LA_158 (.DIN (INT_CARRY[477]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[478]) );
   assign INT_SUM[613] = INT_CARRY[478];
   FULL_ADDER FA_419 (.DATA_A (INT_SUM[612]) , .DATA_B (INT_SUM[613]) , .DATA_C (INT_CARRY[479]) , .SAVE (SUM[51]) , .CARRY (CARRY[51]) );
   FULL_ADDER FA_420 (.DATA_A (SUMMAND[528]) , .DATA_B (SUMMAND[529]) , .DATA_C (SUMMAND[530]) , .SAVE (INT_SUM[614]) , .CARRY (INT_CARRY[486]) );
   FULL_ADDER FA_421 (.DATA_A (SUMMAND[531]) , .DATA_B (SUMMAND[532]) , .DATA_C (SUMMAND[533]) , .SAVE (INT_SUM[615]) , .CARRY (INT_CARRY[487]) );
   assign INT_SUM[616] = SUMMAND[534];
   FULL_ADDER FA_422 (.DATA_A (INT_SUM[614]) , .DATA_B (INT_SUM[615]) , .DATA_C (INT_SUM[616]) , .SAVE (INT_SUM[617]) , .CARRY (INT_CARRY[488]) );
   FULL_ADDER FA_423 (.DATA_A (INT_CARRY[480]) , .DATA_B (INT_CARRY[481]) , .DATA_C (INT_CARRY[482]) , .SAVE (INT_SUM[619]) , .CARRY (INT_CARRY[490]) );
   FLIPFLOP LA_159 (.DIN (INT_SUM[617]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[618]) );
   FLIPFLOP LA_160 (.DIN (INT_SUM[619]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[620]) );
   FLIPFLOP LA_161 (.DIN (INT_CARRY[483]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[484]) );
   FULL_ADDER FA_424 (.DATA_A (INT_SUM[618]) , .DATA_B (INT_SUM[620]) , .DATA_C (INT_CARRY[484]) , .SAVE (INT_SUM[621]) , .CARRY (INT_CARRY[492]) );
   HALF_ADDER HA_44 (.DATA_A (INT_SUM[621]) , .DATA_B (INT_CARRY[485]) , .SAVE (SUM[52]) , .CARRY (CARRY[52]) );
   FULL_ADDER FA_425 (.DATA_A (SUMMAND[535]) , .DATA_B (SUMMAND[536]) , .DATA_C (SUMMAND[537]) , .SAVE (INT_SUM[622]) , .CARRY (INT_CARRY[493]) );
   FULL_ADDER FA_426 (.DATA_A (SUMMAND[538]) , .DATA_B (SUMMAND[539]) , .DATA_C (SUMMAND[540]) , .SAVE (INT_SUM[623]) , .CARRY (INT_CARRY[494]) );
   FULL_ADDER FA_427 (.DATA_A (INT_SUM[622]) , .DATA_B (INT_SUM[623]) , .DATA_C (INT_CARRY[486]) , .SAVE (INT_SUM[624]) , .CARRY (INT_CARRY[495]) );
   assign INT_SUM[626] = INT_CARRY[487];
   FLIPFLOP LA_162 (.DIN (INT_SUM[624]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[625]) );
   FLIPFLOP LA_163 (.DIN (INT_SUM[626]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[627]) );
   FLIPFLOP LA_164 (.DIN (INT_CARRY[488]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[489]) );
   FULL_ADDER FA_428 (.DATA_A (INT_SUM[625]) , .DATA_B (INT_SUM[627]) , .DATA_C (INT_CARRY[489]) , .SAVE (INT_SUM[628]) , .CARRY (INT_CARRY[497]) );
   FLIPFLOP LA_165 (.DIN (INT_CARRY[490]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[491]) );
   assign INT_SUM[629] = INT_CARRY[491];
   FULL_ADDER FA_429 (.DATA_A (INT_SUM[628]) , .DATA_B (INT_SUM[629]) , .DATA_C (INT_CARRY[492]) , .SAVE (SUM[53]) , .CARRY (CARRY[53]) );
   FULL_ADDER FA_430 (.DATA_A (SUMMAND[541]) , .DATA_B (SUMMAND[542]) , .DATA_C (SUMMAND[543]) , .SAVE (INT_SUM[630]) , .CARRY (INT_CARRY[498]) );
   FULL_ADDER FA_431 (.DATA_A (SUMMAND[544]) , .DATA_B (SUMMAND[545]) , .DATA_C (SUMMAND[546]) , .SAVE (INT_SUM[631]) , .CARRY (INT_CARRY[499]) );
   FULL_ADDER FA_432 (.DATA_A (INT_SUM[630]) , .DATA_B (INT_SUM[631]) , .DATA_C (INT_CARRY[493]) , .SAVE (INT_SUM[632]) , .CARRY (INT_CARRY[500]) );
   assign INT_SUM[634] = INT_CARRY[494];
   FLIPFLOP LA_166 (.DIN (INT_SUM[632]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[633]) );
   FLIPFLOP LA_167 (.DIN (INT_SUM[634]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[635]) );
   FLIPFLOP LA_168 (.DIN (INT_CARRY[495]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[496]) );
   FULL_ADDER FA_433 (.DATA_A (INT_SUM[633]) , .DATA_B (INT_SUM[635]) , .DATA_C (INT_CARRY[496]) , .SAVE (INT_SUM[636]) , .CARRY (INT_CARRY[502]) );
   HALF_ADDER HA_45 (.DATA_A (INT_SUM[636]) , .DATA_B (INT_CARRY[497]) , .SAVE (SUM[54]) , .CARRY (CARRY[54]) );
   FULL_ADDER FA_434 (.DATA_A (SUMMAND[547]) , .DATA_B (SUMMAND[548]) , .DATA_C (SUMMAND[549]) , .SAVE (INT_SUM[637]) , .CARRY (INT_CARRY[503]) );
   HALF_ADDER HA_46 (.DATA_A (SUMMAND[550]) , .DATA_B (SUMMAND[551]) , .SAVE (INT_SUM[638]) , .CARRY (INT_CARRY[504]) );
   FULL_ADDER FA_435 (.DATA_A (INT_SUM[637]) , .DATA_B (INT_SUM[638]) , .DATA_C (INT_CARRY[498]) , .SAVE (INT_SUM[639]) , .CARRY (INT_CARRY[505]) );
   assign INT_SUM[641] = INT_CARRY[499];
   FLIPFLOP LA_169 (.DIN (INT_SUM[639]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[640]) );
   FLIPFLOP LA_170 (.DIN (INT_SUM[641]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[642]) );
   FLIPFLOP LA_171 (.DIN (INT_CARRY[500]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[501]) );
   FULL_ADDER FA_436 (.DATA_A (INT_SUM[640]) , .DATA_B (INT_SUM[642]) , .DATA_C (INT_CARRY[501]) , .SAVE (INT_SUM[643]) , .CARRY (INT_CARRY[507]) );
   HALF_ADDER HA_47 (.DATA_A (INT_SUM[643]) , .DATA_B (INT_CARRY[502]) , .SAVE (SUM[55]) , .CARRY (CARRY[55]) );
   FULL_ADDER FA_437 (.DATA_A (SUMMAND[552]) , .DATA_B (SUMMAND[553]) , .DATA_C (SUMMAND[554]) , .SAVE (INT_SUM[644]) , .CARRY (INT_CARRY[508]) );
   HALF_ADDER HA_48 (.DATA_A (SUMMAND[555]) , .DATA_B (SUMMAND[556]) , .SAVE (INT_SUM[645]) , .CARRY (INT_CARRY[509]) );
   FULL_ADDER FA_438 (.DATA_A (INT_SUM[644]) , .DATA_B (INT_SUM[645]) , .DATA_C (INT_CARRY[503]) , .SAVE (INT_SUM[646]) , .CARRY (INT_CARRY[510]) );
   assign INT_SUM[648] = INT_CARRY[504];
   FLIPFLOP LA_172 (.DIN (INT_SUM[646]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[647]) );
   FLIPFLOP LA_173 (.DIN (INT_SUM[648]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[649]) );
   FLIPFLOP LA_174 (.DIN (INT_CARRY[505]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[506]) );
   FULL_ADDER FA_439 (.DATA_A (INT_SUM[647]) , .DATA_B (INT_SUM[649]) , .DATA_C (INT_CARRY[506]) , .SAVE (INT_SUM[650]) , .CARRY (INT_CARRY[512]) );
   HALF_ADDER HA_49 (.DATA_A (INT_SUM[650]) , .DATA_B (INT_CARRY[507]) , .SAVE (SUM[56]) , .CARRY (CARRY[56]) );
   FULL_ADDER FA_440 (.DATA_A (SUMMAND[557]) , .DATA_B (SUMMAND[558]) , .DATA_C (SUMMAND[559]) , .SAVE (INT_SUM[651]) , .CARRY (INT_CARRY[513]) );
   FULL_ADDER FA_441 (.DATA_A (SUMMAND[560]) , .DATA_B (INT_CARRY[508]) , .DATA_C (INT_CARRY[509]) , .SAVE (INT_SUM[653]) , .CARRY (INT_CARRY[515]) );
   FLIPFLOP LA_175 (.DIN (INT_SUM[651]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[652]) );
   FLIPFLOP LA_176 (.DIN (INT_SUM[653]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[654]) );
   FLIPFLOP LA_177 (.DIN (INT_CARRY[510]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[511]) );
   FULL_ADDER FA_442 (.DATA_A (INT_SUM[652]) , .DATA_B (INT_SUM[654]) , .DATA_C (INT_CARRY[511]) , .SAVE (INT_SUM[655]) , .CARRY (INT_CARRY[517]) );
   HALF_ADDER HA_50 (.DATA_A (INT_SUM[655]) , .DATA_B (INT_CARRY[512]) , .SAVE (SUM[57]) , .CARRY (CARRY[57]) );
   FULL_ADDER FA_443 (.DATA_A (SUMMAND[561]) , .DATA_B (SUMMAND[562]) , .DATA_C (SUMMAND[563]) , .SAVE (INT_SUM[656]) , .CARRY (INT_CARRY[518]) );
   assign INT_SUM[658] = SUMMAND[564];
   FLIPFLOP LA_178 (.DIN (INT_SUM[656]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[657]) );
   FLIPFLOP LA_179 (.DIN (INT_SUM[658]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[659]) );
   FLIPFLOP LA_180 (.DIN (INT_CARRY[513]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[514]) );
   FULL_ADDER FA_444 (.DATA_A (INT_SUM[657]) , .DATA_B (INT_SUM[659]) , .DATA_C (INT_CARRY[514]) , .SAVE (INT_SUM[660]) , .CARRY (INT_CARRY[520]) );
   FLIPFLOP LA_181 (.DIN (INT_CARRY[515]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[516]) );
   assign INT_SUM[661] = INT_CARRY[516];
   FULL_ADDER FA_445 (.DATA_A (INT_SUM[660]) , .DATA_B (INT_SUM[661]) , .DATA_C (INT_CARRY[517]) , .SAVE (SUM[58]) , .CARRY (CARRY[58]) );
   FULL_ADDER FA_446 (.DATA_A (SUMMAND[565]) , .DATA_B (SUMMAND[566]) , .DATA_C (SUMMAND[567]) , .SAVE (INT_SUM[662]) , .CARRY (INT_CARRY[521]) );
   FLIPFLOP LA_182 (.DIN (INT_SUM[662]) , .RST(RST), .CLK (CLK) , .DOUT (INT_SUM[663]) );
   assign INT_SUM[664] = INT_SUM[663];
   FLIPFLOP LA_183 (.DIN (INT_CARRY[518]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[519]) );
   assign INT_SUM[665] = INT_CARRY[519];
   FULL_ADDER FA_447 (.DATA_A (INT_SUM[664]) , .DATA_B (INT_SUM[665]) , .DATA_C (INT_CARRY[520]) , .SAVE (SUM[59]) , .CARRY (CARRY[59]) );
   FLIPFLOP LA_184 (.DIN (SUMMAND[568]) , .RST(RST), .CLK (CLK) , .DOUT (LATCHED_PP[0]) );
   FLIPFLOP LA_185 (.DIN (SUMMAND[569]) , .RST(RST), .CLK (CLK) , .DOUT (LATCHED_PP[1]) );
   FLIPFLOP LA_186 (.DIN (SUMMAND[570]) , .RST(RST), .CLK (CLK) , .DOUT (LATCHED_PP[2]) );
   FULL_ADDER FA_448 (.DATA_A (LATCHED_PP[0]) , .DATA_B (LATCHED_PP[1]) , .DATA_C (LATCHED_PP[2]) , .SAVE (INT_SUM[666]) , .CARRY (INT_CARRY[523]) );
   FLIPFLOP LA_187 (.DIN (INT_CARRY[521]) , .RST(RST), .CLK (CLK) , .DOUT (INT_CARRY[522]) );
   assign INT_SUM[667] = INT_CARRY[522];
   HALF_ADDER HA_51 (.DATA_A (INT_SUM[666]) , .DATA_B (INT_SUM[667]) , .SAVE (SUM[60]) , .CARRY (CARRY[60]) );
   FLIPFLOP LA_188 (.DIN (SUMMAND[571]) , .RST(RST), .CLK (CLK) , .DOUT (LATCHED_PP[3]) );
   assign INT_SUM[668] = LATCHED_PP[3];
   FLIPFLOP LA_189 (.DIN (SUMMAND[572]) , .RST(RST), .CLK (CLK) , .DOUT (LATCHED_PP[4]) );
   assign INT_SUM[669] = LATCHED_PP[4];
   FULL_ADDER FA_449 (.DATA_A (INT_SUM[668]) , .DATA_B (INT_SUM[669]) , .DATA_C (INT_CARRY[523]) , .SAVE (SUM[61]) , .CARRY (CARRY[61]) );
   FLIPFLOP LA_190 (.DIN (SUMMAND[573]) , .RST(RST), .CLK (CLK) , .DOUT (LATCHED_PP[5]) );
   FLIPFLOP LA_191 (.DIN (SUMMAND[574]) , .RST(RST), .CLK (CLK) , .DOUT (LATCHED_PP[6]) );
   HALF_ADDER HA_52 (.DATA_A (LATCHED_PP[5]) , .DATA_B (LATCHED_PP[6]) , .SAVE (SUM[62]) , .CARRY (CARRY[62]) );
   FLIPFLOP LA_192 (.DIN (SUMMAND[575]) , .RST(RST), .CLK (CLK) , .DOUT (LATCHED_PP[7]) );
   assign SUM[63] = LATCHED_PP[7];
endmodule


module INVBLOCK ( GIN, PHI, GOUT );
input  GIN;
input  PHI;
output GOUT;
   assign GOUT =  ~ GIN;
endmodule


module XXOR1 ( A, B, GIN, PHI, SUM );
input  A;
input  B;
input  GIN;
input  PHI;
output SUM;
   assign SUM = ( ~ (A ^ B)) ^ GIN;
endmodule


module BLOCK0 ( A, B, PHI, POUT, GOUT );
input  A;
input  B;
input  PHI;
output POUT;
output GOUT;
   assign POUT =  ~ (A | B);
   assign GOUT =  ~ (A & B);
endmodule


module BLOCK1 ( PIN1, PIN2, GIN1, GIN2, PHI, POUT, GOUT );
input  PIN1;
input  PIN2;
input  GIN1;
input  GIN2;
input  PHI;
output POUT;
output GOUT;
   assign POUT =  ~ (PIN1 | PIN2);
   assign GOUT =  ~ (GIN2 & (PIN2 | GIN1));
endmodule


module BLOCK2 ( PIN1, PIN2, GIN1, GIN2, PHI, POUT, GOUT );
input  PIN1;
input  PIN2;
input  GIN1;
input  GIN2;
input  PHI;
output POUT;
output GOUT;
   assign POUT =  ~ (PIN1 & PIN2);
   assign GOUT =  ~ (GIN2 | (PIN2 & GIN1));
endmodule


module BLOCK1A ( PIN2, GIN1, GIN2, PHI, GOUT );
input  PIN2;
input  GIN1;
input  GIN2;
input  PHI;
output GOUT;
   assign GOUT =  ~ (GIN2 & (PIN2 | GIN1));
endmodule


module BLOCK2A ( PIN2, GIN1, GIN2, PHI, GOUT );
input  PIN2;
input  GIN1;
input  GIN2;
input  PHI;
output GOUT;
   assign GOUT =  ~ (GIN2 | (PIN2 & GIN1));
endmodule


module PRESTAGE_64 ( A, B, CIN, PHI, POUT, GOUT );
input  [0:63] A;
input  [0:63] B;
input  CIN;
input  PHI;
output [0:63] POUT;
output [0:64] GOUT;
   BLOCK0 U10 (A[0] , B[0] , PHI , POUT[0] , GOUT[1] );
   BLOCK0 U11 (A[1] , B[1] , PHI , POUT[1] , GOUT[2] );
   BLOCK0 U12 (A[2] , B[2] , PHI , POUT[2] , GOUT[3] );
   BLOCK0 U13 (A[3] , B[3] , PHI , POUT[3] , GOUT[4] );
   BLOCK0 U14 (A[4] , B[4] , PHI , POUT[4] , GOUT[5] );
   BLOCK0 U15 (A[5] , B[5] , PHI , POUT[5] , GOUT[6] );
   BLOCK0 U16 (A[6] , B[6] , PHI , POUT[6] , GOUT[7] );
   BLOCK0 U17 (A[7] , B[7] , PHI , POUT[7] , GOUT[8] );
   BLOCK0 U18 (A[8] , B[8] , PHI , POUT[8] , GOUT[9] );
   BLOCK0 U19 (A[9] , B[9] , PHI , POUT[9] , GOUT[10] );
   BLOCK0 U110 (A[10] , B[10] , PHI , POUT[10] , GOUT[11] );
   BLOCK0 U111 (A[11] , B[11] , PHI , POUT[11] , GOUT[12] );
   BLOCK0 U112 (A[12] , B[12] , PHI , POUT[12] , GOUT[13] );
   BLOCK0 U113 (A[13] , B[13] , PHI , POUT[13] , GOUT[14] );
   BLOCK0 U114 (A[14] , B[14] , PHI , POUT[14] , GOUT[15] );
   BLOCK0 U115 (A[15] , B[15] , PHI , POUT[15] , GOUT[16] );
   BLOCK0 U116 (A[16] , B[16] , PHI , POUT[16] , GOUT[17] );
   BLOCK0 U117 (A[17] , B[17] , PHI , POUT[17] , GOUT[18] );
   BLOCK0 U118 (A[18] , B[18] , PHI , POUT[18] , GOUT[19] );
   BLOCK0 U119 (A[19] , B[19] , PHI , POUT[19] , GOUT[20] );
   BLOCK0 U120 (A[20] , B[20] , PHI , POUT[20] , GOUT[21] );
   BLOCK0 U121 (A[21] , B[21] , PHI , POUT[21] , GOUT[22] );
   BLOCK0 U122 (A[22] , B[22] , PHI , POUT[22] , GOUT[23] );
   BLOCK0 U123 (A[23] , B[23] , PHI , POUT[23] , GOUT[24] );
   BLOCK0 U124 (A[24] , B[24] , PHI , POUT[24] , GOUT[25] );
   BLOCK0 U125 (A[25] , B[25] , PHI , POUT[25] , GOUT[26] );
   BLOCK0 U126 (A[26] , B[26] , PHI , POUT[26] , GOUT[27] );
   BLOCK0 U127 (A[27] , B[27] , PHI , POUT[27] , GOUT[28] );
   BLOCK0 U128 (A[28] , B[28] , PHI , POUT[28] , GOUT[29] );
   BLOCK0 U129 (A[29] , B[29] , PHI , POUT[29] , GOUT[30] );
   BLOCK0 U130 (A[30] , B[30] , PHI , POUT[30] , GOUT[31] );
   BLOCK0 U131 (A[31] , B[31] , PHI , POUT[31] , GOUT[32] );
   BLOCK0 U132 (A[32] , B[32] , PHI , POUT[32] , GOUT[33] );
   BLOCK0 U133 (A[33] , B[33] , PHI , POUT[33] , GOUT[34] );
   BLOCK0 U134 (A[34] , B[34] , PHI , POUT[34] , GOUT[35] );
   BLOCK0 U135 (A[35] , B[35] , PHI , POUT[35] , GOUT[36] );
   BLOCK0 U136 (A[36] , B[36] , PHI , POUT[36] , GOUT[37] );
   BLOCK0 U137 (A[37] , B[37] , PHI , POUT[37] , GOUT[38] );
   BLOCK0 U138 (A[38] , B[38] , PHI , POUT[38] , GOUT[39] );
   BLOCK0 U139 (A[39] , B[39] , PHI , POUT[39] , GOUT[40] );
   BLOCK0 U140 (A[40] , B[40] , PHI , POUT[40] , GOUT[41] );
   BLOCK0 U141 (A[41] , B[41] , PHI , POUT[41] , GOUT[42] );
   BLOCK0 U142 (A[42] , B[42] , PHI , POUT[42] , GOUT[43] );
   BLOCK0 U143 (A[43] , B[43] , PHI , POUT[43] , GOUT[44] );
   BLOCK0 U144 (A[44] , B[44] , PHI , POUT[44] , GOUT[45] );
   BLOCK0 U145 (A[45] , B[45] , PHI , POUT[45] , GOUT[46] );
   BLOCK0 U146 (A[46] , B[46] , PHI , POUT[46] , GOUT[47] );
   BLOCK0 U147 (A[47] , B[47] , PHI , POUT[47] , GOUT[48] );
   BLOCK0 U148 (A[48] , B[48] , PHI , POUT[48] , GOUT[49] );
   BLOCK0 U149 (A[49] , B[49] , PHI , POUT[49] , GOUT[50] );
   BLOCK0 U150 (A[50] , B[50] , PHI , POUT[50] , GOUT[51] );
   BLOCK0 U151 (A[51] , B[51] , PHI , POUT[51] , GOUT[52] );
   BLOCK0 U152 (A[52] , B[52] , PHI , POUT[52] , GOUT[53] );
   BLOCK0 U153 (A[53] , B[53] , PHI , POUT[53] , GOUT[54] );
   BLOCK0 U154 (A[54] , B[54] , PHI , POUT[54] , GOUT[55] );
   BLOCK0 U155 (A[55] , B[55] , PHI , POUT[55] , GOUT[56] );
   BLOCK0 U156 (A[56] , B[56] , PHI , POUT[56] , GOUT[57] );
   BLOCK0 U157 (A[57] , B[57] , PHI , POUT[57] , GOUT[58] );
   BLOCK0 U158 (A[58] , B[58] , PHI , POUT[58] , GOUT[59] );
   BLOCK0 U159 (A[59] , B[59] , PHI , POUT[59] , GOUT[60] );
   BLOCK0 U160 (A[60] , B[60] , PHI , POUT[60] , GOUT[61] );
   BLOCK0 U161 (A[61] , B[61] , PHI , POUT[61] , GOUT[62] );
   BLOCK0 U162 (A[62] , B[62] , PHI , POUT[62] , GOUT[63] );
   BLOCK0 U163 (A[63] , B[63] , PHI , POUT[63] , GOUT[64] );
   INVBLOCK U2 (CIN , PHI , GOUT[0] );
endmodule


module DBLC_0_64 ( PIN, GIN, PHI, POUT, GOUT );
input  [0:63] PIN;
input  [0:64] GIN;
input  PHI;
output [0:62] POUT;
output [0:64] GOUT;
   INVBLOCK U10 (GIN[0] , PHI , GOUT[0] );
   BLOCK1A U21 (PIN[0] , GIN[0] , GIN[1] , PHI , GOUT[1] );
   BLOCK1 U32 (PIN[0] , PIN[1] , GIN[1] , GIN[2] , PHI , POUT[0] , GOUT[2] );
   BLOCK1 U33 (PIN[1] , PIN[2] , GIN[2] , GIN[3] , PHI , POUT[1] , GOUT[3] );
   BLOCK1 U34 (PIN[2] , PIN[3] , GIN[3] , GIN[4] , PHI , POUT[2] , GOUT[4] );
   BLOCK1 U35 (PIN[3] , PIN[4] , GIN[4] , GIN[5] , PHI , POUT[3] , GOUT[5] );
   BLOCK1 U36 (PIN[4] , PIN[5] , GIN[5] , GIN[6] , PHI , POUT[4] , GOUT[6] );
   BLOCK1 U37 (PIN[5] , PIN[6] , GIN[6] , GIN[7] , PHI , POUT[5] , GOUT[7] );
   BLOCK1 U38 (PIN[6] , PIN[7] , GIN[7] , GIN[8] , PHI , POUT[6] , GOUT[8] );
   BLOCK1 U39 (PIN[7] , PIN[8] , GIN[8] , GIN[9] , PHI , POUT[7] , GOUT[9] );
   BLOCK1 U310 (PIN[8] , PIN[9] , GIN[9] , GIN[10] , PHI , POUT[8] , GOUT[10] );
   BLOCK1 U311 (PIN[9] , PIN[10] , GIN[10] , GIN[11] , PHI , POUT[9] , GOUT[11] );
   BLOCK1 U312 (PIN[10] , PIN[11] , GIN[11] , GIN[12] , PHI , POUT[10] , GOUT[12] );
   BLOCK1 U313 (PIN[11] , PIN[12] , GIN[12] , GIN[13] , PHI , POUT[11] , GOUT[13] );
   BLOCK1 U314 (PIN[12] , PIN[13] , GIN[13] , GIN[14] , PHI , POUT[12] , GOUT[14] );
   BLOCK1 U315 (PIN[13] , PIN[14] , GIN[14] , GIN[15] , PHI , POUT[13] , GOUT[15] );
   BLOCK1 U316 (PIN[14] , PIN[15] , GIN[15] , GIN[16] , PHI , POUT[14] , GOUT[16] );
   BLOCK1 U317 (PIN[15] , PIN[16] , GIN[16] , GIN[17] , PHI , POUT[15] , GOUT[17] );
   BLOCK1 U318 (PIN[16] , PIN[17] , GIN[17] , GIN[18] , PHI , POUT[16] , GOUT[18] );
   BLOCK1 U319 (PIN[17] , PIN[18] , GIN[18] , GIN[19] , PHI , POUT[17] , GOUT[19] );
   BLOCK1 U320 (PIN[18] , PIN[19] , GIN[19] , GIN[20] , PHI , POUT[18] , GOUT[20] );
   BLOCK1 U321 (PIN[19] , PIN[20] , GIN[20] , GIN[21] , PHI , POUT[19] , GOUT[21] );
   BLOCK1 U322 (PIN[20] , PIN[21] , GIN[21] , GIN[22] , PHI , POUT[20] , GOUT[22] );
   BLOCK1 U323 (PIN[21] , PIN[22] , GIN[22] , GIN[23] , PHI , POUT[21] , GOUT[23] );
   BLOCK1 U324 (PIN[22] , PIN[23] , GIN[23] , GIN[24] , PHI , POUT[22] , GOUT[24] );
   BLOCK1 U325 (PIN[23] , PIN[24] , GIN[24] , GIN[25] , PHI , POUT[23] , GOUT[25] );
   BLOCK1 U326 (PIN[24] , PIN[25] , GIN[25] , GIN[26] , PHI , POUT[24] , GOUT[26] );
   BLOCK1 U327 (PIN[25] , PIN[26] , GIN[26] , GIN[27] , PHI , POUT[25] , GOUT[27] );
   BLOCK1 U328 (PIN[26] , PIN[27] , GIN[27] , GIN[28] , PHI , POUT[26] , GOUT[28] );
   BLOCK1 U329 (PIN[27] , PIN[28] , GIN[28] , GIN[29] , PHI , POUT[27] , GOUT[29] );
   BLOCK1 U330 (PIN[28] , PIN[29] , GIN[29] , GIN[30] , PHI , POUT[28] , GOUT[30] );
   BLOCK1 U331 (PIN[29] , PIN[30] , GIN[30] , GIN[31] , PHI , POUT[29] , GOUT[31] );
   BLOCK1 U332 (PIN[30] , PIN[31] , GIN[31] , GIN[32] , PHI , POUT[30] , GOUT[32] );
   BLOCK1 U333 (PIN[31] , PIN[32] , GIN[32] , GIN[33] , PHI , POUT[31] , GOUT[33] );
   BLOCK1 U334 (PIN[32] , PIN[33] , GIN[33] , GIN[34] , PHI , POUT[32] , GOUT[34] );
   BLOCK1 U335 (PIN[33] , PIN[34] , GIN[34] , GIN[35] , PHI , POUT[33] , GOUT[35] );
   BLOCK1 U336 (PIN[34] , PIN[35] , GIN[35] , GIN[36] , PHI , POUT[34] , GOUT[36] );
   BLOCK1 U337 (PIN[35] , PIN[36] , GIN[36] , GIN[37] , PHI , POUT[35] , GOUT[37] );
   BLOCK1 U338 (PIN[36] , PIN[37] , GIN[37] , GIN[38] , PHI , POUT[36] , GOUT[38] );
   BLOCK1 U339 (PIN[37] , PIN[38] , GIN[38] , GIN[39] , PHI , POUT[37] , GOUT[39] );
   BLOCK1 U340 (PIN[38] , PIN[39] , GIN[39] , GIN[40] , PHI , POUT[38] , GOUT[40] );
   BLOCK1 U341 (PIN[39] , PIN[40] , GIN[40] , GIN[41] , PHI , POUT[39] , GOUT[41] );
   BLOCK1 U342 (PIN[40] , PIN[41] , GIN[41] , GIN[42] , PHI , POUT[40] , GOUT[42] );
   BLOCK1 U343 (PIN[41] , PIN[42] , GIN[42] , GIN[43] , PHI , POUT[41] , GOUT[43] );
   BLOCK1 U344 (PIN[42] , PIN[43] , GIN[43] , GIN[44] , PHI , POUT[42] , GOUT[44] );
   BLOCK1 U345 (PIN[43] , PIN[44] , GIN[44] , GIN[45] , PHI , POUT[43] , GOUT[45] );
   BLOCK1 U346 (PIN[44] , PIN[45] , GIN[45] , GIN[46] , PHI , POUT[44] , GOUT[46] );
   BLOCK1 U347 (PIN[45] , PIN[46] , GIN[46] , GIN[47] , PHI , POUT[45] , GOUT[47] );
   BLOCK1 U348 (PIN[46] , PIN[47] , GIN[47] , GIN[48] , PHI , POUT[46] , GOUT[48] );
   BLOCK1 U349 (PIN[47] , PIN[48] , GIN[48] , GIN[49] , PHI , POUT[47] , GOUT[49] );
   BLOCK1 U350 (PIN[48] , PIN[49] , GIN[49] , GIN[50] , PHI , POUT[48] , GOUT[50] );
   BLOCK1 U351 (PIN[49] , PIN[50] , GIN[50] , GIN[51] , PHI , POUT[49] , GOUT[51] );
   BLOCK1 U352 (PIN[50] , PIN[51] , GIN[51] , GIN[52] , PHI , POUT[50] , GOUT[52] );
   BLOCK1 U353 (PIN[51] , PIN[52] , GIN[52] , GIN[53] , PHI , POUT[51] , GOUT[53] );
   BLOCK1 U354 (PIN[52] , PIN[53] , GIN[53] , GIN[54] , PHI , POUT[52] , GOUT[54] );
   BLOCK1 U355 (PIN[53] , PIN[54] , GIN[54] , GIN[55] , PHI , POUT[53] , GOUT[55] );
   BLOCK1 U356 (PIN[54] , PIN[55] , GIN[55] , GIN[56] , PHI , POUT[54] , GOUT[56] );
   BLOCK1 U357 (PIN[55] , PIN[56] , GIN[56] , GIN[57] , PHI , POUT[55] , GOUT[57] );
   BLOCK1 U358 (PIN[56] , PIN[57] , GIN[57] , GIN[58] , PHI , POUT[56] , GOUT[58] );
   BLOCK1 U359 (PIN[57] , PIN[58] , GIN[58] , GIN[59] , PHI , POUT[57] , GOUT[59] );
   BLOCK1 U360 (PIN[58] , PIN[59] , GIN[59] , GIN[60] , PHI , POUT[58] , GOUT[60] );
   BLOCK1 U361 (PIN[59] , PIN[60] , GIN[60] , GIN[61] , PHI , POUT[59] , GOUT[61] );
   BLOCK1 U362 (PIN[60] , PIN[61] , GIN[61] , GIN[62] , PHI , POUT[60] , GOUT[62] );
   BLOCK1 U363 (PIN[61] , PIN[62] , GIN[62] , GIN[63] , PHI , POUT[61] , GOUT[63] );
   BLOCK1 U364 (PIN[62] , PIN[63] , GIN[63] , GIN[64] , PHI , POUT[62] , GOUT[64] );
endmodule


module DBLC_1_64 ( PIN, GIN, PHI, POUT, GOUT );
input  [0:62] PIN;
input  [0:64] GIN;
input  PHI;
output [0:60] POUT;
output [0:64] GOUT;
   INVBLOCK U10 (GIN[0] , PHI , GOUT[0] );
   INVBLOCK U11 (GIN[1] , PHI , GOUT[1] );
   BLOCK2A U22 (PIN[0] , GIN[0] , GIN[2] , PHI , GOUT[2] );
   BLOCK2A U23 (PIN[1] , GIN[1] , GIN[3] , PHI , GOUT[3] );
   BLOCK2 U34 (PIN[0] , PIN[2] , GIN[2] , GIN[4] , PHI , POUT[0] , GOUT[4] );
   BLOCK2 U35 (PIN[1] , PIN[3] , GIN[3] , GIN[5] , PHI , POUT[1] , GOUT[5] );
   BLOCK2 U36 (PIN[2] , PIN[4] , GIN[4] , GIN[6] , PHI , POUT[2] , GOUT[6] );
   BLOCK2 U37 (PIN[3] , PIN[5] , GIN[5] , GIN[7] , PHI , POUT[3] , GOUT[7] );
   BLOCK2 U38 (PIN[4] , PIN[6] , GIN[6] , GIN[8] , PHI , POUT[4] , GOUT[8] );
   BLOCK2 U39 (PIN[5] , PIN[7] , GIN[7] , GIN[9] , PHI , POUT[5] , GOUT[9] );
   BLOCK2 U310 (PIN[6] , PIN[8] , GIN[8] , GIN[10] , PHI , POUT[6] , GOUT[10] );
   BLOCK2 U311 (PIN[7] , PIN[9] , GIN[9] , GIN[11] , PHI , POUT[7] , GOUT[11] );
   BLOCK2 U312 (PIN[8] , PIN[10] , GIN[10] , GIN[12] , PHI , POUT[8] , GOUT[12] );
   BLOCK2 U313 (PIN[9] , PIN[11] , GIN[11] , GIN[13] , PHI , POUT[9] , GOUT[13] );
   BLOCK2 U314 (PIN[10] , PIN[12] , GIN[12] , GIN[14] , PHI , POUT[10] , GOUT[14] );
   BLOCK2 U315 (PIN[11] , PIN[13] , GIN[13] , GIN[15] , PHI , POUT[11] , GOUT[15] );
   BLOCK2 U316 (PIN[12] , PIN[14] , GIN[14] , GIN[16] , PHI , POUT[12] , GOUT[16] );
   BLOCK2 U317 (PIN[13] , PIN[15] , GIN[15] , GIN[17] , PHI , POUT[13] , GOUT[17] );
   BLOCK2 U318 (PIN[14] , PIN[16] , GIN[16] , GIN[18] , PHI , POUT[14] , GOUT[18] );
   BLOCK2 U319 (PIN[15] , PIN[17] , GIN[17] , GIN[19] , PHI , POUT[15] , GOUT[19] );
   BLOCK2 U320 (PIN[16] , PIN[18] , GIN[18] , GIN[20] , PHI , POUT[16] , GOUT[20] );
   BLOCK2 U321 (PIN[17] , PIN[19] , GIN[19] , GIN[21] , PHI , POUT[17] , GOUT[21] );
   BLOCK2 U322 (PIN[18] , PIN[20] , GIN[20] , GIN[22] , PHI , POUT[18] , GOUT[22] );
   BLOCK2 U323 (PIN[19] , PIN[21] , GIN[21] , GIN[23] , PHI , POUT[19] , GOUT[23] );
   BLOCK2 U324 (PIN[20] , PIN[22] , GIN[22] , GIN[24] , PHI , POUT[20] , GOUT[24] );
   BLOCK2 U325 (PIN[21] , PIN[23] , GIN[23] , GIN[25] , PHI , POUT[21] , GOUT[25] );
   BLOCK2 U326 (PIN[22] , PIN[24] , GIN[24] , GIN[26] , PHI , POUT[22] , GOUT[26] );
   BLOCK2 U327 (PIN[23] , PIN[25] , GIN[25] , GIN[27] , PHI , POUT[23] , GOUT[27] );
   BLOCK2 U328 (PIN[24] , PIN[26] , GIN[26] , GIN[28] , PHI , POUT[24] , GOUT[28] );
   BLOCK2 U329 (PIN[25] , PIN[27] , GIN[27] , GIN[29] , PHI , POUT[25] , GOUT[29] );
   BLOCK2 U330 (PIN[26] , PIN[28] , GIN[28] , GIN[30] , PHI , POUT[26] , GOUT[30] );
   BLOCK2 U331 (PIN[27] , PIN[29] , GIN[29] , GIN[31] , PHI , POUT[27] , GOUT[31] );
   BLOCK2 U332 (PIN[28] , PIN[30] , GIN[30] , GIN[32] , PHI , POUT[28] , GOUT[32] );
   BLOCK2 U333 (PIN[29] , PIN[31] , GIN[31] , GIN[33] , PHI , POUT[29] , GOUT[33] );
   BLOCK2 U334 (PIN[30] , PIN[32] , GIN[32] , GIN[34] , PHI , POUT[30] , GOUT[34] );
   BLOCK2 U335 (PIN[31] , PIN[33] , GIN[33] , GIN[35] , PHI , POUT[31] , GOUT[35] );
   BLOCK2 U336 (PIN[32] , PIN[34] , GIN[34] , GIN[36] , PHI , POUT[32] , GOUT[36] );
   BLOCK2 U337 (PIN[33] , PIN[35] , GIN[35] , GIN[37] , PHI , POUT[33] , GOUT[37] );
   BLOCK2 U338 (PIN[34] , PIN[36] , GIN[36] , GIN[38] , PHI , POUT[34] , GOUT[38] );
   BLOCK2 U339 (PIN[35] , PIN[37] , GIN[37] , GIN[39] , PHI , POUT[35] , GOUT[39] );
   BLOCK2 U340 (PIN[36] , PIN[38] , GIN[38] , GIN[40] , PHI , POUT[36] , GOUT[40] );
   BLOCK2 U341 (PIN[37] , PIN[39] , GIN[39] , GIN[41] , PHI , POUT[37] , GOUT[41] );
   BLOCK2 U342 (PIN[38] , PIN[40] , GIN[40] , GIN[42] , PHI , POUT[38] , GOUT[42] );
   BLOCK2 U343 (PIN[39] , PIN[41] , GIN[41] , GIN[43] , PHI , POUT[39] , GOUT[43] );
   BLOCK2 U344 (PIN[40] , PIN[42] , GIN[42] , GIN[44] , PHI , POUT[40] , GOUT[44] );
   BLOCK2 U345 (PIN[41] , PIN[43] , GIN[43] , GIN[45] , PHI , POUT[41] , GOUT[45] );
   BLOCK2 U346 (PIN[42] , PIN[44] , GIN[44] , GIN[46] , PHI , POUT[42] , GOUT[46] );
   BLOCK2 U347 (PIN[43] , PIN[45] , GIN[45] , GIN[47] , PHI , POUT[43] , GOUT[47] );
   BLOCK2 U348 (PIN[44] , PIN[46] , GIN[46] , GIN[48] , PHI , POUT[44] , GOUT[48] );
   BLOCK2 U349 (PIN[45] , PIN[47] , GIN[47] , GIN[49] , PHI , POUT[45] , GOUT[49] );
   BLOCK2 U350 (PIN[46] , PIN[48] , GIN[48] , GIN[50] , PHI , POUT[46] , GOUT[50] );
   BLOCK2 U351 (PIN[47] , PIN[49] , GIN[49] , GIN[51] , PHI , POUT[47] , GOUT[51] );
   BLOCK2 U352 (PIN[48] , PIN[50] , GIN[50] , GIN[52] , PHI , POUT[48] , GOUT[52] );
   BLOCK2 U353 (PIN[49] , PIN[51] , GIN[51] , GIN[53] , PHI , POUT[49] , GOUT[53] );
   BLOCK2 U354 (PIN[50] , PIN[52] , GIN[52] , GIN[54] , PHI , POUT[50] , GOUT[54] );
   BLOCK2 U355 (PIN[51] , PIN[53] , GIN[53] , GIN[55] , PHI , POUT[51] , GOUT[55] );
   BLOCK2 U356 (PIN[52] , PIN[54] , GIN[54] , GIN[56] , PHI , POUT[52] , GOUT[56] );
   BLOCK2 U357 (PIN[53] , PIN[55] , GIN[55] , GIN[57] , PHI , POUT[53] , GOUT[57] );
   BLOCK2 U358 (PIN[54] , PIN[56] , GIN[56] , GIN[58] , PHI , POUT[54] , GOUT[58] );
   BLOCK2 U359 (PIN[55] , PIN[57] , GIN[57] , GIN[59] , PHI , POUT[55] , GOUT[59] );
   BLOCK2 U360 (PIN[56] , PIN[58] , GIN[58] , GIN[60] , PHI , POUT[56] , GOUT[60] );
   BLOCK2 U361 (PIN[57] , PIN[59] , GIN[59] , GIN[61] , PHI , POUT[57] , GOUT[61] );
   BLOCK2 U362 (PIN[58] , PIN[60] , GIN[60] , GIN[62] , PHI , POUT[58] , GOUT[62] );
   BLOCK2 U363 (PIN[59] , PIN[61] , GIN[61] , GIN[63] , PHI , POUT[59] , GOUT[63] );
   BLOCK2 U364 (PIN[60] , PIN[62] , GIN[62] , GIN[64] , PHI , POUT[60] , GOUT[64] );
endmodule


module DBLC_2_64 ( PIN, GIN, PHI, POUT, GOUT );
input  [0:60] PIN;
input  [0:64] GIN;
input  PHI;
output [0:56] POUT;
output [0:64] GOUT;
   INVBLOCK U10 (GIN[0] , PHI , GOUT[0] );
   INVBLOCK U11 (GIN[1] , PHI , GOUT[1] );
   INVBLOCK U12 (GIN[2] , PHI , GOUT[2] );
   INVBLOCK U13 (GIN[3] , PHI , GOUT[3] );
   BLOCK1A U24 (PIN[0] , GIN[0] , GIN[4] , PHI , GOUT[4] );
   BLOCK1A U25 (PIN[1] , GIN[1] , GIN[5] , PHI , GOUT[5] );
   BLOCK1A U26 (PIN[2] , GIN[2] , GIN[6] , PHI , GOUT[6] );
   BLOCK1A U27 (PIN[3] , GIN[3] , GIN[7] , PHI , GOUT[7] );
   BLOCK1 U38 (PIN[0] , PIN[4] , GIN[4] , GIN[8] , PHI , POUT[0] , GOUT[8] );
   BLOCK1 U39 (PIN[1] , PIN[5] , GIN[5] , GIN[9] , PHI , POUT[1] , GOUT[9] );
   BLOCK1 U310 (PIN[2] , PIN[6] , GIN[6] , GIN[10] , PHI , POUT[2] , GOUT[10] );
   BLOCK1 U311 (PIN[3] , PIN[7] , GIN[7] , GIN[11] , PHI , POUT[3] , GOUT[11] );
   BLOCK1 U312 (PIN[4] , PIN[8] , GIN[8] , GIN[12] , PHI , POUT[4] , GOUT[12] );
   BLOCK1 U313 (PIN[5] , PIN[9] , GIN[9] , GIN[13] , PHI , POUT[5] , GOUT[13] );
   BLOCK1 U314 (PIN[6] , PIN[10] , GIN[10] , GIN[14] , PHI , POUT[6] , GOUT[14] );
   BLOCK1 U315 (PIN[7] , PIN[11] , GIN[11] , GIN[15] , PHI , POUT[7] , GOUT[15] );
   BLOCK1 U316 (PIN[8] , PIN[12] , GIN[12] , GIN[16] , PHI , POUT[8] , GOUT[16] );
   BLOCK1 U317 (PIN[9] , PIN[13] , GIN[13] , GIN[17] , PHI , POUT[9] , GOUT[17] );
   BLOCK1 U318 (PIN[10] , PIN[14] , GIN[14] , GIN[18] , PHI , POUT[10] , GOUT[18] );
   BLOCK1 U319 (PIN[11] , PIN[15] , GIN[15] , GIN[19] , PHI , POUT[11] , GOUT[19] );
   BLOCK1 U320 (PIN[12] , PIN[16] , GIN[16] , GIN[20] , PHI , POUT[12] , GOUT[20] );
   BLOCK1 U321 (PIN[13] , PIN[17] , GIN[17] , GIN[21] , PHI , POUT[13] , GOUT[21] );
   BLOCK1 U322 (PIN[14] , PIN[18] , GIN[18] , GIN[22] , PHI , POUT[14] , GOUT[22] );
   BLOCK1 U323 (PIN[15] , PIN[19] , GIN[19] , GIN[23] , PHI , POUT[15] , GOUT[23] );
   BLOCK1 U324 (PIN[16] , PIN[20] , GIN[20] , GIN[24] , PHI , POUT[16] , GOUT[24] );
   BLOCK1 U325 (PIN[17] , PIN[21] , GIN[21] , GIN[25] , PHI , POUT[17] , GOUT[25] );
   BLOCK1 U326 (PIN[18] , PIN[22] , GIN[22] , GIN[26] , PHI , POUT[18] , GOUT[26] );
   BLOCK1 U327 (PIN[19] , PIN[23] , GIN[23] , GIN[27] , PHI , POUT[19] , GOUT[27] );
   BLOCK1 U328 (PIN[20] , PIN[24] , GIN[24] , GIN[28] , PHI , POUT[20] , GOUT[28] );
   BLOCK1 U329 (PIN[21] , PIN[25] , GIN[25] , GIN[29] , PHI , POUT[21] , GOUT[29] );
   BLOCK1 U330 (PIN[22] , PIN[26] , GIN[26] , GIN[30] , PHI , POUT[22] , GOUT[30] );
   BLOCK1 U331 (PIN[23] , PIN[27] , GIN[27] , GIN[31] , PHI , POUT[23] , GOUT[31] );
   BLOCK1 U332 (PIN[24] , PIN[28] , GIN[28] , GIN[32] , PHI , POUT[24] , GOUT[32] );
   BLOCK1 U333 (PIN[25] , PIN[29] , GIN[29] , GIN[33] , PHI , POUT[25] , GOUT[33] );
   BLOCK1 U334 (PIN[26] , PIN[30] , GIN[30] , GIN[34] , PHI , POUT[26] , GOUT[34] );
   BLOCK1 U335 (PIN[27] , PIN[31] , GIN[31] , GIN[35] , PHI , POUT[27] , GOUT[35] );
   BLOCK1 U336 (PIN[28] , PIN[32] , GIN[32] , GIN[36] , PHI , POUT[28] , GOUT[36] );
   BLOCK1 U337 (PIN[29] , PIN[33] , GIN[33] , GIN[37] , PHI , POUT[29] , GOUT[37] );
   BLOCK1 U338 (PIN[30] , PIN[34] , GIN[34] , GIN[38] , PHI , POUT[30] , GOUT[38] );
   BLOCK1 U339 (PIN[31] , PIN[35] , GIN[35] , GIN[39] , PHI , POUT[31] , GOUT[39] );
   BLOCK1 U340 (PIN[32] , PIN[36] , GIN[36] , GIN[40] , PHI , POUT[32] , GOUT[40] );
   BLOCK1 U341 (PIN[33] , PIN[37] , GIN[37] , GIN[41] , PHI , POUT[33] , GOUT[41] );
   BLOCK1 U342 (PIN[34] , PIN[38] , GIN[38] , GIN[42] , PHI , POUT[34] , GOUT[42] );
   BLOCK1 U343 (PIN[35] , PIN[39] , GIN[39] , GIN[43] , PHI , POUT[35] , GOUT[43] );
   BLOCK1 U344 (PIN[36] , PIN[40] , GIN[40] , GIN[44] , PHI , POUT[36] , GOUT[44] );
   BLOCK1 U345 (PIN[37] , PIN[41] , GIN[41] , GIN[45] , PHI , POUT[37] , GOUT[45] );
   BLOCK1 U346 (PIN[38] , PIN[42] , GIN[42] , GIN[46] , PHI , POUT[38] , GOUT[46] );
   BLOCK1 U347 (PIN[39] , PIN[43] , GIN[43] , GIN[47] , PHI , POUT[39] , GOUT[47] );
   BLOCK1 U348 (PIN[40] , PIN[44] , GIN[44] , GIN[48] , PHI , POUT[40] , GOUT[48] );
   BLOCK1 U349 (PIN[41] , PIN[45] , GIN[45] , GIN[49] , PHI , POUT[41] , GOUT[49] );
   BLOCK1 U350 (PIN[42] , PIN[46] , GIN[46] , GIN[50] , PHI , POUT[42] , GOUT[50] );
   BLOCK1 U351 (PIN[43] , PIN[47] , GIN[47] , GIN[51] , PHI , POUT[43] , GOUT[51] );
   BLOCK1 U352 (PIN[44] , PIN[48] , GIN[48] , GIN[52] , PHI , POUT[44] , GOUT[52] );
   BLOCK1 U353 (PIN[45] , PIN[49] , GIN[49] , GIN[53] , PHI , POUT[45] , GOUT[53] );
   BLOCK1 U354 (PIN[46] , PIN[50] , GIN[50] , GIN[54] , PHI , POUT[46] , GOUT[54] );
   BLOCK1 U355 (PIN[47] , PIN[51] , GIN[51] , GIN[55] , PHI , POUT[47] , GOUT[55] );
   BLOCK1 U356 (PIN[48] , PIN[52] , GIN[52] , GIN[56] , PHI , POUT[48] , GOUT[56] );
   BLOCK1 U357 (PIN[49] , PIN[53] , GIN[53] , GIN[57] , PHI , POUT[49] , GOUT[57] );
   BLOCK1 U358 (PIN[50] , PIN[54] , GIN[54] , GIN[58] , PHI , POUT[50] , GOUT[58] );
   BLOCK1 U359 (PIN[51] , PIN[55] , GIN[55] , GIN[59] , PHI , POUT[51] , GOUT[59] );
   BLOCK1 U360 (PIN[52] , PIN[56] , GIN[56] , GIN[60] , PHI , POUT[52] , GOUT[60] );
   BLOCK1 U361 (PIN[53] , PIN[57] , GIN[57] , GIN[61] , PHI , POUT[53] , GOUT[61] );
   BLOCK1 U362 (PIN[54] , PIN[58] , GIN[58] , GIN[62] , PHI , POUT[54] , GOUT[62] );
   BLOCK1 U363 (PIN[55] , PIN[59] , GIN[59] , GIN[63] , PHI , POUT[55] , GOUT[63] );
   BLOCK1 U364 (PIN[56] , PIN[60] , GIN[60] , GIN[64] , PHI , POUT[56] , GOUT[64] );
endmodule


module DBLC_3_64 ( PIN, GIN, PHI, POUT, GOUT );
input  [0:56] PIN;
input  [0:64] GIN;
input  PHI;
output [0:48] POUT;
output [0:64] GOUT;
   INVBLOCK U10 (GIN[0] , PHI , GOUT[0] );
   INVBLOCK U11 (GIN[1] , PHI , GOUT[1] );
   INVBLOCK U12 (GIN[2] , PHI , GOUT[2] );
   INVBLOCK U13 (GIN[3] , PHI , GOUT[3] );
   INVBLOCK U14 (GIN[4] , PHI , GOUT[4] );
   INVBLOCK U15 (GIN[5] , PHI , GOUT[5] );
   INVBLOCK U16 (GIN[6] , PHI , GOUT[6] );
   INVBLOCK U17 (GIN[7] , PHI , GOUT[7] );
   BLOCK2A U28 (PIN[0] , GIN[0] , GIN[8] , PHI , GOUT[8] );
   BLOCK2A U29 (PIN[1] , GIN[1] , GIN[9] , PHI , GOUT[9] );
   BLOCK2A U210 (PIN[2] , GIN[2] , GIN[10] , PHI , GOUT[10] );
   BLOCK2A U211 (PIN[3] , GIN[3] , GIN[11] , PHI , GOUT[11] );
   BLOCK2A U212 (PIN[4] , GIN[4] , GIN[12] , PHI , GOUT[12] );
   BLOCK2A U213 (PIN[5] , GIN[5] , GIN[13] , PHI , GOUT[13] );
   BLOCK2A U214 (PIN[6] , GIN[6] , GIN[14] , PHI , GOUT[14] );
   BLOCK2A U215 (PIN[7] , GIN[7] , GIN[15] , PHI , GOUT[15] );
   BLOCK2 U316 (PIN[0] , PIN[8] , GIN[8] , GIN[16] , PHI , POUT[0] , GOUT[16] );
   BLOCK2 U317 (PIN[1] , PIN[9] , GIN[9] , GIN[17] , PHI , POUT[1] , GOUT[17] );
   BLOCK2 U318 (PIN[2] , PIN[10] , GIN[10] , GIN[18] , PHI , POUT[2] , GOUT[18] );
   BLOCK2 U319 (PIN[3] , PIN[11] , GIN[11] , GIN[19] , PHI , POUT[3] , GOUT[19] );
   BLOCK2 U320 (PIN[4] , PIN[12] , GIN[12] , GIN[20] , PHI , POUT[4] , GOUT[20] );
   BLOCK2 U321 (PIN[5] , PIN[13] , GIN[13] , GIN[21] , PHI , POUT[5] , GOUT[21] );
   BLOCK2 U322 (PIN[6] , PIN[14] , GIN[14] , GIN[22] , PHI , POUT[6] , GOUT[22] );
   BLOCK2 U323 (PIN[7] , PIN[15] , GIN[15] , GIN[23] , PHI , POUT[7] , GOUT[23] );
   BLOCK2 U324 (PIN[8] , PIN[16] , GIN[16] , GIN[24] , PHI , POUT[8] , GOUT[24] );
   BLOCK2 U325 (PIN[9] , PIN[17] , GIN[17] , GIN[25] , PHI , POUT[9] , GOUT[25] );
   BLOCK2 U326 (PIN[10] , PIN[18] , GIN[18] , GIN[26] , PHI , POUT[10] , GOUT[26] );
   BLOCK2 U327 (PIN[11] , PIN[19] , GIN[19] , GIN[27] , PHI , POUT[11] , GOUT[27] );
   BLOCK2 U328 (PIN[12] , PIN[20] , GIN[20] , GIN[28] , PHI , POUT[12] , GOUT[28] );
   BLOCK2 U329 (PIN[13] , PIN[21] , GIN[21] , GIN[29] , PHI , POUT[13] , GOUT[29] );
   BLOCK2 U330 (PIN[14] , PIN[22] , GIN[22] , GIN[30] , PHI , POUT[14] , GOUT[30] );
   BLOCK2 U331 (PIN[15] , PIN[23] , GIN[23] , GIN[31] , PHI , POUT[15] , GOUT[31] );
   BLOCK2 U332 (PIN[16] , PIN[24] , GIN[24] , GIN[32] , PHI , POUT[16] , GOUT[32] );
   BLOCK2 U333 (PIN[17] , PIN[25] , GIN[25] , GIN[33] , PHI , POUT[17] , GOUT[33] );
   BLOCK2 U334 (PIN[18] , PIN[26] , GIN[26] , GIN[34] , PHI , POUT[18] , GOUT[34] );
   BLOCK2 U335 (PIN[19] , PIN[27] , GIN[27] , GIN[35] , PHI , POUT[19] , GOUT[35] );
   BLOCK2 U336 (PIN[20] , PIN[28] , GIN[28] , GIN[36] , PHI , POUT[20] , GOUT[36] );
   BLOCK2 U337 (PIN[21] , PIN[29] , GIN[29] , GIN[37] , PHI , POUT[21] , GOUT[37] );
   BLOCK2 U338 (PIN[22] , PIN[30] , GIN[30] , GIN[38] , PHI , POUT[22] , GOUT[38] );
   BLOCK2 U339 (PIN[23] , PIN[31] , GIN[31] , GIN[39] , PHI , POUT[23] , GOUT[39] );
   BLOCK2 U340 (PIN[24] , PIN[32] , GIN[32] , GIN[40] , PHI , POUT[24] , GOUT[40] );
   BLOCK2 U341 (PIN[25] , PIN[33] , GIN[33] , GIN[41] , PHI , POUT[25] , GOUT[41] );
   BLOCK2 U342 (PIN[26] , PIN[34] , GIN[34] , GIN[42] , PHI , POUT[26] , GOUT[42] );
   BLOCK2 U343 (PIN[27] , PIN[35] , GIN[35] , GIN[43] , PHI , POUT[27] , GOUT[43] );
   BLOCK2 U344 (PIN[28] , PIN[36] , GIN[36] , GIN[44] , PHI , POUT[28] , GOUT[44] );
   BLOCK2 U345 (PIN[29] , PIN[37] , GIN[37] , GIN[45] , PHI , POUT[29] , GOUT[45] );
   BLOCK2 U346 (PIN[30] , PIN[38] , GIN[38] , GIN[46] , PHI , POUT[30] , GOUT[46] );
   BLOCK2 U347 (PIN[31] , PIN[39] , GIN[39] , GIN[47] , PHI , POUT[31] , GOUT[47] );
   BLOCK2 U348 (PIN[32] , PIN[40] , GIN[40] , GIN[48] , PHI , POUT[32] , GOUT[48] );
   BLOCK2 U349 (PIN[33] , PIN[41] , GIN[41] , GIN[49] , PHI , POUT[33] , GOUT[49] );
   BLOCK2 U350 (PIN[34] , PIN[42] , GIN[42] , GIN[50] , PHI , POUT[34] , GOUT[50] );
   BLOCK2 U351 (PIN[35] , PIN[43] , GIN[43] , GIN[51] , PHI , POUT[35] , GOUT[51] );
   BLOCK2 U352 (PIN[36] , PIN[44] , GIN[44] , GIN[52] , PHI , POUT[36] , GOUT[52] );
   BLOCK2 U353 (PIN[37] , PIN[45] , GIN[45] , GIN[53] , PHI , POUT[37] , GOUT[53] );
   BLOCK2 U354 (PIN[38] , PIN[46] , GIN[46] , GIN[54] , PHI , POUT[38] , GOUT[54] );
   BLOCK2 U355 (PIN[39] , PIN[47] , GIN[47] , GIN[55] , PHI , POUT[39] , GOUT[55] );
   BLOCK2 U356 (PIN[40] , PIN[48] , GIN[48] , GIN[56] , PHI , POUT[40] , GOUT[56] );
   BLOCK2 U357 (PIN[41] , PIN[49] , GIN[49] , GIN[57] , PHI , POUT[41] , GOUT[57] );
   BLOCK2 U358 (PIN[42] , PIN[50] , GIN[50] , GIN[58] , PHI , POUT[42] , GOUT[58] );
   BLOCK2 U359 (PIN[43] , PIN[51] , GIN[51] , GIN[59] , PHI , POUT[43] , GOUT[59] );
   BLOCK2 U360 (PIN[44] , PIN[52] , GIN[52] , GIN[60] , PHI , POUT[44] , GOUT[60] );
   BLOCK2 U361 (PIN[45] , PIN[53] , GIN[53] , GIN[61] , PHI , POUT[45] , GOUT[61] );
   BLOCK2 U362 (PIN[46] , PIN[54] , GIN[54] , GIN[62] , PHI , POUT[46] , GOUT[62] );
   BLOCK2 U363 (PIN[47] , PIN[55] , GIN[55] , GIN[63] , PHI , POUT[47] , GOUT[63] );
   BLOCK2 U364 (PIN[48] , PIN[56] , GIN[56] , GIN[64] , PHI , POUT[48] , GOUT[64] );
endmodule


module DBLC_4_64 ( PIN, GIN, PHI, POUT, GOUT );
input  [0:48] PIN;
input  [0:64] GIN;
input  PHI;
output [0:32] POUT;
output [0:64] GOUT;
   INVBLOCK U10 (GIN[0] , PHI , GOUT[0] );
   INVBLOCK U11 (GIN[1] , PHI , GOUT[1] );
   INVBLOCK U12 (GIN[2] , PHI , GOUT[2] );
   INVBLOCK U13 (GIN[3] , PHI , GOUT[3] );
   INVBLOCK U14 (GIN[4] , PHI , GOUT[4] );
   INVBLOCK U15 (GIN[5] , PHI , GOUT[5] );
   INVBLOCK U16 (GIN[6] , PHI , GOUT[6] );
   INVBLOCK U17 (GIN[7] , PHI , GOUT[7] );
   INVBLOCK U18 (GIN[8] , PHI , GOUT[8] );
   INVBLOCK U19 (GIN[9] , PHI , GOUT[9] );
   INVBLOCK U110 (GIN[10] , PHI , GOUT[10] );
   INVBLOCK U111 (GIN[11] , PHI , GOUT[11] );
   INVBLOCK U112 (GIN[12] , PHI , GOUT[12] );
   INVBLOCK U113 (GIN[13] , PHI , GOUT[13] );
   INVBLOCK U114 (GIN[14] , PHI , GOUT[14] );
   INVBLOCK U115 (GIN[15] , PHI , GOUT[15] );
   BLOCK1A U216 (PIN[0] , GIN[0] , GIN[16] , PHI , GOUT[16] );
   BLOCK1A U217 (PIN[1] , GIN[1] , GIN[17] , PHI , GOUT[17] );
   BLOCK1A U218 (PIN[2] , GIN[2] , GIN[18] , PHI , GOUT[18] );
   BLOCK1A U219 (PIN[3] , GIN[3] , GIN[19] , PHI , GOUT[19] );
   BLOCK1A U220 (PIN[4] , GIN[4] , GIN[20] , PHI , GOUT[20] );
   BLOCK1A U221 (PIN[5] , GIN[5] , GIN[21] , PHI , GOUT[21] );
   BLOCK1A U222 (PIN[6] , GIN[6] , GIN[22] , PHI , GOUT[22] );
   BLOCK1A U223 (PIN[7] , GIN[7] , GIN[23] , PHI , GOUT[23] );
   BLOCK1A U224 (PIN[8] , GIN[8] , GIN[24] , PHI , GOUT[24] );
   BLOCK1A U225 (PIN[9] , GIN[9] , GIN[25] , PHI , GOUT[25] );
   BLOCK1A U226 (PIN[10] , GIN[10] , GIN[26] , PHI , GOUT[26] );
   BLOCK1A U227 (PIN[11] , GIN[11] , GIN[27] , PHI , GOUT[27] );
   BLOCK1A U228 (PIN[12] , GIN[12] , GIN[28] , PHI , GOUT[28] );
   BLOCK1A U229 (PIN[13] , GIN[13] , GIN[29] , PHI , GOUT[29] );
   BLOCK1A U230 (PIN[14] , GIN[14] , GIN[30] , PHI , GOUT[30] );
   BLOCK1A U231 (PIN[15] , GIN[15] , GIN[31] , PHI , GOUT[31] );
   BLOCK1 U332 (PIN[0] , PIN[16] , GIN[16] , GIN[32] , PHI , POUT[0] , GOUT[32] );
   BLOCK1 U333 (PIN[1] , PIN[17] , GIN[17] , GIN[33] , PHI , POUT[1] , GOUT[33] );
   BLOCK1 U334 (PIN[2] , PIN[18] , GIN[18] , GIN[34] , PHI , POUT[2] , GOUT[34] );
   BLOCK1 U335 (PIN[3] , PIN[19] , GIN[19] , GIN[35] , PHI , POUT[3] , GOUT[35] );
   BLOCK1 U336 (PIN[4] , PIN[20] , GIN[20] , GIN[36] , PHI , POUT[4] , GOUT[36] );
   BLOCK1 U337 (PIN[5] , PIN[21] , GIN[21] , GIN[37] , PHI , POUT[5] , GOUT[37] );
   BLOCK1 U338 (PIN[6] , PIN[22] , GIN[22] , GIN[38] , PHI , POUT[6] , GOUT[38] );
   BLOCK1 U339 (PIN[7] , PIN[23] , GIN[23] , GIN[39] , PHI , POUT[7] , GOUT[39] );
   BLOCK1 U340 (PIN[8] , PIN[24] , GIN[24] , GIN[40] , PHI , POUT[8] , GOUT[40] );
   BLOCK1 U341 (PIN[9] , PIN[25] , GIN[25] , GIN[41] , PHI , POUT[9] , GOUT[41] );
   BLOCK1 U342 (PIN[10] , PIN[26] , GIN[26] , GIN[42] , PHI , POUT[10] , GOUT[42] );
   BLOCK1 U343 (PIN[11] , PIN[27] , GIN[27] , GIN[43] , PHI , POUT[11] , GOUT[43] );
   BLOCK1 U344 (PIN[12] , PIN[28] , GIN[28] , GIN[44] , PHI , POUT[12] , GOUT[44] );
   BLOCK1 U345 (PIN[13] , PIN[29] , GIN[29] , GIN[45] , PHI , POUT[13] , GOUT[45] );
   BLOCK1 U346 (PIN[14] , PIN[30] , GIN[30] , GIN[46] , PHI , POUT[14] , GOUT[46] );
   BLOCK1 U347 (PIN[15] , PIN[31] , GIN[31] , GIN[47] , PHI , POUT[15] , GOUT[47] );
   BLOCK1 U348 (PIN[16] , PIN[32] , GIN[32] , GIN[48] , PHI , POUT[16] , GOUT[48] );
   BLOCK1 U349 (PIN[17] , PIN[33] , GIN[33] , GIN[49] , PHI , POUT[17] , GOUT[49] );
   BLOCK1 U350 (PIN[18] , PIN[34] , GIN[34] , GIN[50] , PHI , POUT[18] , GOUT[50] );
   BLOCK1 U351 (PIN[19] , PIN[35] , GIN[35] , GIN[51] , PHI , POUT[19] , GOUT[51] );
   BLOCK1 U352 (PIN[20] , PIN[36] , GIN[36] , GIN[52] , PHI , POUT[20] , GOUT[52] );
   BLOCK1 U353 (PIN[21] , PIN[37] , GIN[37] , GIN[53] , PHI , POUT[21] , GOUT[53] );
   BLOCK1 U354 (PIN[22] , PIN[38] , GIN[38] , GIN[54] , PHI , POUT[22] , GOUT[54] );
   BLOCK1 U355 (PIN[23] , PIN[39] , GIN[39] , GIN[55] , PHI , POUT[23] , GOUT[55] );
   BLOCK1 U356 (PIN[24] , PIN[40] , GIN[40] , GIN[56] , PHI , POUT[24] , GOUT[56] );
   BLOCK1 U357 (PIN[25] , PIN[41] , GIN[41] , GIN[57] , PHI , POUT[25] , GOUT[57] );
   BLOCK1 U358 (PIN[26] , PIN[42] , GIN[42] , GIN[58] , PHI , POUT[26] , GOUT[58] );
   BLOCK1 U359 (PIN[27] , PIN[43] , GIN[43] , GIN[59] , PHI , POUT[27] , GOUT[59] );
   BLOCK1 U360 (PIN[28] , PIN[44] , GIN[44] , GIN[60] , PHI , POUT[28] , GOUT[60] );
   BLOCK1 U361 (PIN[29] , PIN[45] , GIN[45] , GIN[61] , PHI , POUT[29] , GOUT[61] );
   BLOCK1 U362 (PIN[30] , PIN[46] , GIN[46] , GIN[62] , PHI , POUT[30] , GOUT[62] );
   BLOCK1 U363 (PIN[31] , PIN[47] , GIN[47] , GIN[63] , PHI , POUT[31] , GOUT[63] );
   BLOCK1 U364 (PIN[32] , PIN[48] , GIN[48] , GIN[64] , PHI , POUT[32] , GOUT[64] );
endmodule


module DBLC_5_64 ( PIN, GIN, PHI, POUT, GOUT );
input  [0:32] PIN;
input  [0:64] GIN;
input  PHI;
output [0:0] POUT;
output [0:64] GOUT;
   INVBLOCK U10 (GIN[0] , PHI , GOUT[0] );
   INVBLOCK U11 (GIN[1] , PHI , GOUT[1] );
   INVBLOCK U12 (GIN[2] , PHI , GOUT[2] );
   INVBLOCK U13 (GIN[3] , PHI , GOUT[3] );
   INVBLOCK U14 (GIN[4] , PHI , GOUT[4] );
   INVBLOCK U15 (GIN[5] , PHI , GOUT[5] );
   INVBLOCK U16 (GIN[6] , PHI , GOUT[6] );
   INVBLOCK U17 (GIN[7] , PHI , GOUT[7] );
   INVBLOCK U18 (GIN[8] , PHI , GOUT[8] );
   INVBLOCK U19 (GIN[9] , PHI , GOUT[9] );
   INVBLOCK U110 (GIN[10] , PHI , GOUT[10] );
   INVBLOCK U111 (GIN[11] , PHI , GOUT[11] );
   INVBLOCK U112 (GIN[12] , PHI , GOUT[12] );
   INVBLOCK U113 (GIN[13] , PHI , GOUT[13] );
   INVBLOCK U114 (GIN[14] , PHI , GOUT[14] );
   INVBLOCK U115 (GIN[15] , PHI , GOUT[15] );
   INVBLOCK U116 (GIN[16] , PHI , GOUT[16] );
   INVBLOCK U117 (GIN[17] , PHI , GOUT[17] );
   INVBLOCK U118 (GIN[18] , PHI , GOUT[18] );
   INVBLOCK U119 (GIN[19] , PHI , GOUT[19] );
   INVBLOCK U120 (GIN[20] , PHI , GOUT[20] );
   INVBLOCK U121 (GIN[21] , PHI , GOUT[21] );
   INVBLOCK U122 (GIN[22] , PHI , GOUT[22] );
   INVBLOCK U123 (GIN[23] , PHI , GOUT[23] );
   INVBLOCK U124 (GIN[24] , PHI , GOUT[24] );
   INVBLOCK U125 (GIN[25] , PHI , GOUT[25] );
   INVBLOCK U126 (GIN[26] , PHI , GOUT[26] );
   INVBLOCK U127 (GIN[27] , PHI , GOUT[27] );
   INVBLOCK U128 (GIN[28] , PHI , GOUT[28] );
   INVBLOCK U129 (GIN[29] , PHI , GOUT[29] );
   INVBLOCK U130 (GIN[30] , PHI , GOUT[30] );
   INVBLOCK U131 (GIN[31] , PHI , GOUT[31] );
   BLOCK2A U232 (PIN[0] , GIN[0] , GIN[32] , PHI , GOUT[32] );
   BLOCK2A U233 (PIN[1] , GIN[1] , GIN[33] , PHI , GOUT[33] );
   BLOCK2A U234 (PIN[2] , GIN[2] , GIN[34] , PHI , GOUT[34] );
   BLOCK2A U235 (PIN[3] , GIN[3] , GIN[35] , PHI , GOUT[35] );
   BLOCK2A U236 (PIN[4] , GIN[4] , GIN[36] , PHI , GOUT[36] );
   BLOCK2A U237 (PIN[5] , GIN[5] , GIN[37] , PHI , GOUT[37] );
   BLOCK2A U238 (PIN[6] , GIN[6] , GIN[38] , PHI , GOUT[38] );
   BLOCK2A U239 (PIN[7] , GIN[7] , GIN[39] , PHI , GOUT[39] );
   BLOCK2A U240 (PIN[8] , GIN[8] , GIN[40] , PHI , GOUT[40] );
   BLOCK2A U241 (PIN[9] , GIN[9] , GIN[41] , PHI , GOUT[41] );
   BLOCK2A U242 (PIN[10] , GIN[10] , GIN[42] , PHI , GOUT[42] );
   BLOCK2A U243 (PIN[11] , GIN[11] , GIN[43] , PHI , GOUT[43] );
   BLOCK2A U244 (PIN[12] , GIN[12] , GIN[44] , PHI , GOUT[44] );
   BLOCK2A U245 (PIN[13] , GIN[13] , GIN[45] , PHI , GOUT[45] );
   BLOCK2A U246 (PIN[14] , GIN[14] , GIN[46] , PHI , GOUT[46] );
   BLOCK2A U247 (PIN[15] , GIN[15] , GIN[47] , PHI , GOUT[47] );
   BLOCK2A U248 (PIN[16] , GIN[16] , GIN[48] , PHI , GOUT[48] );
   BLOCK2A U249 (PIN[17] , GIN[17] , GIN[49] , PHI , GOUT[49] );
   BLOCK2A U250 (PIN[18] , GIN[18] , GIN[50] , PHI , GOUT[50] );
   BLOCK2A U251 (PIN[19] , GIN[19] , GIN[51] , PHI , GOUT[51] );
   BLOCK2A U252 (PIN[20] , GIN[20] , GIN[52] , PHI , GOUT[52] );
   BLOCK2A U253 (PIN[21] , GIN[21] , GIN[53] , PHI , GOUT[53] );
   BLOCK2A U254 (PIN[22] , GIN[22] , GIN[54] , PHI , GOUT[54] );
   BLOCK2A U255 (PIN[23] , GIN[23] , GIN[55] , PHI , GOUT[55] );
   BLOCK2A U256 (PIN[24] , GIN[24] , GIN[56] , PHI , GOUT[56] );
   BLOCK2A U257 (PIN[25] , GIN[25] , GIN[57] , PHI , GOUT[57] );
   BLOCK2A U258 (PIN[26] , GIN[26] , GIN[58] , PHI , GOUT[58] );
   BLOCK2A U259 (PIN[27] , GIN[27] , GIN[59] , PHI , GOUT[59] );
   BLOCK2A U260 (PIN[28] , GIN[28] , GIN[60] , PHI , GOUT[60] );
   BLOCK2A U261 (PIN[29] , GIN[29] , GIN[61] , PHI , GOUT[61] );
   BLOCK2A U262 (PIN[30] , GIN[30] , GIN[62] , PHI , GOUT[62] );
   BLOCK2A U263 (PIN[31] , GIN[31] , GIN[63] , PHI , GOUT[63] );
   BLOCK2 U364 (PIN[0] , PIN[32] , GIN[32] , GIN[64] , PHI , POUT[0] , GOUT[64] );
endmodule


module XORSTAGE_64 ( A, B, PBIT, PHI, CARRY, SUM, COUT );
input  [0:63] A;
input  [0:63] B;
input  PBIT;
input  PHI;
input  [0:64] CARRY;
output [0:63] SUM;
output COUT;
   XXOR1 U20 (A[0] , B[0] , CARRY[0] , PHI , SUM[0] );
   XXOR1 U21 (A[1] , B[1] , CARRY[1] , PHI , SUM[1] );
   XXOR1 U22 (A[2] , B[2] , CARRY[2] , PHI , SUM[2] );
   XXOR1 U23 (A[3] , B[3] , CARRY[3] , PHI , SUM[3] );
   XXOR1 U24 (A[4] , B[4] , CARRY[4] , PHI , SUM[4] );
   XXOR1 U25 (A[5] , B[5] , CARRY[5] , PHI , SUM[5] );
   XXOR1 U26 (A[6] , B[6] , CARRY[6] , PHI , SUM[6] );
   XXOR1 U27 (A[7] , B[7] , CARRY[7] , PHI , SUM[7] );
   XXOR1 U28 (A[8] , B[8] , CARRY[8] , PHI , SUM[8] );
   XXOR1 U29 (A[9] , B[9] , CARRY[9] , PHI , SUM[9] );
   XXOR1 U210 (A[10] , B[10] , CARRY[10] , PHI , SUM[10] );
   XXOR1 U211 (A[11] , B[11] , CARRY[11] , PHI , SUM[11] );
   XXOR1 U212 (A[12] , B[12] , CARRY[12] , PHI , SUM[12] );
   XXOR1 U213 (A[13] , B[13] , CARRY[13] , PHI , SUM[13] );
   XXOR1 U214 (A[14] , B[14] , CARRY[14] , PHI , SUM[14] );
   XXOR1 U215 (A[15] , B[15] , CARRY[15] , PHI , SUM[15] );
   XXOR1 U216 (A[16] , B[16] , CARRY[16] , PHI , SUM[16] );
   XXOR1 U217 (A[17] , B[17] , CARRY[17] , PHI , SUM[17] );
   XXOR1 U218 (A[18] , B[18] , CARRY[18] , PHI , SUM[18] );
   XXOR1 U219 (A[19] , B[19] , CARRY[19] , PHI , SUM[19] );
   XXOR1 U220 (A[20] , B[20] , CARRY[20] , PHI , SUM[20] );
   XXOR1 U221 (A[21] , B[21] , CARRY[21] , PHI , SUM[21] );
   XXOR1 U222 (A[22] , B[22] , CARRY[22] , PHI , SUM[22] );
   XXOR1 U223 (A[23] , B[23] , CARRY[23] , PHI , SUM[23] );
   XXOR1 U224 (A[24] , B[24] , CARRY[24] , PHI , SUM[24] );
   XXOR1 U225 (A[25] , B[25] , CARRY[25] , PHI , SUM[25] );
   XXOR1 U226 (A[26] , B[26] , CARRY[26] , PHI , SUM[26] );
   XXOR1 U227 (A[27] , B[27] , CARRY[27] , PHI , SUM[27] );
   XXOR1 U228 (A[28] , B[28] , CARRY[28] , PHI , SUM[28] );
   XXOR1 U229 (A[29] , B[29] , CARRY[29] , PHI , SUM[29] );
   XXOR1 U230 (A[30] , B[30] , CARRY[30] , PHI , SUM[30] );
   XXOR1 U231 (A[31] , B[31] , CARRY[31] , PHI , SUM[31] );
   XXOR1 U232 (A[32] , B[32] , CARRY[32] , PHI , SUM[32] );
   XXOR1 U233 (A[33] , B[33] , CARRY[33] , PHI , SUM[33] );
   XXOR1 U234 (A[34] , B[34] , CARRY[34] , PHI , SUM[34] );
   XXOR1 U235 (A[35] , B[35] , CARRY[35] , PHI , SUM[35] );
   XXOR1 U236 (A[36] , B[36] , CARRY[36] , PHI , SUM[36] );
   XXOR1 U237 (A[37] , B[37] , CARRY[37] , PHI , SUM[37] );
   XXOR1 U238 (A[38] , B[38] , CARRY[38] , PHI , SUM[38] );
   XXOR1 U239 (A[39] , B[39] , CARRY[39] , PHI , SUM[39] );
   XXOR1 U240 (A[40] , B[40] , CARRY[40] , PHI , SUM[40] );
   XXOR1 U241 (A[41] , B[41] , CARRY[41] , PHI , SUM[41] );
   XXOR1 U242 (A[42] , B[42] , CARRY[42] , PHI , SUM[42] );
   XXOR1 U243 (A[43] , B[43] , CARRY[43] , PHI , SUM[43] );
   XXOR1 U244 (A[44] , B[44] , CARRY[44] , PHI , SUM[44] );
   XXOR1 U245 (A[45] , B[45] , CARRY[45] , PHI , SUM[45] );
   XXOR1 U246 (A[46] , B[46] , CARRY[46] , PHI , SUM[46] );
   XXOR1 U247 (A[47] , B[47] , CARRY[47] , PHI , SUM[47] );
   XXOR1 U248 (A[48] , B[48] , CARRY[48] , PHI , SUM[48] );
   XXOR1 U249 (A[49] , B[49] , CARRY[49] , PHI , SUM[49] );
   XXOR1 U250 (A[50] , B[50] , CARRY[50] , PHI , SUM[50] );
   XXOR1 U251 (A[51] , B[51] , CARRY[51] , PHI , SUM[51] );
   XXOR1 U252 (A[52] , B[52] , CARRY[52] , PHI , SUM[52] );
   XXOR1 U253 (A[53] , B[53] , CARRY[53] , PHI , SUM[53] );
   XXOR1 U254 (A[54] , B[54] , CARRY[54] , PHI , SUM[54] );
   XXOR1 U255 (A[55] , B[55] , CARRY[55] , PHI , SUM[55] );
   XXOR1 U256 (A[56] , B[56] , CARRY[56] , PHI , SUM[56] );
   XXOR1 U257 (A[57] , B[57] , CARRY[57] , PHI , SUM[57] );
   XXOR1 U258 (A[58] , B[58] , CARRY[58] , PHI , SUM[58] );
   XXOR1 U259 (A[59] , B[59] , CARRY[59] , PHI , SUM[59] );
   XXOR1 U260 (A[60] , B[60] , CARRY[60] , PHI , SUM[60] );
   XXOR1 U261 (A[61] , B[61] , CARRY[61] , PHI , SUM[61] );
   XXOR1 U262 (A[62] , B[62] , CARRY[62] , PHI , SUM[62] );
   XXOR1 U263 (A[63] , B[63] , CARRY[63] , PHI , SUM[63] );
   BLOCK1A U1 (PBIT , CARRY[0] , CARRY[64] , PHI , COUT );
endmodule


module DBLCTREE_64 ( PIN, GIN, PHI, GOUT, POUT );
input  [0:63] PIN;
input  [0:64] GIN;
input  PHI;
output [0:64] GOUT;
output [0:0] POUT;
   wire [0:62] INTPROP_0;
   wire [0:64] INTGEN_0;
   wire [0:60] INTPROP_1;
   wire [0:64] INTGEN_1;
   wire [0:56] INTPROP_2;
   wire [0:64] INTGEN_2;
   wire [0:48] INTPROP_3;
   wire [0:64] INTGEN_3;
   wire [0:32] INTPROP_4;
   wire [0:64] INTGEN_4;
   DBLC_0_64 U_0 (.PIN(PIN) , .GIN(GIN) , .PHI(PHI) , .POUT(INTPROP_0) , .GOUT(INTGEN_0) );
   DBLC_1_64 U_1 (.PIN(INTPROP_0) , .GIN(INTGEN_0) , .PHI(PHI) , .POUT(INTPROP_1) , .GOUT(INTGEN_1) );
   DBLC_2_64 U_2 (.PIN(INTPROP_1) , .GIN(INTGEN_1) , .PHI(PHI) , .POUT(INTPROP_2) , .GOUT(INTGEN_2) );
   DBLC_3_64 U_3 (.PIN(INTPROP_2) , .GIN(INTGEN_2) , .PHI(PHI) , .POUT(INTPROP_3) , .GOUT(INTGEN_3) );
   DBLC_4_64 U_4 (.PIN(INTPROP_3) , .GIN(INTGEN_3) , .PHI(PHI) , .POUT(INTPROP_4) , .GOUT(INTGEN_4) );
   DBLC_5_64 U_5 (.PIN(INTPROP_4) , .GIN(INTGEN_4) , .PHI(PHI) , .POUT(POUT) , .GOUT(GOUT) );
endmodule


module DBLCADDER_64_64 ( OPA, OPB, CIN, PHI, SUM, COUT );
input  [0:63] OPA;
input  [0:63] OPB;
input  CIN;
input  PHI;
output [0:63] SUM;
output COUT;
   wire [0:63] INTPROP;
   wire [0:64] INTGEN;
   wire [0:0] PBIT;
   wire [0:64] CARRY;
   PRESTAGE_64 U1 (OPA , OPB , CIN , PHI , INTPROP , INTGEN );
   DBLCTREE_64 U2 (INTPROP , INTGEN , PHI , CARRY , PBIT );
   XORSTAGE_64 U3 (OPA[0:63] , OPB[0:63] , PBIT[0] , PHI , CARRY[0:64] , SUM , COUT );
endmodule


module MULTIPLIER_33_32 ( MULTIPLICAND, MULTIPLIER, RST, CLK, PHI, RESULT );
input  [0:32] MULTIPLICAND;
input  [0:31] MULTIPLIER;
input  RST;
input  CLK;
input  PHI;
output [0:63] RESULT;
   wire [0:575] PPBIT;
   wire [0:64] INT_CARRY;
   wire [0:63] INT_SUM;
   wire LOGIC_ZERO;
   wire [0:63] ARESULT;
   reg [0:63] RESULT;
   assign LOGIC_ZERO = 0;
   BOOTHCODER_33_32 B (.OPA(MULTIPLICAND[0:32]) , .OPB(MULTIPLIER[0:31]) , .SUMMAND(PPBIT[0:575]) );
   WALLACE_33_32 W (.SUMMAND(PPBIT[0:575]) , .RST(RST), .CLK (CLK) , .CARRY(INT_CARRY[1:63]) , .SUM(INT_SUM[0:63]) );
   assign INT_CARRY[0] = LOGIC_ZERO;
   DBLCADDER_64_64 D (.OPA(INT_SUM[0:63]) , .OPB(INT_CARRY[0:63]) , .CIN (LOGIC_ZERO) , .PHI (PHI) , .SUM(ARESULT[0:63]), .COUT() );
   always @(posedge CLK or posedge RST)
     if (RST == (1'b1))
	RESULT <=  64'h0000_0000_0000_0000;
     else
	RESULT <= ARESULT;
endmodule


// 32x32 multiplier, no input/output registers
// Registers inside Wallace trees every 8 full adder levels,
// with first pipeline after level 4

module or1200_amultp2_32x32 ( X, Y, RST, CLK, P );
input  [31:0] X;
input  [31:0] Y;
input  RST;
input  CLK;
output [63:0] P;
   wire [0:32] A;
   wire [0:31] B;
   wire [0:63] Q;
   assign A[0] = X[0];
   assign A[1] = X[1];
   assign A[2] = X[2];
   assign A[3] = X[3];
   assign A[4] = X[4];
   assign A[5] = X[5];
   assign A[6] = X[6];
   assign A[7] = X[7];
   assign A[8] = X[8];
   assign A[9] = X[9];
   assign A[10] = X[10];
   assign A[11] = X[11];
   assign A[12] = X[12];
   assign A[13] = X[13];
   assign A[14] = X[14];
   assign A[15] = X[15];
   assign A[16] = X[16];
   assign A[17] = X[17];
   assign A[18] = X[18];
   assign A[19] = X[19];
   assign A[20] = X[20];
   assign A[21] = X[21];
   assign A[22] = X[22];
   assign A[23] = X[23];
   assign A[24] = X[24];
   assign A[25] = X[25];
   assign A[26] = X[26];
   assign A[27] = X[27];
   assign A[28] = X[28];
   assign A[29] = X[29];
   assign A[30] = X[30];
   assign A[31] = X[31];
   assign A[32] = X[31];
   assign B[0] = Y[0];
   assign B[1] = Y[1];
   assign B[2] = Y[2];
   assign B[3] = Y[3];
   assign B[4] = Y[4];
   assign B[5] = Y[5];
   assign B[6] = Y[6];
   assign B[7] = Y[7];
   assign B[8] = Y[8];
   assign B[9] = Y[9];
   assign B[10] = Y[10];
   assign B[11] = Y[11];
   assign B[12] = Y[12];
   assign B[13] = Y[13];
   assign B[14] = Y[14];
   assign B[15] = Y[15];
   assign B[16] = Y[16];
   assign B[17] = Y[17];
   assign B[18] = Y[18];
   assign B[19] = Y[19];
   assign B[20] = Y[20];
   assign B[21] = Y[21];
   assign B[22] = Y[22];
   assign B[23] = Y[23];
   assign B[24] = Y[24];
   assign B[25] = Y[25];
   assign B[26] = Y[26];
   assign B[27] = Y[27];
   assign B[28] = Y[28];
   assign B[29] = Y[29];
   assign B[30] = Y[30];
   assign B[31] = Y[31];
   assign P[0] = Q[0];
   assign P[1] = Q[1];
   assign P[2] = Q[2];
   assign P[3] = Q[3];
   assign P[4] = Q[4];
   assign P[5] = Q[5];
   assign P[6] = Q[6];
   assign P[7] = Q[7];
   assign P[8] = Q[8];
   assign P[9] = Q[9];
   assign P[10] = Q[10];
   assign P[11] = Q[11];
   assign P[12] = Q[12];
   assign P[13] = Q[13];
   assign P[14] = Q[14];
   assign P[15] = Q[15];
   assign P[16] = Q[16];
   assign P[17] = Q[17];
   assign P[18] = Q[18];
   assign P[19] = Q[19];
   assign P[20] = Q[20];
   assign P[21] = Q[21];
   assign P[22] = Q[22];
   assign P[23] = Q[23];
   assign P[24] = Q[24];
   assign P[25] = Q[25];
   assign P[26] = Q[26];
   assign P[27] = Q[27];
   assign P[28] = Q[28];
   assign P[29] = Q[29];
   assign P[30] = Q[30];
   assign P[31] = Q[31];
   assign P[32] = Q[32];
   assign P[33] = Q[33];
   assign P[34] = Q[34];
   assign P[35] = Q[35];
   assign P[36] = Q[36];
   assign P[37] = Q[37];
   assign P[38] = Q[38];
   assign P[39] = Q[39];
   assign P[40] = Q[40];
   assign P[41] = Q[41];
   assign P[42] = Q[42];
   assign P[43] = Q[43];
   assign P[44] = Q[44];
   assign P[45] = Q[45];
   assign P[46] = Q[46];
   assign P[47] = Q[47];
   assign P[48] = Q[48];
   assign P[49] = Q[49];
   assign P[50] = Q[50];
   assign P[51] = Q[51];
   assign P[52] = Q[52];
   assign P[53] = Q[53];
   assign P[54] = Q[54];
   assign P[55] = Q[55];
   assign P[56] = Q[56];
   assign P[57] = Q[57];
   assign P[58] = Q[58];
   assign P[59] = Q[59];
   assign P[60] = Q[60];
   assign P[61] = Q[61];
   assign P[62] = Q[62];
   assign P[63] = Q[63];
   MULTIPLIER_33_32 U1 (.MULTIPLICAND(A) , .MULTIPLIER(B) , .RST(RST), .CLK(CLK) , .PHI(1'b0) , .RESULT(Q) );
endmodule

