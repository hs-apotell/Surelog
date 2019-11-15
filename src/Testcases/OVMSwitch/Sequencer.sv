////////////////////////////////////////////////
////s~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~s////
////s           www.testbench.in           s////
////s                                      s////
////s              OVM Tutorial            s////
////s                                      s////
////s            gopi@testbench.in          s////
////s~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~s////
//////////////////////////////////////////////// 
`ifndef GUARD_SEQUENCER
`define GUARD_SEQUENCER

class Sequencer extends ovm_sequencer #(Packet);

     Configuration cfg;
   
    `ovm_sequencer_utils(Sequencer)
  
    function new (string name, ovm_component parent);
        super.new(name, parent);
        `ovm_update_sequence_lib_and_item(Packet)
    endfunction : new
  
  
    function void end_of_elaboration();
        ovm_object tmp;
        assert(get_config_object("Configuration",tmp));
        $cast(cfg,tmp);
    endfunction

endclass : Sequencer

`endif

