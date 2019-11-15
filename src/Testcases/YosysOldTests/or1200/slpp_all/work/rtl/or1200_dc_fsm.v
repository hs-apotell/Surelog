//////////////////////////////////////////////////////////////////////
////                                                              ////
////  OR1200's DC FSM                                             ////
////                                                              ////
////  This file is part of the OpenRISC 1200 project              ////
////  http://opencores.org/project,or1k                           ////
////                                                              ////
////  Description                                                 ////
////  Data cache state machine                                    ////
////                                                              ////
////  To Do:                                                      ////
////   - Test error during line read or write                     ////
////                                                              ////
////  Author(s):                                                  ////
////      - Damjan Lampret, lampret@opencores.org                 ////
////      - Julius Baxter, julius@opencores.org                   ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
////                                                              ////
//// Copyright (C) 2000, 2010 Authors and OPENCORES.ORG           ////
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
// $Log: or1200_dc_fsm.v,v $
// Revision 2.0  2010/06/30 11:00:00  ORSoC
// Minor update: 
// Bugs fixed. 
//

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
 



//
// Data cache FSM for cache line of 16 bytes (4x singleword)
//

module or1200_dc_fsm
  (
   // Clock and reset
   clk, rst,
   
   // Internal i/f to top level DC
   dc_en, dcqmem_cycstb_i, dcqmem_ci_i, dcqmem_we_i, dcqmem_sel_i,
   tagcomp_miss, biudata_valid, biudata_error, lsu_addr,
   dcram_we, biu_read, biu_write, biu_do_sel, dcram_di_sel, first_hit_ack, 
   first_miss_ack, first_miss_err, burst, tag_we, tag_valid, dc_addr, 
   dc_no_writethrough, tag_dirty, dirty, tag, tag_v, dc_block_flush, 
   dc_block_writeback, spr_dat_i, mtspr_dc_done, spr_cswe
   );

   //
   // I/O
   //
   input				clk;
   input				rst;
   input				dc_en;
   input				dcqmem_cycstb_i;
   input				dcqmem_ci_i;
   input				dcqmem_we_i;
   input [3:0] 				dcqmem_sel_i;
   input				tagcomp_miss;
   input				biudata_valid;
   input				biudata_error;
   input [31:0] 			lsu_addr;
   output [3:0] 			dcram_we;
   output				biu_read;
   output				biu_write;
   output 				dcram_di_sel;
   output 				biu_do_sel;
   output				first_hit_ack;
   output				first_miss_ack;
   output				first_miss_err;
   output				burst;
   output				tag_we;
   output 				tag_valid;
   output [31:0] 			dc_addr;
   input 				dc_no_writethrough;
   output 				tag_dirty;
   input 				dirty;
   input [21-2:0] 		tag;
   input 				tag_v;   
   input 				dc_block_flush;
   input 				dc_block_writeback;
   input [31:0] 			spr_dat_i;
   output 				mtspr_dc_done;
   input 				spr_cswe;
   
   
   //
   // Internal wires and regs
   //
   reg [31:0] 				addr_r;
   reg [2:0] 				state;
   reg [4-1:0] 		cnt;
   reg 					hitmiss_eval;
   reg 					store;
   reg 					load;
   reg 					cache_inhibit;
   reg 					cache_miss;
   reg 					cache_dirty_needs_writeback;
   reg                                  did_early_load_ack;
   reg 					cache_spr_block_flush;
   reg 					cache_spr_block_writeback;
   reg 					cache_wb;   
   wire 				load_hit_ack;
   wire 				load_miss_ack;
   wire 				load_inhibit_ack;   
   wire 				store_hit_ack;
   wire 				store_hit_writethrough_ack;   
   wire 				store_miss_writethrough_ack;   
   wire 				store_inhibit_ack;
   wire 				store_miss_ack;
   wire 				dcram_we_after_line_load;
   wire 				dcram_we_during_line_load;
   wire 				tagram_we_end_of_loadstore_loop;
   wire 				tagram_dirty_bit_set;   
   wire 				writethrough;
   wire 				cache_inhibit_with_eval;
   wire [(4-1)-2:0]		next_addr_word;

   //
   // Cache inhibit
   //
   
   // Indicates whether cache is inhibited, during hitmiss_eval and after
   assign cache_inhibit_with_eval = (hitmiss_eval & dcqmem_ci_i) |
				    (!hitmiss_eval & cache_inhibit);
   
   //
   // Generate of DCRAM write enables
   //

   // WE when non-writethrough, and had to wait for a line to load.
   assign dcram_we_after_line_load = (state == 3'd3) &
				    dcqmem_we_i & !cache_dirty_needs_writeback &
				     !did_early_load_ack;

   // WE when receiving the data cache line
   assign dcram_we_during_line_load = (state == 3'd2) & load & 
				      biudata_valid;   
   
   assign dcram_we =(// Write when hit - make sure it is only when hit - could
		     // maybe be doing write through and don't want to corrupt
		     // cache lines corresponding to the writethrough addr_r.
		     ({4{store_hit_ack | store_hit_writethrough_ack}} |
		     // Write after load of line
		     {4{dcram_we_after_line_load}}) & 
		     dcqmem_sel_i		 ) |
		    // Write during load
		    {4{dcram_we_during_line_load}};

   //
   // Tag RAM signals
   //
   
   // WE to tag RAM when we finish loading a line.
   assign tagram_we_end_of_loadstore_loop = ((state==3'd2) & 
					     biudata_valid & !(|cnt));
   
    // Lines will never be dirty if always writethrough
   assign tagram_dirty_bit_set = 0;
    
   assign mtspr_dc_done = 1'b1;
   

   assign tag_dirty = tagram_dirty_bit_set;
   
   // WE to tag RAM
   assign tag_we = tagram_we_end_of_loadstore_loop |		    
                    tagram_dirty_bit_set | (state == 3'd6);
   

   // Valid bit
   // Set valid when end of line load, or marking dirty (is still valid)
   assign tag_valid = ( tagram_we_end_of_loadstore_loop & 
			(load | (store & cache_spr_block_writeback)) ) |
		      tagram_dirty_bit_set;


   
   //
   // BIU read and write
   //

   assign biu_read = // Bus read request when:
		     // 1) Have a miss and not dirty or a load with inhibit
		     ((state == 3'd1) &
		      (((hitmiss_eval & tagcomp_miss & !dirty & 
			 !(store & writethrough)) | 
			(load & cache_inhibit_with_eval)) & dcqmem_cycstb_i)) |
		     // 2) In the loop and loading
		     ((state == 3'd2) & load);
   

   assign biu_write = // Bus write request when:
		      // 1) Have a miss and dirty or store with inhibit
		      ((state == 3'd1) & 
		       (((hitmiss_eval & tagcomp_miss & dirty) | 
			 (store & writethrough)) | 
			(store & cache_inhibit_with_eval)) & dcqmem_cycstb_i) |
		      // 2) In the loop and storing
		      ((state == 3'd2) & store);
   
   //
   // Select for data to actual cache RAM (from LSU or BIU)
   //
   // Data to DCRAM - from external bus when loading (from IU when store)
   assign dcram_di_sel = load;
   // Data to external bus - always from IU except in case of bursting back
   //                        the line to memory. (1 selects DCRAM)
   assign biu_do_sel = (state == 3'd2) & store;

   // 3-bit wire for calculating next word of burst write, depending on
   // line size of data cache.
   assign next_addr_word =  addr_r[4-1:2] + 1;
   
   // Address to cache RAM (tag address also derived from this)   
   assign dc_addr =
		   // First check if we've got a block flush or WB op
		   ((dc_block_flush & !cache_spr_block_flush) | 
		   (dc_block_writeback & !cache_spr_block_writeback)) ? 
		   spr_dat_i :
		   (state==3'd5) ? addr_r:
		    // If no SPR action, then always put out address from LSU
		    (state==3'd0 | hitmiss_eval) ? lsu_addr :
		    // Next, if in writeback loop, when ACKed must immediately
		    // output next word address (the RAM address takes a cycle
		    // to increment, but it's needed immediately for burst)
		    // otherwise, output our registered address.
		    (state==3'd2 & biudata_valid & store ) ? 
		    {addr_r[31:4], next_addr_word, 2'b00} : addr_r;
   
    assign writethrough = 1;
    
   //
   // ACK generation for LSU
   //
   
   // ACK for when it's a cache hit
   assign first_hit_ack = load_hit_ack | store_hit_ack | 
			  store_hit_writethrough_ack | 
			  store_miss_writethrough_ack |
			  store_inhibit_ack | store_miss_ack ;

   // ACK for when it's a cache miss - load only, is used in MUX for data back
   //                                  LSU straight off external data bus. In
   //                                  this was is also used for cache inhibit
   //                                  loads.
   // first_hit_ack takes precedence over first_miss_ack
   assign first_miss_ack = ~first_hit_ack & (load_miss_ack | load_inhibit_ack);
   
   // ACK cache hit on load
   assign load_hit_ack = (state == 3'd1) & 
			 hitmiss_eval & !tagcomp_miss & !dcqmem_ci_i & load;
   
   // ACK cache hit on store, no writethrough
   assign store_hit_ack = (state == 3'd1) & 
			  hitmiss_eval  & !tagcomp_miss & !dcqmem_ci_i &
			  store & !writethrough;
   
   // ACK cache hit on store with writethrough
   assign store_hit_writethrough_ack = (state == 3'd1) & 
				       !cache_miss & !cache_inhibit &
				       store & writethrough & biudata_valid;
   
   // ACK cache miss on store with writethrough
   assign store_miss_writethrough_ack = (state == 3'd1) & 
					cache_miss & !cache_inhibit &
					store & writethrough & biudata_valid;
      
   // ACK store when cacheinhibit
   assign store_inhibit_ack = (state == 3'd1) &
			      store & cache_inhibit & biudata_valid;
   
   
   // Get the _early_ ack on first ACK back from wishbone during load only
   // Condition is that we're in the loop - that it's the first ack we get (can
   // tell from value of cnt), and we're loading a line to read from it (not
   // loading to write to it, in the case of a write without writethrough.)
   assign load_miss_ack =  ((state== 3'd2) & load &
			    (cnt==((1 << 4) - 4)) & biudata_valid & 
			    !(dcqmem_we_i & !writethrough));
   
   assign load_inhibit_ack = (state == 3'd1) &
			     load & cache_inhibit & biudata_valid;   
   
   // This will be case of write through disabled, and had to load a line.
   assign store_miss_ack = dcram_we_after_line_load;
            
   assign first_miss_err = biudata_error & dcqmem_cycstb_i;

   // Signal burst when in the load/store loop. We will always try to burst.
   assign burst = (state == 3'd2);

   //
   // Main DC FSM
   //
   always @(posedge clk or posedge rst) begin
      if (rst == (1'b1)) begin
	 state <=  3'd0;
	 addr_r <=  32'd0;
	 hitmiss_eval <=  1'b0;
	 store <=  1'b0;
	 load <=  1'b0;
	 cnt <=  4'd0;
         cache_miss <=  1'b0;
	 cache_dirty_needs_writeback <= 1'b0;
	 cache_inhibit <=  1'b0;
	 did_early_load_ack <= 1'b0;
	 cache_spr_block_flush <= 1'b0;
	 cache_spr_block_writeback <= 1'b0;
      end
      else
	case (state)	// synopsys parallel_case
	  
          3'd0 : begin
	     if (dc_en & (dc_block_flush | dc_block_writeback))
	       begin
		  cache_spr_block_flush <= dc_block_flush;
		  cache_spr_block_writeback <= dc_block_writeback;
		  hitmiss_eval <= 1'b1;
		  state <= 3'd5;
		  addr_r <=  spr_dat_i;
	       end
	     else if (dc_en & dcqmem_cycstb_i)
	       begin
		  state <= 3'd1;
		  hitmiss_eval <=  1'b1;
		  store <=  dcqmem_we_i;
		  load <=  !dcqmem_we_i;
	       end
	     
	     
          end // case: `OR1200_DCFSM_IDLE
	  
          3'd1: begin
	     hitmiss_eval <=  1'b0;
	     if (hitmiss_eval) begin
                cache_inhibit <=  dcqmem_ci_i; // Check for cache inhibit here
                cache_miss <=  tagcomp_miss;
		cache_dirty_needs_writeback <= dirty;
		addr_r <=  lsu_addr;
             end

	     // Evaluate any cache line load/stores in first cycle:
			     //
	     if (hitmiss_eval & tagcomp_miss & !(store & writethrough) &
		 !dcqmem_ci_i)
	       begin
		  // Miss - first either:
		  //  1) write back dirty line 
		  if (dirty) begin
		     // Address for writeback
		     addr_r <=  {tag, lsu_addr[12			-1	:2],2'd0};
		     load <= 1'b0;
		     store <= 1'b1;
		  end
		  //  2) load requested line
		  else begin
		     addr_r <=  lsu_addr;
		     load <= 1'b1;
		     store <= 1'b0;
		  end // else: !if(dirty)
		  state <= 3'd2;		  
		  // Set the counter for the burst accesses
		  cnt <=  ((1 << 4) - 4);
	       end
             else if (// Strobe goes low
		      !dcqmem_cycstb_i |
		      // Cycle finishes
		      (!hitmiss_eval & (biudata_valid | biudata_error)) |
		      // Cache hit in first cycle....
		      (hitmiss_eval & !tagcomp_miss & !dcqmem_ci_i &
		      // .. and you're not doing a writethrough store..
		      !(store & writethrough))) begin
                state <=  3'd0;
                load <=  1'b0;
		store <= 1'b0;
		cache_inhibit <= 1'b0;
		cache_dirty_needs_writeback <= 1'b0;
             end	     
          end // case: `OR1200_DCFSM_CLOADSTORE	  
	  
          3'd2 : begin // loop/abort	     
             if (!dc_en| biudata_error) begin
                state <=  3'd0;
                load <=  1'b0;
		store <= 1'b0;
		cnt <= 4'd0;
             end
             if (biudata_valid & (|cnt)) begin
                cnt <=  cnt - 4;
                addr_r[4-1:2] <=  addr_r[4-1:2] + 1;
             end
	     else if (biudata_valid & !(|cnt)) begin
		state <= 3'd3;
		addr_r <=  lsu_addr;
		load <= 1'b0;
		store <= 1'b0;
	     end

	     // Track if we did an early ack during a load
	     if (load_miss_ack)
	       did_early_load_ack <= 1'b1;
	     

          end // case: `OR1200_DCFSM_LOOP2
	  
	  3'd3: begin // figure out next step
	     if (cache_dirty_needs_writeback) begin
		// Just did store of the dirty line so now load new one
		load <= 1'b1;
		// Set the counter for the burst accesses
		cnt <=  ((1 << 4) - 4);
		// Address of line to be loaded
		addr_r <=  lsu_addr;
		cache_dirty_needs_writeback <= 1'b0;
		state <= 3'd2;
	     end // if (cache_dirty_needs_writeback)
	     else if (cache_spr_block_flush | cache_spr_block_writeback) begin
		// Just wrote back the line to memory, we're finished.
		cache_spr_block_flush <= 1'b0;
		cache_spr_block_writeback <= 1'b0;
		state <= 3'd7;
	     end
	     else begin
		// Just loaded a new line, finish up
		did_early_load_ack <= 1'b0;
		state <= 3'd4;
	     end
	  end // case: `OR1200_DCFSM_LOOP3

	  3'd4: begin
	     state <=  3'd0;
	  end

	  3'd5: begin
	     hitmiss_eval <= 1'b0;
	     if (hitmiss_eval & !tag_v)
	       begin
		  // Not even cached, just ignore
		  cache_spr_block_flush <= 1'b0;
		  cache_spr_block_writeback <= 1'b0;
		  state <=  3'd7;
	       end
	     else if (hitmiss_eval & tag_v)
	       begin
		  // Tag is valid - what do we do?
		  if ((cache_spr_block_flush | cache_spr_block_writeback) & 
		      dirty) begin
		     // Need to writeback
		     // Address for writeback (spr_dat_i has already changed so
		     // use line number from addr_r)
		     addr_r <=  {tag, addr_r[12			-1	:2],2'd0};
		     load <= 1'b0;
		     store <= 1'b1;
		     state <= 3'd2;		  
		     // Set the counter for the burst accesses
		     cnt <=  ((1 << 4) - 4);
		  end
		  else if (cache_spr_block_flush & !dirty)
		    begin
		       // Line not dirty, just need to invalidate
		       state <=  3'd6;
		    end // else: !if(dirty)
		  else if (cache_spr_block_writeback & !dirty)
		    begin
		       // Nothing to do - line is valid but not dirty
		       cache_spr_block_writeback <= 1'b0;
		       state <=  3'd7;
		    end
	  end // if (hitmiss_eval & tag_v)
	  end
	  3'd6: begin
	     cache_spr_block_flush <= 1'b0;
	     // Wait until SPR CS goes low before going back to idle
	     if (!spr_cswe)
	       state <=  3'd0;
	  end
	  3'd7: begin
	     // Wait until SPR CS goes low before going back to idle
	     if (!spr_cswe)
	       state <=  3'd0;
	  end

	endcase // case (state)
      
   end // always @ (posedge clk or `OR1200_RST_EVENT rst)
   

endmodule
