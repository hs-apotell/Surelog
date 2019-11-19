
// Generated from /home/alain/Surelog/grammar/SV3_1aParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  SV3_1aParser : public antlr4::Parser {
public:
  enum {
    QMARK = 1, TICK_b0 = 2, TICK_b1 = 3, TICK_B0 = 4, TICK_B1 = 5, TICK_0 = 6, 
    TICK_1 = 7, ONE_TICK_b0 = 8, ONE_TICK_b1 = 9, ONE_TICK_bx = 10, ONE_TICK_bX = 11, 
    ONE_TICK_B0 = 12, ONE_TICK_B1 = 13, ONE_TICK_Bx = 14, ONE_TICK_BX = 15, 
    Pound_delay = 16, Integral_number = 17, Real_number = 18, String = 19, 
    One_line_comment = 20, Block_comment = 21, SLLINE = 22, ASSOCIATIVE_UNSPECIFIED = 23, 
    ATSTAR = 24, AT_PARENS_STAR = 25, White_space = 26, INCLUDE = 27, LIBRARY = 28, 
    INCDIR = 29, COMMA = 30, SEMICOLUMN = 31, COLUMNCOLUMN = 32, COLUMN = 33, 
    DESIGN = 34, DOT = 35, DEFAULT = 36, INSTANCE = 37, CELL = 38, LIBLIST = 39, 
    USE = 40, MODULE = 41, ENDMODULE = 42, OPEN_PARENS = 43, CLOSE_PARENS = 44, 
    STAR = 45, EXTERN = 46, MACROMODULE = 47, INTERFACE = 48, ENDINTERFACE = 49, 
    PROGRAM = 50, ENDPROGRAM = 51, VIRTUAL = 52, CLASS = 53, ENDCLASS = 54, 
    EXTENDS = 55, PACKAGE = 56, ENDPACKAGE = 57, TIMEUNIT = 58, TIMEPRECISION = 59, 
    CHECKER = 60, ENDCHECKER = 61, CONFIG = 62, ENDCONFIG = 63, TYPE = 64, 
    UNTYPED = 65, INPUT = 66, OUTPUT = 67, INOUT = 68, REF = 69, CLOCKING = 70, 
    DEFPARAM = 71, BIND = 72, FORKJOIN = 73, CONST = 74, FUNCTION = 75, 
    NEW = 76, STATIC = 77, PROTECTED = 78, LOCAL = 79, RAND = 80, RANDC = 81, 
    SUPER = 82, ENDFUNCTION = 83, CONSTRAINT = 84, OPEN_CURLY = 85, CLOSE_CURLY = 86, 
    SOLVE = 87, BEFORE = 88, IMPLY = 89, IF = 90, ELSE = 91, FOREACH = 92, 
    ASSIGN_VALUE = 93, AUTOMATIC = 94, LOCALPARAM = 95, PARAMETER = 96, 
    SPECPARAM = 97, IMPORT = 98, GENVAR = 99, VECTORED = 100, SCALARED = 101, 
    TYPEDEF = 102, ENUM = 103, STRUCT = 104, UNION = 105, PACKED = 106, 
    STRING = 107, CHANDLE = 108, EVENT = 109, OPEN_BRACKET = 110, CLOSE_BRACKET = 111, 
    BYTE = 112, SHORTINT = 113, INT = 114, LONGINT = 115, INTEGER = 116, 
    TIME = 117, BIT = 118, LOGIC = 119, REG = 120, SHORTREAL = 121, REAL = 122, 
    REALTIME = 123, NEXTTIME = 124, S_NEXTTIME = 125, S_ALWAYS = 126, UNTIL_WITH = 127, 
    S_UNTIL_WITH = 128, ACCEPT_ON = 129, REJECT_ON = 130, SYNC_ACCEPT_ON = 131, 
    SYNC_REJECT_ON = 132, EVENTUALLY = 133, S_EVENTUALLY = 134, SUPPLY0 = 135, 
    SUPPLY1 = 136, TRI = 137, TRIAND = 138, TRIOR = 139, TRI0 = 140, TRI1 = 141, 
    WIRE = 142, UWIRE = 143, WAND = 144, WOR = 145, TRIREG = 146, SIGNED = 147, 
    UNSIGNED = 148, INTERCONNECT = 149, VAR = 150, VOID = 151, HIGHZ0 = 152, 
    HIGHZ1 = 153, STRONG = 154, WEAK = 155, STRONG0 = 156, PULL0 = 157, 
    WEAK0 = 158, STRONG1 = 159, PULL1 = 160, WEAK1 = 161, SMALL = 162, MEDIUM = 163, 
    LARGE = 164, PATHPULSE = 165, DOLLAR = 166, EXPORT = 167, CONTEXT = 168, 
    PURE = 169, IMPLEMENTS = 170, ENDTASK = 171, PLUSPLUS = 172, PLUS = 173, 
    MINUSMINUS = 174, MINUS = 175, STARCOLUMNCOLUMNSTAR = 176, STARSTAR = 177, 
    DIV = 178, PERCENT = 179, EQUIV = 180, NOTEQUAL = 181, LESS = 182, LESS_EQUAL = 183, 
    GREATER = 184, EQUIVALENCE = 185, GREATER_EQUAL = 186, MODPORT = 187, 
    DOLLAR_UNIT = 188, OPEN_PARENS_STAR = 189, STAR_CLOSE_PARENS = 190, 
    ASSERT = 191, PROPERTY = 192, ASSUME = 193, COVER = 194, EXPECT = 195, 
    ENDPROPERTY = 196, DISABLE = 197, IFF = 198, OVERLAP_IMPLY = 199, NON_OVERLAP_IMPLY = 200, 
    NOT = 201, OR = 202, AND = 203, SEQUENCE = 204, ENDSEQUENCE = 205, INTERSECT = 206, 
    FIRST_MATCH = 207, THROUGHOUT = 208, WITHIN = 209, POUNDPOUND = 210, 
    OVERLAPPED = 211, NONOVERLAPPED = 212, POUND = 213, CONSECUTIVE_REP = 214, 
    NON_CONSECUTIVE_REP = 215, GOTO_REP = 216, DIST = 217, COVERGROUP = 218, 
    ENDGROUP = 219, OPTION_DOT = 220, TYPE_OPTION_DOT = 221, ATAT = 222, 
    BEGIN = 223, END = 224, WILDCARD = 225, BINS = 226, ILLEGAL_BINS = 227, 
    IGNORE_BINS = 228, TRANSITION_OP = 229, BANG = 230, SOFT = 231, UNTIL = 232, 
    S_UNTIL = 233, IMPLIES = 234, LOGICAL_AND = 235, LOGICAL_OR = 236, BINSOF = 237, 
    PULLDOWN = 238, PULLUP = 239, CMOS = 240, RCMOS = 241, BUFIF0 = 242, 
    BUFIF1 = 243, NOTIF0 = 244, NOTIF1 = 245, NMOS = 246, PMOS = 247, RNMOS = 248, 
    RPMOS = 249, NAND = 250, NOR = 251, XOR = 252, XNOR = 253, BUF = 254, 
    TRANIF0 = 255, TRANIF1 = 256, RTRANIF1 = 257, RTRANIF0 = 258, TRAN = 259, 
    RTRAN = 260, DOTSTAR = 261, GENERATE = 262, ENDGENERATE = 263, CASE = 264, 
    ENDCASE = 265, FOR = 266, GLOBAL = 267, PRIMITIVE = 268, ENDPRIMITIVE = 269, 
    TABLE = 270, ENDTABLE = 271, INITIAL = 272, ASSIGN = 273, ALIAS = 274, 
    ALWAYS = 275, ALWAYS_COMB = 276, ALWAYS_LATCH = 277, ALWAYS_FF = 278, 
    ADD_ASSIGN = 279, SUB_ASSIGN = 280, MULT_ASSIGN = 281, DIV_ASSIGN = 282, 
    MODULO_ASSIGN = 283, BITW_AND_ASSIGN = 284, BITW_OR_ASSIGN = 285, BITW_XOR_ASSIGN = 286, 
    BITW_LEFT_SHIFT_ASSIGN = 287, BITW_RIGHT_SHIFT_ASSIGN = 288, DEASSIGN = 289, 
    FORCE = 290, RELEASE = 291, FORK = 292, JOIN = 293, JOIN_ANY = 294, 
    JOIN_NONE = 295, REPEAT = 296, AT = 297, RETURN = 298, BREAK = 299, 
    CONTINUE = 300, WAIT = 301, WAIT_ORDER = 302, UNIQUE = 303, UNIQUE0 = 304, 
    PRIORITY = 305, MATCHES = 306, CASEZ = 307, CASEX = 308, RANDCASE = 309, 
    TAGGED = 310, FOREVER = 311, WHILE = 312, DO = 313, RESTRICT = 314, 
    LET = 315, TICK = 316, ENDCLOCKING = 317, RANDSEQUENCE = 318, SHIFT_RIGHT = 319, 
    SHIFT_LEFT = 320, WITH = 321, INC_PART_SELECT_OP = 322, DEC_PART_SELECT_OP = 323, 
    INSIDE = 324, NULL_KEYWORD = 325, THIS = 326, DOLLAR_ROOT = 327, RANDOMIZE = 328, 
    FINAL = 329, TASK = 330, COVERPOINT = 331, CROSS = 332, POSEDGE = 333, 
    NEGEDGE = 334, SPECIFY = 335, ENDSPECIFY = 336, PULSESTYLE_ONEVENT = 337, 
    PULSESTYLE_ONDETECT = 338, SHOWCANCELLED = 339, NOSHOWCANCELLED = 340, 
    IFNONE = 341, SAMPLE = 342, EDGE = 343, NON_BLOCKING_TRIGGER_EVENT_OP = 344, 
    ARITH_SHIFT_RIGHT = 345, ARITH_SHIFT_LEFT = 346, ARITH_SHIFT_LEFT_ASSIGN = 347, 
    ARITH_SHIFT_RIGHT_ASSIGN = 348, FOUR_STATE_LOGIC_EQUAL = 349, FOUR_STATE_LOGIC_NOTEQUAL = 350, 
    BINARY_WILDCARD_EQUAL = 351, BINARY_WILDCARD_NOTEQUAL = 352, FULL_CONN_OP = 353, 
    COND_PRED_OP = 354, BITW_AND = 355, BITW_OR = 356, REDUCTION_NOR = 357, 
    REDUCTION_NAND = 358, REDUCTION_XNOR1 = 359, WILD_EQUAL_OP = 360, WILD_NOTEQUAL_OP = 361, 
    ASSIGN_OP = 362, NETTYPE = 363, Escaped_identifier = 364, TILDA = 365, 
    BITW_XOR = 366, REDUCTION_XNOR2 = 367, Simple_identifier = 368, TICK_LINE = 369, 
    TICK_TIMESCALE = 370, TICK_BEGIN_KEYWORDS = 371, TICK_END_KEYWORDS = 372, 
    TICK_UNCONNECTED_DRIVE = 373, TICK_NOUNCONNECTED_DRIVE = 374, TICK_CELLDEFINE = 375, 
    TICK_ENDCELLDEFINE = 376, TICK_DEFAULT_NETTYPE = 377, TICK_DEFAULT_DECAY_TIME = 378, 
    TICK_DEFAULT_TRIREG_STRENGTH = 379, TICK_DELAY_MODE_DISTRIBUTED = 380, 
    TICK_DELAY_MODE_PATH = 381, TICK_DELAY_MODE_UNIT = 382, TICK_DELAY_MODE_ZERO = 383, 
    TICK_ACCELERATE = 384, TICK_NOACCELERATE = 385, TICK_PROTECT = 386, 
    TICK_DISABLE_PORTFAULTS = 387, TICK_ENABLE_PORTFAULTS = 388, TICK_NOSUPPRESS_FAULTS = 389, 
    TICK_SUPPRESS_FAULTS = 390, TICK_SIGNED = 391, TICK_UNSIGNED = 392, 
    TICK_ENDPROTECT = 393, TICK_PROTECTED = 394, TICK_ENDPROTECTED = 395, 
    TICK_EXPAND_VECTORNETS = 396, TICK_NOEXPAND_VECTORNETS = 397, TICK_AUTOEXPAND_VECTORNETS = 398, 
    TICK_REMOVE_GATENAME = 399, TICK_NOREMOVE_GATENAMES = 400, TICK_REMOVE_NETNAME = 401, 
    TICK_NOREMOVE_NETNAMES = 402, ONESTEP = 403, TICK_USELIB = 404, TICK_PRAGMA = 405, 
    BACK_TICK = 406, SURELOG_MACRO_NOT_DEFINED = 407
  };

  enum {
    RuleTop_level_rule = 0, RuleTop_level_library_rule = 1, RuleLibrary_text = 2, 
    RuleLibrary_descriptions = 3, RuleLibrary_declaration = 4, RuleFile_path_spec = 5, 
    RuleInclude_statement = 6, RuleSource_text = 7, RuleNull_rule = 8, RuleDescription = 9, 
    RuleModule_nonansi_header = 10, RuleModule_ansi_header = 11, RuleModule_declaration = 12, 
    RuleEndmodule = 13, RuleModule_keyword = 14, RuleInterface_nonansi_header = 15, 
    RuleInterface_ansi_header = 16, RuleInterface_declaration = 17, RuleEndinterface = 18, 
    RuleProgram_nonansi_header = 19, RuleProgram_ansi_header = 20, RuleEndchecker = 21, 
    RuleChecker_declaration = 22, RuleProgram_declaration = 23, RuleEndprogram = 24, 
    RuleClass_declaration = 25, RuleEndclass = 26, RuleInterface_class_type = 27, 
    RuleInterface_class_declaration = 28, RuleInterface_class_item = 29, 
    RuleInterface_class_method = 30, RuleEndpackage = 31, RulePackage_declaration = 32, 
    RuleTimeunits_declaration = 33, RuleParameter_port_list = 34, RuleParameter_port_declaration = 35, 
    RuleList_of_ports = 36, RuleList_of_port_declarations = 37, RulePort_declaration = 38, 
    RulePort = 39, RulePort_expression = 40, RulePort_reference = 41, RulePort_direction = 42, 
    RuleNet_port_header = 43, RuleVariable_port_header = 44, RuleInterface_port_header = 45, 
    RuleAnsi_port_declaration = 46, RuleElaboration_system_task = 47, RuleModule_common_item = 48, 
    RuleModule_item = 49, RuleModule_or_generate_item = 50, RuleModule_or_generate_item_declaration = 51, 
    RuleNon_port_module_item = 52, RuleParameter_override = 53, RuleBind_directive = 54, 
    RuleBind_instantiation = 55, RuleInterface_or_generate_item = 56, RuleExtern_tf_declaration = 57, 
    RuleInterface_item = 58, RuleNon_port_interface_item = 59, RuleProgram_item = 60, 
    RuleNon_port_program_item = 61, RuleProgram_generate_item = 62, RuleChecker_port_list = 63, 
    RuleChecker_port_item = 64, RuleChecker_or_generate_item = 65, RuleChecker_or_generate_item_declaration = 66, 
    RuleChecker_generate_item = 67, RuleClass_item = 68, RuleClass_property = 69, 
    RulePure_virtual_qualifier = 70, RuleExtern_qualifier = 71, RuleClass_method = 72, 
    RuleClass_constructor_prototype = 73, RuleClass_constraint = 74, RuleClass_item_qualifier = 75, 
    RuleProperty_qualifier = 76, RuleMethod_qualifier = 77, RuleMethod_prototype = 78, 
    RuleSuper_dot_new = 79, RuleClass_constructor_declaration = 80, RuleConstraint_declaration = 81, 
    RuleConstraint_block = 82, RuleConstraint_block_item = 83, RuleSolve_before_list = 84, 
    RuleConstraint_primary = 85, RuleConstraint_expression = 86, RuleUniqueness_constraint = 87, 
    RuleConstraint_set = 88, RuleDist_list = 89, RuleDist_item = 90, RuleDist_weight = 91, 
    RuleConstraint_prototype = 92, RuleExtern_constraint_declaration = 93, 
    RuleIdentifier_list = 94, RulePackage_item = 95, RulePackage_or_generate_item_declaration = 96, 
    RuleAnonymous_program = 97, RuleAnonymous_program_item = 98, RuleLocal_parameter_declaration = 99, 
    RuleParameter_declaration = 100, RuleSpecparam_declaration = 101, RuleInout_declaration = 102, 
    RuleInput_declaration = 103, RuleOutput_declaration = 104, RuleInterface_port_declaration = 105, 
    RuleRef_declaration = 106, RuleData_declaration = 107, RuleVariable_declaration = 108, 
    RulePackage_import_declaration = 109, RulePackage_import_item = 110, 
    RulePackage_export_declaration = 111, RuleGenvar_declaration = 112, 
    RuleNet_declaration = 113, RuleType_declaration = 114, RuleEnum_keyword = 115, 
    RuleStruct_keyword = 116, RuleUnion_keyword = 117, RuleClass_keyword = 118, 
    RuleInterface_class_keyword = 119, RuleNet_type_declaration = 120, RuleLifetime = 121, 
    RuleCasting_type = 122, RuleData_type = 123, RulePacked_keyword = 124, 
    RuleString_type = 125, RuleString_value = 126, RuleChandle_type = 127, 
    RuleEvent_type = 128, RuleConst_type = 129, RuleData_type_or_implicit = 130, 
    RuleImplicit_data_type = 131, RuleEnum_base_type = 132, RuleEnum_name_declaration = 133, 
    RuleClass_scope = 134, RuleClass_type = 135, RuleInteger_type = 136, 
    RuleInteger_atom_type = 137, RuleInteger_vector_type = 138, RuleNon_integer_type = 139, 
    RuleNet_type = 140, RuleNet_port_type = 141, RuleVariable_port_type = 142, 
    RuleVar_data_type = 143, RuleSigning = 144, RuleSimple_type = 145, RuleRandom_qualifier = 146, 
    RuleStruct_union_member = 147, RuleData_type_or_void = 148, RuleStruct_union = 149, 
    RuleTagged_keyword = 150, RuleType_reference = 151, RuleDrive_strength = 152, 
    RuleStrength0 = 153, RuleStrength1 = 154, RuleCharge_strength = 155, 
    RuleDelay3 = 156, RuleDelay2 = 157, RulePound_delay_value = 158, RuleDelay_value = 159, 
    RuleList_of_defparam_assignments = 160, RuleList_of_interface_identifiers = 161, 
    RuleList_of_net_decl_assignments = 162, RuleList_of_param_assignments = 163, 
    RuleList_of_port_identifiers = 164, RuleList_of_specparam_assignments = 165, 
    RuleList_of_tf_variable_identifiers = 166, RuleList_of_type_assignments = 167, 
    RuleList_of_variable_decl_assignments = 168, RuleList_of_variable_identifiers = 169, 
    RuleList_of_variable_port_identifiers = 170, RuleList_of_virtual_interface_decl = 171, 
    RuleDefparam_assignment = 172, RuleNet_decl_assignment = 173, RuleParam_assignment = 174, 
    RuleSpecparam_assignment = 175, RulePulse_control_specparam = 176, RuleVariable_decl_assignment = 177, 
    RuleClass_new = 178, RuleDynamic_array_new = 179, RuleUnpacked_dimension = 180, 
    RulePacked_dimension = 181, RuleAssociative_dimension = 182, RuleVariable_dimension = 183, 
    RuleQueue_dimension = 184, RuleUnsized_dimension = 185, RuleFunction_data_type = 186, 
    RuleFunction_data_type_or_implicit = 187, RuleFunction_declaration = 188, 
    RuleEndfunction = 189, RuleFunction_body_declaration = 190, RuleFunction_prototype = 191, 
    RuleDpi_import_export = 192, RuleContext_keyword = 193, RuleFunction_name_decl = 194, 
    RuleTask_name_decl = 195, RulePure_keyword = 196, RuleTask_declaration = 197, 
    RuleEndtask = 198, RuleTask_body_declaration = 199, RuleTf_item_declaration = 200, 
    RuleTf_port_list = 201, RuleTf_port_item = 202, RuleTf_port_direction = 203, 
    RuleTf_port_declaration = 204, RuleTask_prototype = 205, RuleBlock_item_declaration = 206, 
    RuleOverload_declaration = 207, RuleOverload_operator = 208, RuleOverload_proto_formals = 209, 
    RuleVirtual_interface_declaration = 210, RuleModport_item = 211, RuleModport_ports_declaration = 212, 
    RuleModport_simple_ports_declaration = 213, RuleModport_simple_port = 214, 
    RuleModport_hierarchical_ports_declaration = 215, RuleModport_tf_ports_declaration = 216, 
    RuleModport_tf_port = 217, RuleConcurrent_assertion_item = 218, RuleConcurrent_assertion_statement = 219, 
    RuleAssert_property_statement = 220, RuleAssume_property_statement = 221, 
    RuleCover_property_statement = 222, RuleExpect_property_statement = 223, 
    RuleCover_sequence_statement = 224, RuleRestrict_property_statement = 225, 
    RuleProperty_instance = 226, RuleProperty_actual_arg = 227, RuleConcurrent_assertion_item_declaration = 228, 
    RuleAssertion_item_declaration = 229, RuleEndproperty = 230, RuleProperty_declaration = 231, 
    RuleProperty_formal_type = 232, RuleProperty_spec = 233, RuleEndcase = 234, 
    RuleProperty_expr = 235, RuleProperty_case_item = 236, RuleEndsequence = 237, 
    RuleSequence_declaration = 238, RuleSequence_expr = 239, RuleCycle_delay_range = 240, 
    RuleSequence_method_call = 241, RuleSequence_match_item = 242, RuleSequence_formal_type = 243, 
    RuleSequence_instance = 244, RuleSequence_list_of_arguments = 245, RuleSequence_actual_arg = 246, 
    RuleFormal_list_item = 247, RuleList_of_formals = 248, RuleActual_arg_list = 249, 
    RuleActual_arg_expr = 250, RuleBoolean_abbrev = 251, RuleConsecutive_repetition = 252, 
    RuleNon_consecutive_repetition = 253, RuleGoto_repetition = 254, RuleConst_or_range_expression = 255, 
    RuleCycle_delay_const_range_expression = 256, RuleExpression_or_dist = 257, 
    RuleAssertion_variable_declaration = 258, RuleLet_declaration = 259, 
    RuleLet_port_list = 260, RuleLet_port_item = 261, RuleLet_formal_type = 262, 
    RuleEndgroup = 263, RuleCovergroup_declaration = 264, RuleCoverage_spec_or_option = 265, 
    RuleCoverage_option = 266, RuleCoverage_spec = 267, RuleCoverage_event = 268, 
    RuleEnd = 269, RuleBlock_event_expression = 270, RuleHierarchical_btf_identifier = 271, 
    RuleCover_point = 272, RuleBins_or_empty = 273, RuleBins_or_options = 274, 
    RuleBins_keyword = 275, RuleRange_list = 276, RuleTrans_list = 277, 
    RuleTrans_set = 278, RuleTrans_range_list = 279, RuleRepeat_range = 280, 
    RuleCover_cross = 281, RuleList_of_cross_items = 282, RuleCross_item = 283, 
    RuleCross_body = 284, RuleCross_body_item = 285, RuleBins_selection_or_option = 286, 
    RuleBins_selection = 287, RuleSelect_expression = 288, RuleSelect_condition = 289, 
    RuleBins_expression = 290, RuleOpen_range_list = 291, RuleGate_instantiation = 292, 
    RuleCmos_switch_instance = 293, RuleEnable_gate_instance = 294, RuleMos_switch_instance = 295, 
    RuleN_input_gate_instance = 296, RuleN_output_gate_instance = 297, RulePass_switch_instance = 298, 
    RulePass_enable_switch_instance = 299, RulePull_gate_instance = 300, 
    RulePulldown_strength = 301, RulePullup_strength = 302, RuleCmos_switchtype = 303, 
    RuleEnable_gatetype = 304, RuleMos_switchtype = 305, RuleN_input_gatetype = 306, 
    RuleN_output_gatetype = 307, RulePass_en_switchtype = 308, RulePass_switchtype = 309, 
    RuleModule_instantiation = 310, RuleParameter_value_assignment = 311, 
    RuleList_of_parameter_assignments = 312, RuleOrdered_parameter_assignment = 313, 
    RuleNamed_parameter_assignment = 314, RuleHierarchical_instance = 315, 
    RuleName_of_instance = 316, RuleList_of_port_connections = 317, RuleOrdered_port_connection = 318, 
    RuleNamed_port_connection = 319, RuleInterface_instantiation = 320, 
    RuleProgram_instantiation = 321, RuleChecker_instantiation = 322, RuleList_of_checker_port_connections = 323, 
    RuleOrdered_checker_port_connection = 324, RuleNamed_checker_port_connection = 325, 
    RuleEndgenerate = 326, RuleGenerated_module_instantiation = 327, RuleGenerate_module_item = 328, 
    RuleGenerate_module_conditional_statement = 329, RuleGenerate_module_case_statement = 330, 
    RuleGenvar_module_case_item = 331, RuleGenerate_module_loop_statement = 332, 
    RuleGenvar_assignment = 333, RuleGenvar_decl_assignment = 334, RuleGenerate_module_named_block = 335, 
    RuleGenerate_module_block = 336, RuleGenerated_interface_instantiation = 337, 
    RuleGenerate_interface_item = 338, RuleGenerate_interface_conditional_statement = 339, 
    RuleGenerate_interface_case_statement = 340, RuleGenvar_interface_case_item = 341, 
    RuleGenerate_interface_loop_statement = 342, RuleGenerate_interface_named_block = 343, 
    RuleGenerate_interface_block = 344, RuleGenerate_region = 345, RuleLoop_generate_construct = 346, 
    RuleGenvar_initialization = 347, RuleGenvar_iteration = 348, RuleConditional_generate_construct = 349, 
    RuleIf_generate_construct = 350, RuleCase_generate_construct = 351, 
    RuleCase_generate_item = 352, RuleGenerate_block = 353, RuleGenerate_item = 354, 
    RuleUdp_nonansi_declaration = 355, RuleUdp_ansi_declaration = 356, RuleEndprimitive = 357, 
    RuleUdp_declaration = 358, RuleUdp_port_list = 359, RuleUdp_declaration_port_list = 360, 
    RuleUdp_port_declaration = 361, RuleUdp_output_declaration = 362, RuleUdp_input_declaration = 363, 
    RuleUdp_reg_declaration = 364, RuleUdp_body = 365, RuleEndtable = 366, 
    RuleCombinational_body = 367, RuleCombinational_entry = 368, RuleSequential_body = 369, 
    RuleUdp_initial_statement = 370, RuleInit_val = 371, RuleSequential_entry = 372, 
    RuleSeq_input_list = 373, RuleLevel_input_list = 374, RuleEdge_input_list = 375, 
    RuleEdge_indicator = 376, RuleNext_state = 377, RuleOutput_symbol = 378, 
    RuleLevel_symbol = 379, RuleEdge_symbol = 380, RuleUdp_instantiation = 381, 
    RuleUdp_instance = 382, RuleContinuous_assign = 383, RuleList_of_net_assignments = 384, 
    RuleList_of_variable_assignments = 385, RuleNet_alias = 386, RuleNet_assignment = 387, 
    RuleInitial_construct = 388, RuleAlways_construct = 389, RuleAlways_keyword = 390, 
    RuleBlocking_assignment = 391, RuleOperator_assignment = 392, RuleAssignment_operator = 393, 
    RuleNonblocking_assignment = 394, RuleProcedural_continuous_assignment = 395, 
    RuleVariable_assignment = 396, RuleAction_block = 397, RuleSeq_block = 398, 
    RulePar_block = 399, RuleJoin_keyword = 400, RuleJoin_any_keyword = 401, 
    RuleJoin_none_keyword = 402, RuleStatement_or_null = 403, RuleStatement = 404, 
    RuleStatement_item = 405, RuleFunction_statement_or_null = 406, RuleProcedural_timing_control_statement = 407, 
    RuleDelay_or_event_control = 408, RuleDelay_control = 409, RuleEvent_control = 410, 
    RuleEvent_expression = 411, RuleProcedural_timing_control = 412, RuleJump_statement = 413, 
    RuleFinal_construct = 414, RuleWait_statement = 415, RuleEvent_trigger = 416, 
    RuleDisable_statement = 417, RuleConditional_statement = 418, RuleUnique_priority = 419, 
    RuleCond_predicate = 420, RuleExpression_or_cond_pattern = 421, RuleCase_statement = 422, 
    RuleCase_keyword = 423, RuleCase_item = 424, RuleCase_pattern_item = 425, 
    RuleCase_inside_item = 426, RuleRandcase_statement = 427, RuleRandcase_item = 428, 
    RulePattern = 429, RuleAssignment_pattern = 430, RuleStructure_pattern_key = 431, 
    RuleArray_pattern_key = 432, RuleAssignment_pattern_key = 433, RuleAssignment_pattern_expression = 434, 
    RuleAssignment_pattern_expression_type = 435, RuleConstant_assignment_pattern_expression = 436, 
    RuleAssignment_pattern_net_lvalue = 437, RuleAssignment_pattern_variable_lvalue = 438, 
    RuleForever_keyword = 439, RuleRepeat_keyword = 440, RuleWhile_keyword = 441, 
    RuleLoop_statement = 442, RuleFor_initialization = 443, RuleFor_variable_declaration = 444, 
    RuleFor_step = 445, RuleFor_step_assignment = 446, RuleLoop_variables = 447, 
    RuleSubroutine_call_statement = 448, RuleAssertion_item = 449, RuleDeferred_immediate_assertion_item = 450, 
    RuleProcedural_assertion_statement = 451, RuleImmediate_assertion_statement = 452, 
    RuleSimple_immediate_assertion_statement = 453, RuleSimple_immediate_assert_statement = 454, 
    RuleSimple_immediate_assume_statement = 455, RuleSimple_immediate_cover_statement = 456, 
    RuleDeferred_immediate_assertion_statement = 457, RuleDeferred_immediate_assert_statement = 458, 
    RuleDeferred_immediate_assume_statement = 459, RuleDeferred_immediate_cover_statement = 460, 
    RuleEndclocking = 461, RuleClocking_declaration = 462, RuleClocking_event = 463, 
    RuleClocking_item = 464, RuleDefault_skew = 465, RuleClocking_direction = 466, 
    RuleList_of_clocking_decl_assign = 467, RuleClocking_decl_assign = 468, 
    RuleClocking_skew = 469, RuleEdge_identifier = 470, RuleClocking_drive = 471, 
    RuleCycle_delay = 472, RuleClockvar = 473, RuleClockvar_expression = 474, 
    RuleRandsequence_statement = 475, RuleProduction = 476, RuleRs_rule = 477, 
    RuleRs_production_list = 478, RuleRs_code_block = 479, RuleRs_prod = 480, 
    RuleProduction_item = 481, RuleRs_if_else = 482, RuleRs_repeat = 483, 
    RuleRs_case = 484, RuleRs_case_item = 485, RuleEndspecify = 486, RuleSpecify_block = 487, 
    RuleSpecify_item = 488, RulePulsestyle_declaration = 489, RuleShowcancelled_declaration = 490, 
    RulePath_declaration = 491, RuleSimple_path_declaration = 492, RuleParallel_path_description = 493, 
    RuleFull_path_description = 494, RuleList_of_path_inputs = 495, RuleList_of_path_outputs = 496, 
    RuleSpecify_input_terminal_descriptor = 497, RuleSpecify_output_terminal_descriptor = 498, 
    RulePath_delay_value = 499, RuleList_of_path_delay_expressions = 500, 
    RuleT_path_delay_expression = 501, RuleTrise_path_delay_expression = 502, 
    RuleTfall_path_delay_expression = 503, RuleTz_path_delay_expression = 504, 
    RuleT01_path_delay_expression = 505, RuleT10_path_delay_expression = 506, 
    RuleT0z_path_delay_expression = 507, RuleTz1_path_delay_expression = 508, 
    RuleT1z_path_delay_expression = 509, RuleTz0_path_delay_expression = 510, 
    RuleT0x_path_delay_expression = 511, RuleTx1_path_delay_expression = 512, 
    RuleT1x_path_delay_expression = 513, RuleTx0_path_delay_expression = 514, 
    RuleTxz_path_delay_expression = 515, RuleTzx_path_delay_expression = 516, 
    RulePath_delay_expression = 517, RuleEdge_sensitive_path_declaration = 518, 
    RuleParallel_edge_sensitive_path_description = 519, RuleFull_edge_sensitive_path_description = 520, 
    RuleState_dependent_path_declaration = 521, RuleSystem_timing_check = 522, 
    RuleDollar_setup_timing_check = 523, RuleDollar_hold_timing_check = 524, 
    RuleDollar_setuphold_timing_check = 525, RuleDollar_recovery_timing_check = 526, 
    RuleDollar_removal_timing_check = 527, RuleDollar_recrem_timing_check = 528, 
    RuleDollar_skew_timing_check = 529, RuleDollar_timeskew_timing_check = 530, 
    RuleDollar_fullskew_timing_check = 531, RuleDollar_period_timing_check = 532, 
    RuleDollar_width_timing_check = 533, RuleDollar_nochange_timing_check = 534, 
    RuleDelayed_data = 535, RuleDelayed_reference = 536, RuleEnd_edge_offset = 537, 
    RuleEvent_based_flag = 538, RuleNotifier = 539, RuleReference_event = 540, 
    RuleRemain_active_flag = 541, RuleStamptime_condition = 542, RuleStart_edge_offset = 543, 
    RuleThreshold = 544, RuleTiming_check_limit = 545, RuleTiming_check_event = 546, 
    RuleControlled_timing_check_event = 547, RuleTiming_check_event_control = 548, 
    RuleSpecify_terminal_descriptor = 549, RuleEdge_control_specifier = 550, 
    RuleEdge_descriptor = 551, RuleTiming_check_condition = 552, RuleScalar_timing_check_condition = 553, 
    RuleScalar_constant = 554, RuleConcatenation = 555, RuleConstant_concatenation = 556, 
    RuleArray_member_label = 557, RuleConstant_multiple_concatenation = 558, 
    RuleModule_path_concatenation = 559, RuleModule_path_multiple_concatenation = 560, 
    RuleMultiple_concatenation = 561, RuleStreaming_concatenation = 562, 
    RuleStream_operator = 563, RuleSlice_size = 564, RuleStream_concatenation = 565, 
    RuleStream_expression = 566, RuleArray_range_expression = 567, RuleEmpty_queue = 568, 
    RuleSubroutine_call = 569, RuleList_of_arguments = 570, RuleMethod_call = 571, 
    RuleMethod_call_body = 572, RuleBuilt_in_method_call = 573, RuleArray_manipulation_call = 574, 
    RuleRandomize_call = 575, RuleMethod_call_root = 576, RuleArray_method_name = 577, 
    RuleUnique_call = 578, RuleAnd_call = 579, RuleOr_call = 580, RuleXor_call = 581, 
    RuleInc_or_dec_expression = 582, RuleConstant_expression = 583, RuleConstant_mintypmax_expression = 584, 
    RuleConstant_param_expression = 585, RuleParam_expression = 586, RuleConstant_range_expression = 587, 
    RuleConstant_part_select_range = 588, RuleConstant_range = 589, RuleConstant_indexed_range = 590, 
    RuleExpression = 591, RuleTagged_union_expression = 592, RuleValue_range = 593, 
    RuleMintypmax_expression = 594, RuleModule_path_expression = 595, RuleModule_path_mintypmax_expression = 596, 
    RuleRange_expression = 597, RulePart_select_range = 598, RuleIndexed_range = 599, 
    RuleConstant_primary = 600, RuleModule_path_primary = 601, RuleComplex_func_call = 602, 
    RulePrimary = 603, RuleThis_keyword = 604, RuleSuper_keyword = 605, 
    RuleDollar_keyword = 606, RuleDollar_root_keyword = 607, RuleThis_dot_super = 608, 
    RuleNull_keyword = 609, RuleTime_literal = 610, RuleTime_unit = 611, 
    RuleImplicit_class_handle = 612, RuleBit_select = 613, RuleSelect = 614, 
    RuleNonrange_select = 615, RuleConstant_bit_select = 616, RuleConstant_select = 617, 
    RulePrimary_literal = 618, RuleConstant_cast = 619, RuleCast = 620, 
    RuleNet_lvalue = 621, RuleVariable_lvalue = 622, RuleNonrange_variable_lvalue = 623, 
    RuleUnary_operator = 624, RuleBinary_operator = 625, RuleInc_or_dec_operator = 626, 
    RuleUnary_module_path_operator = 627, RuleBinary_module_path_operator = 628, 
    RuleNumber = 629, RuleUnbased_unsized_literal = 630, RuleAttribute_instance = 631, 
    RuleAttr_spec = 632, RuleAttr_name = 633, RuleHierarchical_identifier = 634, 
    RuleIdentifier = 635, RuleInterface_identifier = 636, RulePackage_scope = 637, 
    RulePs_identifier = 638, RulePs_or_hierarchical_identifier = 639, RulePs_or_hierarchical_array_identifier = 640, 
    RulePs_or_hierarchical_sequence_identifier = 641, RulePs_type_identifier = 642, 
    RuleSystem_task = 643, RuleSystem_task_names = 644, RuleTop_directives = 645, 
    RulePragma_directive = 646, RulePragma_expression = 647, RulePragma_value = 648, 
    RuleTimescale_directive = 649, RuleBegin_keywords_directive = 650, RuleEnd_keywords_directive = 651, 
    RuleUnconnected_drive_directive = 652, RuleNounconnected_drive_directive = 653, 
    RuleDefault_nettype_directive = 654, RuleUselib_directive = 655, RuleCelldefine_directive = 656, 
    RuleEndcelldefine_directive = 657, RuleProtect_directive = 658, RuleEndprotect_directive = 659, 
    RuleProtected_directive = 660, RuleEndprotected_directive = 661, RuleExpand_vectornets_directive = 662, 
    RuleNoexpand_vectornets_directive = 663, RuleAutoexpand_vectornets_directive = 664, 
    RuleDisable_portfaults_directive = 665, RuleEnable_portfaults_directive = 666, 
    RuleNosuppress_faults_directive = 667, RuleSuppress_faults_directive = 668, 
    RuleSigned_directive = 669, RuleUnsigned_directive = 670, RuleRemove_gatename_directive = 671, 
    RuleNoremove_gatenames_directive = 672, RuleRemove_netname_directive = 673, 
    RuleNoremove_netnames_directive = 674, RuleAccelerate_directive = 675, 
    RuleNoaccelerate_directive = 676, RuleDefault_trireg_strenght_directive = 677, 
    RuleDefault_decay_time_directive = 678, RuleDelay_mode_distributed_directive = 679, 
    RuleDelay_mode_path_directive = 680, RuleDelay_mode_unit_directive = 681, 
    RuleDelay_mode_zero_directive = 682, RuleSurelog_macro_not_defined = 683, 
    RuleSlline = 684, RuleEndconfig = 685, RuleConfig_declaration = 686, 
    RuleDesign_statement = 687, RuleConfig_rule_statement = 688, RuleDefault_clause = 689, 
    RuleInst_clause = 690, RuleInst_name = 691, RuleCell_clause = 692, RuleLiblist_clause = 693, 
    RuleUse_clause_config = 694, RuleUse_clause = 695
  };

  SV3_1aParser(antlr4::TokenStream *input);
  ~SV3_1aParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Top_level_ruleContext;
  class Top_level_library_ruleContext;
  class Library_textContext;
  class Library_descriptionsContext;
  class Library_declarationContext;
  class File_path_specContext;
  class Include_statementContext;
  class Source_textContext;
  class Null_ruleContext;
  class DescriptionContext;
  class Module_nonansi_headerContext;
  class Module_ansi_headerContext;
  class Module_declarationContext;
  class EndmoduleContext;
  class Module_keywordContext;
  class Interface_nonansi_headerContext;
  class Interface_ansi_headerContext;
  class Interface_declarationContext;
  class EndinterfaceContext;
  class Program_nonansi_headerContext;
  class Program_ansi_headerContext;
  class EndcheckerContext;
  class Checker_declarationContext;
  class Program_declarationContext;
  class EndprogramContext;
  class Class_declarationContext;
  class EndclassContext;
  class Interface_class_typeContext;
  class Interface_class_declarationContext;
  class Interface_class_itemContext;
  class Interface_class_methodContext;
  class EndpackageContext;
  class Package_declarationContext;
  class Timeunits_declarationContext;
  class Parameter_port_listContext;
  class Parameter_port_declarationContext;
  class List_of_portsContext;
  class List_of_port_declarationsContext;
  class Port_declarationContext;
  class PortContext;
  class Port_expressionContext;
  class Port_referenceContext;
  class Port_directionContext;
  class Net_port_headerContext;
  class Variable_port_headerContext;
  class Interface_port_headerContext;
  class Ansi_port_declarationContext;
  class Elaboration_system_taskContext;
  class Module_common_itemContext;
  class Module_itemContext;
  class Module_or_generate_itemContext;
  class Module_or_generate_item_declarationContext;
  class Non_port_module_itemContext;
  class Parameter_overrideContext;
  class Bind_directiveContext;
  class Bind_instantiationContext;
  class Interface_or_generate_itemContext;
  class Extern_tf_declarationContext;
  class Interface_itemContext;
  class Non_port_interface_itemContext;
  class Program_itemContext;
  class Non_port_program_itemContext;
  class Program_generate_itemContext;
  class Checker_port_listContext;
  class Checker_port_itemContext;
  class Checker_or_generate_itemContext;
  class Checker_or_generate_item_declarationContext;
  class Checker_generate_itemContext;
  class Class_itemContext;
  class Class_propertyContext;
  class Pure_virtual_qualifierContext;
  class Extern_qualifierContext;
  class Class_methodContext;
  class Class_constructor_prototypeContext;
  class Class_constraintContext;
  class Class_item_qualifierContext;
  class Property_qualifierContext;
  class Method_qualifierContext;
  class Method_prototypeContext;
  class Super_dot_newContext;
  class Class_constructor_declarationContext;
  class Constraint_declarationContext;
  class Constraint_blockContext;
  class Constraint_block_itemContext;
  class Solve_before_listContext;
  class Constraint_primaryContext;
  class Constraint_expressionContext;
  class Uniqueness_constraintContext;
  class Constraint_setContext;
  class Dist_listContext;
  class Dist_itemContext;
  class Dist_weightContext;
  class Constraint_prototypeContext;
  class Extern_constraint_declarationContext;
  class Identifier_listContext;
  class Package_itemContext;
  class Package_or_generate_item_declarationContext;
  class Anonymous_programContext;
  class Anonymous_program_itemContext;
  class Local_parameter_declarationContext;
  class Parameter_declarationContext;
  class Specparam_declarationContext;
  class Inout_declarationContext;
  class Input_declarationContext;
  class Output_declarationContext;
  class Interface_port_declarationContext;
  class Ref_declarationContext;
  class Data_declarationContext;
  class Variable_declarationContext;
  class Package_import_declarationContext;
  class Package_import_itemContext;
  class Package_export_declarationContext;
  class Genvar_declarationContext;
  class Net_declarationContext;
  class Type_declarationContext;
  class Enum_keywordContext;
  class Struct_keywordContext;
  class Union_keywordContext;
  class Class_keywordContext;
  class Interface_class_keywordContext;
  class Net_type_declarationContext;
  class LifetimeContext;
  class Casting_typeContext;
  class Data_typeContext;
  class Packed_keywordContext;
  class String_typeContext;
  class String_valueContext;
  class Chandle_typeContext;
  class Event_typeContext;
  class Const_typeContext;
  class Data_type_or_implicitContext;
  class Implicit_data_typeContext;
  class Enum_base_typeContext;
  class Enum_name_declarationContext;
  class Class_scopeContext;
  class Class_typeContext;
  class Integer_typeContext;
  class Integer_atom_typeContext;
  class Integer_vector_typeContext;
  class Non_integer_typeContext;
  class Net_typeContext;
  class Net_port_typeContext;
  class Variable_port_typeContext;
  class Var_data_typeContext;
  class SigningContext;
  class Simple_typeContext;
  class Random_qualifierContext;
  class Struct_union_memberContext;
  class Data_type_or_voidContext;
  class Struct_unionContext;
  class Tagged_keywordContext;
  class Type_referenceContext;
  class Drive_strengthContext;
  class Strength0Context;
  class Strength1Context;
  class Charge_strengthContext;
  class Delay3Context;
  class Delay2Context;
  class Pound_delay_valueContext;
  class Delay_valueContext;
  class List_of_defparam_assignmentsContext;
  class List_of_interface_identifiersContext;
  class List_of_net_decl_assignmentsContext;
  class List_of_param_assignmentsContext;
  class List_of_port_identifiersContext;
  class List_of_specparam_assignmentsContext;
  class List_of_tf_variable_identifiersContext;
  class List_of_type_assignmentsContext;
  class List_of_variable_decl_assignmentsContext;
  class List_of_variable_identifiersContext;
  class List_of_variable_port_identifiersContext;
  class List_of_virtual_interface_declContext;
  class Defparam_assignmentContext;
  class Net_decl_assignmentContext;
  class Param_assignmentContext;
  class Specparam_assignmentContext;
  class Pulse_control_specparamContext;
  class Variable_decl_assignmentContext;
  class Class_newContext;
  class Dynamic_array_newContext;
  class Unpacked_dimensionContext;
  class Packed_dimensionContext;
  class Associative_dimensionContext;
  class Variable_dimensionContext;
  class Queue_dimensionContext;
  class Unsized_dimensionContext;
  class Function_data_typeContext;
  class Function_data_type_or_implicitContext;
  class Function_declarationContext;
  class EndfunctionContext;
  class Function_body_declarationContext;
  class Function_prototypeContext;
  class Dpi_import_exportContext;
  class Context_keywordContext;
  class Function_name_declContext;
  class Task_name_declContext;
  class Pure_keywordContext;
  class Task_declarationContext;
  class EndtaskContext;
  class Task_body_declarationContext;
  class Tf_item_declarationContext;
  class Tf_port_listContext;
  class Tf_port_itemContext;
  class Tf_port_directionContext;
  class Tf_port_declarationContext;
  class Task_prototypeContext;
  class Block_item_declarationContext;
  class Overload_declarationContext;
  class Overload_operatorContext;
  class Overload_proto_formalsContext;
  class Virtual_interface_declarationContext;
  class Modport_itemContext;
  class Modport_ports_declarationContext;
  class Modport_simple_ports_declarationContext;
  class Modport_simple_portContext;
  class Modport_hierarchical_ports_declarationContext;
  class Modport_tf_ports_declarationContext;
  class Modport_tf_portContext;
  class Concurrent_assertion_itemContext;
  class Concurrent_assertion_statementContext;
  class Assert_property_statementContext;
  class Assume_property_statementContext;
  class Cover_property_statementContext;
  class Expect_property_statementContext;
  class Cover_sequence_statementContext;
  class Restrict_property_statementContext;
  class Property_instanceContext;
  class Property_actual_argContext;
  class Concurrent_assertion_item_declarationContext;
  class Assertion_item_declarationContext;
  class EndpropertyContext;
  class Property_declarationContext;
  class Property_formal_typeContext;
  class Property_specContext;
  class EndcaseContext;
  class Property_exprContext;
  class Property_case_itemContext;
  class EndsequenceContext;
  class Sequence_declarationContext;
  class Sequence_exprContext;
  class Cycle_delay_rangeContext;
  class Sequence_method_callContext;
  class Sequence_match_itemContext;
  class Sequence_formal_typeContext;
  class Sequence_instanceContext;
  class Sequence_list_of_argumentsContext;
  class Sequence_actual_argContext;
  class Formal_list_itemContext;
  class List_of_formalsContext;
  class Actual_arg_listContext;
  class Actual_arg_exprContext;
  class Boolean_abbrevContext;
  class Consecutive_repetitionContext;
  class Non_consecutive_repetitionContext;
  class Goto_repetitionContext;
  class Const_or_range_expressionContext;
  class Cycle_delay_const_range_expressionContext;
  class Expression_or_distContext;
  class Assertion_variable_declarationContext;
  class Let_declarationContext;
  class Let_port_listContext;
  class Let_port_itemContext;
  class Let_formal_typeContext;
  class EndgroupContext;
  class Covergroup_declarationContext;
  class Coverage_spec_or_optionContext;
  class Coverage_optionContext;
  class Coverage_specContext;
  class Coverage_eventContext;
  class EndContext;
  class Block_event_expressionContext;
  class Hierarchical_btf_identifierContext;
  class Cover_pointContext;
  class Bins_or_emptyContext;
  class Bins_or_optionsContext;
  class Bins_keywordContext;
  class Range_listContext;
  class Trans_listContext;
  class Trans_setContext;
  class Trans_range_listContext;
  class Repeat_rangeContext;
  class Cover_crossContext;
  class List_of_cross_itemsContext;
  class Cross_itemContext;
  class Cross_bodyContext;
  class Cross_body_itemContext;
  class Bins_selection_or_optionContext;
  class Bins_selectionContext;
  class Select_expressionContext;
  class Select_conditionContext;
  class Bins_expressionContext;
  class Open_range_listContext;
  class Gate_instantiationContext;
  class Cmos_switch_instanceContext;
  class Enable_gate_instanceContext;
  class Mos_switch_instanceContext;
  class N_input_gate_instanceContext;
  class N_output_gate_instanceContext;
  class Pass_switch_instanceContext;
  class Pass_enable_switch_instanceContext;
  class Pull_gate_instanceContext;
  class Pulldown_strengthContext;
  class Pullup_strengthContext;
  class Cmos_switchtypeContext;
  class Enable_gatetypeContext;
  class Mos_switchtypeContext;
  class N_input_gatetypeContext;
  class N_output_gatetypeContext;
  class Pass_en_switchtypeContext;
  class Pass_switchtypeContext;
  class Module_instantiationContext;
  class Parameter_value_assignmentContext;
  class List_of_parameter_assignmentsContext;
  class Ordered_parameter_assignmentContext;
  class Named_parameter_assignmentContext;
  class Hierarchical_instanceContext;
  class Name_of_instanceContext;
  class List_of_port_connectionsContext;
  class Ordered_port_connectionContext;
  class Named_port_connectionContext;
  class Interface_instantiationContext;
  class Program_instantiationContext;
  class Checker_instantiationContext;
  class List_of_checker_port_connectionsContext;
  class Ordered_checker_port_connectionContext;
  class Named_checker_port_connectionContext;
  class EndgenerateContext;
  class Generated_module_instantiationContext;
  class Generate_module_itemContext;
  class Generate_module_conditional_statementContext;
  class Generate_module_case_statementContext;
  class Genvar_module_case_itemContext;
  class Generate_module_loop_statementContext;
  class Genvar_assignmentContext;
  class Genvar_decl_assignmentContext;
  class Generate_module_named_blockContext;
  class Generate_module_blockContext;
  class Generated_interface_instantiationContext;
  class Generate_interface_itemContext;
  class Generate_interface_conditional_statementContext;
  class Generate_interface_case_statementContext;
  class Genvar_interface_case_itemContext;
  class Generate_interface_loop_statementContext;
  class Generate_interface_named_blockContext;
  class Generate_interface_blockContext;
  class Generate_regionContext;
  class Loop_generate_constructContext;
  class Genvar_initializationContext;
  class Genvar_iterationContext;
  class Conditional_generate_constructContext;
  class If_generate_constructContext;
  class Case_generate_constructContext;
  class Case_generate_itemContext;
  class Generate_blockContext;
  class Generate_itemContext;
  class Udp_nonansi_declarationContext;
  class Udp_ansi_declarationContext;
  class EndprimitiveContext;
  class Udp_declarationContext;
  class Udp_port_listContext;
  class Udp_declaration_port_listContext;
  class Udp_port_declarationContext;
  class Udp_output_declarationContext;
  class Udp_input_declarationContext;
  class Udp_reg_declarationContext;
  class Udp_bodyContext;
  class EndtableContext;
  class Combinational_bodyContext;
  class Combinational_entryContext;
  class Sequential_bodyContext;
  class Udp_initial_statementContext;
  class Init_valContext;
  class Sequential_entryContext;
  class Seq_input_listContext;
  class Level_input_listContext;
  class Edge_input_listContext;
  class Edge_indicatorContext;
  class Next_stateContext;
  class Output_symbolContext;
  class Level_symbolContext;
  class Edge_symbolContext;
  class Udp_instantiationContext;
  class Udp_instanceContext;
  class Continuous_assignContext;
  class List_of_net_assignmentsContext;
  class List_of_variable_assignmentsContext;
  class Net_aliasContext;
  class Net_assignmentContext;
  class Initial_constructContext;
  class Always_constructContext;
  class Always_keywordContext;
  class Blocking_assignmentContext;
  class Operator_assignmentContext;
  class Assignment_operatorContext;
  class Nonblocking_assignmentContext;
  class Procedural_continuous_assignmentContext;
  class Variable_assignmentContext;
  class Action_blockContext;
  class Seq_blockContext;
  class Par_blockContext;
  class Join_keywordContext;
  class Join_any_keywordContext;
  class Join_none_keywordContext;
  class Statement_or_nullContext;
  class StatementContext;
  class Statement_itemContext;
  class Function_statement_or_nullContext;
  class Procedural_timing_control_statementContext;
  class Delay_or_event_controlContext;
  class Delay_controlContext;
  class Event_controlContext;
  class Event_expressionContext;
  class Procedural_timing_controlContext;
  class Jump_statementContext;
  class Final_constructContext;
  class Wait_statementContext;
  class Event_triggerContext;
  class Disable_statementContext;
  class Conditional_statementContext;
  class Unique_priorityContext;
  class Cond_predicateContext;
  class Expression_or_cond_patternContext;
  class Case_statementContext;
  class Case_keywordContext;
  class Case_itemContext;
  class Case_pattern_itemContext;
  class Case_inside_itemContext;
  class Randcase_statementContext;
  class Randcase_itemContext;
  class PatternContext;
  class Assignment_patternContext;
  class Structure_pattern_keyContext;
  class Array_pattern_keyContext;
  class Assignment_pattern_keyContext;
  class Assignment_pattern_expressionContext;
  class Assignment_pattern_expression_typeContext;
  class Constant_assignment_pattern_expressionContext;
  class Assignment_pattern_net_lvalueContext;
  class Assignment_pattern_variable_lvalueContext;
  class Forever_keywordContext;
  class Repeat_keywordContext;
  class While_keywordContext;
  class Loop_statementContext;
  class For_initializationContext;
  class For_variable_declarationContext;
  class For_stepContext;
  class For_step_assignmentContext;
  class Loop_variablesContext;
  class Subroutine_call_statementContext;
  class Assertion_itemContext;
  class Deferred_immediate_assertion_itemContext;
  class Procedural_assertion_statementContext;
  class Immediate_assertion_statementContext;
  class Simple_immediate_assertion_statementContext;
  class Simple_immediate_assert_statementContext;
  class Simple_immediate_assume_statementContext;
  class Simple_immediate_cover_statementContext;
  class Deferred_immediate_assertion_statementContext;
  class Deferred_immediate_assert_statementContext;
  class Deferred_immediate_assume_statementContext;
  class Deferred_immediate_cover_statementContext;
  class EndclockingContext;
  class Clocking_declarationContext;
  class Clocking_eventContext;
  class Clocking_itemContext;
  class Default_skewContext;
  class Clocking_directionContext;
  class List_of_clocking_decl_assignContext;
  class Clocking_decl_assignContext;
  class Clocking_skewContext;
  class Edge_identifierContext;
  class Clocking_driveContext;
  class Cycle_delayContext;
  class ClockvarContext;
  class Clockvar_expressionContext;
  class Randsequence_statementContext;
  class ProductionContext;
  class Rs_ruleContext;
  class Rs_production_listContext;
  class Rs_code_blockContext;
  class Rs_prodContext;
  class Production_itemContext;
  class Rs_if_elseContext;
  class Rs_repeatContext;
  class Rs_caseContext;
  class Rs_case_itemContext;
  class EndspecifyContext;
  class Specify_blockContext;
  class Specify_itemContext;
  class Pulsestyle_declarationContext;
  class Showcancelled_declarationContext;
  class Path_declarationContext;
  class Simple_path_declarationContext;
  class Parallel_path_descriptionContext;
  class Full_path_descriptionContext;
  class List_of_path_inputsContext;
  class List_of_path_outputsContext;
  class Specify_input_terminal_descriptorContext;
  class Specify_output_terminal_descriptorContext;
  class Path_delay_valueContext;
  class List_of_path_delay_expressionsContext;
  class T_path_delay_expressionContext;
  class Trise_path_delay_expressionContext;
  class Tfall_path_delay_expressionContext;
  class Tz_path_delay_expressionContext;
  class T01_path_delay_expressionContext;
  class T10_path_delay_expressionContext;
  class T0z_path_delay_expressionContext;
  class Tz1_path_delay_expressionContext;
  class T1z_path_delay_expressionContext;
  class Tz0_path_delay_expressionContext;
  class T0x_path_delay_expressionContext;
  class Tx1_path_delay_expressionContext;
  class T1x_path_delay_expressionContext;
  class Tx0_path_delay_expressionContext;
  class Txz_path_delay_expressionContext;
  class Tzx_path_delay_expressionContext;
  class Path_delay_expressionContext;
  class Edge_sensitive_path_declarationContext;
  class Parallel_edge_sensitive_path_descriptionContext;
  class Full_edge_sensitive_path_descriptionContext;
  class State_dependent_path_declarationContext;
  class System_timing_checkContext;
  class Dollar_setup_timing_checkContext;
  class Dollar_hold_timing_checkContext;
  class Dollar_setuphold_timing_checkContext;
  class Dollar_recovery_timing_checkContext;
  class Dollar_removal_timing_checkContext;
  class Dollar_recrem_timing_checkContext;
  class Dollar_skew_timing_checkContext;
  class Dollar_timeskew_timing_checkContext;
  class Dollar_fullskew_timing_checkContext;
  class Dollar_period_timing_checkContext;
  class Dollar_width_timing_checkContext;
  class Dollar_nochange_timing_checkContext;
  class Delayed_dataContext;
  class Delayed_referenceContext;
  class End_edge_offsetContext;
  class Event_based_flagContext;
  class NotifierContext;
  class Reference_eventContext;
  class Remain_active_flagContext;
  class Stamptime_conditionContext;
  class Start_edge_offsetContext;
  class ThresholdContext;
  class Timing_check_limitContext;
  class Timing_check_eventContext;
  class Controlled_timing_check_eventContext;
  class Timing_check_event_controlContext;
  class Specify_terminal_descriptorContext;
  class Edge_control_specifierContext;
  class Edge_descriptorContext;
  class Timing_check_conditionContext;
  class Scalar_timing_check_conditionContext;
  class Scalar_constantContext;
  class ConcatenationContext;
  class Constant_concatenationContext;
  class Array_member_labelContext;
  class Constant_multiple_concatenationContext;
  class Module_path_concatenationContext;
  class Module_path_multiple_concatenationContext;
  class Multiple_concatenationContext;
  class Streaming_concatenationContext;
  class Stream_operatorContext;
  class Slice_sizeContext;
  class Stream_concatenationContext;
  class Stream_expressionContext;
  class Array_range_expressionContext;
  class Empty_queueContext;
  class Subroutine_callContext;
  class List_of_argumentsContext;
  class Method_callContext;
  class Method_call_bodyContext;
  class Built_in_method_callContext;
  class Array_manipulation_callContext;
  class Randomize_callContext;
  class Method_call_rootContext;
  class Array_method_nameContext;
  class Unique_callContext;
  class And_callContext;
  class Or_callContext;
  class Xor_callContext;
  class Inc_or_dec_expressionContext;
  class Constant_expressionContext;
  class Constant_mintypmax_expressionContext;
  class Constant_param_expressionContext;
  class Param_expressionContext;
  class Constant_range_expressionContext;
  class Constant_part_select_rangeContext;
  class Constant_rangeContext;
  class Constant_indexed_rangeContext;
  class ExpressionContext;
  class Tagged_union_expressionContext;
  class Value_rangeContext;
  class Mintypmax_expressionContext;
  class Module_path_expressionContext;
  class Module_path_mintypmax_expressionContext;
  class Range_expressionContext;
  class Part_select_rangeContext;
  class Indexed_rangeContext;
  class Constant_primaryContext;
  class Module_path_primaryContext;
  class Complex_func_callContext;
  class PrimaryContext;
  class This_keywordContext;
  class Super_keywordContext;
  class Dollar_keywordContext;
  class Dollar_root_keywordContext;
  class This_dot_superContext;
  class Null_keywordContext;
  class Time_literalContext;
  class Time_unitContext;
  class Implicit_class_handleContext;
  class Bit_selectContext;
  class SelectContext;
  class Nonrange_selectContext;
  class Constant_bit_selectContext;
  class Constant_selectContext;
  class Primary_literalContext;
  class Constant_castContext;
  class CastContext;
  class Net_lvalueContext;
  class Variable_lvalueContext;
  class Nonrange_variable_lvalueContext;
  class Unary_operatorContext;
  class Binary_operatorContext;
  class Inc_or_dec_operatorContext;
  class Unary_module_path_operatorContext;
  class Binary_module_path_operatorContext;
  class NumberContext;
  class Unbased_unsized_literalContext;
  class Attribute_instanceContext;
  class Attr_specContext;
  class Attr_nameContext;
  class Hierarchical_identifierContext;
  class IdentifierContext;
  class Interface_identifierContext;
  class Package_scopeContext;
  class Ps_identifierContext;
  class Ps_or_hierarchical_identifierContext;
  class Ps_or_hierarchical_array_identifierContext;
  class Ps_or_hierarchical_sequence_identifierContext;
  class Ps_type_identifierContext;
  class System_taskContext;
  class System_task_namesContext;
  class Top_directivesContext;
  class Pragma_directiveContext;
  class Pragma_expressionContext;
  class Pragma_valueContext;
  class Timescale_directiveContext;
  class Begin_keywords_directiveContext;
  class End_keywords_directiveContext;
  class Unconnected_drive_directiveContext;
  class Nounconnected_drive_directiveContext;
  class Default_nettype_directiveContext;
  class Uselib_directiveContext;
  class Celldefine_directiveContext;
  class Endcelldefine_directiveContext;
  class Protect_directiveContext;
  class Endprotect_directiveContext;
  class Protected_directiveContext;
  class Endprotected_directiveContext;
  class Expand_vectornets_directiveContext;
  class Noexpand_vectornets_directiveContext;
  class Autoexpand_vectornets_directiveContext;
  class Disable_portfaults_directiveContext;
  class Enable_portfaults_directiveContext;
  class Nosuppress_faults_directiveContext;
  class Suppress_faults_directiveContext;
  class Signed_directiveContext;
  class Unsigned_directiveContext;
  class Remove_gatename_directiveContext;
  class Noremove_gatenames_directiveContext;
  class Remove_netname_directiveContext;
  class Noremove_netnames_directiveContext;
  class Accelerate_directiveContext;
  class Noaccelerate_directiveContext;
  class Default_trireg_strenght_directiveContext;
  class Default_decay_time_directiveContext;
  class Delay_mode_distributed_directiveContext;
  class Delay_mode_path_directiveContext;
  class Delay_mode_unit_directiveContext;
  class Delay_mode_zero_directiveContext;
  class Surelog_macro_not_definedContext;
  class SllineContext;
  class EndconfigContext;
  class Config_declarationContext;
  class Design_statementContext;
  class Config_rule_statementContext;
  class Default_clauseContext;
  class Inst_clauseContext;
  class Inst_nameContext;
  class Cell_clauseContext;
  class Liblist_clauseContext;
  class Use_clause_configContext;
  class Use_clauseContext; 

  class  Top_level_ruleContext : public antlr4::ParserRuleContext {
  public:
    Top_level_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Null_ruleContext *null_rule();
    Source_textContext *source_text();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Top_level_ruleContext* top_level_rule();

  class  Top_level_library_ruleContext : public antlr4::ParserRuleContext {
  public:
    Top_level_library_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Null_ruleContext *null_rule();
    Library_textContext *library_text();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Top_level_library_ruleContext* top_level_library_rule();

  class  Library_textContext : public antlr4::ParserRuleContext {
  public:
    Library_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Library_descriptionsContext *> library_descriptions();
    Library_descriptionsContext* library_descriptions(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_textContext* library_text();

  class  Library_descriptionsContext : public antlr4::ParserRuleContext {
  public:
    Library_descriptionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Library_declarationContext *library_declaration();
    Include_statementContext *include_statement();
    Config_declarationContext *config_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_descriptionsContext* library_descriptions();

  class  Library_declarationContext : public antlr4::ParserRuleContext {
  public:
    Library_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBRARY();
    IdentifierContext *identifier();
    std::vector<File_path_specContext *> file_path_spec();
    File_path_specContext* file_path_spec(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *INCDIR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Library_declarationContext* library_declaration();

  class  File_path_specContext : public antlr4::ParserRuleContext {
  public:
    File_path_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Simple_identifier();
    antlr4::tree::TerminalNode* Simple_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV();
    antlr4::tree::TerminalNode* DIV(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STAR();
    antlr4::tree::TerminalNode* STAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOTSTAR();
    antlr4::tree::TerminalNode* DOTSTAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> QMARK();
    antlr4::tree::TerminalNode* QMARK(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_path_specContext* file_path_spec();

  class  Include_statementContext : public antlr4::ParserRuleContext {
  public:
    Include_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCLUDE();
    File_path_specContext *file_path_spec();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_statementContext* include_statement();

  class  Source_textContext : public antlr4::ParserRuleContext {
  public:
    Source_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<DescriptionContext *> description();
    DescriptionContext* description(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Source_textContext* source_text();

  class  Null_ruleContext : public antlr4::ParserRuleContext {
  public:
    Null_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_ruleContext* null_rule();

  class  DescriptionContext : public antlr4::ParserRuleContext {
  public:
    DescriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_declarationContext *module_declaration();
    Udp_declarationContext *udp_declaration();
    Interface_declarationContext *interface_declaration();
    Program_declarationContext *program_declaration();
    Package_declarationContext *package_declaration();
    Surelog_macro_not_definedContext *surelog_macro_not_defined();
    Package_itemContext *package_item();
    Bind_directiveContext *bind_directive();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Config_declarationContext *config_declaration();
    Top_directivesContext *top_directives();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescriptionContext* description();

  class  Module_nonansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Module_nonansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_keywordContext *module_keyword();
    IdentifierContext *identifier();
    List_of_portsContext *list_of_ports();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    std::vector<Package_import_declarationContext *> package_import_declaration();
    Package_import_declarationContext* package_import_declaration(size_t i);
    Parameter_port_listContext *parameter_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_nonansi_headerContext* module_nonansi_header();

  class  Module_ansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Module_ansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_keywordContext *module_keyword();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    std::vector<Package_import_declarationContext *> package_import_declaration();
    Package_import_declarationContext* package_import_declaration(size_t i);
    Parameter_port_listContext *parameter_port_list();
    List_of_port_declarationsContext *list_of_port_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_ansi_headerContext* module_ansi_header();

  class  Module_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_nonansi_headerContext *module_nonansi_header();
    EndmoduleContext *endmodule();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Module_itemContext *> module_item();
    Module_itemContext* module_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Module_ansi_headerContext *module_ansi_header();
    std::vector<Non_port_module_itemContext *> non_port_module_item();
    Non_port_module_itemContext* non_port_module_item(size_t i);
    Module_keywordContext *module_keyword();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_declarationContext* module_declaration();

  class  EndmoduleContext : public antlr4::ParserRuleContext {
  public:
    EndmoduleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDMODULE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndmoduleContext* endmodule();

  class  Module_keywordContext : public antlr4::ParserRuleContext {
  public:
    Module_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    antlr4::tree::TerminalNode *MACROMODULE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_keywordContext* module_keyword();

  class  Interface_nonansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_nonansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    Interface_identifierContext *interface_identifier();
    List_of_portsContext *list_of_ports();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    Parameter_port_listContext *parameter_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_nonansi_headerContext* interface_nonansi_header();

  class  Interface_ansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_ansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    Parameter_port_listContext *parameter_port_list();
    List_of_port_declarationsContext *list_of_port_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_ansi_headerContext* interface_ansi_header();

  class  Interface_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_nonansi_headerContext *interface_nonansi_header();
    EndinterfaceContext *endinterface();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Interface_itemContext *> interface_item();
    Interface_itemContext* interface_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<Interface_identifierContext *> interface_identifier();
    Interface_identifierContext* interface_identifier(size_t i);
    Interface_ansi_headerContext *interface_ansi_header();
    std::vector<Non_port_interface_itemContext *> non_port_interface_item();
    Non_port_interface_itemContext* non_port_interface_item(size_t i);
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Attribute_instanceContext *attribute_instance();
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_declarationContext* interface_declaration();

  class  EndinterfaceContext : public antlr4::ParserRuleContext {
  public:
    EndinterfaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDINTERFACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndinterfaceContext* endinterface();

  class  Program_nonansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Program_nonansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    IdentifierContext *identifier();
    List_of_portsContext *list_of_ports();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Attribute_instanceContext *attribute_instance();
    LifetimeContext *lifetime();
    Parameter_port_listContext *parameter_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_nonansi_headerContext* program_nonansi_header();

  class  Program_ansi_headerContext : public antlr4::ParserRuleContext {
  public:
    Program_ansi_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    LifetimeContext *lifetime();
    Parameter_port_listContext *parameter_port_list();
    List_of_port_declarationsContext *list_of_port_declarations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_ansi_headerContext* program_ansi_header();

  class  EndcheckerContext : public antlr4::ParserRuleContext {
  public:
    EndcheckerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDCHECKER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndcheckerContext* endchecker();

  class  Checker_declarationContext : public antlr4::ParserRuleContext {
  public:
    Checker_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECKER();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndcheckerContext *endchecker();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Checker_or_generate_itemContext *> checker_or_generate_item();
    Checker_or_generate_itemContext* checker_or_generate_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Checker_port_listContext *checker_port_list();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_declarationContext* checker_declaration();

  class  Program_declarationContext : public antlr4::ParserRuleContext {
  public:
    Program_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_nonansi_headerContext *program_nonansi_header();
    EndprogramContext *endprogram();
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Program_itemContext *> program_item();
    Program_itemContext* program_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Program_ansi_headerContext *program_ansi_header();
    std::vector<Non_port_program_itemContext *> non_port_program_item();
    Non_port_program_itemContext* non_port_program_item(size_t i);
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_declarationContext* program_declaration();

  class  EndprogramContext : public antlr4::ParserRuleContext {
  public:
    EndprogramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDPROGRAM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndprogramContext* endprogram();

  class  Class_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndclassContext *endclass();
    antlr4::tree::TerminalNode *VIRTUAL();
    LifetimeContext *lifetime();
    Parameter_port_listContext *parameter_port_list();
    antlr4::tree::TerminalNode *EXTENDS();
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *IMPLEMENTS();
    std::vector<Interface_class_typeContext *> interface_class_type();
    Interface_class_typeContext* interface_class_type(size_t i);
    std::vector<Class_itemContext *> class_item();
    Class_itemContext* class_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_declarationContext* class_declaration();

  class  EndclassContext : public antlr4::ParserRuleContext {
  public:
    EndclassContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDCLASS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndclassContext* endclass();

  class  Interface_class_typeContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_identifierContext *ps_identifier();
    Parameter_value_assignmentContext *parameter_value_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_typeContext* interface_class_type();

  class  Interface_class_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndclassContext *endclass();
    Parameter_port_listContext *parameter_port_list();
    antlr4::tree::TerminalNode *EXTENDS();
    std::vector<Interface_class_typeContext *> interface_class_type();
    Interface_class_typeContext* interface_class_type(size_t i);
    std::vector<Interface_class_itemContext *> interface_class_item();
    Interface_class_itemContext* interface_class_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_declarationContext* interface_class_declaration();

  class  Interface_class_itemContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_declarationContext *type_declaration();
    Interface_class_methodContext *interface_class_method();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    Parameter_declarationContext *parameter_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_itemContext* interface_class_item();

  class  Interface_class_methodContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURE();
    antlr4::tree::TerminalNode *VIRTUAL();
    Method_prototypeContext *method_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_methodContext* interface_class_method();

  class  EndpackageContext : public antlr4::ParserRuleContext {
  public:
    EndpackageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDPACKAGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndpackageContext* endpackage();

  class  Package_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndpackageContext *endpackage();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Timeunits_declarationContext *timeunits_declaration();
    std::vector<Package_itemContext *> package_item();
    Package_itemContext* package_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_declarationContext* package_declaration();

  class  Timeunits_declarationContext : public antlr4::ParserRuleContext {
  public:
    Timeunits_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Timeunits_declarationContext() = default;
    void copyFrom(Timeunits_declarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TimeUnitsDecl_TimeUnitDivContext : public Timeunits_declarationContext {
  public:
    TimeUnitsDecl_TimeUnitDivContext(Timeunits_declarationContext *ctx);

    antlr4::tree::TerminalNode *TIMEUNIT();
    std::vector<Time_literalContext *> time_literal();
    Time_literalContext* time_literal(size_t i);
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TimeUnitsDecl_TimePrecisionTimeUnitContext : public Timeunits_declarationContext {
  public:
    TimeUnitsDecl_TimePrecisionTimeUnitContext(Timeunits_declarationContext *ctx);

    antlr4::tree::TerminalNode *TIMEPRECISION();
    std::vector<Time_literalContext *> time_literal();
    Time_literalContext* time_literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    antlr4::tree::TerminalNode *TIMEUNIT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TimeUnitsDecl_TimeUnitTimePrecisionContext : public Timeunits_declarationContext {
  public:
    TimeUnitsDecl_TimeUnitTimePrecisionContext(Timeunits_declarationContext *ctx);

    antlr4::tree::TerminalNode *TIMEUNIT();
    std::vector<Time_literalContext *> time_literal();
    Time_literalContext* time_literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    antlr4::tree::TerminalNode *TIMEPRECISION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TimeUnitsDecl_TimeUnitContext : public Timeunits_declarationContext {
  public:
    TimeUnitsDecl_TimeUnitContext(Timeunits_declarationContext *ctx);

    antlr4::tree::TerminalNode *TIMEUNIT();
    Time_literalContext *time_literal();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TimeUnitsDecl_TimePrecisionContext : public Timeunits_declarationContext {
  public:
    TimeUnitsDecl_TimePrecisionContext(Timeunits_declarationContext *ctx);

    antlr4::tree::TerminalNode *TIMEPRECISION();
    Time_literalContext *time_literal();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Timeunits_declarationContext* timeunits_declaration();

  class  Parameter_port_listContext : public antlr4::ParserRuleContext {
  public:
    Parameter_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUND();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Parameter_port_declarationContext *> parameter_port_declaration();
    Parameter_port_declarationContext* parameter_port_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_port_listContext* parameter_port_list();

  class  Parameter_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_declarationContext *parameter_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    Data_typeContext *data_type();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *TYPE();
    List_of_type_assignmentsContext *list_of_type_assignments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_port_declarationContext* parameter_port_declaration();

  class  List_of_portsContext : public antlr4::ParserRuleContext {
  public:
    List_of_portsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<PortContext *> port();
    PortContext* port(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_portsContext* list_of_ports();

  class  List_of_port_declarationsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_declarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Ansi_port_declarationContext *> ansi_port_declaration();
    Ansi_port_declarationContext* ansi_port_declaration(size_t i);
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_declarationsContext* list_of_port_declarations();

  class  Port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inout_declarationContext *inout_declaration();
    Input_declarationContext *input_declaration();
    Output_declarationContext *output_declaration();
    Ref_declarationContext *ref_declaration();
    Interface_port_declarationContext *interface_port_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_declarationContext* port_declaration();

  class  PortContext : public antlr4::ParserRuleContext {
  public:
    PortContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_expressionContext *port_expression();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PortContext* port();

  class  Port_expressionContext : public antlr4::ParserRuleContext {
  public:
    Port_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Port_referenceContext *> port_reference();
    Port_referenceContext* port_reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_expressionContext* port_expression();

  class  Port_referenceContext : public antlr4::ParserRuleContext {
  public:
    Port_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Constant_selectContext *constant_select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Port_referenceContext* port_reference();

  class  Port_directionContext : public antlr4::ParserRuleContext {
  public:
    Port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Port_directionContext() = default;
    void copyFrom(Port_directionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PortDir_InpContext : public Port_directionContext {
  public:
    PortDir_InpContext(Port_directionContext *ctx);

    antlr4::tree::TerminalNode *INPUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PortDir_OutContext : public Port_directionContext {
  public:
    PortDir_OutContext(Port_directionContext *ctx);

    antlr4::tree::TerminalNode *OUTPUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PortDir_RefContext : public Port_directionContext {
  public:
    PortDir_RefContext(Port_directionContext *ctx);

    antlr4::tree::TerminalNode *REF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PortDir_InoutContext : public Port_directionContext {
  public:
    PortDir_InoutContext(Port_directionContext *ctx);

    antlr4::tree::TerminalNode *INOUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Port_directionContext* port_direction();

  class  Net_port_headerContext : public antlr4::ParserRuleContext {
  public:
    Net_port_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_port_typeContext *net_port_type();
    Port_directionContext *port_direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_port_headerContext* net_port_header();

  class  Variable_port_headerContext : public antlr4::ParserRuleContext {
  public:
    Variable_port_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_port_typeContext *variable_port_type();
    Port_directionContext *port_direction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_port_headerContext* variable_port_header();

  class  Interface_port_headerContext : public antlr4::ParserRuleContext {
  public:
    Interface_port_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *INTERFACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_port_headerContext* interface_port_header();

  class  Ansi_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Ansi_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Net_port_headerContext *net_port_header();
    Interface_port_headerContext *interface_port_header();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_expressionContext *constant_expression();
    Variable_port_headerContext *variable_port_header();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ansi_port_declarationContext* ansi_port_declaration();

  class  Elaboration_system_taskContext : public antlr4::ParserRuleContext {
  public:
    Elaboration_system_taskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    NumberContext *number();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *COMMA();
    List_of_argumentsContext *list_of_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Elaboration_system_taskContext* elaboration_system_task();

  class  Module_common_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_common_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_or_generate_item_declarationContext *module_or_generate_item_declaration();
    Interface_instantiationContext *interface_instantiation();
    Program_instantiationContext *program_instantiation();
    Assertion_itemContext *assertion_item();
    Bind_directiveContext *bind_directive();
    Continuous_assignContext *continuous_assign();
    Net_aliasContext *net_alias();
    Initial_constructContext *initial_construct();
    Final_constructContext *final_construct();
    Always_constructContext *always_construct();
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Elaboration_system_taskContext *elaboration_system_task();
    System_taskContext *system_task();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_common_itemContext* module_common_item();

  class  Module_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Non_port_module_itemContext *non_port_module_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_itemContext* module_item();

  class  Module_or_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Module_or_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parameter_overrideContext *parameter_override();
    Gate_instantiationContext *gate_instantiation();
    Udp_instantiationContext *udp_instantiation();
    Module_instantiationContext *module_instantiation();
    Module_common_itemContext *module_common_item();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_or_generate_itemContext* module_or_generate_item();

  class  Module_or_generate_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Module_or_generate_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_or_generate_item_declarationContext *package_or_generate_item_declaration();
    Genvar_declarationContext *genvar_declaration();
    Clocking_declarationContext *clocking_declaration();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CLOCKING();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_or_generate_item_declarationContext* module_or_generate_item_declaration();

  class  Non_port_module_itemContext : public antlr4::ParserRuleContext {
  public:
    Non_port_module_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generated_module_instantiationContext *generated_module_instantiation();
    Module_or_generate_itemContext *module_or_generate_item();
    Specify_blockContext *specify_block();
    Specparam_declarationContext *specparam_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Program_declarationContext *program_declaration();
    Module_declarationContext *module_declaration();
    Timeunits_declarationContext *timeunits_declaration();
    System_taskContext *system_task();
    Surelog_macro_not_definedContext *surelog_macro_not_defined();
    Pragma_directiveContext *pragma_directive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_port_module_itemContext* non_port_module_item();

  class  Parameter_overrideContext : public antlr4::ParserRuleContext {
  public:
    Parameter_overrideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFPARAM();
    List_of_defparam_assignmentsContext *list_of_defparam_assignments();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_overrideContext* parameter_override();

  class  Bind_directiveContext : public antlr4::ParserRuleContext {
  public:
    Bind_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIND();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Constant_selectContext *constant_select();
    Bind_instantiationContext *bind_instantiation();
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bind_directiveContext* bind_directive();

  class  Bind_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Bind_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Program_instantiationContext *program_instantiation();
    Module_instantiationContext *module_instantiation();
    Interface_instantiationContext *interface_instantiation();
    Checker_instantiationContext *checker_instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bind_instantiationContext* bind_instantiation();

  class  Interface_or_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Interface_or_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_common_itemContext *module_common_item();
    antlr4::tree::TerminalNode *MODPORT();
    std::vector<Modport_itemContext *> modport_item();
    Modport_itemContext* modport_item(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Extern_tf_declarationContext *extern_tf_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_or_generate_itemContext* interface_or_generate_item();

  class  Extern_tf_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extern_tf_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERN();
    Method_prototypeContext *method_prototype();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *FORKJOIN();
    Task_prototypeContext *task_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extern_tf_declarationContext* extern_tf_declaration();

  class  Interface_itemContext : public antlr4::ParserRuleContext {
  public:
    Interface_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Non_port_interface_itemContext *non_port_interface_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_itemContext* interface_item();

  class  Non_port_interface_itemContext : public antlr4::ParserRuleContext {
  public:
    Non_port_interface_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generated_interface_instantiationContext *generated_interface_instantiation();
    Specparam_declarationContext *specparam_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Interface_or_generate_itemContext *interface_or_generate_item();
    Program_declarationContext *program_declaration();
    Interface_declarationContext *interface_declaration();
    Timeunits_declarationContext *timeunits_declaration();
    Surelog_macro_not_definedContext *surelog_macro_not_defined();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_port_interface_itemContext* non_port_interface_item();

  class  Program_itemContext : public antlr4::ParserRuleContext {
  public:
    Program_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_declarationContext *port_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Non_port_program_itemContext *non_port_program_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_itemContext* program_item();

  class  Non_port_program_itemContext : public antlr4::ParserRuleContext {
  public:
    Non_port_program_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Continuous_assignContext *continuous_assign();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Module_or_generate_item_declarationContext *module_or_generate_item_declaration();
    Specparam_declarationContext *specparam_declaration();
    Initial_constructContext *initial_construct();
    Final_constructContext *final_construct();
    Concurrent_assertion_itemContext *concurrent_assertion_item();
    Timeunits_declarationContext *timeunits_declaration();
    Program_generate_itemContext *program_generate_item();
    Surelog_macro_not_definedContext *surelog_macro_not_defined();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_port_program_itemContext* non_port_program_item();

  class  Program_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Program_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Generate_regionContext *generate_region();
    Elaboration_system_taskContext *elaboration_system_task();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_generate_itemContext* program_generate_item();

  class  Checker_port_listContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Checker_port_itemContext *> checker_port_item();
    Checker_port_itemContext* checker_port_item(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_port_listContext* checker_port_list();

  class  Checker_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_formal_typeContext *property_formal_type();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Property_actual_argContext *property_actual_arg();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_port_itemContext* checker_port_item();

  class  Checker_or_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_or_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Checker_or_generate_item_declarationContext *checker_or_generate_item_declaration();
    Initial_constructContext *initial_construct();
    Always_constructContext *always_construct();
    Final_constructContext *final_construct();
    Assertion_itemContext *assertion_item();
    Continuous_assignContext *continuous_assign();
    Checker_generate_itemContext *checker_generate_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_or_generate_itemContext* checker_or_generate_item();

  class  Checker_or_generate_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Checker_or_generate_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_declarationContext *data_declaration();
    std::vector<antlr4::tree::TerminalNode *> RAND();
    antlr4::tree::TerminalNode* RAND(size_t i);
    Function_declarationContext *function_declaration();
    Checker_declarationContext *checker_declaration();
    Assertion_item_declarationContext *assertion_item_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Overload_declarationContext *overload_declaration();
    Genvar_declarationContext *genvar_declaration();
    Clocking_declarationContext *clocking_declaration();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *CLOCKING();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();
    Surelog_macro_not_definedContext *surelog_macro_not_defined();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_or_generate_item_declarationContext* checker_or_generate_item_declaration();

  class  Checker_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Checker_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Loop_generate_constructContext *loop_generate_construct();
    Conditional_generate_constructContext *conditional_generate_construct();
    Generate_regionContext *generate_region();
    Elaboration_system_taskContext *elaboration_system_task();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_generate_itemContext* checker_generate_item();

  class  Class_itemContext : public antlr4::ParserRuleContext {
  public:
    Class_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_propertyContext *class_property();
    Class_methodContext *class_method();
    Class_constraintContext *class_constraint();
    Type_declarationContext *type_declaration();
    Class_declarationContext *class_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Local_parameter_declarationContext *local_parameter_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Parameter_declarationContext *parameter_declaration();
    Surelog_macro_not_definedContext *surelog_macro_not_defined();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_itemContext* class_item();

  class  Class_propertyContext : public antlr4::ParserRuleContext {
  public:
    Class_propertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_declarationContext *data_declaration();
    std::vector<Property_qualifierContext *> property_qualifier();
    Property_qualifierContext* property_qualifier(size_t i);
    antlr4::tree::TerminalNode *CONST();
    Data_typeContext *data_type();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Class_item_qualifierContext *> class_item_qualifier();
    Class_item_qualifierContext* class_item_qualifier(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_propertyContext* class_property();

  class  Pure_virtual_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Pure_virtual_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURE();
    antlr4::tree::TerminalNode *VIRTUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pure_virtual_qualifierContext* pure_virtual_qualifier();

  class  Extern_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Extern_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extern_qualifierContext* extern_qualifier();

  class  Class_methodContext : public antlr4::ParserRuleContext {
  public:
    Class_methodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();
    Class_constructor_declarationContext *class_constructor_declaration();
    std::vector<Method_qualifierContext *> method_qualifier();
    Method_qualifierContext* method_qualifier(size_t i);
    Pure_virtual_qualifierContext *pure_virtual_qualifier();
    Method_prototypeContext *method_prototype();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Class_item_qualifierContext *> class_item_qualifier();
    Class_item_qualifierContext* class_item_qualifier(size_t i);
    Extern_qualifierContext *extern_qualifier();
    Class_constructor_prototypeContext *class_constructor_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_methodContext* class_method();

  class  Class_constructor_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Class_constructor_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Tf_port_listContext *tf_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_constructor_prototypeContext* class_constructor_prototype();

  class  Class_constraintContext : public antlr4::ParserRuleContext {
  public:
    Class_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constraint_prototypeContext *constraint_prototype();
    Constraint_declarationContext *constraint_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_constraintContext* class_constraint();

  class  Class_item_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Class_item_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Class_item_qualifierContext() = default;
    void copyFrom(Class_item_qualifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ClassItemQualifier_StaticContext : public Class_item_qualifierContext {
  public:
    ClassItemQualifier_StaticContext(Class_item_qualifierContext *ctx);

    antlr4::tree::TerminalNode *STATIC();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClassItemQualifier_LocalContext : public Class_item_qualifierContext {
  public:
    ClassItemQualifier_LocalContext(Class_item_qualifierContext *ctx);

    antlr4::tree::TerminalNode *LOCAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClassItemQualifier_ProtectedContext : public Class_item_qualifierContext {
  public:
    ClassItemQualifier_ProtectedContext(Class_item_qualifierContext *ctx);

    antlr4::tree::TerminalNode *PROTECTED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Class_item_qualifierContext* class_item_qualifier();

  class  Property_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Property_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Property_qualifierContext() = default;
    void copyFrom(Property_qualifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PropQualifier_ClassItemContext : public Property_qualifierContext {
  public:
    PropQualifier_ClassItemContext(Property_qualifierContext *ctx);

    Class_item_qualifierContext *class_item_qualifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PropQualifier_RandContext : public Property_qualifierContext {
  public:
    PropQualifier_RandContext(Property_qualifierContext *ctx);

    antlr4::tree::TerminalNode *RAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PropQualifier_RandcContext : public Property_qualifierContext {
  public:
    PropQualifier_RandcContext(Property_qualifierContext *ctx);

    antlr4::tree::TerminalNode *RANDC();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Property_qualifierContext* property_qualifier();

  class  Method_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Method_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Method_qualifierContext() = default;
    void copyFrom(Method_qualifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MethodQualifier_VirtualContext : public Method_qualifierContext {
  public:
    MethodQualifier_VirtualContext(Method_qualifierContext *ctx);

    antlr4::tree::TerminalNode *VIRTUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MethodQualifier_ClassItemContext : public Method_qualifierContext {
  public:
    MethodQualifier_ClassItemContext(Method_qualifierContext *ctx);

    Class_item_qualifierContext *class_item_qualifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Method_qualifierContext* method_qualifier();

  class  Method_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Method_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_prototypeContext *task_prototype();
    Function_prototypeContext *function_prototype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_prototypeContext* method_prototype();

  class  Super_dot_newContext : public antlr4::ParserRuleContext {
  public:
    Super_dot_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *NEW();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Super_dot_newContext* super_dot_new();

  class  Class_constructor_declarationContext : public antlr4::ParserRuleContext {
  public:
    Class_constructor_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    std::vector<antlr4::tree::TerminalNode *> NEW();
    antlr4::tree::TerminalNode* NEW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    EndfunctionContext *endfunction();
    Class_scopeContext *class_scope();
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    Super_dot_newContext *super_dot_new();
    std::vector<Function_statement_or_nullContext *> function_statement_or_null();
    Function_statement_or_nullContext* function_statement_or_null(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Tf_port_listContext *tf_port_list();
    List_of_argumentsContext *list_of_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_constructor_declarationContext* class_constructor_declaration();

  class  Constraint_declarationContext : public antlr4::ParserRuleContext {
  public:
    Constraint_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    IdentifierContext *identifier();
    Constraint_blockContext *constraint_block();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_declarationContext* constraint_declaration();

  class  Constraint_blockContext : public antlr4::ParserRuleContext {
  public:
    Constraint_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<Constraint_block_itemContext *> constraint_block_item();
    Constraint_block_itemContext* constraint_block_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_blockContext* constraint_block();

  class  Constraint_block_itemContext : public antlr4::ParserRuleContext {
  public:
    Constraint_block_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SOLVE();
    std::vector<Solve_before_listContext *> solve_before_list();
    Solve_before_listContext* solve_before_list(size_t i);
    antlr4::tree::TerminalNode *BEFORE();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Constraint_expressionContext *constraint_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_block_itemContext* constraint_block_item();

  class  Solve_before_listContext : public antlr4::ParserRuleContext {
  public:
    Solve_before_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constraint_primaryContext *> constraint_primary();
    Constraint_primaryContext* constraint_primary(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Solve_before_listContext* solve_before_list();

  class  Constraint_primaryContext : public antlr4::ParserRuleContext {
  public:
    Constraint_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    SelectContext *select();
    Implicit_class_handleContext *implicit_class_handle();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    Class_scopeContext *class_scope();
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_primaryContext* constraint_primary();

  class  Constraint_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constraint_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *SOFT();
    Uniqueness_constraintContext *uniqueness_constraint();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *IMPLY();
    std::vector<Constraint_setContext *> constraint_set();
    Constraint_setContext* constraint_set(size_t i);
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *FOREACH();
    Ps_or_hierarchical_array_identifierContext *ps_or_hierarchical_array_identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Loop_variablesContext *loop_variables();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *DISABLE();
    Constraint_primaryContext *constraint_primary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_expressionContext* constraint_expression();

  class  Uniqueness_constraintContext : public antlr4::ParserRuleContext {
  public:
    Uniqueness_constraintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uniqueness_constraintContext* uniqueness_constraint();

  class  Constraint_setContext : public antlr4::ParserRuleContext {
  public:
    Constraint_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constraint_expressionContext *> constraint_expression();
    Constraint_expressionContext* constraint_expression(size_t i);
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_setContext* constraint_set();

  class  Dist_listContext : public antlr4::ParserRuleContext {
  public:
    Dist_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dist_itemContext *> dist_item();
    Dist_itemContext* dist_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dist_listContext* dist_list();

  class  Dist_itemContext : public antlr4::ParserRuleContext {
  public:
    Dist_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_rangeContext *value_range();
    Dist_weightContext *dist_weight();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dist_itemContext* dist_item();

  class  Dist_weightContext : public antlr4::ParserRuleContext {
  public:
    Dist_weightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Dist_weightContext() = default;
    void copyFrom(Dist_weightContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DistWeight_AssignValueContext : public Dist_weightContext {
  public:
    DistWeight_AssignValueContext(Dist_weightContext *ctx);

    antlr4::tree::TerminalNode *ASSIGN_VALUE();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DistWeight_AssignRangeContext : public Dist_weightContext {
  public:
    DistWeight_AssignRangeContext(Dist_weightContext *ctx);

    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *DIV();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Dist_weightContext* dist_weight();

  class  Constraint_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Constraint_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Extern_qualifierContext *extern_qualifier();
    Pure_keywordContext *pure_keyword();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constraint_prototypeContext* constraint_prototype();

  class  Extern_constraint_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extern_constraint_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSTRAINT();
    Class_scopeContext *class_scope();
    IdentifierContext *identifier();
    Constraint_blockContext *constraint_block();
    antlr4::tree::TerminalNode *STATIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extern_constraint_declarationContext* extern_constraint_declaration();

  class  Identifier_listContext : public antlr4::ParserRuleContext {
  public:
    Identifier_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Identifier_listContext* identifier_list();

  class  Package_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Package_or_generate_item_declarationContext *package_or_generate_item_declaration();
    Specparam_declarationContext *specparam_declaration();
    Anonymous_programContext *anonymous_program();
    Package_export_declarationContext *package_export_declaration();
    Timeunits_declarationContext *timeunits_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_itemContext* package_item();

  class  Package_or_generate_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_or_generate_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_declarationContext *net_declaration();
    Data_declarationContext *data_declaration();
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();
    Checker_declarationContext *checker_declaration();
    Dpi_import_exportContext *dpi_import_export();
    Extern_constraint_declarationContext *extern_constraint_declaration();
    Class_declarationContext *class_declaration();
    Interface_class_declarationContext *interface_class_declaration();
    Class_constructor_declarationContext *class_constructor_declaration();
    Parameter_declarationContext *parameter_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Local_parameter_declarationContext *local_parameter_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Overload_declarationContext *overload_declaration();
    Assertion_item_declarationContext *assertion_item_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_or_generate_item_declarationContext* package_or_generate_item_declaration();

  class  Anonymous_programContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_programContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndprogramContext *endprogram();
    std::vector<Anonymous_program_itemContext *> anonymous_program_item();
    Anonymous_program_itemContext* anonymous_program_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anonymous_programContext* anonymous_program();

  class  Anonymous_program_itemContext : public antlr4::ParserRuleContext {
  public:
    Anonymous_program_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Task_declarationContext *task_declaration();
    Function_declarationContext *function_declaration();
    Class_declarationContext *class_declaration();
    Covergroup_declarationContext *covergroup_declaration();
    Class_constructor_declarationContext *class_constructor_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Surelog_macro_not_definedContext *surelog_macro_not_defined();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Anonymous_program_itemContext* anonymous_program_item();

  class  Local_parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Local_parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCALPARAM();
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Local_parameter_declarationContext* local_parameter_declaration();

  class  Parameter_declarationContext : public antlr4::ParserRuleContext {
  public:
    Parameter_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARAMETER();
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_param_assignmentsContext *list_of_param_assignments();
    antlr4::tree::TerminalNode *TYPE();
    List_of_type_assignmentsContext *list_of_type_assignments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_declarationContext* parameter_declaration();

  class  Specparam_declarationContext : public antlr4::ParserRuleContext {
  public:
    Specparam_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECPARAM();
    List_of_specparam_assignmentsContext *list_of_specparam_assignments();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Packed_dimensionContext *packed_dimension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_declarationContext* specparam_declaration();

  class  Inout_declarationContext : public antlr4::ParserRuleContext {
  public:
    Inout_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INOUT();
    Net_port_typeContext *net_port_type();
    List_of_port_identifiersContext *list_of_port_identifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inout_declarationContext* inout_declaration();

  class  Input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    Net_port_typeContext *net_port_type();
    List_of_port_identifiersContext *list_of_port_identifiers();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    Variable_port_typeContext *variable_port_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Input_declarationContext* input_declaration();

  class  Output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    Net_port_typeContext *net_port_type();
    List_of_port_identifiersContext *list_of_port_identifiers();
    List_of_variable_port_identifiersContext *list_of_variable_port_identifiers();
    Variable_port_typeContext *variable_port_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_declarationContext* output_declaration();

  class  Interface_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Interface_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_identifierContext *interface_identifier();
    List_of_interface_identifiersContext *list_of_interface_identifiers();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_port_declarationContext* interface_port_declaration();

  class  Ref_declarationContext : public antlr4::ParserRuleContext {
  public:
    Ref_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REF();
    Variable_port_typeContext *variable_port_type();
    List_of_variable_identifiersContext *list_of_variable_identifiers();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ref_declarationContext* ref_declaration();

  class  Data_declarationContext : public antlr4::ParserRuleContext {
  public:
    Data_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_declarationContext *variable_declaration();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *VAR();
    LifetimeContext *lifetime();
    Type_declarationContext *type_declaration();
    Package_import_declarationContext *package_import_declaration();
    Net_type_declarationContext *net_type_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_declarationContext* data_declaration();

  class  Variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Data_typeContext *data_type();
    SigningContext *signing();
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declarationContext* variable_declaration();

  class  Package_import_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_import_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    std::vector<Package_import_itemContext *> package_import_item();
    Package_import_itemContext* package_import_item(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_import_declarationContext* package_import_declaration();

  class  Package_import_itemContext : public antlr4::ParserRuleContext {
  public:
    Package_import_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *COLUMNCOLUMN();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_import_itemContext* package_import_item();

  class  Package_export_declarationContext : public antlr4::ParserRuleContext {
  public:
    Package_export_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPORT();
    antlr4::tree::TerminalNode *STARCOLUMNCOLUMNSTAR();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Package_import_itemContext *> package_import_item();
    Package_import_itemContext* package_import_item(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_export_declarationContext* package_export_declaration();

  class  Genvar_declarationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENVAR();
    Identifier_listContext *identifier_list();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_declarationContext* genvar_declaration();

  class  Net_declarationContext : public antlr4::ParserRuleContext {
  public:
    Net_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_typeContext *net_type();
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_net_decl_assignmentsContext *list_of_net_decl_assignments();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Drive_strengthContext *drive_strength();
    Charge_strengthContext *charge_strength();
    Delay3Context *delay3();
    antlr4::tree::TerminalNode *VECTORED();
    antlr4::tree::TerminalNode *SCALARED();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Delay_controlContext *delay_control();
    antlr4::tree::TerminalNode *INTERCONNECT();
    Implicit_data_typeContext *implicit_data_type();
    Pound_delay_valueContext *pound_delay_value();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_declarationContext* net_declaration();

  class  Type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEDEF();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Constant_bit_selectContext *constant_bit_select();
    antlr4::tree::TerminalNode *DOT();
    Data_typeContext *data_type();
    Net_typeContext *net_type();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    Enum_keywordContext *enum_keyword();
    Struct_keywordContext *struct_keyword();
    Union_keywordContext *union_keyword();
    Class_keywordContext *class_keyword();
    Interface_class_keywordContext *interface_class_keyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_declarationContext* type_declaration();

  class  Enum_keywordContext : public antlr4::ParserRuleContext {
  public:
    Enum_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_keywordContext* enum_keyword();

  class  Struct_keywordContext : public antlr4::ParserRuleContext {
  public:
    Struct_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_keywordContext* struct_keyword();

  class  Union_keywordContext : public antlr4::ParserRuleContext {
  public:
    Union_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Union_keywordContext* union_keyword();

  class  Class_keywordContext : public antlr4::ParserRuleContext {
  public:
    Class_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_keywordContext* class_keyword();

  class  Interface_class_keywordContext : public antlr4::ParserRuleContext {
  public:
    Interface_class_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    antlr4::tree::TerminalNode *CLASS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_class_keywordContext* interface_class_keyword();

  class  Net_type_declarationContext : public antlr4::ParserRuleContext {
  public:
    Net_type_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NETTYPE();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Data_typeContext *data_type();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *WITH();
    Package_scopeContext *package_scope();
    Class_scopeContext *class_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_type_declarationContext* net_type_declaration();

  class  LifetimeContext : public antlr4::ParserRuleContext {
  public:
    LifetimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LifetimeContext() = default;
    void copyFrom(LifetimeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Lifetime_StaticContext : public LifetimeContext {
  public:
    Lifetime_StaticContext(LifetimeContext *ctx);

    antlr4::tree::TerminalNode *STATIC();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Lifetime_AutomaticContext : public LifetimeContext {
  public:
    Lifetime_AutomaticContext(LifetimeContext *ctx);

    antlr4::tree::TerminalNode *AUTOMATIC();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LifetimeContext* lifetime();

  class  Casting_typeContext : public antlr4::ParserRuleContext {
  public:
    Casting_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_typeContext *simple_type();
    Primary_literalContext *primary_literal();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    SigningContext *signing();
    String_typeContext *string_type();
    Const_typeContext *const_type();
    System_taskContext *system_task();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Casting_typeContext* casting_type();

  class  Data_typeContext : public antlr4::ParserRuleContext {
  public:
    Data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_vector_typeContext *integer_vector_type();
    SigningContext *signing();
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);
    Integer_atom_typeContext *integer_atom_type();
    Non_integer_typeContext *non_integer_type();
    Struct_unionContext *struct_union();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<Struct_union_memberContext *> struct_union_member();
    Struct_union_memberContext* struct_union_member(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    Packed_keywordContext *packed_keyword();
    antlr4::tree::TerminalNode *ENUM();
    std::vector<Enum_name_declarationContext *> enum_name_declaration();
    Enum_name_declarationContext* enum_name_declaration(size_t i);
    Enum_base_typeContext *enum_base_type();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    String_typeContext *string_type();
    Chandle_typeContext *chandle_type();
    antlr4::tree::TerminalNode *VIRTUAL();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *INTERFACE();
    std::vector<Parameter_value_assignmentContext *> parameter_value_assignment();
    Parameter_value_assignmentContext* parameter_value_assignment(size_t i);
    antlr4::tree::TerminalNode *DOT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();
    std::vector<antlr4::tree::TerminalNode *> COLUMNCOLUMN();
    antlr4::tree::TerminalNode* COLUMNCOLUMN(size_t i);
    Event_typeContext *event_type();
    Type_referenceContext *type_reference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_typeContext* data_type();

  class  Packed_keywordContext : public antlr4::ParserRuleContext {
  public:
    Packed_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Packed_keywordContext* packed_keyword();

  class  String_typeContext : public antlr4::ParserRuleContext {
  public:
    String_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_typeContext* string_type();

  class  String_valueContext : public antlr4::ParserRuleContext {
  public:
    String_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_valueContext* string_value();

  class  Chandle_typeContext : public antlr4::ParserRuleContext {
  public:
    Chandle_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHANDLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Chandle_typeContext* chandle_type();

  class  Event_typeContext : public antlr4::ParserRuleContext {
  public:
    Event_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_typeContext* event_type();

  class  Const_typeContext : public antlr4::ParserRuleContext {
  public:
    Const_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_typeContext* const_type();

  class  Data_type_or_implicitContext : public antlr4::ParserRuleContext {
  public:
    Data_type_or_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    SigningContext *signing();
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_or_implicitContext* data_type_or_implicit();

  class  Implicit_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Implicit_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SigningContext *signing();
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Implicit_data_typeContext* implicit_data_type();

  class  Enum_base_typeContext : public antlr4::ParserRuleContext {
  public:
    Enum_base_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_atom_typeContext *integer_atom_type();
    SigningContext *signing();
    Integer_vector_typeContext *integer_vector_type();
    Packed_dimensionContext *packed_dimension();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_base_typeContext* enum_base_type();

  class  Enum_name_declarationContext : public antlr4::ParserRuleContext {
  public:
    Enum_name_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> Integral_number();
    antlr4::tree::TerminalNode* Integral_number(size_t i);
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_name_declarationContext* enum_name_declaration();

  class  Class_scopeContext : public antlr4::ParserRuleContext {
  public:
    Class_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *COLUMNCOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_scopeContext* class_scope();

  class  Class_typeContext : public antlr4::ParserRuleContext {
  public:
    Class_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *Escaped_identifier();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *RANDOMIZE();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *DOLLAR_UNIT();
    std::vector<Parameter_value_assignmentContext *> parameter_value_assignment();
    Parameter_value_assignmentContext* parameter_value_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMNCOLUMN();
    antlr4::tree::TerminalNode* COLUMNCOLUMN(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_typeContext* class_type();

  class  Integer_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_vector_typeContext *integer_vector_type();
    Integer_atom_typeContext *integer_atom_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_typeContext* integer_type();

  class  Integer_atom_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_atom_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Integer_atom_typeContext() = default;
    void copyFrom(Integer_atom_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IntegerAtomType_ShortintContext : public Integer_atom_typeContext {
  public:
    IntegerAtomType_ShortintContext(Integer_atom_typeContext *ctx);

    antlr4::tree::TerminalNode *SHORTINT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerAtomType_IntContext : public Integer_atom_typeContext {
  public:
    IntegerAtomType_IntContext(Integer_atom_typeContext *ctx);

    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *INTEGER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerAtomType_TimeContext : public Integer_atom_typeContext {
  public:
    IntegerAtomType_TimeContext(Integer_atom_typeContext *ctx);

    antlr4::tree::TerminalNode *TIME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerAtomType_ByteContext : public Integer_atom_typeContext {
  public:
    IntegerAtomType_ByteContext(Integer_atom_typeContext *ctx);

    antlr4::tree::TerminalNode *BYTE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerAtomType_LongIntContext : public Integer_atom_typeContext {
  public:
    IntegerAtomType_LongIntContext(Integer_atom_typeContext *ctx);

    antlr4::tree::TerminalNode *LONGINT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Integer_atom_typeContext* integer_atom_type();

  class  Integer_vector_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_vector_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Integer_vector_typeContext() = default;
    void copyFrom(Integer_vector_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IntVec_TypeBitContext : public Integer_vector_typeContext {
  public:
    IntVec_TypeBitContext(Integer_vector_typeContext *ctx);

    antlr4::tree::TerminalNode *BIT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntVec_TypeRegContext : public Integer_vector_typeContext {
  public:
    IntVec_TypeRegContext(Integer_vector_typeContext *ctx);

    antlr4::tree::TerminalNode *REG();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntVec_TypeLogicContext : public Integer_vector_typeContext {
  public:
    IntVec_TypeLogicContext(Integer_vector_typeContext *ctx);

    antlr4::tree::TerminalNode *LOGIC();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Integer_vector_typeContext* integer_vector_type();

  class  Non_integer_typeContext : public antlr4::ParserRuleContext {
  public:
    Non_integer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Non_integer_typeContext() = default;
    void copyFrom(Non_integer_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NonIntType_RealTimeContext : public Non_integer_typeContext {
  public:
    NonIntType_RealTimeContext(Non_integer_typeContext *ctx);

    antlr4::tree::TerminalNode *REALTIME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NonIntType_ShortRealContext : public Non_integer_typeContext {
  public:
    NonIntType_ShortRealContext(Non_integer_typeContext *ctx);

    antlr4::tree::TerminalNode *SHORTREAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NonIntType_RealContext : public Non_integer_typeContext {
  public:
    NonIntType_RealContext(Non_integer_typeContext *ctx);

    antlr4::tree::TerminalNode *REAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Non_integer_typeContext* non_integer_type();

  class  Net_typeContext : public antlr4::ParserRuleContext {
  public:
    Net_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Net_typeContext() = default;
    void copyFrom(Net_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NetType_Supply0Context : public Net_typeContext {
  public:
    NetType_Supply0Context(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *SUPPLY0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_WireContext : public Net_typeContext {
  public:
    NetType_WireContext(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *WIRE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_Supply1Context : public Net_typeContext {
  public:
    NetType_Supply1Context(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *SUPPLY1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_WandContext : public Net_typeContext {
  public:
    NetType_WandContext(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *WAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_Tri1Context : public Net_typeContext {
  public:
    NetType_Tri1Context(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *TRI1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_Tri0Context : public Net_typeContext {
  public:
    NetType_Tri0Context(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *TRI0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_TriOrContext : public Net_typeContext {
  public:
    NetType_TriOrContext(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *TRIOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_TriContext : public Net_typeContext {
  public:
    NetType_TriContext(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *TRI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_TriRegContext : public Net_typeContext {
  public:
    NetType_TriRegContext(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *TRIREG();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_WorContext : public Net_typeContext {
  public:
    NetType_WorContext(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *WOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_UwireContext : public Net_typeContext {
  public:
    NetType_UwireContext(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *UWIRE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NetType_TriAndContext : public Net_typeContext {
  public:
    NetType_TriAndContext(Net_typeContext *ctx);

    antlr4::tree::TerminalNode *TRIAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Net_typeContext* net_type();

  class  Net_port_typeContext : public antlr4::ParserRuleContext {
  public:
    Net_port_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    Net_typeContext *net_type();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *INTERCONNECT();
    Implicit_data_typeContext *implicit_data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_port_typeContext* net_port_type();

  class  Variable_port_typeContext : public antlr4::ParserRuleContext {
  public:
    Variable_port_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_data_typeContext *var_data_type();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_port_typeContext* variable_port_type();

  class  Var_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Var_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *VAR();
    Data_type_or_implicitContext *data_type_or_implicit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_data_typeContext* var_data_type();

  class  SigningContext : public antlr4::ParserRuleContext {
  public:
    SigningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SigningContext() = default;
    void copyFrom(SigningContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Signing_UnsignedContext : public SigningContext {
  public:
    Signing_UnsignedContext(SigningContext *ctx);

    antlr4::tree::TerminalNode *UNSIGNED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Signing_SignedContext : public SigningContext {
  public:
    Signing_SignedContext(SigningContext *ctx);

    antlr4::tree::TerminalNode *SIGNED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SigningContext* signing();

  class  Simple_typeContext : public antlr4::ParserRuleContext {
  public:
    Simple_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_typeContext *integer_type();
    Non_integer_typeContext *non_integer_type();
    Ps_type_identifierContext *ps_type_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_typeContext* simple_type();

  class  Random_qualifierContext : public antlr4::ParserRuleContext {
  public:
    Random_qualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Random_qualifierContext() = default;
    void copyFrom(Random_qualifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RandomQualifier_RandCContext : public Random_qualifierContext {
  public:
    RandomQualifier_RandCContext(Random_qualifierContext *ctx);

    antlr4::tree::TerminalNode *RANDC();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RandomQualifier_RandContext : public Random_qualifierContext {
  public:
    RandomQualifier_RandContext(Random_qualifierContext *ctx);

    antlr4::tree::TerminalNode *RAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Random_qualifierContext* random_qualifier();

  class  Struct_union_memberContext : public antlr4::ParserRuleContext {
  public:
    Struct_union_memberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_voidContext *data_type_or_void();
    List_of_variable_decl_assignmentsContext *list_of_variable_decl_assignments();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Random_qualifierContext *random_qualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_union_memberContext* struct_union_member();

  class  Data_type_or_voidContext : public antlr4::ParserRuleContext {
  public:
    Data_type_or_voidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Data_type_or_voidContext* data_type_or_void();

  class  Struct_unionContext : public antlr4::ParserRuleContext {
  public:
    Struct_unionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Struct_keywordContext *struct_keyword();
    Union_keywordContext *union_keyword();
    Tagged_keywordContext *tagged_keyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Struct_unionContext* struct_union();

  class  Tagged_keywordContext : public antlr4::ParserRuleContext {
  public:
    Tagged_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAGGED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tagged_keywordContext* tagged_keyword();

  class  Type_referenceContext : public antlr4::ParserRuleContext {
  public:
    Type_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Data_typeContext *data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_referenceContext* type_reference();

  class  Drive_strengthContext : public antlr4::ParserRuleContext {
  public:
    Drive_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *COMMA();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *HIGHZ1();
    antlr4::tree::TerminalNode *HIGHZ0();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Drive_strengthContext* drive_strength();

  class  Strength0Context : public antlr4::ParserRuleContext {
  public:
    Strength0Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Strength0Context() = default;
    void copyFrom(Strength0Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Strength0_Weak0Context : public Strength0Context {
  public:
    Strength0_Weak0Context(Strength0Context *ctx);

    antlr4::tree::TerminalNode *WEAK0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Strength0_Strong0Context : public Strength0Context {
  public:
    Strength0_Strong0Context(Strength0Context *ctx);

    antlr4::tree::TerminalNode *STRONG0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Strength0_Pull0Context : public Strength0Context {
  public:
    Strength0_Pull0Context(Strength0Context *ctx);

    antlr4::tree::TerminalNode *PULL0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Strength0_Supply0Context : public Strength0Context {
  public:
    Strength0_Supply0Context(Strength0Context *ctx);

    antlr4::tree::TerminalNode *SUPPLY0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Strength0Context* strength0();

  class  Strength1Context : public antlr4::ParserRuleContext {
  public:
    Strength1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Strength1Context() = default;
    void copyFrom(Strength1Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Strength1_Supply1Context : public Strength1Context {
  public:
    Strength1_Supply1Context(Strength1Context *ctx);

    antlr4::tree::TerminalNode *SUPPLY1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Strength1_Strong1Context : public Strength1Context {
  public:
    Strength1_Strong1Context(Strength1Context *ctx);

    antlr4::tree::TerminalNode *STRONG1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Strength1_Pull1Context : public Strength1Context {
  public:
    Strength1_Pull1Context(Strength1Context *ctx);

    antlr4::tree::TerminalNode *PULL1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Strength1_Weak1Context : public Strength1Context {
  public:
    Strength1_Weak1Context(Strength1Context *ctx);

    antlr4::tree::TerminalNode *WEAK1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Strength1Context* strength1();

  class  Charge_strengthContext : public antlr4::ParserRuleContext {
  public:
    Charge_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Charge_strengthContext() = default;
    void copyFrom(Charge_strengthContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ChargeStrength_SmallContext : public Charge_strengthContext {
  public:
    ChargeStrength_SmallContext(Charge_strengthContext *ctx);

    antlr4::tree::TerminalNode *SMALL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ChargeStrength_MediumContext : public Charge_strengthContext {
  public:
    ChargeStrength_MediumContext(Charge_strengthContext *ctx);

    antlr4::tree::TerminalNode *MEDIUM();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ChargeStrength_LargeContext : public Charge_strengthContext {
  public:
    ChargeStrength_LargeContext(Charge_strengthContext *ctx);

    antlr4::tree::TerminalNode *LARGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Charge_strengthContext* charge_strength();

  class  Delay3Context : public antlr4::ParserRuleContext {
  public:
    Delay3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pound_delay_valueContext *pound_delay_value();
    antlr4::tree::TerminalNode *POUND();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay3Context* delay3();

  class  Delay2Context : public antlr4::ParserRuleContext {
  public:
    Delay2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pound_delay_valueContext *pound_delay_value();
    antlr4::tree::TerminalNode *POUND();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Mintypmax_expressionContext *> mintypmax_expression();
    Mintypmax_expressionContext* mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay2Context* delay2();

  class  Pound_delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Pound_delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Pound_delay();
    Time_unitContext *time_unit();
    antlr4::tree::TerminalNode *POUND();
    Delay_valueContext *delay_value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pound_delay_valueContext* pound_delay_value();

  class  Delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integral_number();
    antlr4::tree::TerminalNode *Real_number();
    Ps_identifierContext *ps_identifier();
    Time_literalContext *time_literal();
    antlr4::tree::TerminalNode *ONESTEP();
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_valueContext* delay_value();

  class  List_of_defparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_defparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Defparam_assignmentContext *> defparam_assignment();
    Defparam_assignmentContext* defparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_defparam_assignmentsContext* list_of_defparam_assignments();

  class  List_of_interface_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_interface_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Interface_identifierContext *> interface_identifier();
    Interface_identifierContext* interface_identifier(size_t i);
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_interface_identifiersContext* list_of_interface_identifiers();

  class  List_of_net_decl_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_decl_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_decl_assignmentContext *> net_decl_assignment();
    Net_decl_assignmentContext* net_decl_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_decl_assignmentsContext* list_of_net_decl_assignments();

  class  List_of_param_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_param_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Param_assignmentContext *> param_assignment();
    Param_assignmentContext* param_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_param_assignmentsContext* list_of_param_assignments();

  class  List_of_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_identifiersContext* list_of_port_identifiers();

  class  List_of_specparam_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_specparam_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specparam_assignmentContext *> specparam_assignment();
    Specparam_assignmentContext* specparam_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_specparam_assignmentsContext* list_of_specparam_assignments();

  class  List_of_tf_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_tf_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN_OP();
    antlr4::tree::TerminalNode* ASSIGN_OP(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_tf_variable_identifiersContext* list_of_tf_variable_identifiers();

  class  List_of_type_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_type_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN_OP();
    antlr4::tree::TerminalNode* ASSIGN_OP(size_t i);
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_type_assignmentsContext* list_of_type_assignments();

  class  List_of_variable_decl_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_decl_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_decl_assignmentContext *> variable_decl_assignment();
    Variable_decl_assignmentContext* variable_decl_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_decl_assignmentsContext* list_of_variable_decl_assignments();

  class  List_of_variable_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_identifiersContext* list_of_variable_identifiers();

  class  List_of_variable_port_identifiersContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_port_identifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN_OP();
    antlr4::tree::TerminalNode* ASSIGN_OP(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_port_identifiersContext* list_of_variable_port_identifiers();

  class  List_of_virtual_interface_declContext : public antlr4::ParserRuleContext {
  public:
    List_of_virtual_interface_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN_OP();
    antlr4::tree::TerminalNode* ASSIGN_OP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_virtual_interface_declContext* list_of_virtual_interface_decl();

  class  Defparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Defparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Defparam_assignmentContext* defparam_assignment();

  class  Net_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_decl_assignmentContext* net_decl_assignment();

  class  Param_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Param_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_param_expressionContext *constant_param_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_assignmentContext* param_assignment();

  class  Specparam_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Specparam_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Pulse_control_specparamContext *pulse_control_specparam();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specparam_assignmentContext* specparam_assignment();

  class  Pulse_control_specparamContext : public antlr4::ParserRuleContext {
  public:
    Pulse_control_specparamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PATHPULSE();
    std::vector<antlr4::tree::TerminalNode *> DOLLAR();
    antlr4::tree::TerminalNode* DOLLAR(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Constant_mintypmax_expressionContext *> constant_mintypmax_expression();
    Constant_mintypmax_expressionContext* constant_mintypmax_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *COMMA();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulse_control_specparamContext* pulse_control_specparam();

  class  Variable_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Variable_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Class_newContext *class_new();
    Unsized_dimensionContext *unsized_dimension();
    antlr4::tree::TerminalNode *NEW();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    Dynamic_array_newContext *dynamic_array_new();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_decl_assignmentContext* variable_decl_assignment();

  class  Class_newContext : public antlr4::ParserRuleContext {
  public:
    Class_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    Class_scopeContext *class_scope();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_newContext* class_new();

  class  Dynamic_array_newContext : public antlr4::ParserRuleContext {
  public:
    Dynamic_array_newContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dynamic_array_newContext* dynamic_array_new();

  class  Unpacked_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Unpacked_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unpacked_dimensionContext* unpacked_dimension();

  class  Packed_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Packed_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    Unsized_dimensionContext *unsized_dimension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Packed_dimensionContext* packed_dimension();

  class  Associative_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Associative_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *ASSOCIATIVE_UNSPECIFIED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Associative_dimensionContext* associative_dimension();

  class  Variable_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Variable_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unsized_dimensionContext *unsized_dimension();
    Unpacked_dimensionContext *unpacked_dimension();
    Associative_dimensionContext *associative_dimension();
    Queue_dimensionContext *queue_dimension();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_dimensionContext* variable_dimension();

  class  Queue_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Queue_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *COLUMN();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Queue_dimensionContext* queue_dimension();

  class  Unsized_dimensionContext : public antlr4::ParserRuleContext {
  public:
    Unsized_dimensionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsized_dimensionContext* unsized_dimension();

  class  Function_data_typeContext : public antlr4::ParserRuleContext {
  public:
    Function_data_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_data_typeContext* function_data_type();

  class  Function_data_type_or_implicitContext : public antlr4::ParserRuleContext {
  public:
    Function_data_type_or_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_data_typeContext *function_data_type();
    SigningContext *signing();
    std::vector<Packed_dimensionContext *> packed_dimension();
    Packed_dimensionContext* packed_dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_data_type_or_implicitContext* function_data_type_or_implicit();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_body_declarationContext *function_body_declaration();
    LifetimeContext *lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

  class  EndfunctionContext : public antlr4::ParserRuleContext {
  public:
    EndfunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDFUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndfunctionContext* endfunction();

  class  Function_body_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_body_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_data_type_or_implicitContext *function_data_type_or_implicit();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndfunctionContext *endfunction();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();
    std::vector<Tf_item_declarationContext *> tf_item_declaration();
    Tf_item_declarationContext* tf_item_declaration(size_t i);
    std::vector<Function_statement_or_nullContext *> function_statement_or_null();
    Function_statement_or_nullContext* function_statement_or_null(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Tf_port_listContext *tf_port_list();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_body_declarationContext* function_body_declaration();

  class  Function_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Function_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    Function_data_type_or_implicitContext *function_data_type_or_implicit();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Tf_port_listContext *tf_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_prototypeContext* function_prototype();

  class  Dpi_import_exportContext : public antlr4::ParserRuleContext {
  public:
    Dpi_import_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    String_valueContext *string_value();
    Function_prototypeContext *function_prototype();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Context_keywordContext *context_keyword();
    Pure_keywordContext *pure_keyword();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Task_prototypeContext *task_prototype();
    antlr4::tree::TerminalNode *EXPORT();
    Function_name_declContext *function_name_decl();
    Task_name_declContext *task_name_decl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dpi_import_exportContext* dpi_import_export();

  class  Context_keywordContext : public antlr4::ParserRuleContext {
  public:
    Context_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Context_keywordContext* context_keyword();

  class  Function_name_declContext : public antlr4::ParserRuleContext {
  public:
    Function_name_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_name_declContext* function_name_decl();

  class  Task_name_declContext : public antlr4::ParserRuleContext {
  public:
    Task_name_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_name_declContext* task_name_decl();

  class  Pure_keywordContext : public antlr4::ParserRuleContext {
  public:
    Pure_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PURE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pure_keywordContext* pure_keyword();

  class  Task_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    Task_body_declarationContext *task_body_declaration();
    LifetimeContext *lifetime();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_declarationContext* task_declaration();

  class  EndtaskContext : public antlr4::ParserRuleContext {
  public:
    EndtaskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDTASK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndtaskContext* endtask();

  class  Task_body_declarationContext : public antlr4::ParserRuleContext {
  public:
    Task_body_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndtaskContext *endtask();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();
    std::vector<Tf_item_declarationContext *> tf_item_declaration();
    Tf_item_declarationContext* tf_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Tf_port_listContext *tf_port_list();
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_body_declarationContext* task_body_declaration();

  class  Tf_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Block_item_declarationContext *block_item_declaration();
    Tf_port_declarationContext *tf_port_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_item_declarationContext* tf_item_declaration();

  class  Tf_port_listContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tf_port_itemContext *> tf_port_item();
    Tf_port_itemContext* tf_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_port_listContext* tf_port_list();

  class  Tf_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Tf_port_directionContext *tf_port_direction();
    antlr4::tree::TerminalNode *VAR();
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_port_itemContext* tf_port_item();

  class  Tf_port_directionContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Tf_port_directionContext() = default;
    void copyFrom(Tf_port_directionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TfPortDir_RefContext : public Tf_port_directionContext {
  public:
    TfPortDir_RefContext(Tf_port_directionContext *ctx);

    antlr4::tree::TerminalNode *REF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TfPortDir_ConstRefContext : public Tf_port_directionContext {
  public:
    TfPortDir_ConstRefContext(Tf_port_directionContext *ctx);

    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *REF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TfPortDir_OutContext : public Tf_port_directionContext {
  public:
    TfPortDir_OutContext(Tf_port_directionContext *ctx);

    antlr4::tree::TerminalNode *OUTPUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TfPortDir_InpContext : public Tf_port_directionContext {
  public:
    TfPortDir_InpContext(Tf_port_directionContext *ctx);

    antlr4::tree::TerminalNode *INPUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TfPortDir_InoutContext : public Tf_port_directionContext {
  public:
    TfPortDir_InoutContext(Tf_port_directionContext *ctx);

    antlr4::tree::TerminalNode *INOUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Tf_port_directionContext* tf_port_direction();

  class  Tf_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Tf_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tf_port_directionContext *tf_port_direction();
    Data_type_or_implicitContext *data_type_or_implicit();
    List_of_tf_variable_identifiersContext *list_of_tf_variable_identifiers();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *VAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf_port_declarationContext* tf_port_declaration();

  class  Task_prototypeContext : public antlr4::ParserRuleContext {
  public:
    Task_prototypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TASK();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Tf_port_listContext *tf_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Task_prototypeContext* task_prototype();

  class  Block_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Block_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_declarationContext *data_declaration();
    Local_parameter_declarationContext *local_parameter_declaration();
    Parameter_declarationContext *parameter_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Overload_declarationContext *overload_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_item_declarationContext* block_item_declaration();

  class  Overload_declarationContext : public antlr4::ParserRuleContext {
  public:
    Overload_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIND();
    Overload_operatorContext *overload_operator();
    antlr4::tree::TerminalNode *FUNCTION();
    Data_typeContext *data_type();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Overload_proto_formalsContext *overload_proto_formals();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Overload_declarationContext* overload_declaration();

  class  Overload_operatorContext : public antlr4::ParserRuleContext {
  public:
    Overload_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Overload_operatorContext() = default;
    void copyFrom(Overload_operatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OverloadOp_MinusContext : public Overload_operatorContext {
  public:
    OverloadOp_MinusContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_GreaterEqualContext : public Overload_operatorContext {
  public:
    OverloadOp_GreaterEqualContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *GREATER_EQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_LessContext : public Overload_operatorContext {
  public:
    OverloadOp_LessContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *LESS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_PercentContext : public Overload_operatorContext {
  public:
    OverloadOp_PercentContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *PERCENT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_NotEqualContext : public Overload_operatorContext {
  public:
    OverloadOp_NotEqualContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *NOTEQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_MultContext : public Overload_operatorContext {
  public:
    OverloadOp_MultContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *STAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_EquivContext : public Overload_operatorContext {
  public:
    OverloadOp_EquivContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *EQUIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_EqualContext : public Overload_operatorContext {
  public:
    OverloadOp_EqualContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *ASSIGN_OP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_LessEqualContext : public Overload_operatorContext {
  public:
    OverloadOp_LessEqualContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *LESS_EQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_PlusPlusContext : public Overload_operatorContext {
  public:
    OverloadOp_PlusPlusContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *PLUSPLUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_GreaterContext : public Overload_operatorContext {
  public:
    OverloadOp_GreaterContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *GREATER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_MinusMinusContext : public Overload_operatorContext {
  public:
    OverloadOp_MinusMinusContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *MINUSMINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_StarStarContext : public Overload_operatorContext {
  public:
    OverloadOp_StarStarContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *STARSTAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_PlusContext : public Overload_operatorContext {
  public:
    OverloadOp_PlusContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *PLUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OverloadOp_DivContext : public Overload_operatorContext {
  public:
    OverloadOp_DivContext(Overload_operatorContext *ctx);

    antlr4::tree::TerminalNode *DIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Overload_operatorContext* overload_operator();

  class  Overload_proto_formalsContext : public antlr4::ParserRuleContext {
  public:
    Overload_proto_formalsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Data_typeContext *> data_type();
    Data_typeContext* data_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Overload_proto_formalsContext* overload_proto_formals();

  class  Virtual_interface_declarationContext : public antlr4::ParserRuleContext {
  public:
    Virtual_interface_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VIRTUAL();
    Interface_identifierContext *interface_identifier();
    List_of_virtual_interface_declContext *list_of_virtual_interface_decl();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *INTERFACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Virtual_interface_declarationContext* virtual_interface_declaration();

  class  Modport_itemContext : public antlr4::ParserRuleContext {
  public:
    Modport_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Modport_ports_declarationContext *> modport_ports_declaration();
    Modport_ports_declarationContext* modport_ports_declaration(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_itemContext* modport_item();

  class  Modport_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Modport_simple_ports_declarationContext *modport_simple_ports_declaration();
    Modport_hierarchical_ports_declarationContext *modport_hierarchical_ports_declaration();
    Modport_tf_ports_declarationContext *modport_tf_ports_declaration();
    antlr4::tree::TerminalNode *CLOCKING();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_ports_declarationContext* modport_ports_declaration();

  class  Modport_simple_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_simple_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Port_directionContext *port_direction();
    std::vector<Modport_simple_portContext *> modport_simple_port();
    Modport_simple_portContext* modport_simple_port(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_simple_ports_declarationContext* modport_simple_ports_declaration();

  class  Modport_simple_portContext : public antlr4::ParserRuleContext {
  public:
    Modport_simple_portContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_simple_portContext* modport_simple_port();

  class  Modport_hierarchical_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_hierarchical_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_hierarchical_ports_declarationContext* modport_hierarchical_ports_declaration();

  class  Modport_tf_ports_declarationContext : public antlr4::ParserRuleContext {
  public:
    Modport_tf_ports_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Modport_tf_portContext *> modport_tf_port();
    Modport_tf_portContext* modport_tf_port(size_t i);
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *EXPORT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_tf_ports_declarationContext* modport_tf_ports_declaration();

  class  Modport_tf_portContext : public antlr4::ParserRuleContext {
  public:
    Modport_tf_portContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_prototypeContext *method_prototype();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Modport_tf_portContext* modport_tf_port();

  class  Concurrent_assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_statementContext *concurrent_assertion_statement();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    Checker_instantiationContext *checker_instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_assertion_itemContext* concurrent_assertion_item();

  class  Concurrent_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assert_property_statementContext *assert_property_statement();
    Assume_property_statementContext *assume_property_statement();
    Cover_property_statementContext *cover_property_statement();
    Cover_sequence_statementContext *cover_sequence_statement();
    Restrict_property_statementContext *restrict_property_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_assertion_statementContext* concurrent_assertion_statement();

  class  Assert_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Assert_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assert_property_statementContext* assert_property_statement();

  class  Assume_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Assume_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assume_property_statementContext* assume_property_statement();

  class  Cover_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Cover_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_property_statementContext* cover_property_statement();

  class  Expect_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Expect_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXPECT();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expect_property_statementContext* expect_property_statement();

  class  Cover_sequence_statementContext : public antlr4::ParserRuleContext {
  public:
    Cover_sequence_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *SEQUENCE();
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    Sequence_exprContext *sequence_expr();
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    Statement_or_nullContext *statement_or_null();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    Expression_or_distContext *expression_or_dist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_sequence_statementContext* cover_sequence_statement();

  class  Restrict_property_statementContext : public antlr4::ParserRuleContext {
  public:
    Restrict_property_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *PROPERTY();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Property_specContext *property_spec();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Restrict_property_statementContext* restrict_property_statement();

  class  Property_instanceContext : public antlr4::ParserRuleContext {
  public:
    Property_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_sequence_identifierContext *ps_or_hierarchical_sequence_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Actual_arg_listContext *actual_arg_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_instanceContext* property_instance();

  class  Property_actual_argContext : public antlr4::ParserRuleContext {
  public:
    Property_actual_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_exprContext *property_expr();
    Sequence_actual_argContext *sequence_actual_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_actual_argContext* property_actual_arg();

  class  Concurrent_assertion_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Concurrent_assertion_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_declarationContext *property_declaration();
    Sequence_declarationContext *sequence_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Concurrent_assertion_item_declarationContext* concurrent_assertion_item_declaration();

  class  Assertion_item_declarationContext : public antlr4::ParserRuleContext {
  public:
    Assertion_item_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_declarationContext *property_declaration();
    Sequence_declarationContext *sequence_declaration();
    Let_declarationContext *let_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assertion_item_declarationContext* assertion_item_declaration();

  class  EndpropertyContext : public antlr4::ParserRuleContext {
  public:
    EndpropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDPROPERTY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndpropertyContext* endproperty();

  class  Property_declarationContext : public antlr4::ParserRuleContext {
  public:
    Property_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROPERTY();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    Property_specContext *property_spec();
    EndpropertyContext *endproperty();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Assertion_variable_declarationContext *> assertion_variable_declaration();
    Assertion_variable_declarationContext* assertion_variable_declaration(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    List_of_formalsContext *list_of_formals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_declarationContext* property_declaration();

  class  Property_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Property_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_formal_typeContext *sequence_formal_type();
    antlr4::tree::TerminalNode *PROPERTY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_formal_typeContext* property_formal_type();

  class  Property_specContext : public antlr4::ParserRuleContext {
  public:
    Property_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Property_exprContext *property_expr();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *DISABLE();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_specContext* property_spec();

  class  EndcaseContext : public antlr4::ParserRuleContext {
  public:
    EndcaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDCASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndcaseContext* endcase();

  class  Property_exprContext : public antlr4::ParserRuleContext {
  public:
    Property_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_exprContext *sequence_expr();
    antlr4::tree::TerminalNode *STRONG();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *WEAK();
    std::vector<Property_exprContext *> property_expr();
    Property_exprContext* property_expr(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *OVERLAP_IMPLY();
    antlr4::tree::TerminalNode *NON_OVERLAP_IMPLY();
    antlr4::tree::TerminalNode *IF();
    Expression_or_distContext *expression_or_dist();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *CASE();
    std::vector<Property_case_itemContext *> property_case_item();
    Property_case_itemContext* property_case_item(size_t i);
    EndcaseContext *endcase();
    antlr4::tree::TerminalNode *OVERLAPPED();
    antlr4::tree::TerminalNode *NONOVERLAPPED();
    antlr4::tree::TerminalNode *NEXTTIME();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *S_NEXTTIME();
    antlr4::tree::TerminalNode *ALWAYS();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();
    antlr4::tree::TerminalNode *S_ALWAYS();
    Constant_rangeContext *constant_range();
    antlr4::tree::TerminalNode *S_EVENTUALLY();
    antlr4::tree::TerminalNode *EVENTUALLY();
    antlr4::tree::TerminalNode *ACCEPT_ON();
    antlr4::tree::TerminalNode *REJECT_ON();
    antlr4::tree::TerminalNode *SYNC_ACCEPT_ON();
    antlr4::tree::TerminalNode *SYNC_REJECT_ON();
    Property_instanceContext *property_instance();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *S_UNTIL();
    antlr4::tree::TerminalNode *UNTIL_WITH();
    antlr4::tree::TerminalNode *S_UNTIL_WITH();
    antlr4::tree::TerminalNode *IMPLIES();
    antlr4::tree::TerminalNode *IFF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_exprContext* property_expr();
  Property_exprContext* property_expr(int precedence);
  class  Property_case_itemContext : public antlr4::ParserRuleContext {
  public:
    Property_case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expression_or_distContext *> expression_or_dist();
    Expression_or_distContext* expression_or_dist(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Property_exprContext *property_expr();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Property_case_itemContext* property_case_item();

  class  EndsequenceContext : public antlr4::ParserRuleContext {
  public:
    EndsequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDSEQUENCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndsequenceContext* endsequence();

  class  Sequence_declarationContext : public antlr4::ParserRuleContext {
  public:
    Sequence_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEQUENCE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    Sequence_exprContext *sequence_expr();
    EndsequenceContext *endsequence();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Assertion_variable_declarationContext *> assertion_variable_declaration();
    Assertion_variable_declarationContext* assertion_variable_declaration(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    List_of_formalsContext *list_of_formals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_declarationContext* sequence_declaration();

  class  Sequence_exprContext : public antlr4::ParserRuleContext {
  public:
    Sequence_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cycle_delay_rangeContext *> cycle_delay_range();
    Cycle_delay_rangeContext* cycle_delay_range(size_t i);
    std::vector<Sequence_exprContext *> sequence_expr();
    Sequence_exprContext* sequence_expr(size_t i);
    Expression_or_distContext *expression_or_dist();
    Boolean_abbrevContext *boolean_abbrev();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Sequence_match_itemContext *> sequence_match_item();
    Sequence_match_itemContext* sequence_match_item(size_t i);
    Sequence_instanceContext *sequence_instance();
    Consecutive_repetitionContext *consecutive_repetition();
    antlr4::tree::TerminalNode *FIRST_MATCH();
    antlr4::tree::TerminalNode *THROUGHOUT();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *WITHIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_exprContext* sequence_expr();
  Sequence_exprContext* sequence_expr(int precedence);
  class  Cycle_delay_rangeContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delay_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUNDPOUND();
    Constant_primaryContext *constant_primary();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *ASSOCIATIVE_UNSPECIFIED();
    antlr4::tree::TerminalNode *PLUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cycle_delay_rangeContext* cycle_delay_range();

  class  Sequence_method_callContext : public antlr4::ParserRuleContext {
  public:
    Sequence_method_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sequence_instanceContext *sequence_instance();
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_method_callContext* sequence_method_call();

  class  Sequence_match_itemContext : public antlr4::ParserRuleContext {
  public:
    Sequence_match_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_assignmentContext *operator_assignment();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Subroutine_callContext *subroutine_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_match_itemContext* sequence_match_item();

  class  Sequence_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Sequence_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Sequence_formal_typeContext() = default;
    void copyFrom(Sequence_formal_typeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SeqFormatType_DataContext : public Sequence_formal_typeContext {
  public:
    SeqFormatType_DataContext(Sequence_formal_typeContext *ctx);

    Data_type_or_implicitContext *data_type_or_implicit();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SeqFormatType_UntypedContext : public Sequence_formal_typeContext {
  public:
    SeqFormatType_UntypedContext(Sequence_formal_typeContext *ctx);

    antlr4::tree::TerminalNode *UNTYPED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SeqFormatType_SequenceContext : public Sequence_formal_typeContext {
  public:
    SeqFormatType_SequenceContext(Sequence_formal_typeContext *ctx);

    antlr4::tree::TerminalNode *SEQUENCE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Sequence_formal_typeContext* sequence_formal_type();

  class  Sequence_instanceContext : public antlr4::ParserRuleContext {
  public:
    Sequence_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_sequence_identifierContext *ps_or_hierarchical_sequence_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Sequence_list_of_argumentsContext *sequence_list_of_arguments();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_instanceContext* sequence_instance();

  class  Sequence_list_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Sequence_list_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sequence_actual_argContext *> sequence_actual_arg();
    Sequence_actual_argContext* sequence_actual_arg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_list_of_argumentsContext* sequence_list_of_arguments();

  class  Sequence_actual_argContext : public antlr4::ParserRuleContext {
  public:
    Sequence_actual_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_expressionContext *event_expression();
    Sequence_exprContext *sequence_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequence_actual_argContext* sequence_actual_arg();

  class  Formal_list_itemContext : public antlr4::ParserRuleContext {
  public:
    Formal_list_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Actual_arg_exprContext *actual_arg_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formal_list_itemContext* formal_list_item();

  class  List_of_formalsContext : public antlr4::ParserRuleContext {
  public:
    List_of_formalsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Formal_list_itemContext *> formal_list_item();
    Formal_list_itemContext* formal_list_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_formalsContext* list_of_formals();

  class  Actual_arg_listContext : public antlr4::ParserRuleContext {
  public:
    Actual_arg_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Actual_arg_exprContext *> actual_arg_expr();
    Actual_arg_exprContext* actual_arg_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Actual_arg_listContext* actual_arg_list();

  class  Actual_arg_exprContext : public antlr4::ParserRuleContext {
  public:
    Actual_arg_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_expressionContext *event_expression();
    Dollar_keywordContext *dollar_keyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Actual_arg_exprContext* actual_arg_expr();

  class  Boolean_abbrevContext : public antlr4::ParserRuleContext {
  public:
    Boolean_abbrevContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Consecutive_repetitionContext *consecutive_repetition();
    Non_consecutive_repetitionContext *non_consecutive_repetition();
    Goto_repetitionContext *goto_repetition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_abbrevContext* boolean_abbrev();

  class  Consecutive_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Consecutive_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSECUTIVE_REP();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Consecutive_repetitionContext* consecutive_repetition();

  class  Non_consecutive_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Non_consecutive_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NON_CONSECUTIVE_REP();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Non_consecutive_repetitionContext* non_consecutive_repetition();

  class  Goto_repetitionContext : public antlr4::ParserRuleContext {
  public:
    Goto_repetitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO_REP();
    Const_or_range_expressionContext *const_or_range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Goto_repetitionContext* goto_repetition();

  class  Const_or_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Const_or_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Cycle_delay_const_range_expressionContext *cycle_delay_const_range_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_or_range_expressionContext* const_or_range_expression();

  class  Cycle_delay_const_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delay_const_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cycle_delay_const_range_expressionContext* cycle_delay_const_range_expression();

  class  Expression_or_distContext : public antlr4::ParserRuleContext {
  public:
    Expression_or_distContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DIST();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Dist_listContext *dist_list();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_or_distContext* expression_or_dist();

  class  Assertion_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Assertion_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    List_of_variable_identifiersContext *list_of_variable_identifiers();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assertion_variable_declarationContext* assertion_variable_declaration();

  class  Let_declarationContext : public antlr4::ParserRuleContext {
  public:
    Let_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LET();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Let_port_listContext *let_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_declarationContext* let_declaration();

  class  Let_port_listContext : public antlr4::ParserRuleContext {
  public:
    Let_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Let_port_itemContext *> let_port_item();
    Let_port_itemContext* let_port_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_port_listContext* let_port_list();

  class  Let_port_itemContext : public antlr4::ParserRuleContext {
  public:
    Let_port_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Let_formal_typeContext *let_formal_type();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Variable_dimensionContext *> variable_dimension();
    Variable_dimensionContext* variable_dimension(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_port_itemContext* let_port_item();

  class  Let_formal_typeContext : public antlr4::ParserRuleContext {
  public:
    Let_formal_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_type_or_implicitContext *data_type_or_implicit();
    antlr4::tree::TerminalNode *UNTYPED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Let_formal_typeContext* let_formal_type();

  class  EndgroupContext : public antlr4::ParserRuleContext {
  public:
    EndgroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDGROUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndgroupContext* endgroup();

  class  Covergroup_declarationContext : public antlr4::ParserRuleContext {
  public:
    Covergroup_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVERGROUP();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndgroupContext *endgroup();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Coverage_eventContext *coverage_event();
    std::vector<Coverage_spec_or_optionContext *> coverage_spec_or_option();
    Coverage_spec_or_optionContext* coverage_spec_or_option(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Tf_port_listContext *tf_port_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Covergroup_declarationContext* covergroup_declaration();

  class  Coverage_spec_or_optionContext : public antlr4::ParserRuleContext {
  public:
    Coverage_spec_or_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_specContext *coverage_spec();
    Coverage_optionContext *coverage_option();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coverage_spec_or_optionContext* coverage_spec_or_option();

  class  Coverage_optionContext : public antlr4::ParserRuleContext {
  public:
    Coverage_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTION_DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TYPE_OPTION_DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coverage_optionContext* coverage_option();

  class  Coverage_specContext : public antlr4::ParserRuleContext {
  public:
    Coverage_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cover_pointContext *cover_point();
    Cover_crossContext *cover_cross();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coverage_specContext* coverage_spec();

  class  Coverage_eventContext : public antlr4::ParserRuleContext {
  public:
    Coverage_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *ATAT();
    Block_event_expressionContext *block_event_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Coverage_eventContext* coverage_event();

  class  EndContext : public antlr4::ParserRuleContext {
  public:
    EndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndContext* end();

  class  Block_event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Block_event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    Hierarchical_btf_identifierContext *hierarchical_btf_identifier();
    EndContext *end();
    std::vector<Block_event_expressionContext *> block_event_expression();
    Block_event_expressionContext* block_event_expression(size_t i);
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Block_event_expressionContext* block_event_expression();
  Block_event_expressionContext* block_event_expression(int precedence);
  class  Hierarchical_btf_identifierContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_btf_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    Class_scopeContext *class_scope();
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_btf_identifierContext* hierarchical_btf_identifier();

  class  Cover_pointContext : public antlr4::ParserRuleContext {
  public:
    Cover_pointContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVERPOINT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Bins_or_emptyContext *bins_or_empty();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_pointContext* cover_point();

  class  Bins_or_emptyContext : public antlr4::ParserRuleContext {
  public:
    Bins_or_emptyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Bins_or_optionsContext *> bins_or_options();
    Bins_or_optionsContext* bins_or_options(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_or_emptyContext* bins_or_empty();

  class  Bins_or_optionsContext : public antlr4::ParserRuleContext {
  public:
    Bins_or_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_optionContext *coverage_option();
    Bins_keywordContext *bins_keyword();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Range_listContext *range_list();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    antlr4::tree::TerminalNode *WILDCARD();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *WITH();
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    antlr4::tree::TerminalNode *IFF();
    Trans_listContext *trans_list();
    Unsized_dimensionContext *unsized_dimension();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *SEQUENCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_or_optionsContext* bins_or_options();

  class  Bins_keywordContext : public antlr4::ParserRuleContext {
  public:
    Bins_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Bins_keywordContext() = default;
    void copyFrom(Bins_keywordContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Bins_IgnoreContext : public Bins_keywordContext {
  public:
    Bins_IgnoreContext(Bins_keywordContext *ctx);

    antlr4::tree::TerminalNode *IGNORE_BINS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Bins_BinsContext : public Bins_keywordContext {
  public:
    Bins_BinsContext(Bins_keywordContext *ctx);

    antlr4::tree::TerminalNode *BINS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Bins_IllegalContext : public Bins_keywordContext {
  public:
    Bins_IllegalContext(Bins_keywordContext *ctx);

    antlr4::tree::TerminalNode *ILLEGAL_BINS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Bins_keywordContext* bins_keyword();

  class  Range_listContext : public antlr4::ParserRuleContext {
  public:
    Range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Value_rangeContext *> value_range();
    Value_rangeContext* value_range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_listContext* range_list();

  class  Trans_listContext : public antlr4::ParserRuleContext {
  public:
    Trans_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    std::vector<Trans_setContext *> trans_set();
    Trans_setContext* trans_set(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trans_listContext* trans_list();

  class  Trans_setContext : public antlr4::ParserRuleContext {
  public:
    Trans_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Trans_range_listContext *> trans_range_list();
    Trans_range_listContext* trans_range_list(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TRANSITION_OP();
    antlr4::tree::TerminalNode* TRANSITION_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trans_setContext* trans_set();

  class  Trans_range_listContext : public antlr4::ParserRuleContext {
  public:
    Trans_range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Range_listContext *range_list();
    antlr4::tree::TerminalNode *CONSECUTIVE_REP();
    Repeat_rangeContext *repeat_range();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *GOTO_REP();
    antlr4::tree::TerminalNode *NON_CONSECUTIVE_REP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trans_range_listContext* trans_range_list();

  class  Repeat_rangeContext : public antlr4::ParserRuleContext {
  public:
    Repeat_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_rangeContext* repeat_range();

  class  Cover_crossContext : public antlr4::ParserRuleContext {
  public:
    Cover_crossContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CROSS();
    List_of_cross_itemsContext *list_of_cross_items();
    Cross_bodyContext *cross_body();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cover_crossContext* cover_cross();

  class  List_of_cross_itemsContext : public antlr4::ParserRuleContext {
  public:
    List_of_cross_itemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Cross_itemContext *> cross_item();
    Cross_itemContext* cross_item(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_cross_itemsContext* list_of_cross_items();

  class  Cross_itemContext : public antlr4::ParserRuleContext {
  public:
    Cross_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_itemContext* cross_item();

  class  Cross_bodyContext : public antlr4::ParserRuleContext {
  public:
    Cross_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    Cross_body_itemContext *cross_body_item();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_bodyContext* cross_body();

  class  Cross_body_itemContext : public antlr4::ParserRuleContext {
  public:
    Cross_body_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_declarationContext *function_declaration();
    Bins_selection_or_optionContext *bins_selection_or_option();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cross_body_itemContext* cross_body_item();

  class  Bins_selection_or_optionContext : public antlr4::ParserRuleContext {
  public:
    Bins_selection_or_optionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Coverage_optionContext *coverage_option();
    Bins_selectionContext *bins_selection();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_selection_or_optionContext* bins_selection_or_option();

  class  Bins_selectionContext : public antlr4::ParserRuleContext {
  public:
    Bins_selectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bins_keywordContext *bins_keyword();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Select_expressionContext *select_expression();
    antlr4::tree::TerminalNode *IFF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_selectionContext* bins_selection();

  class  Select_expressionContext : public antlr4::ParserRuleContext {
  public:
    Select_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Select_conditionContext *select_condition();
    antlr4::tree::TerminalNode *BANG();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Select_expressionContext *> select_expression();
    Select_expressionContext* select_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    IdentifierContext *identifier();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MATCHES();
    antlr4::tree::TerminalNode *LOGICAL_AND();
    antlr4::tree::TerminalNode *LOGICAL_OR();
    antlr4::tree::TerminalNode *WITH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_expressionContext* select_expression();
  Select_expressionContext* select_expression(int precedence);
  class  Select_conditionContext : public antlr4::ParserRuleContext {
  public:
    Select_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BINSOF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Bins_expressionContext *bins_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Select_conditionContext* select_condition();

  class  Bins_expressionContext : public antlr4::ParserRuleContext {
  public:
    Bins_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bins_expressionContext* bins_expression();

  class  Open_range_listContext : public antlr4::ParserRuleContext {
  public:
    Open_range_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Value_rangeContext *> value_range();
    Value_rangeContext* value_range(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Open_range_listContext* open_range_list();

  class  Gate_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Gate_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cmos_switchtypeContext *cmos_switchtype();
    std::vector<Cmos_switch_instanceContext *> cmos_switch_instance();
    Cmos_switch_instanceContext* cmos_switch_instance(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Delay3Context *delay3();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Enable_gatetypeContext *enable_gatetype();
    std::vector<Enable_gate_instanceContext *> enable_gate_instance();
    Enable_gate_instanceContext* enable_gate_instance(size_t i);
    Drive_strengthContext *drive_strength();
    Mos_switchtypeContext *mos_switchtype();
    std::vector<Mos_switch_instanceContext *> mos_switch_instance();
    Mos_switch_instanceContext* mos_switch_instance(size_t i);
    N_input_gatetypeContext *n_input_gatetype();
    std::vector<N_input_gate_instanceContext *> n_input_gate_instance();
    N_input_gate_instanceContext* n_input_gate_instance(size_t i);
    Delay2Context *delay2();
    N_output_gatetypeContext *n_output_gatetype();
    std::vector<N_output_gate_instanceContext *> n_output_gate_instance();
    N_output_gate_instanceContext* n_output_gate_instance(size_t i);
    Pass_en_switchtypeContext *pass_en_switchtype();
    std::vector<Pass_enable_switch_instanceContext *> pass_enable_switch_instance();
    Pass_enable_switch_instanceContext* pass_enable_switch_instance(size_t i);
    Pass_switchtypeContext *pass_switchtype();
    std::vector<Pass_switch_instanceContext *> pass_switch_instance();
    Pass_switch_instanceContext* pass_switch_instance(size_t i);
    antlr4::tree::TerminalNode *PULLDOWN();
    std::vector<Pull_gate_instanceContext *> pull_gate_instance();
    Pull_gate_instanceContext* pull_gate_instance(size_t i);
    Pulldown_strengthContext *pulldown_strength();
    antlr4::tree::TerminalNode *PULLUP();
    Pullup_strengthContext *pullup_strength();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gate_instantiationContext* gate_instantiation();

  class  Cmos_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Net_lvalueContext *net_lvalue();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cmos_switch_instanceContext* cmos_switch_instance();

  class  Enable_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Enable_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Net_lvalueContext *net_lvalue();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_gate_instanceContext* enable_gate_instance();

  class  Mos_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Mos_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Net_lvalueContext *net_lvalue();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mos_switch_instanceContext* mos_switch_instance();

  class  N_input_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    N_input_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Net_lvalueContext *net_lvalue();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  N_input_gate_instanceContext* n_input_gate_instance();

  class  N_output_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    N_output_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  N_output_gate_instanceContext* n_output_gate_instance();

  class  Pass_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pass_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_switch_instanceContext* pass_switch_instance();

  class  Pass_enable_switch_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pass_enable_switch_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pass_enable_switch_instanceContext* pass_enable_switch_instance();

  class  Pull_gate_instanceContext : public antlr4::ParserRuleContext {
  public:
    Pull_gate_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Net_lvalueContext *net_lvalue();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pull_gate_instanceContext* pull_gate_instance();

  class  Pulldown_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pulldown_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Pulldown_strengthContext() = default;
    void copyFrom(Pulldown_strengthContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PulldownStrength_01Context : public Pulldown_strengthContext {
  public:
    PulldownStrength_01Context(Pulldown_strengthContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENS();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *COMMA();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PulldownStrength_10Context : public Pulldown_strengthContext {
  public:
    PulldownStrength_10Context(Pulldown_strengthContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENS();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *COMMA();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PulldownStrength_0Context : public Pulldown_strengthContext {
  public:
    PulldownStrength_0Context(Pulldown_strengthContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENS();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Pulldown_strengthContext* pulldown_strength();

  class  Pullup_strengthContext : public antlr4::ParserRuleContext {
  public:
    Pullup_strengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Pullup_strengthContext() = default;
    void copyFrom(Pullup_strengthContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PullupStrength_10Context : public Pullup_strengthContext {
  public:
    PullupStrength_10Context(Pullup_strengthContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENS();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *COMMA();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PullupStrength_01Context : public Pullup_strengthContext {
  public:
    PullupStrength_01Context(Pullup_strengthContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENS();
    Strength0Context *strength0();
    antlr4::tree::TerminalNode *COMMA();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PullupStrength_1Context : public Pullup_strengthContext {
  public:
    PullupStrength_1Context(Pullup_strengthContext *ctx);

    antlr4::tree::TerminalNode *OPEN_PARENS();
    Strength1Context *strength1();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Pullup_strengthContext* pullup_strength();

  class  Cmos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Cmos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Cmos_switchtypeContext() = default;
    void copyFrom(Cmos_switchtypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CmosSwitchType_RCmosContext : public Cmos_switchtypeContext {
  public:
    CmosSwitchType_RCmosContext(Cmos_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *RCMOS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CmosSwitchType_CmosContext : public Cmos_switchtypeContext {
  public:
    CmosSwitchType_CmosContext(Cmos_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *CMOS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Cmos_switchtypeContext* cmos_switchtype();

  class  Enable_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    Enable_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Enable_gatetypeContext() = default;
    void copyFrom(Enable_gatetypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EnableGateType_Bufif0Context : public Enable_gatetypeContext {
  public:
    EnableGateType_Bufif0Context(Enable_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *BUFIF0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EnableGateType_Notif0Context : public Enable_gatetypeContext {
  public:
    EnableGateType_Notif0Context(Enable_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *NOTIF0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EnableGateType_Notif1Context : public Enable_gatetypeContext {
  public:
    EnableGateType_Notif1Context(Enable_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *NOTIF1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EnableGateType_Bufif1Context : public Enable_gatetypeContext {
  public:
    EnableGateType_Bufif1Context(Enable_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *BUFIF1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Enable_gatetypeContext* enable_gatetype();

  class  Mos_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Mos_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Mos_switchtypeContext() = default;
    void copyFrom(Mos_switchtypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MosSwitchType_PMosContext : public Mos_switchtypeContext {
  public:
    MosSwitchType_PMosContext(Mos_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *PMOS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MosSwitchType_NMosContext : public Mos_switchtypeContext {
  public:
    MosSwitchType_NMosContext(Mos_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *NMOS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MosSwitchType_RPMosContext : public Mos_switchtypeContext {
  public:
    MosSwitchType_RPMosContext(Mos_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *RPMOS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MosSwitchType_RNMosContext : public Mos_switchtypeContext {
  public:
    MosSwitchType_RNMosContext(Mos_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *RNMOS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Mos_switchtypeContext* mos_switchtype();

  class  N_input_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_input_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    N_input_gatetypeContext() = default;
    void copyFrom(N_input_gatetypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NInpGate_XorContext : public N_input_gatetypeContext {
  public:
    NInpGate_XorContext(N_input_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *XOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NInpGate_NandContext : public N_input_gatetypeContext {
  public:
    NInpGate_NandContext(N_input_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *NAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NInpGate_AndContext : public N_input_gatetypeContext {
  public:
    NInpGate_AndContext(N_input_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NInpGate_OrContext : public N_input_gatetypeContext {
  public:
    NInpGate_OrContext(N_input_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NInpGate_XnorContext : public N_input_gatetypeContext {
  public:
    NInpGate_XnorContext(N_input_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *XNOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NInpGate_NorContext : public N_input_gatetypeContext {
  public:
    NInpGate_NorContext(N_input_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *NOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  N_input_gatetypeContext* n_input_gatetype();

  class  N_output_gatetypeContext : public antlr4::ParserRuleContext {
  public:
    N_output_gatetypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    N_output_gatetypeContext() = default;
    void copyFrom(N_output_gatetypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NOutGate_BufContext : public N_output_gatetypeContext {
  public:
    NOutGate_BufContext(N_output_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *BUF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NOutGate_NotContext : public N_output_gatetypeContext {
  public:
    NOutGate_NotContext(N_output_gatetypeContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  N_output_gatetypeContext* n_output_gatetype();

  class  Pass_en_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_en_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Pass_en_switchtypeContext() = default;
    void copyFrom(Pass_en_switchtypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PassEnSwitch_RTranif1Context : public Pass_en_switchtypeContext {
  public:
    PassEnSwitch_RTranif1Context(Pass_en_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *RTRANIF1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PassEnSwitch_Tranif0Context : public Pass_en_switchtypeContext {
  public:
    PassEnSwitch_Tranif0Context(Pass_en_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *TRANIF0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PassEnSwitch_Tranif1Context : public Pass_en_switchtypeContext {
  public:
    PassEnSwitch_Tranif1Context(Pass_en_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *TRANIF1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PassEnSwitch_RTranif0Context : public Pass_en_switchtypeContext {
  public:
    PassEnSwitch_RTranif0Context(Pass_en_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *RTRANIF0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Pass_en_switchtypeContext* pass_en_switchtype();

  class  Pass_switchtypeContext : public antlr4::ParserRuleContext {
  public:
    Pass_switchtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Pass_switchtypeContext() = default;
    void copyFrom(Pass_switchtypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PassSwitch_RTranContext : public Pass_switchtypeContext {
  public:
    PassSwitch_RTranContext(Pass_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *RTRAN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PassSwitch_TranContext : public Pass_switchtypeContext {
  public:
    PassSwitch_TranContext(Pass_switchtypeContext *ctx);

    antlr4::tree::TerminalNode *TRAN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Pass_switchtypeContext* pass_switchtype();

  class  Module_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Module_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Hierarchical_instanceContext *> hierarchical_instance();
    Hierarchical_instanceContext* hierarchical_instance(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_instantiationContext* module_instantiation();

  class  Parameter_value_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Parameter_value_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUND();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    List_of_parameter_assignmentsContext *list_of_parameter_assignments();
    antlr4::tree::TerminalNode *Pound_delay();
    antlr4::tree::TerminalNode *Simple_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parameter_value_assignmentContext* parameter_value_assignment();

  class  List_of_parameter_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_parameter_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_parameter_assignmentContext *> ordered_parameter_assignment();
    Ordered_parameter_assignmentContext* ordered_parameter_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_parameter_assignmentsContext* list_of_parameter_assignments();

  class  Ordered_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Ordered_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_expressionContext *param_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_parameter_assignmentContext* ordered_parameter_assignment();

  class  Named_parameter_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Named_parameter_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Param_expressionContext *param_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_parameter_assignmentContext* named_parameter_assignment();

  class  Hierarchical_instanceContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_of_instanceContext *name_of_instance();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_port_connectionsContext *list_of_port_connections();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_instanceContext* hierarchical_instance();

  class  Name_of_instanceContext : public antlr4::ParserRuleContext {
  public:
    Name_of_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Unpacked_dimensionContext *> unpacked_dimension();
    Unpacked_dimensionContext* unpacked_dimension(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_of_instanceContext* name_of_instance();

  class  List_of_port_connectionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_port_connectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_port_connectionContext *> ordered_port_connection();
    Ordered_port_connectionContext* ordered_port_connection(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Named_port_connectionContext *> named_port_connection();
    Named_port_connectionContext* named_port_connection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_port_connectionsContext* list_of_port_connections();

  class  Ordered_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Ordered_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_port_connectionContext* ordered_port_connection();

  class  Named_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Named_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOTSTAR();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_port_connectionContext* named_port_connection();

  class  Interface_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Interface_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Interface_identifierContext *interface_identifier();
    std::vector<Hierarchical_instanceContext *> hierarchical_instance();
    Hierarchical_instanceContext* hierarchical_instance(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_instantiationContext* interface_instantiation();

  class  Program_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Program_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Hierarchical_instanceContext *> hierarchical_instance();
    Hierarchical_instanceContext* hierarchical_instance(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Parameter_value_assignmentContext *parameter_value_assignment();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Program_instantiationContext* program_instantiation();

  class  Checker_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Checker_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_identifierContext *ps_identifier();
    Name_of_instanceContext *name_of_instance();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_checker_port_connectionsContext *list_of_checker_port_connections();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Checker_instantiationContext* checker_instantiation();

  class  List_of_checker_port_connectionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_checker_port_connectionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Ordered_checker_port_connectionContext *> ordered_checker_port_connection();
    Ordered_checker_port_connectionContext* ordered_checker_port_connection(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    std::vector<Named_checker_port_connectionContext *> named_checker_port_connection();
    Named_checker_port_connectionContext* named_checker_port_connection(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_checker_port_connectionsContext* list_of_checker_port_connections();

  class  Ordered_checker_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Ordered_checker_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Property_actual_argContext *property_actual_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ordered_checker_port_connectionContext* ordered_checker_port_connection();

  class  Named_checker_port_connectionContext : public antlr4::ParserRuleContext {
  public:
    Named_checker_port_connectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *DOTSTAR();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Property_actual_argContext *property_actual_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Named_checker_port_connectionContext* named_checker_port_connection();

  class  EndgenerateContext : public antlr4::ParserRuleContext {
  public:
    EndgenerateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDGENERATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndgenerateContext* endgenerate();

  class  Generated_module_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Generated_module_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    EndgenerateContext *endgenerate();
    std::vector<Generate_module_itemContext *> generate_module_item();
    Generate_module_itemContext* generate_module_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generated_module_instantiationContext* generated_module_instantiation();

  class  Generate_module_itemContext : public antlr4::ParserRuleContext {
  public:
    Generate_module_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_module_conditional_statementContext *generate_module_conditional_statement();
    Generate_module_case_statementContext *generate_module_case_statement();
    Generate_module_loop_statementContext *generate_module_loop_statement();
    Generate_module_blockContext *generate_module_block();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    Module_or_generate_itemContext *module_or_generate_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_module_itemContext* generate_module_item();

  class  Generate_module_conditional_statementContext : public antlr4::ParserRuleContext {
  public:
    Generate_module_conditional_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Generate_module_itemContext *> generate_module_item();
    Generate_module_itemContext* generate_module_item(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_module_conditional_statementContext* generate_module_conditional_statement();

  class  Generate_module_case_statementContext : public antlr4::ParserRuleContext {
  public:
    Generate_module_case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Genvar_module_case_itemContext *> genvar_module_case_item();
    Genvar_module_case_itemContext* genvar_module_case_item(size_t i);
    EndcaseContext *endcase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_module_case_statementContext* generate_module_case_statement();

  class  Genvar_module_case_itemContext : public antlr4::ParserRuleContext {
  public:
    Genvar_module_case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Generate_module_itemContext *generate_module_item();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_module_case_itemContext* genvar_module_case_item();

  class  Generate_module_loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Generate_module_loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Genvar_decl_assignmentContext *genvar_decl_assignment();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    Constant_expressionContext *constant_expression();
    Genvar_assignmentContext *genvar_assignment();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Generate_module_named_blockContext *generate_module_named_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_module_loop_statementContext* generate_module_loop_statement();

  class  Genvar_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Genvar_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Assignment_operatorContext *assignment_operator();
    Constant_expressionContext *constant_expression();
    Inc_or_dec_operatorContext *inc_or_dec_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_assignmentContext* genvar_assignment();

  class  Genvar_decl_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Genvar_decl_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *GENVAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_decl_assignmentContext* genvar_decl_assignment();

  class  Generate_module_named_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_module_named_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    EndContext *end();
    std::vector<Generate_module_itemContext *> generate_module_item();
    Generate_module_itemContext* generate_module_item(size_t i);
    Generate_module_blockContext *generate_module_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_module_named_blockContext* generate_module_named_block();

  class  Generate_module_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_module_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    EndContext *end();
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Generate_module_itemContext *> generate_module_item();
    Generate_module_itemContext* generate_module_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_module_blockContext* generate_module_block();

  class  Generated_interface_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Generated_interface_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    EndgenerateContext *endgenerate();
    std::vector<Generate_interface_itemContext *> generate_interface_item();
    Generate_interface_itemContext* generate_interface_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generated_interface_instantiationContext* generated_interface_instantiation();

  class  Generate_interface_itemContext : public antlr4::ParserRuleContext {
  public:
    Generate_interface_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Generate_interface_conditional_statementContext *generate_interface_conditional_statement();
    Generate_interface_case_statementContext *generate_interface_case_statement();
    Generate_interface_loop_statementContext *generate_interface_loop_statement();
    Generate_interface_blockContext *generate_interface_block();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    Interface_or_generate_itemContext *interface_or_generate_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_interface_itemContext* generate_interface_item();

  class  Generate_interface_conditional_statementContext : public antlr4::ParserRuleContext {
  public:
    Generate_interface_conditional_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Generate_interface_itemContext *> generate_interface_item();
    Generate_interface_itemContext* generate_interface_item(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_interface_conditional_statementContext* generate_interface_conditional_statement();

  class  Generate_interface_case_statementContext : public antlr4::ParserRuleContext {
  public:
    Generate_interface_case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Genvar_interface_case_itemContext *> genvar_interface_case_item();
    Genvar_interface_case_itemContext* genvar_interface_case_item(size_t i);
    EndcaseContext *endcase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_interface_case_statementContext* generate_interface_case_statement();

  class  Genvar_interface_case_itemContext : public antlr4::ParserRuleContext {
  public:
    Genvar_interface_case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Generate_interface_itemContext *generate_interface_item();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_interface_case_itemContext* genvar_interface_case_item();

  class  Generate_interface_loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Generate_interface_loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Genvar_decl_assignmentContext *genvar_decl_assignment();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    Constant_expressionContext *constant_expression();
    Genvar_assignmentContext *genvar_assignment();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Generate_interface_named_blockContext *generate_interface_named_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_interface_loop_statementContext* generate_interface_loop_statement();

  class  Generate_interface_named_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_interface_named_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    EndContext *end();
    std::vector<Generate_interface_itemContext *> generate_interface_item();
    Generate_interface_itemContext* generate_interface_item(size_t i);
    Generate_interface_blockContext *generate_interface_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_interface_named_blockContext* generate_interface_named_block();

  class  Generate_interface_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_interface_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    EndContext *end();
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Generate_interface_itemContext *> generate_interface_item();
    Generate_interface_itemContext* generate_interface_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_interface_blockContext* generate_interface_block();

  class  Generate_regionContext : public antlr4::ParserRuleContext {
  public:
    Generate_regionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GENERATE();
    EndgenerateContext *endgenerate();
    std::vector<Generate_itemContext *> generate_item();
    Generate_itemContext* generate_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_regionContext* generate_region();

  class  Loop_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Loop_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Genvar_initializationContext *genvar_initialization();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    Constant_expressionContext *constant_expression();
    Genvar_iterationContext *genvar_iteration();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Generate_blockContext *generate_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_generate_constructContext* loop_generate_construct();

  class  Genvar_initializationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_initializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *GENVAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_initializationContext* genvar_initialization();

  class  Genvar_iterationContext : public antlr4::ParserRuleContext {
  public:
    Genvar_iterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Assignment_operatorContext *assignment_operator();
    Constant_expressionContext *constant_expression();
    Inc_or_dec_operatorContext *inc_or_dec_operator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Genvar_iterationContext* genvar_iteration();

  class  Conditional_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Conditional_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_generate_constructContext *if_generate_construct();
    Case_generate_constructContext *case_generate_construct();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_generate_constructContext* conditional_generate_construct();

  class  If_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    If_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Generate_blockContext *> generate_block();
    Generate_blockContext* generate_block(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_generate_constructContext* if_generate_construct();

  class  Case_generate_constructContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Case_generate_itemContext *> case_generate_item();
    Case_generate_itemContext* case_generate_item(size_t i);
    EndcaseContext *endcase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_generate_constructContext* case_generate_construct();

  class  Case_generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Generate_blockContext *generate_block();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_generate_itemContext* case_generate_item();

  class  Generate_blockContext : public antlr4::ParserRuleContext {
  public:
    Generate_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Generate_itemContext *> generate_item();
    Generate_itemContext* generate_item(size_t i);
    antlr4::tree::TerminalNode *BEGIN();
    EndContext *end();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_blockContext* generate_block();

  class  Generate_itemContext : public antlr4::ParserRuleContext {
  public:
    Generate_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_or_generate_itemContext *module_or_generate_item();
    Interface_or_generate_itemContext *interface_or_generate_item();
    Checker_or_generate_itemContext *checker_or_generate_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Generate_itemContext* generate_item();

  class  Udp_nonansi_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_nonansi_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMITIVE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Udp_port_listContext *udp_port_list();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_nonansi_declarationContext* udp_nonansi_declaration();

  class  Udp_ansi_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_ansi_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMITIVE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Udp_declaration_port_listContext *udp_declaration_port_list();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_ansi_declarationContext* udp_ansi_declaration();

  class  EndprimitiveContext : public antlr4::ParserRuleContext {
  public:
    EndprimitiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDPRIMITIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndprimitiveContext* endprimitive();

  class  Udp_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_nonansi_declarationContext *udp_nonansi_declaration();
    std::vector<Udp_port_declarationContext *> udp_port_declaration();
    Udp_port_declarationContext* udp_port_declaration(size_t i);
    Udp_bodyContext *udp_body();
    EndprimitiveContext *endprimitive();
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Udp_ansi_declarationContext *udp_ansi_declaration();
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *PRIMITIVE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *DOTSTAR();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_declarationContext* udp_declaration();

  class  Udp_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_port_listContext* udp_port_list();

  class  Udp_declaration_port_listContext : public antlr4::ParserRuleContext {
  public:
    Udp_declaration_port_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_output_declarationContext *udp_output_declaration();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Udp_input_declarationContext *> udp_input_declaration();
    Udp_input_declarationContext* udp_input_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_declaration_port_listContext* udp_declaration_port_list();

  class  Udp_port_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_port_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Udp_output_declarationContext *udp_output_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Udp_input_declarationContext *udp_input_declaration();
    Udp_reg_declarationContext *udp_reg_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_port_declarationContext* udp_port_declaration();

  class  Udp_output_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_output_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *REG();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_output_declarationContext* udp_output_declaration();

  class  Udp_input_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_input_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    Identifier_listContext *identifier_list();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_input_declarationContext* udp_input_declaration();

  class  Udp_reg_declarationContext : public antlr4::ParserRuleContext {
  public:
    Udp_reg_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REG();
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_reg_declarationContext* udp_reg_declaration();

  class  Udp_bodyContext : public antlr4::ParserRuleContext {
  public:
    Udp_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Combinational_bodyContext *combinational_body();
    Sequential_bodyContext *sequential_body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_bodyContext* udp_body();

  class  EndtableContext : public antlr4::ParserRuleContext {
  public:
    EndtableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDTABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndtableContext* endtable();

  class  Combinational_bodyContext : public antlr4::ParserRuleContext {
  public:
    Combinational_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Combinational_entryContext *> combinational_entry();
    Combinational_entryContext* combinational_entry(size_t i);
    EndtableContext *endtable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Combinational_bodyContext* combinational_body();

  class  Combinational_entryContext : public antlr4::ParserRuleContext {
  public:
    Combinational_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    antlr4::tree::TerminalNode *COLUMN();
    Output_symbolContext *output_symbol();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Combinational_entryContext* combinational_entry();

  class  Sequential_bodyContext : public antlr4::ParserRuleContext {
  public:
    Sequential_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    std::vector<Sequential_entryContext *> sequential_entry();
    Sequential_entryContext* sequential_entry(size_t i);
    EndtableContext *endtable();
    Udp_initial_statementContext *udp_initial_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequential_bodyContext* sequential_body();

  class  Udp_initial_statementContext : public antlr4::ParserRuleContext {
  public:
    Udp_initial_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Init_valContext *init_val();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_initial_statementContext* udp_initial_statement();

  class  Init_valContext : public antlr4::ParserRuleContext {
  public:
    Init_valContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Init_valContext() = default;
    void copyFrom(Init_valContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InitVal_1Tickb1Context : public Init_valContext {
  public:
    InitVal_1Tickb1Context(Init_valContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_b1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVal_1TickB1Context : public Init_valContext {
  public:
    InitVal_1TickB1Context(Init_valContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_B1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVal_1Tickb0Context : public Init_valContext {
  public:
    InitVal_1Tickb0Context(Init_valContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_b0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVal_1TickB0Context : public Init_valContext {
  public:
    InitVal_1TickB0Context(Init_valContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_B0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVal_1TickbxContext : public Init_valContext {
  public:
    InitVal_1TickbxContext(Init_valContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_bx();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVal_1TickbXContext : public Init_valContext {
  public:
    InitVal_1TickbXContext(Init_valContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_bX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVal_1TickBxContext : public Init_valContext {
  public:
    InitVal_1TickBxContext(Init_valContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_Bx();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVal_1TickBXContext : public Init_valContext {
  public:
    InitVal_1TickBXContext(Init_valContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_BX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVal_IntegralContext : public Init_valContext {
  public:
    InitVal_IntegralContext(Init_valContext *ctx);

    antlr4::tree::TerminalNode *Integral_number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Init_valContext* init_val();

  class  Sequential_entryContext : public antlr4::ParserRuleContext {
  public:
    Sequential_entryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Seq_input_listContext *seq_input_list();
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    Level_symbolContext *level_symbol();
    Next_stateContext *next_state();
    antlr4::tree::TerminalNode *SEMICOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sequential_entryContext* sequential_entry();

  class  Seq_input_listContext : public antlr4::ParserRuleContext {
  public:
    Seq_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Level_input_listContext *level_input_list();
    Edge_input_listContext *edge_input_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_input_listContext* seq_input_list();

  class  Level_input_listContext : public antlr4::ParserRuleContext {
  public:
    Level_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Level_input_listContext* level_input_list();

  class  Edge_input_listContext : public antlr4::ParserRuleContext {
  public:
    Edge_input_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Edge_indicatorContext *edge_indicator();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_input_listContext* edge_input_list();

  class  Edge_indicatorContext : public antlr4::ParserRuleContext {
  public:
    Edge_indicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Level_symbolContext *> level_symbol();
    Level_symbolContext* level_symbol(size_t i);
    Edge_symbolContext *edge_symbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_indicatorContext* edge_indicator();

  class  Next_stateContext : public antlr4::ParserRuleContext {
  public:
    Next_stateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Output_symbolContext *output_symbol();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Next_stateContext* next_state();

  class  Output_symbolContext : public antlr4::ParserRuleContext {
  public:
    Output_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integral_number();
    antlr4::tree::TerminalNode *Simple_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Output_symbolContext* output_symbol();

  class  Level_symbolContext : public antlr4::ParserRuleContext {
  public:
    Level_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integral_number();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *QMARK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Level_symbolContext* level_symbol();

  class  Edge_symbolContext : public antlr4::ParserRuleContext {
  public:
    Edge_symbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *STAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_symbolContext* edge_symbol();

  class  Udp_instantiationContext : public antlr4::ParserRuleContext {
  public:
    Udp_instantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Udp_instanceContext *> udp_instance();
    Udp_instanceContext* udp_instance(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Drive_strengthContext *drive_strength();
    Delay2Context *delay2();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_instantiationContext* udp_instantiation();

  class  Udp_instanceContext : public antlr4::ParserRuleContext {
  public:
    Udp_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Net_lvalueContext *net_lvalue();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Name_of_instanceContext *name_of_instance();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Udp_instanceContext* udp_instance();

  class  Continuous_assignContext : public antlr4::ParserRuleContext {
  public:
    Continuous_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    List_of_net_assignmentsContext *list_of_net_assignments();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Drive_strengthContext *drive_strength();
    Delay3Context *delay3();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    List_of_variable_assignmentsContext *list_of_variable_assignments();
    Delay_controlContext *delay_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Continuous_assignContext* continuous_assign();

  class  List_of_net_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_net_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Net_assignmentContext *> net_assignment();
    Net_assignmentContext* net_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_net_assignmentsContext* list_of_net_assignments();

  class  List_of_variable_assignmentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_variable_assignmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_assignmentContext *> variable_assignment();
    Variable_assignmentContext* variable_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_variable_assignmentsContext* list_of_variable_assignments();

  class  Net_aliasContext : public antlr4::ParserRuleContext {
  public:
    Net_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALIAS();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<antlr4::tree::TerminalNode *> ASSIGN_OP();
    antlr4::tree::TerminalNode* ASSIGN_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_aliasContext* net_alias();

  class  Net_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Net_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Net_lvalueContext *net_lvalue();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_assignmentContext* net_assignment();

  class  Initial_constructContext : public antlr4::ParserRuleContext {
  public:
    Initial_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INITIAL();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Initial_constructContext* initial_construct();

  class  Always_constructContext : public antlr4::ParserRuleContext {
  public:
    Always_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Always_keywordContext *always_keyword();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Always_constructContext* always_construct();

  class  Always_keywordContext : public antlr4::ParserRuleContext {
  public:
    Always_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Always_keywordContext() = default;
    void copyFrom(Always_keywordContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlwaysKeywd_CombContext : public Always_keywordContext {
  public:
    AlwaysKeywd_CombContext(Always_keywordContext *ctx);

    antlr4::tree::TerminalNode *ALWAYS_COMB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlwaysKeywd_LatchContext : public Always_keywordContext {
  public:
    AlwaysKeywd_LatchContext(Always_keywordContext *ctx);

    antlr4::tree::TerminalNode *ALWAYS_LATCH();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlwaysKeywd_FFContext : public Always_keywordContext {
  public:
    AlwaysKeywd_FFContext(Always_keywordContext *ctx);

    antlr4::tree::TerminalNode *ALWAYS_FF();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlwaysKeywd_AlwaysContext : public Always_keywordContext {
  public:
    AlwaysKeywd_AlwaysContext(Always_keywordContext *ctx);

    antlr4::tree::TerminalNode *ALWAYS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Always_keywordContext* always_keyword();

  class  Blocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Blocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Delay_or_event_controlContext *delay_or_event_control();
    ExpressionContext *expression();
    Nonrange_variable_lvalueContext *nonrange_variable_lvalue();
    Dynamic_array_newContext *dynamic_array_new();
    Hierarchical_identifierContext *hierarchical_identifier();
    SelectContext *select();
    Class_newContext *class_new();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();
    Operator_assignmentContext *operator_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Blocking_assignmentContext* blocking_assignment();

  class  Operator_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Operator_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    Assignment_operatorContext *assignment_operator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_assignmentContext* operator_assignment();

  class  Assignment_operatorContext : public antlr4::ParserRuleContext {
  public:
    Assignment_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Assignment_operatorContext() = default;
    void copyFrom(Assignment_operatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignOp_AddContext : public Assignment_operatorContext {
  public:
    AssignOp_AddContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *ADD_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_ModuloContext : public Assignment_operatorContext {
  public:
    AssignOp_ModuloContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *MODULO_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_BitwXorContext : public Assignment_operatorContext {
  public:
    AssignOp_BitwXorContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_XOR_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_BitwLeftShiftContext : public Assignment_operatorContext {
  public:
    AssignOp_BitwLeftShiftContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_LEFT_SHIFT_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_SubContext : public Assignment_operatorContext {
  public:
    AssignOp_SubContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *SUB_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_BitwOrContext : public Assignment_operatorContext {
  public:
    AssignOp_BitwOrContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_OR_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_DivContext : public Assignment_operatorContext {
  public:
    AssignOp_DivContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *DIV_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_BitwRightShiftContext : public Assignment_operatorContext {
  public:
    AssignOp_BitwRightShiftContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_RIGHT_SHIFT_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_AssignContext : public Assignment_operatorContext {
  public:
    AssignOp_AssignContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *ASSIGN_OP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_ArithShiftRightContext : public Assignment_operatorContext {
  public:
    AssignOp_ArithShiftRightContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *ARITH_SHIFT_RIGHT_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_MultContext : public Assignment_operatorContext {
  public:
    AssignOp_MultContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *MULT_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_BitwAndContext : public Assignment_operatorContext {
  public:
    AssignOp_BitwAndContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_AND_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignOp_ArithShiftLeftContext : public Assignment_operatorContext {
  public:
    AssignOp_ArithShiftLeftContext(Assignment_operatorContext *ctx);

    antlr4::tree::TerminalNode *ARITH_SHIFT_LEFT_ASSIGN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Assignment_operatorContext* assignment_operator();

  class  Nonblocking_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Nonblocking_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *LESS_EQUAL();
    ExpressionContext *expression();
    Delay_or_event_controlContext *delay_or_event_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonblocking_assignmentContext* nonblocking_assignment();

  class  Procedural_continuous_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Procedural_continuous_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    Variable_assignmentContext *variable_assignment();
    antlr4::tree::TerminalNode *DEASSIGN();
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *FORCE();
    Net_assignmentContext *net_assignment();
    antlr4::tree::TerminalNode *RELEASE();
    Net_lvalueContext *net_lvalue();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_continuous_assignmentContext* procedural_continuous_assignment();

  class  Variable_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Variable_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_lvalueContext *variable_lvalue();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_assignmentContext* variable_assignment();

  class  Action_blockContext : public antlr4::ParserRuleContext {
  public:
    Action_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *ELSE();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_blockContext* action_block();

  class  Seq_blockContext : public antlr4::ParserRuleContext {
  public:
    Seq_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    EndContext *end();
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Seq_blockContext* seq_block();

  class  Par_blockContext : public antlr4::ParserRuleContext {
  public:
    Par_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORK();
    Join_keywordContext *join_keyword();
    Join_any_keywordContext *join_any_keyword();
    Join_none_keywordContext *join_none_keyword();
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Block_item_declarationContext *> block_item_declaration();
    Block_item_declarationContext* block_item_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Par_blockContext* par_block();

  class  Join_keywordContext : public antlr4::ParserRuleContext {
  public:
    Join_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_keywordContext* join_keyword();

  class  Join_any_keywordContext : public antlr4::ParserRuleContext {
  public:
    Join_any_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN_ANY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_any_keywordContext* join_any_keyword();

  class  Join_none_keywordContext : public antlr4::ParserRuleContext {
  public:
    Join_none_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JOIN_NONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Join_none_keywordContext* join_none_keyword();

  class  Statement_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Statement_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_or_nullContext* statement_or_null();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_itemContext *statement_item();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Statement_itemContext : public antlr4::ParserRuleContext {
  public:
    Statement_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Blocking_assignmentContext *blocking_assignment();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Nonblocking_assignmentContext *nonblocking_assignment();
    Procedural_continuous_assignmentContext *procedural_continuous_assignment();
    Case_statementContext *case_statement();
    Conditional_statementContext *conditional_statement();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Subroutine_call_statementContext *subroutine_call_statement();
    Disable_statementContext *disable_statement();
    Event_triggerContext *event_trigger();
    Loop_statementContext *loop_statement();
    Jump_statementContext *jump_statement();
    Par_blockContext *par_block();
    Procedural_timing_control_statementContext *procedural_timing_control_statement();
    Seq_blockContext *seq_block();
    Wait_statementContext *wait_statement();
    Procedural_assertion_statementContext *procedural_assertion_statement();
    Clocking_driveContext *clocking_drive();
    Randsequence_statementContext *randsequence_statement();
    Randcase_statementContext *randcase_statement();
    Expect_property_statementContext *expect_property_statement();
    System_taskContext *system_task();
    Surelog_macro_not_definedContext *surelog_macro_not_defined();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_itemContext* statement_item();

  class  Function_statement_or_nullContext : public antlr4::ParserRuleContext {
  public:
    Function_statement_or_nullContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_statement_or_nullContext* function_statement_or_null();

  class  Procedural_timing_control_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_control_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Procedural_timing_controlContext *procedural_timing_control();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_timing_control_statementContext* procedural_timing_control_statement();

  class  Delay_or_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_or_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_or_event_controlContext* delay_or_event_control();

  class  Delay_controlContext : public antlr4::ParserRuleContext {
  public:
    Delay_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Pound_delay_valueContext *pound_delay_value();
    antlr4::tree::TerminalNode *POUND();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_controlContext* delay_control();

  class  Event_controlContext : public antlr4::ParserRuleContext {
  public:
    Event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Event_expressionContext *event_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *ATSTAR();
    antlr4::tree::TerminalNode *AT_PARENS_STAR();
    Ps_or_hierarchical_sequence_identifierContext *ps_or_hierarchical_sequence_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_controlContext* event_control();

  class  Event_expressionContext : public antlr4::ParserRuleContext {
  public:
    Event_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Edge_identifierContext *edge_identifier();
    antlr4::tree::TerminalNode *IFF();
    Sequence_instanceContext *sequence_instance();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Event_expressionContext *> event_expression();
    Event_expressionContext* event_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_expressionContext* event_expression();
  Event_expressionContext* event_expression(int precedence);
  class  Procedural_timing_controlContext : public antlr4::ParserRuleContext {
  public:
    Procedural_timing_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Delay_controlContext *delay_control();
    Event_controlContext *event_control();
    Cycle_delayContext *cycle_delay();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_timing_controlContext* procedural_timing_control();

  class  Jump_statementContext : public antlr4::ParserRuleContext {
  public:
    Jump_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Jump_statementContext* jump_statement();

  class  Final_constructContext : public antlr4::ParserRuleContext {
  public:
    Final_constructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINAL();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Final_constructContext* final_construct();

  class  Wait_statementContext : public antlr4::ParserRuleContext {
  public:
    Wait_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WAIT();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *FORK();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *WAIT_ORDER();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Action_blockContext *action_block();
    std::vector<Dollar_root_keywordContext *> dollar_root_keyword();
    Dollar_root_keywordContext* dollar_root_keyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Wait_statementContext* wait_statement();

  class  Event_triggerContext : public antlr4::ParserRuleContext {
  public:
    Event_triggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLY();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *NON_BLOCKING_TRIGGER_EVENT_OP();
    Delay_or_event_controlContext *delay_or_event_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_triggerContext* event_trigger();

  class  Disable_statementContext : public antlr4::ParserRuleContext {
  public:
    Disable_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISABLE();
    Hierarchical_identifierContext *hierarchical_identifier();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *FORK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Disable_statementContext* disable_statement();

  class  Conditional_statementContext : public antlr4::ParserRuleContext {
  public:
    Conditional_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IF();
    antlr4::tree::TerminalNode* IF(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    std::vector<Cond_predicateContext *> cond_predicate();
    Cond_predicateContext* cond_predicate(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);
    Unique_priorityContext *unique_priority();
    std::vector<antlr4::tree::TerminalNode *> ELSE();
    antlr4::tree::TerminalNode* ELSE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_statementContext* conditional_statement();

  class  Unique_priorityContext : public antlr4::ParserRuleContext {
  public:
    Unique_priorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE();
    antlr4::tree::TerminalNode *UNIQUE0();
    antlr4::tree::TerminalNode *PRIORITY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unique_priorityContext* unique_priority();

  class  Cond_predicateContext : public antlr4::ParserRuleContext {
  public:
    Cond_predicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Expression_or_cond_patternContext *> expression_or_cond_pattern();
    Expression_or_cond_patternContext* expression_or_cond_pattern(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COND_PRED_OP();
    antlr4::tree::TerminalNode* COND_PRED_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cond_predicateContext* cond_predicate();

  class  Expression_or_cond_patternContext : public antlr4::ParserRuleContext {
  public:
    Expression_or_cond_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MATCHES();
    PatternContext *pattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_or_cond_patternContext* expression_or_cond_pattern();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Case_keywordContext *case_keyword();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Case_itemContext *> case_item();
    Case_itemContext* case_item(size_t i);
    EndcaseContext *endcase();
    Unique_priorityContext *unique_priority();
    antlr4::tree::TerminalNode *MATCHES();
    std::vector<Case_pattern_itemContext *> case_pattern_item();
    Case_pattern_itemContext* case_pattern_item(size_t i);
    antlr4::tree::TerminalNode *INSIDE();
    std::vector<Case_inside_itemContext *> case_inside_item();
    Case_inside_itemContext* case_inside_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  Case_keywordContext : public antlr4::ParserRuleContext {
  public:
    Case_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Case_keywordContext() = default;
    void copyFrom(Case_keywordContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CaseKeyword_CaseContext : public Case_keywordContext {
  public:
    CaseKeyword_CaseContext(Case_keywordContext *ctx);

    antlr4::tree::TerminalNode *CASE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CaseKeyword_CaseZContext : public Case_keywordContext {
  public:
    CaseKeyword_CaseZContext(Case_keywordContext *ctx);

    antlr4::tree::TerminalNode *CASEZ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CaseKeyword_CaseXContext : public Case_keywordContext {
  public:
    CaseKeyword_CaseXContext(Case_keywordContext *ctx);

    antlr4::tree::TerminalNode *CASEX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Case_keywordContext* case_keyword();

  class  Case_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Statement_or_nullContext *statement_or_null();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_itemContext* case_item();

  class  Case_pattern_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_pattern_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternContext *pattern();
    antlr4::tree::TerminalNode *COLUMN();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *COND_PRED_OP();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_pattern_itemContext* case_pattern_item();

  class  Case_inside_itemContext : public antlr4::ParserRuleContext {
  public:
    Case_inside_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *COLUMN();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_inside_itemContext* case_inside_item();

  class  Randcase_statementContext : public antlr4::ParserRuleContext {
  public:
    Randcase_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDCASE();
    std::vector<Randcase_itemContext *> randcase_item();
    Randcase_itemContext* randcase_item(size_t i);
    EndcaseContext *endcase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Randcase_statementContext* randcase_statement();

  class  Randcase_itemContext : public antlr4::ParserRuleContext {
  public:
    Randcase_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLUMN();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Randcase_itemContext* randcase_item();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOTSTAR();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *TAGGED();
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    antlr4::tree::TerminalNode *TICK();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PatternContext* pattern();

  class  Assignment_patternContext : public antlr4::ParserRuleContext {
  public:
    Assignment_patternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK();
    std::vector<antlr4::tree::TerminalNode *> OPEN_CURLY();
    antlr4::tree::TerminalNode* OPEN_CURLY(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_CURLY();
    antlr4::tree::TerminalNode* CLOSE_CURLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Structure_pattern_keyContext *> structure_pattern_key();
    Structure_pattern_keyContext* structure_pattern_key(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);
    std::vector<Array_pattern_keyContext *> array_pattern_key();
    Array_pattern_keyContext* array_pattern_key(size_t i);
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_patternContext* assignment_pattern();

  class  Structure_pattern_keyContext : public antlr4::ParserRuleContext {
  public:
    Structure_pattern_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Assignment_pattern_keyContext *assignment_pattern_key();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Structure_pattern_keyContext* structure_pattern_key();

  class  Array_pattern_keyContext : public antlr4::ParserRuleContext {
  public:
    Array_pattern_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Assignment_pattern_keyContext *assignment_pattern_key();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_pattern_keyContext* array_pattern_key();

  class  Assignment_pattern_keyContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_typeContext *simple_type();
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_keyContext* assignment_pattern_key();

  class  Assignment_pattern_expressionContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_patternContext *assignment_pattern();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_expressionContext* assignment_pattern_expression();

  class  Assignment_pattern_expression_typeContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_expression_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_type_identifierContext *ps_type_identifier();
    Ps_identifierContext *ps_identifier();
    Integer_atom_typeContext *integer_atom_type();
    Type_referenceContext *type_reference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_expression_typeContext* assignment_pattern_expression_type();

  class  Constant_assignment_pattern_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_assignment_pattern_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_pattern_expressionContext *assignment_pattern_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_assignment_pattern_expressionContext* constant_assignment_pattern_expression();

  class  Assignment_pattern_net_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_net_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_net_lvalueContext* assignment_pattern_net_lvalue();

  class  Assignment_pattern_variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Assignment_pattern_variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<Variable_lvalueContext *> variable_lvalue();
    Variable_lvalueContext* variable_lvalue(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_pattern_variable_lvalueContext* assignment_pattern_variable_lvalue();

  class  Forever_keywordContext : public antlr4::ParserRuleContext {
  public:
    Forever_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOREVER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Forever_keywordContext* forever_keyword();

  class  Repeat_keywordContext : public antlr4::ParserRuleContext {
  public:
    Repeat_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_keywordContext* repeat_keyword();

  class  While_keywordContext : public antlr4::ParserRuleContext {
  public:
    While_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_keywordContext* while_keyword();

  class  Loop_statementContext : public antlr4::ParserRuleContext {
  public:
    Loop_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Forever_keywordContext *forever_keyword();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Repeat_keywordContext *repeat_keyword();
    While_keywordContext *while_keyword();
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    For_initializationContext *for_initialization();
    For_stepContext *for_step();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *FOREACH();
    Ps_or_hierarchical_array_identifierContext *ps_or_hierarchical_array_identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Loop_variablesContext *loop_variables();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_statementContext* loop_statement();

  class  For_initializationContext : public antlr4::ParserRuleContext {
  public:
    For_initializationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_variable_assignmentsContext *list_of_variable_assignments();
    std::vector<For_variable_declarationContext *> for_variable_declaration();
    For_variable_declarationContext* for_variable_declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_initializationContext* for_initialization();

  class  For_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    For_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Data_typeContext *data_type();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN_OP();
    antlr4::tree::TerminalNode* ASSIGN_OP(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *VAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_variable_declarationContext* for_variable_declaration();

  class  For_stepContext : public antlr4::ParserRuleContext {
  public:
    For_stepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<For_step_assignmentContext *> for_step_assignment();
    For_step_assignmentContext* for_step_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_stepContext* for_step();

  class  For_step_assignmentContext : public antlr4::ParserRuleContext {
  public:
    For_step_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Operator_assignmentContext *operator_assignment();
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    Subroutine_callContext *subroutine_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_step_assignmentContext* for_step_assignment();

  class  Loop_variablesContext : public antlr4::ParserRuleContext {
  public:
    Loop_variablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_variablesContext* loop_variables();

  class  Subroutine_call_statementContext : public antlr4::ParserRuleContext {
  public:
    Subroutine_call_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Subroutine_callContext *subroutine_call();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *VOID();
    antlr4::tree::TerminalNode *TICK();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subroutine_call_statementContext* subroutine_call_statement();

  class  Assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_itemContext *concurrent_assertion_item();
    Deferred_immediate_assertion_itemContext *deferred_immediate_assertion_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assertion_itemContext* assertion_item();

  class  Deferred_immediate_assertion_itemContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assertion_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Deferred_immediate_assertion_statementContext *deferred_immediate_assertion_statement();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_assertion_itemContext* deferred_immediate_assertion_item();

  class  Procedural_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Procedural_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Concurrent_assertion_statementContext *concurrent_assertion_statement();
    Immediate_assertion_statementContext *immediate_assertion_statement();
    Checker_instantiationContext *checker_instantiation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Procedural_assertion_statementContext* procedural_assertion_statement();

  class  Immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_immediate_assertion_statementContext *simple_immediate_assertion_statement();
    Deferred_immediate_assertion_statementContext *deferred_immediate_assertion_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Immediate_assertion_statementContext* immediate_assertion_statement();

  class  Simple_immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_immediate_assert_statementContext *simple_immediate_assert_statement();
    Simple_immediate_assume_statementContext *simple_immediate_assume_statement();
    Simple_immediate_cover_statementContext *simple_immediate_cover_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_immediate_assertion_statementContext* simple_immediate_assertion_statement();

  class  Simple_immediate_assert_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_immediate_assert_statementContext* simple_immediate_assert_statement();

  class  Simple_immediate_assume_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_assume_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Action_blockContext *action_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_immediate_assume_statementContext* simple_immediate_assume_statement();

  class  Simple_immediate_cover_statementContext : public antlr4::ParserRuleContext {
  public:
    Simple_immediate_cover_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Statement_or_nullContext *statement_or_null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_immediate_cover_statementContext* simple_immediate_cover_statement();

  class  Deferred_immediate_assertion_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assertion_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Deferred_immediate_assert_statementContext *deferred_immediate_assert_statement();
    Deferred_immediate_assume_statementContext *deferred_immediate_assume_statement();
    Deferred_immediate_cover_statementContext *deferred_immediate_cover_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_assertion_statementContext* deferred_immediate_assertion_statement();

  class  Deferred_immediate_assert_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assert_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *Pound_delay();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Action_blockContext *action_block();
    antlr4::tree::TerminalNode *FINAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_assert_statementContext* deferred_immediate_assert_statement();

  class  Deferred_immediate_assume_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_assume_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *Pound_delay();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Action_blockContext *action_block();
    antlr4::tree::TerminalNode *FINAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_assume_statementContext* deferred_immediate_assume_statement();

  class  Deferred_immediate_cover_statementContext : public antlr4::ParserRuleContext {
  public:
    Deferred_immediate_cover_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COVER();
    antlr4::tree::TerminalNode *Pound_delay();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Statement_or_nullContext *statement_or_null();
    antlr4::tree::TerminalNode *FINAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Deferred_immediate_cover_statementContext* deferred_immediate_cover_statement();

  class  EndclockingContext : public antlr4::ParserRuleContext {
  public:
    EndclockingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDCLOCKING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndclockingContext* endclocking();

  class  Clocking_declarationContext : public antlr4::ParserRuleContext {
  public:
    Clocking_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOCKING();
    Clocking_eventContext *clocking_event();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    EndclockingContext *endclocking();
    antlr4::tree::TerminalNode *DEFAULT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Clocking_itemContext *> clocking_item();
    Clocking_itemContext* clocking_item(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *GLOBAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_declarationContext* clocking_declaration();

  class  Clocking_eventContext : public antlr4::ParserRuleContext {
  public:
    Clocking_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Event_expressionContext *event_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_eventContext* clocking_event();

  class  Clocking_itemContext : public antlr4::ParserRuleContext {
  public:
    Clocking_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    Default_skewContext *default_skew();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Clocking_directionContext *clocking_direction();
    List_of_clocking_decl_assignContext *list_of_clocking_decl_assign();
    Concurrent_assertion_item_declarationContext *concurrent_assertion_item_declaration();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_itemContext* clocking_item();

  class  Default_skewContext : public antlr4::ParserRuleContext {
  public:
    Default_skewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Default_skewContext() = default;
    void copyFrom(Default_skewContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefaultSkew_IntputOutputContext : public Default_skewContext {
  public:
    DefaultSkew_IntputOutputContext(Default_skewContext *ctx);

    antlr4::tree::TerminalNode *INPUT();
    std::vector<Clocking_skewContext *> clocking_skew();
    Clocking_skewContext* clocking_skew(size_t i);
    antlr4::tree::TerminalNode *OUTPUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultSkew_OutputContext : public Default_skewContext {
  public:
    DefaultSkew_OutputContext(Default_skewContext *ctx);

    antlr4::tree::TerminalNode *OUTPUT();
    Clocking_skewContext *clocking_skew();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultSkew_IntputContext : public Default_skewContext {
  public:
    DefaultSkew_IntputContext(Default_skewContext *ctx);

    antlr4::tree::TerminalNode *INPUT();
    Clocking_skewContext *clocking_skew();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Default_skewContext* default_skew();

  class  Clocking_directionContext : public antlr4::ParserRuleContext {
  public:
    Clocking_directionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Clocking_directionContext() = default;
    void copyFrom(Clocking_directionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ClockingDir_InputOutputContext : public Clocking_directionContext {
  public:
    ClockingDir_InputOutputContext(Clocking_directionContext *ctx);

    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();
    std::vector<Clocking_skewContext *> clocking_skew();
    Clocking_skewContext* clocking_skew(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClockingDir_InputContext : public Clocking_directionContext {
  public:
    ClockingDir_InputContext(Clocking_directionContext *ctx);

    antlr4::tree::TerminalNode *INPUT();
    Clocking_skewContext *clocking_skew();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClockingDir_OutputContext : public Clocking_directionContext {
  public:
    ClockingDir_OutputContext(Clocking_directionContext *ctx);

    antlr4::tree::TerminalNode *OUTPUT();
    Clocking_skewContext *clocking_skew();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClockingDir_InoutContext : public Clocking_directionContext {
  public:
    ClockingDir_InoutContext(Clocking_directionContext *ctx);

    antlr4::tree::TerminalNode *INOUT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Clocking_directionContext* clocking_direction();

  class  List_of_clocking_decl_assignContext : public antlr4::ParserRuleContext {
  public:
    List_of_clocking_decl_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Clocking_decl_assignContext *> clocking_decl_assign();
    Clocking_decl_assignContext* clocking_decl_assign(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_clocking_decl_assignContext* list_of_clocking_decl_assign();

  class  Clocking_decl_assignContext : public antlr4::ParserRuleContext {
  public:
    Clocking_decl_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_decl_assignContext* clocking_decl_assign();

  class  Clocking_skewContext : public antlr4::ParserRuleContext {
  public:
    Clocking_skewContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Edge_identifierContext *edge_identifier();
    Delay_controlContext *delay_control();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_skewContext* clocking_skew();

  class  Edge_identifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Edge_identifierContext() = default;
    void copyFrom(Edge_identifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Edge_EdgeContext : public Edge_identifierContext {
  public:
    Edge_EdgeContext(Edge_identifierContext *ctx);

    antlr4::tree::TerminalNode *EDGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Edge_NegedgeContext : public Edge_identifierContext {
  public:
    Edge_NegedgeContext(Edge_identifierContext *ctx);

    antlr4::tree::TerminalNode *NEGEDGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Edge_PosedgeContext : public Edge_identifierContext {
  public:
    Edge_PosedgeContext(Edge_identifierContext *ctx);

    antlr4::tree::TerminalNode *POSEDGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Edge_identifierContext* edge_identifier();

  class  Clocking_driveContext : public antlr4::ParserRuleContext {
  public:
    Clocking_driveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Clockvar_expressionContext *clockvar_expression();
    antlr4::tree::TerminalNode *LESS_EQUAL();
    ExpressionContext *expression();
    Cycle_delayContext *cycle_delay();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clocking_driveContext* clocking_drive();

  class  Cycle_delayContext : public antlr4::ParserRuleContext {
  public:
    Cycle_delayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POUNDPOUND();
    antlr4::tree::TerminalNode *Integral_number();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cycle_delayContext* cycle_delay();

  class  ClockvarContext : public antlr4::ParserRuleContext {
  public:
    ClockvarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClockvarContext* clockvar();

  class  Clockvar_expressionContext : public antlr4::ParserRuleContext {
  public:
    Clockvar_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClockvarContext *clockvar();
    SelectContext *select();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Clockvar_expressionContext* clockvar_expression();

  class  Randsequence_statementContext : public antlr4::ParserRuleContext {
  public:
    Randsequence_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDSEQUENCE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<ProductionContext *> production();
    ProductionContext* production(size_t i);
    EndsequenceContext *endsequence();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Randsequence_statementContext* randsequence_statement();

  class  ProductionContext : public antlr4::ParserRuleContext {
  public:
    ProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<Rs_ruleContext *> rs_rule();
    Rs_ruleContext* rs_rule(size_t i);
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Function_data_typeContext *function_data_type();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Tf_port_listContext *tf_port_list();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> BITW_OR();
    antlr4::tree::TerminalNode* BITW_OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProductionContext* production();

  class  Rs_ruleContext : public antlr4::ParserRuleContext {
  public:
    Rs_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rs_production_listContext *rs_production_list();
    antlr4::tree::TerminalNode *ASSIGN_VALUE();
    ExpressionContext *expression();
    Rs_code_blockContext *rs_code_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_ruleContext* rs_rule();

  class  Rs_production_listContext : public antlr4::ParserRuleContext {
  public:
    Rs_production_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Rs_prodContext *> rs_prod();
    Rs_prodContext* rs_prod(size_t i);
    antlr4::tree::TerminalNode *RAND();
    antlr4::tree::TerminalNode *JOIN();
    std::vector<Production_itemContext *> production_item();
    Production_itemContext* production_item(size_t i);
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_production_listContext* rs_production_list();

  class  Rs_code_blockContext : public antlr4::ParserRuleContext {
  public:
    Rs_code_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<Data_declarationContext *> data_declaration();
    Data_declarationContext* data_declaration(size_t i);
    std::vector<Statement_or_nullContext *> statement_or_null();
    Statement_or_nullContext* statement_or_null(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_code_blockContext* rs_code_block();

  class  Rs_prodContext : public antlr4::ParserRuleContext {
  public:
    Rs_prodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Production_itemContext *production_item();
    Rs_code_blockContext *rs_code_block();
    Rs_if_elseContext *rs_if_else();
    Rs_repeatContext *rs_repeat();
    Rs_caseContext *rs_case();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_prodContext* rs_prod();

  class  Production_itemContext : public antlr4::ParserRuleContext {
  public:
    Production_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Production_itemContext* production_item();

  class  Rs_if_elseContext : public antlr4::ParserRuleContext {
  public:
    Rs_if_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Production_itemContext *> production_item();
    Production_itemContext* production_item(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_if_elseContext* rs_if_else();

  class  Rs_repeatContext : public antlr4::ParserRuleContext {
  public:
    Rs_repeatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Production_itemContext *production_item();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_repeatContext* rs_repeat();

  class  Rs_caseContext : public antlr4::ParserRuleContext {
  public:
    Rs_caseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<Rs_case_itemContext *> rs_case_item();
    Rs_case_itemContext* rs_case_item(size_t i);
    EndcaseContext *endcase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_caseContext* rs_case();

  class  Rs_case_itemContext : public antlr4::ParserRuleContext {
  public:
    Rs_case_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    Production_itemContext *production_item();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rs_case_itemContext* rs_case_item();

  class  EndspecifyContext : public antlr4::ParserRuleContext {
  public:
    EndspecifyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDSPECIFY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndspecifyContext* endspecify();

  class  Specify_blockContext : public antlr4::ParserRuleContext {
  public:
    Specify_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPECIFY();
    EndspecifyContext *endspecify();
    std::vector<Specify_itemContext *> specify_item();
    Specify_itemContext* specify_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_blockContext* specify_block();

  class  Specify_itemContext : public antlr4::ParserRuleContext {
  public:
    Specify_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specparam_declarationContext *specparam_declaration();
    Pulsestyle_declarationContext *pulsestyle_declaration();
    Showcancelled_declarationContext *showcancelled_declaration();
    Path_declarationContext *path_declaration();
    System_timing_checkContext *system_timing_check();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_itemContext* specify_item();

  class  Pulsestyle_declarationContext : public antlr4::ParserRuleContext {
  public:
    Pulsestyle_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PULSESTYLE_ONEVENT();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *PULSESTYLE_ONDETECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pulsestyle_declarationContext* pulsestyle_declaration();

  class  Showcancelled_declarationContext : public antlr4::ParserRuleContext {
  public:
    Showcancelled_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOWCANCELLED();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    antlr4::tree::TerminalNode *NOSHOWCANCELLED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Showcancelled_declarationContext* showcancelled_declaration();

  class  Path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_path_declarationContext *simple_path_declaration();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    State_dependent_path_declarationContext *state_dependent_path_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_declarationContext* path_declaration();

  class  Simple_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Simple_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_path_descriptionContext *parallel_path_description();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Path_delay_valueContext *path_delay_value();
    Full_path_descriptionContext *full_path_description();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Simple_path_declarationContext* simple_path_declaration();

  class  Parallel_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Parallel_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *TRANSITION_OP();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parallel_path_descriptionContext* parallel_path_description();

  class  Full_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Full_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_path_inputsContext *list_of_path_inputs();
    antlr4::tree::TerminalNode *FULL_CONN_OP();
    List_of_path_outputsContext *list_of_path_outputs();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_path_descriptionContext* full_path_description();

  class  List_of_path_inputsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_inputsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_input_terminal_descriptorContext *> specify_input_terminal_descriptor();
    Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_inputsContext* list_of_path_inputs();

  class  List_of_path_outputsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_outputsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Specify_output_terminal_descriptorContext *> specify_output_terminal_descriptor();
    Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_outputsContext* list_of_path_outputs();

  class  Specify_input_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_input_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_input_terminal_descriptorContext* specify_input_terminal_descriptor();

  class  Specify_output_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_output_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Interface_identifierContext *interface_identifier();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_output_terminal_descriptorContext* specify_output_terminal_descriptor();

  class  Path_delay_valueContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    List_of_path_delay_expressionsContext *list_of_path_delay_expressions();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_delay_valueContext* path_delay_value();

  class  List_of_path_delay_expressionsContext : public antlr4::ParserRuleContext {
  public:
    List_of_path_delay_expressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    T_path_delay_expressionContext *t_path_delay_expression();
    Trise_path_delay_expressionContext *trise_path_delay_expression();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Tfall_path_delay_expressionContext *tfall_path_delay_expression();
    Tz_path_delay_expressionContext *tz_path_delay_expression();
    T01_path_delay_expressionContext *t01_path_delay_expression();
    T10_path_delay_expressionContext *t10_path_delay_expression();
    T0z_path_delay_expressionContext *t0z_path_delay_expression();
    Tz1_path_delay_expressionContext *tz1_path_delay_expression();
    T1z_path_delay_expressionContext *t1z_path_delay_expression();
    Tz0_path_delay_expressionContext *tz0_path_delay_expression();
    T0x_path_delay_expressionContext *t0x_path_delay_expression();
    Tx1_path_delay_expressionContext *tx1_path_delay_expression();
    T1x_path_delay_expressionContext *t1x_path_delay_expression();
    Tx0_path_delay_expressionContext *tx0_path_delay_expression();
    Txz_path_delay_expressionContext *txz_path_delay_expression();
    Tzx_path_delay_expressionContext *tzx_path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_path_delay_expressionsContext* list_of_path_delay_expressions();

  class  T_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T_path_delay_expressionContext* t_path_delay_expression();

  class  Trise_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Trise_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trise_path_delay_expressionContext* trise_path_delay_expression();

  class  Tfall_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tfall_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tfall_path_delay_expressionContext* tfall_path_delay_expression();

  class  Tz_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz_path_delay_expressionContext* tz_path_delay_expression();

  class  T01_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T01_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T01_path_delay_expressionContext* t01_path_delay_expression();

  class  T10_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T10_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T10_path_delay_expressionContext* t10_path_delay_expression();

  class  T0z_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T0z_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T0z_path_delay_expressionContext* t0z_path_delay_expression();

  class  Tz1_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz1_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz1_path_delay_expressionContext* tz1_path_delay_expression();

  class  T1z_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T1z_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T1z_path_delay_expressionContext* t1z_path_delay_expression();

  class  Tz0_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tz0_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tz0_path_delay_expressionContext* tz0_path_delay_expression();

  class  T0x_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T0x_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T0x_path_delay_expressionContext* t0x_path_delay_expression();

  class  Tx1_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tx1_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tx1_path_delay_expressionContext* tx1_path_delay_expression();

  class  T1x_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    T1x_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  T1x_path_delay_expressionContext* t1x_path_delay_expression();

  class  Tx0_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tx0_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tx0_path_delay_expressionContext* tx0_path_delay_expression();

  class  Txz_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Txz_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txz_path_delay_expressionContext* txz_path_delay_expression();

  class  Tzx_path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tzx_path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Path_delay_expressionContext *path_delay_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tzx_path_delay_expressionContext* tzx_path_delay_expression();

  class  Path_delay_expressionContext : public antlr4::ParserRuleContext {
  public:
    Path_delay_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Path_delay_expressionContext* path_delay_expression();

  class  Edge_sensitive_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    Edge_sensitive_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parallel_edge_sensitive_path_descriptionContext *parallel_edge_sensitive_path_description();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Path_delay_valueContext *path_delay_value();
    Full_edge_sensitive_path_descriptionContext *full_edge_sensitive_path_description();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_sensitive_path_declarationContext* edge_sensitive_path_declaration();

  class  Parallel_edge_sensitive_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Parallel_edge_sensitive_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    antlr4::tree::TerminalNode *TRANSITION_OP();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    antlr4::tree::TerminalNode *INC_PART_SELECT_OP();
    antlr4::tree::TerminalNode *DEC_PART_SELECT_OP();
    antlr4::tree::TerminalNode *COLUMN();
    Edge_identifierContext *edge_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parallel_edge_sensitive_path_descriptionContext* parallel_edge_sensitive_path_description();

  class  Full_edge_sensitive_path_descriptionContext : public antlr4::ParserRuleContext {
  public:
    Full_edge_sensitive_path_descriptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    List_of_path_inputsContext *list_of_path_inputs();
    antlr4::tree::TerminalNode *FULL_CONN_OP();
    List_of_path_outputsContext *list_of_path_outputs();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    antlr4::tree::TerminalNode *INC_PART_SELECT_OP();
    antlr4::tree::TerminalNode *DEC_PART_SELECT_OP();
    antlr4::tree::TerminalNode *COLUMN();
    Edge_identifierContext *edge_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Full_edge_sensitive_path_descriptionContext* full_edge_sensitive_path_description();

  class  State_dependent_path_declarationContext : public antlr4::ParserRuleContext {
  public:
    State_dependent_path_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Module_path_expressionContext *module_path_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Simple_path_declarationContext *simple_path_declaration();
    Edge_sensitive_path_declarationContext *edge_sensitive_path_declaration();
    antlr4::tree::TerminalNode *IFNONE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  State_dependent_path_declarationContext* state_dependent_path_declaration();

  class  System_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    System_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dollar_setup_timing_checkContext *dollar_setup_timing_check();
    Dollar_hold_timing_checkContext *dollar_hold_timing_check();
    Dollar_setuphold_timing_checkContext *dollar_setuphold_timing_check();
    Dollar_recovery_timing_checkContext *dollar_recovery_timing_check();
    Dollar_removal_timing_checkContext *dollar_removal_timing_check();
    Dollar_recrem_timing_checkContext *dollar_recrem_timing_check();
    Dollar_skew_timing_checkContext *dollar_skew_timing_check();
    Dollar_timeskew_timing_checkContext *dollar_timeskew_timing_check();
    Dollar_fullskew_timing_checkContext *dollar_fullskew_timing_check();
    Dollar_period_timing_checkContext *dollar_period_timing_check();
    Dollar_width_timing_checkContext *dollar_width_timing_check();
    Dollar_nochange_timing_checkContext *dollar_nochange_timing_check();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_timing_checkContext* system_timing_check();

  class  Dollar_setup_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_setup_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Timing_check_eventContext *timing_check_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Reference_eventContext *reference_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_setup_timing_checkContext* dollar_setup_timing_check();

  class  Dollar_hold_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_hold_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_hold_timing_checkContext* dollar_hold_timing_check();

  class  Dollar_setuphold_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_setuphold_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();
    Stamptime_conditionContext *stamptime_condition();
    Mintypmax_expressionContext *mintypmax_expression();
    Delayed_referenceContext *delayed_reference();
    Delayed_dataContext *delayed_data();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_setuphold_timing_checkContext* dollar_setuphold_timing_check();

  class  Dollar_recovery_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_recovery_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_recovery_timing_checkContext* dollar_recovery_timing_check();

  class  Dollar_removal_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_removal_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_removal_timing_checkContext* dollar_removal_timing_check();

  class  Dollar_recrem_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_recrem_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();
    Stamptime_conditionContext *stamptime_condition();
    Mintypmax_expressionContext *mintypmax_expression();
    Delayed_referenceContext *delayed_reference();
    Delayed_dataContext *delayed_data();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_recrem_timing_checkContext* dollar_recrem_timing_check();

  class  Dollar_skew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_skew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_skew_timing_checkContext* dollar_skew_timing_check();

  class  Dollar_timeskew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_timeskew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();
    Event_based_flagContext *event_based_flag();
    Remain_active_flagContext *remain_active_flag();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_timeskew_timing_checkContext* dollar_timeskew_timing_check();

  class  Dollar_fullskew_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_fullskew_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    std::vector<Timing_check_limitContext *> timing_check_limit();
    Timing_check_limitContext* timing_check_limit(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();
    Event_based_flagContext *event_based_flag();
    Remain_active_flagContext *remain_active_flag();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_fullskew_timing_checkContext* dollar_fullskew_timing_check();

  class  Dollar_period_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_period_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Controlled_timing_check_eventContext *controlled_timing_check_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_limitContext *timing_check_limit();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_period_timing_checkContext* dollar_period_timing_check();

  class  Dollar_width_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_width_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Controlled_timing_check_eventContext *controlled_timing_check_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_limitContext *timing_check_limit();
    ThresholdContext *threshold();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_width_timing_checkContext* dollar_width_timing_check();

  class  Dollar_nochange_timing_checkContext : public antlr4::ParserRuleContext {
  public:
    Dollar_nochange_timing_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Reference_eventContext *reference_event();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Timing_check_eventContext *timing_check_event();
    Start_edge_offsetContext *start_edge_offset();
    End_edge_offsetContext *end_edge_offset();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    NotifierContext *notifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_nochange_timing_checkContext* dollar_nochange_timing_check();

  class  Delayed_dataContext : public antlr4::ParserRuleContext {
  public:
    Delayed_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_dataContext* delayed_data();

  class  Delayed_referenceContext : public antlr4::ParserRuleContext {
  public:
    Delayed_referenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delayed_referenceContext* delayed_reference();

  class  End_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    End_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_edge_offsetContext* end_edge_offset();

  class  Event_based_flagContext : public antlr4::ParserRuleContext {
  public:
    Event_based_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_based_flagContext* event_based_flag();

  class  NotifierContext : public antlr4::ParserRuleContext {
  public:
    NotifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotifierContext* notifier();

  class  Reference_eventContext : public antlr4::ParserRuleContext {
  public:
    Reference_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_eventContext *timing_check_event();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Reference_eventContext* reference_event();

  class  Remain_active_flagContext : public antlr4::ParserRuleContext {
  public:
    Remain_active_flagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remain_active_flagContext* remain_active_flag();

  class  Stamptime_conditionContext : public antlr4::ParserRuleContext {
  public:
    Stamptime_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stamptime_conditionContext* stamptime_condition();

  class  Start_edge_offsetContext : public antlr4::ParserRuleContext {
  public:
    Start_edge_offsetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_edge_offsetContext* start_edge_offset();

  class  ThresholdContext : public antlr4::ParserRuleContext {
  public:
    ThresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThresholdContext* threshold();

  class  Timing_check_limitContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_limitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_limitContext* timing_check_limit();

  class  Timing_check_eventContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_terminal_descriptorContext *specify_terminal_descriptor();
    Timing_check_event_controlContext *timing_check_event_control();
    antlr4::tree::TerminalNode *COND_PRED_OP();
    Timing_check_conditionContext *timing_check_condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_eventContext* timing_check_event();

  class  Controlled_timing_check_eventContext : public antlr4::ParserRuleContext {
  public:
    Controlled_timing_check_eventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timing_check_event_controlContext *timing_check_event_control();
    Specify_terminal_descriptorContext *specify_terminal_descriptor();
    antlr4::tree::TerminalNode *COND_PRED_OP();
    Timing_check_conditionContext *timing_check_condition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Controlled_timing_check_eventContext* controlled_timing_check_event();

  class  Timing_check_event_controlContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_event_controlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Timing_check_event_controlContext() = default;
    void copyFrom(Timing_check_event_controlContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TimingCheckEventControl_NegedgeContext : public Timing_check_event_controlContext {
  public:
    TimingCheckEventControl_NegedgeContext(Timing_check_event_controlContext *ctx);

    antlr4::tree::TerminalNode *NEGEDGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TimingCheckEventControl_PosedgeContext : public Timing_check_event_controlContext {
  public:
    TimingCheckEventControl_PosedgeContext(Timing_check_event_controlContext *ctx);

    antlr4::tree::TerminalNode *POSEDGE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TimingCheckEventControl_EdgeContext : public Timing_check_event_controlContext {
  public:
    TimingCheckEventControl_EdgeContext(Timing_check_event_controlContext *ctx);

    Edge_control_specifierContext *edge_control_specifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Timing_check_event_controlContext* timing_check_event_control();

  class  Specify_terminal_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Specify_terminal_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Specify_input_terminal_descriptorContext *specify_input_terminal_descriptor();
    Specify_output_terminal_descriptorContext *specify_output_terminal_descriptor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Specify_terminal_descriptorContext* specify_terminal_descriptor();

  class  Edge_control_specifierContext : public antlr4::ParserRuleContext {
  public:
    Edge_control_specifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EDGE();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    std::vector<Edge_descriptorContext *> edge_descriptor();
    Edge_descriptorContext* edge_descriptor(size_t i);
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_control_specifierContext* edge_control_specifier();

  class  Edge_descriptorContext : public antlr4::ParserRuleContext {
  public:
    Edge_descriptorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integral_number();
    antlr4::tree::TerminalNode *Simple_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Edge_descriptorContext* edge_descriptor();

  class  Timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scalar_timing_check_conditionContext *scalar_timing_check_condition();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timing_check_conditionContext* timing_check_condition();

  class  Scalar_timing_check_conditionContext : public antlr4::ParserRuleContext {
  public:
    Scalar_timing_check_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *TILDA();
    antlr4::tree::TerminalNode *EQUIV();
    Scalar_constantContext *scalar_constant();
    antlr4::tree::TerminalNode *FOUR_STATE_LOGIC_EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *FOUR_STATE_LOGIC_NOTEQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scalar_timing_check_conditionContext* scalar_timing_check_condition();

  class  Scalar_constantContext : public antlr4::ParserRuleContext {
  public:
    Scalar_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Scalar_constantContext() = default;
    void copyFrom(Scalar_constantContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Scalar_1Tickb1Context : public Scalar_constantContext {
  public:
    Scalar_1Tickb1Context(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_b1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scalar_1TickB1Context : public Scalar_constantContext {
  public:
    Scalar_1TickB1Context(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_B1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scalar_1Tickb0Context : public Scalar_constantContext {
  public:
    Scalar_1Tickb0Context(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_b0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scalar_1TickB0Context : public Scalar_constantContext {
  public:
    Scalar_1TickB0Context(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_B0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scalar_IntegralContext : public Scalar_constantContext {
  public:
    Scalar_IntegralContext(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *Integral_number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scalar_Tickb0Context : public Scalar_constantContext {
  public:
    Scalar_Tickb0Context(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *TICK_b0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scalar_TickB0Context : public Scalar_constantContext {
  public:
    Scalar_TickB0Context(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *TICK_B0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scalar_Tickb1Context : public Scalar_constantContext {
  public:
    Scalar_Tickb1Context(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *TICK_b1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Scalar_TickB1Context : public Scalar_constantContext {
  public:
    Scalar_TickB1Context(Scalar_constantContext *ctx);

    antlr4::tree::TerminalNode *TICK_B1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Scalar_constantContext* scalar_constant();

  class  ConcatenationContext : public antlr4::ParserRuleContext {
  public:
    ConcatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Array_member_labelContext *> array_member_label();
    Array_member_labelContext* array_member_label(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConcatenationContext* concatenation();

  class  Constant_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Constant_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Array_member_labelContext *> array_member_label();
    Array_member_labelContext* array_member_label(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_concatenationContext* constant_concatenation();

  class  Array_member_labelContext : public antlr4::ParserRuleContext {
  public:
    Array_member_labelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    IdentifierContext *identifier();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_member_labelContext* array_member_label();

  class  Constant_multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Constant_multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Constant_expressionContext *constant_expression();
    Constant_concatenationContext *constant_concatenation();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_multiple_concatenationContext* constant_multiple_concatenation();

  class  Module_path_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Module_path_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_concatenationContext* module_path_concatenation();

  class  Module_path_multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Module_path_multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Constant_expressionContext *constant_expression();
    Module_path_concatenationContext *module_path_concatenation();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_multiple_concatenationContext* module_path_multiple_concatenation();

  class  Multiple_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Multiple_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    ExpressionContext *expression();
    ConcatenationContext *concatenation();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiple_concatenationContext* multiple_concatenation();

  class  Streaming_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Streaming_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Stream_operatorContext *stream_operator();
    Stream_concatenationContext *stream_concatenation();
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    Slice_sizeContext *slice_size();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Streaming_concatenationContext* streaming_concatenation();

  class  Stream_operatorContext : public antlr4::ParserRuleContext {
  public:
    Stream_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHIFT_RIGHT();
    antlr4::tree::TerminalNode *SHIFT_LEFT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_operatorContext* stream_operator();

  class  Slice_sizeContext : public antlr4::ParserRuleContext {
  public:
    Slice_sizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Simple_typeContext *simple_type();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Slice_sizeContext* slice_size();

  class  Stream_concatenationContext : public antlr4::ParserRuleContext {
  public:
    Stream_concatenationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<Stream_expressionContext *> stream_expression();
    Stream_expressionContext* stream_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_concatenationContext* stream_concatenation();

  class  Stream_expressionContext : public antlr4::ParserRuleContext {
  public:
    Stream_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Array_range_expressionContext *array_range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stream_expressionContext* stream_expression();

  class  Array_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Array_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *INC_PART_SELECT_OP();
    antlr4::tree::TerminalNode *DEC_PART_SELECT_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_range_expressionContext* array_range_expression();

  class  Empty_queueContext : public antlr4::ParserRuleContext {
  public:
    Empty_queueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_CURLY();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Empty_queueContext* empty_queue();

  class  Subroutine_callContext : public antlr4::ParserRuleContext {
  public:
    Subroutine_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    SelectContext *select();
    Implicit_class_handleContext *implicit_class_handle();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();
    Dollar_keywordContext *dollar_keyword();
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<Constant_bit_selectContext *> constant_bit_select();
    Constant_bit_selectContext* constant_bit_select(size_t i);
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Method_call_bodyContext *method_call_body();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Randomize_callContext *randomize_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subroutine_callContext* subroutine_call();

  class  List_of_argumentsContext : public antlr4::ParserRuleContext {
  public:
    List_of_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_of_argumentsContext* list_of_arguments();

  class  Method_callContext : public antlr4::ParserRuleContext {
  public:
    Method_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Method_call_rootContext *method_call_root();
    antlr4::tree::TerminalNode *DOT();
    Method_call_bodyContext *method_call_body();
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *COLUMNCOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_callContext* method_call();

  class  Method_call_bodyContext : public antlr4::ParserRuleContext {
  public:
    Method_call_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    antlr4::tree::TerminalNode *OPEN_PARENS();
    List_of_argumentsContext *list_of_arguments();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Built_in_method_callContext *built_in_method_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_call_bodyContext* method_call_body();

  class  Built_in_method_callContext : public antlr4::ParserRuleContext {
  public:
    Built_in_method_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_manipulation_callContext *array_manipulation_call();
    Randomize_callContext *randomize_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Built_in_method_callContext* built_in_method_call();

  class  Array_manipulation_callContext : public antlr4::ParserRuleContext {
  public:
    Array_manipulation_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Array_method_nameContext *array_method_name();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    List_of_argumentsContext *list_of_arguments();
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    antlr4::tree::TerminalNode *WITH();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_manipulation_callContext* array_manipulation_call();

  class  Randomize_callContext : public antlr4::ParserRuleContext {
  public:
    Randomize_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDOMIZE();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PARENS();
    antlr4::tree::TerminalNode* OPEN_PARENS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PARENS();
    antlr4::tree::TerminalNode* CLOSE_PARENS(size_t i);
    antlr4::tree::TerminalNode *WITH();
    Constraint_blockContext *constraint_block();
    std::vector<Identifier_listContext *> identifier_list();
    Identifier_listContext* identifier_list(size_t i);
    antlr4::tree::TerminalNode *NULL_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Randomize_callContext* randomize_call();

  class  Method_call_rootContext : public antlr4::ParserRuleContext {
  public:
    Method_call_rootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Implicit_class_handleContext *implicit_class_handle();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    SelectContext *select();
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Method_call_rootContext* method_call_root();

  class  Array_method_nameContext : public antlr4::ParserRuleContext {
  public:
    Array_method_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Unique_callContext *unique_call();
    And_callContext *and_call();
    Or_callContext *or_call();
    Xor_callContext *xor_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_method_nameContext* array_method_name();

  class  Unique_callContext : public antlr4::ParserRuleContext {
  public:
    Unique_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNIQUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unique_callContext* unique_call();

  class  And_callContext : public antlr4::ParserRuleContext {
  public:
    And_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_callContext* and_call();

  class  Or_callContext : public antlr4::ParserRuleContext {
  public:
    Or_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_callContext* or_call();

  class  Xor_callContext : public antlr4::ParserRuleContext {
  public:
    Xor_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Xor_callContext* xor_call();

  class  Inc_or_dec_expressionContext : public antlr4::ParserRuleContext {
  public:
    Inc_or_dec_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inc_or_dec_operatorContext *inc_or_dec_operator();
    Variable_lvalueContext *variable_lvalue();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_or_dec_expressionContext* inc_or_dec_expression();

  class  Constant_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_primaryContext *constant_primary();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    System_taskContext *system_task();
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    Binary_operatorContext *binary_operator();
    antlr4::tree::TerminalNode *QMARK();
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_expressionContext* constant_expression();
  Constant_expressionContext* constant_expression(int precedence);
  class  Constant_mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_mintypmax_expressionContext* constant_mintypmax_expression();

  class  Constant_param_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_param_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_param_expressionContext* constant_param_expression();

  class  Param_expressionContext : public antlr4::ParserRuleContext {
  public:
    Param_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Mintypmax_expressionContext *mintypmax_expression();
    Data_typeContext *data_type();
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_expressionContext* param_expression();

  class  Constant_range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Constant_range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_expressionContext *constant_expression();
    Constant_part_select_rangeContext *constant_part_select_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_range_expressionContext* constant_range_expression();

  class  Constant_part_select_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_part_select_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_rangeContext *constant_range();
    Constant_indexed_rangeContext *constant_indexed_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_part_select_rangeContext* constant_part_select_range();

  class  Constant_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_rangeContext* constant_range();

  class  Constant_indexed_rangeContext : public antlr4::ParserRuleContext {
  public:
    Constant_indexed_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    antlr4::tree::TerminalNode *INC_PART_SELECT_OP();
    antlr4::tree::TerminalNode *DEC_PART_SELECT_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_indexed_rangeContext* constant_indexed_range();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    Unary_operatorContext *unary_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Inc_or_dec_expressionContext *inc_or_dec_expression();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Operator_assignmentContext *operator_assignment();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MATCHES();
    PatternContext *pattern();
    antlr4::tree::TerminalNode *QMARK();
    antlr4::tree::TerminalNode *COLUMN();
    std::vector<antlr4::tree::TerminalNode *> LOGICAL_AND();
    antlr4::tree::TerminalNode* LOGICAL_AND(size_t i);
    Tagged_union_expressionContext *tagged_union_expression();
    Binary_operatorContext *binary_operator();
    antlr4::tree::TerminalNode *INSIDE();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    Open_range_listContext *open_range_list();
    antlr4::tree::TerminalNode *CLOSE_CURLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Tagged_union_expressionContext : public antlr4::ParserRuleContext {
  public:
    Tagged_union_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAGGED();
    IdentifierContext *identifier();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tagged_union_expressionContext* tagged_union_expression();

  class  Value_rangeContext : public antlr4::ParserRuleContext {
  public:
    Value_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_rangeContext* value_range();

  class  Mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mintypmax_expressionContext* mintypmax_expression();

  class  Module_path_expressionContext : public antlr4::ParserRuleContext {
  public:
    Module_path_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Module_path_primaryContext *module_path_primary();
    Unary_module_path_operatorContext *unary_module_path_operator();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    Binary_module_path_operatorContext *binary_module_path_operator();
    antlr4::tree::TerminalNode *QMARK();
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_expressionContext* module_path_expression();
  Module_path_expressionContext* module_path_expression(int precedence);
  class  Module_path_mintypmax_expressionContext : public antlr4::ParserRuleContext {
  public:
    Module_path_mintypmax_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Module_path_expressionContext *> module_path_expression();
    Module_path_expressionContext* module_path_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLUMN();
    antlr4::tree::TerminalNode* COLUMN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_mintypmax_expressionContext* module_path_mintypmax_expression();

  class  Range_expressionContext : public antlr4::ParserRuleContext {
  public:
    Range_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Part_select_rangeContext *part_select_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Range_expressionContext* range_expression();

  class  Part_select_rangeContext : public antlr4::ParserRuleContext {
  public:
    Part_select_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Constant_rangeContext *constant_range();
    Indexed_rangeContext *indexed_range();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Part_select_rangeContext* part_select_range();

  class  Indexed_rangeContext : public antlr4::ParserRuleContext {
  public:
    Indexed_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *INC_PART_SELECT_OP();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *DEC_PART_SELECT_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Indexed_rangeContext* indexed_range();

  class  Constant_primaryContext : public antlr4::ParserRuleContext {
  public:
    Constant_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_literalContext *primary_literal();
    IdentifierContext *identifier();
    Constant_selectContext *constant_select();
    Package_scopeContext *package_scope();
    Class_scopeContext *class_scope();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_range_expressionContext *constant_range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    Constant_concatenationContext *constant_concatenation();
    Constant_multiple_concatenationContext *constant_multiple_concatenation();
    Subroutine_callContext *subroutine_call();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_mintypmax_expressionContext *constant_mintypmax_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Constant_castContext *constant_cast();
    Constant_assignment_pattern_expressionContext *constant_assignment_pattern_expression();
    Type_referenceContext *type_reference();
    Dollar_keywordContext *dollar_keyword();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_primaryContext* constant_primary();

  class  Module_path_primaryContext : public antlr4::ParserRuleContext {
  public:
    Module_path_primaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    IdentifierContext *identifier();
    Module_path_concatenationContext *module_path_concatenation();
    Module_path_multiple_concatenationContext *module_path_multiple_concatenation();
    Subroutine_callContext *subroutine_call();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Module_path_mintypmax_expressionContext *module_path_mintypmax_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Module_path_primaryContext* module_path_primary();

  class  Complex_func_callContext : public antlr4::ParserRuleContext {
  public:
    Complex_func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    SelectContext *select();
    Implicit_class_handleContext *implicit_class_handle();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();
    Dollar_keywordContext *dollar_keyword();
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<Attribute_instanceContext *> attribute_instance();
    Attribute_instanceContext* attribute_instance(size_t i);
    Method_call_bodyContext *method_call_body();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);
    List_of_argumentsContext *list_of_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Complex_func_callContext* complex_func_call();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_literalContext *primary_literal();
    Complex_func_callContext *complex_func_call();
    ConcatenationContext *concatenation();
    Multiple_concatenationContext *multiple_concatenation();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Range_expressionContext *range_expression();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Mintypmax_expressionContext *mintypmax_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    CastContext *cast();
    Assignment_pattern_expressionContext *assignment_pattern_expression();
    Streaming_concatenationContext *streaming_concatenation();
    System_taskContext *system_task();
    Class_typeContext *class_type();
    antlr4::tree::TerminalNode *COLUMNCOLUMN();
    Method_call_bodyContext *method_call_body();
    This_keywordContext *this_keyword();
    Dollar_keywordContext *dollar_keyword();
    Null_keywordContext *null_keyword();
    Empty_queueContext *empty_queue();
    Randomize_callContext *randomize_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class  This_keywordContext : public antlr4::ParserRuleContext {
  public:
    This_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  This_keywordContext* this_keyword();

  class  Super_keywordContext : public antlr4::ParserRuleContext {
  public:
    Super_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUPER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Super_keywordContext* super_keyword();

  class  Dollar_keywordContext : public antlr4::ParserRuleContext {
  public:
    Dollar_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_keywordContext* dollar_keyword();

  class  Dollar_root_keywordContext : public antlr4::ParserRuleContext {
  public:
    Dollar_root_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOLLAR_ROOT();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dollar_root_keywordContext* dollar_root_keyword();

  class  This_dot_superContext : public antlr4::ParserRuleContext {
  public:
    This_dot_superContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *SUPER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  This_dot_superContext* this_dot_super();

  class  Null_keywordContext : public antlr4::ParserRuleContext {
  public:
    Null_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULL_KEYWORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Null_keywordContext* null_keyword();

  class  Time_literalContext : public antlr4::ParserRuleContext {
  public:
    Time_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integral_number();
    Time_unitContext *time_unit();
    antlr4::tree::TerminalNode *Real_number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_literalContext* time_literal();

  class  Time_unitContext : public antlr4::ParserRuleContext {
  public:
    Time_unitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Simple_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Time_unitContext* time_unit();

  class  Implicit_class_handleContext : public antlr4::ParserRuleContext {
  public:
    Implicit_class_handleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    This_keywordContext *this_keyword();
    Super_keywordContext *super_keyword();
    This_dot_superContext *this_dot_super();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Implicit_class_handleContext* implicit_class_handle();

  class  Bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bit_selectContext* bit_select();

  class  SelectContext : public antlr4::ParserRuleContext {
  public:
    SelectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_selectContext *> bit_select();
    Bit_selectContext* bit_select(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Part_select_rangeContext *part_select_range();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectContext* select();

  class  Nonrange_selectContext : public antlr4::ParserRuleContext {
  public:
    Nonrange_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bit_selectContext *> bit_select();
    Bit_selectContext* bit_select(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonrange_selectContext* nonrange_select();

  class  Constant_bit_selectContext : public antlr4::ParserRuleContext {
  public:
    Constant_bit_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_bit_selectContext* constant_bit_select();

  class  Constant_selectContext : public antlr4::ParserRuleContext {
  public:
    Constant_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Constant_bit_selectContext *> constant_bit_select();
    Constant_bit_selectContext* constant_bit_select(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    Constant_part_select_rangeContext *constant_part_select_range();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_selectContext* constant_select();

  class  Primary_literalContext : public antlr4::ParserRuleContext {
  public:
    Primary_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    Time_literalContext *time_literal();
    Unbased_unsized_literalContext *unbased_unsized_literal();
    String_valueContext *string_value();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_literalContext* primary_literal();

  class  Constant_castContext : public antlr4::ParserRuleContext {
  public:
    Constant_castContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Casting_typeContext *casting_type();
    antlr4::tree::TerminalNode *TICK();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    Constant_expressionContext *constant_expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    Constant_concatenationContext *constant_concatenation();
    Constant_multiple_concatenationContext *constant_multiple_concatenation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Constant_castContext* constant_cast();

  class  CastContext : public antlr4::ParserRuleContext {
  public:
    CastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Casting_typeContext *casting_type();
    antlr4::tree::TerminalNode *TICK();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    ConcatenationContext *concatenation();
    Multiple_concatenationContext *multiple_concatenation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastContext* cast();

  class  Net_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Net_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ps_or_hierarchical_identifierContext *ps_or_hierarchical_identifier();
    Constant_selectContext *constant_select();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<Net_lvalueContext *> net_lvalue();
    Net_lvalueContext* net_lvalue(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Assignment_pattern_net_lvalueContext *assignment_pattern_net_lvalue();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Net_lvalueContext* net_lvalue();

  class  Variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    SelectContext *select();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Package_scopeContext *package_scope();
    antlr4::tree::TerminalNode *OPEN_CURLY();
    std::vector<Variable_lvalueContext *> variable_lvalue();
    Variable_lvalueContext* variable_lvalue(size_t i);
    antlr4::tree::TerminalNode *CLOSE_CURLY();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Assignment_pattern_variable_lvalueContext *assignment_pattern_variable_lvalue();
    Assignment_pattern_expression_typeContext *assignment_pattern_expression_type();
    Streaming_concatenationContext *streaming_concatenation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_lvalueContext* variable_lvalue();

  class  Nonrange_variable_lvalueContext : public antlr4::ParserRuleContext {
  public:
    Nonrange_variable_lvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Hierarchical_identifierContext *hierarchical_identifier();
    Nonrange_selectContext *nonrange_select();
    Implicit_class_handleContext *implicit_class_handle();
    antlr4::tree::TerminalNode *DOT();
    Package_scopeContext *package_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonrange_variable_lvalueContext* nonrange_variable_lvalue();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Unary_operatorContext() = default;
    void copyFrom(Unary_operatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Unary_BitwAndContext : public Unary_operatorContext {
  public:
    Unary_BitwAndContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_ReductNandContext : public Unary_operatorContext {
  public:
    Unary_ReductNandContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_NAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_TildaContext : public Unary_operatorContext {
  public:
    Unary_TildaContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *TILDA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_PlusContext : public Unary_operatorContext {
  public:
    Unary_PlusContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *PLUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_NotContext : public Unary_operatorContext {
  public:
    Unary_NotContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BANG();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_BitwOrContext : public Unary_operatorContext {
  public:
    Unary_BitwOrContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_ReductXnor2Context : public Unary_operatorContext {
  public:
    Unary_ReductXnor2Context(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_XNOR2();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_BitwXorContext : public Unary_operatorContext {
  public:
    Unary_BitwXorContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_XOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_MinusContext : public Unary_operatorContext {
  public:
    Unary_MinusContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_ReductNorContext : public Unary_operatorContext {
  public:
    Unary_ReductNorContext(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_NOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_ReductXnor1Context : public Unary_operatorContext {
  public:
    Unary_ReductXnor1Context(Unary_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_XNOR1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Unary_operatorContext* unary_operator();

  class  Binary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Binary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Binary_operatorContext() = default;
    void copyFrom(Binary_operatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BinOp_BitwAndContext : public Binary_operatorContext {
  public:
    BinOp_BitwAndContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_MinusContext : public Binary_operatorContext {
  public:
    BinOp_MinusContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_DivContext : public Binary_operatorContext {
  public:
    BinOp_DivContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *DIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_WildEqualContext : public Binary_operatorContext {
  public:
    BinOp_WildEqualContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *WILD_EQUAL_OP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ArithShiftLeftContext : public Binary_operatorContext {
  public:
    BinOp_ArithShiftLeftContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *ARITH_SHIFT_LEFT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_MultContext : public Binary_operatorContext {
  public:
    BinOp_MultContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *STAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ReductNandContext : public Binary_operatorContext {
  public:
    BinOp_ReductNandContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_NAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_NotContext : public Binary_operatorContext {
  public:
    BinOp_NotContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *NOTEQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_BitwXorContext : public Binary_operatorContext {
  public:
    BinOp_BitwXorContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_XOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ShiftLeftContext : public Binary_operatorContext {
  public:
    BinOp_ShiftLeftContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *SHIFT_LEFT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_WildcardEqualContext : public Binary_operatorContext {
  public:
    BinOp_WildcardEqualContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BINARY_WILDCARD_EQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ShiftRightContext : public Binary_operatorContext {
  public:
    BinOp_ShiftRightContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *SHIFT_RIGHT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ArithShiftRightContext : public Binary_operatorContext {
  public:
    BinOp_ArithShiftRightContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *ARITH_SHIFT_RIGHT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_LogicOrContext : public Binary_operatorContext {
  public:
    BinOp_LogicOrContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *LOGICAL_OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_PercentContext : public Binary_operatorContext {
  public:
    BinOp_PercentContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *PERCENT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ReductNorContext : public Binary_operatorContext {
  public:
    BinOp_ReductNorContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_NOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_WildcardNotEqualContext : public Binary_operatorContext {
  public:
    BinOp_WildcardNotEqualContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BINARY_WILDCARD_NOTEQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_FourStateLogicEqualContext : public Binary_operatorContext {
  public:
    BinOp_FourStateLogicEqualContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *FOUR_STATE_LOGIC_EQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ImplyContext : public Binary_operatorContext {
  public:
    BinOp_ImplyContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *IMPLY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_EquivContext : public Binary_operatorContext {
  public:
    BinOp_EquivContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *EQUIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_LessEqualContext : public Binary_operatorContext {
  public:
    BinOp_LessEqualContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *LESS_EQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_LogicAndContext : public Binary_operatorContext {
  public:
    BinOp_LogicAndContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *LOGICAL_AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ReductXnor2Context : public Binary_operatorContext {
  public:
    BinOp_ReductXnor2Context(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_XNOR2();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_ReductXnor1Context : public Binary_operatorContext {
  public:
    BinOp_ReductXnor1Context(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_XNOR1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_GreatEqualContext : public Binary_operatorContext {
  public:
    BinOp_GreatEqualContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *GREATER_EQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_FourStateLogicNotEqualContext : public Binary_operatorContext {
  public:
    BinOp_FourStateLogicNotEqualContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *FOUR_STATE_LOGIC_NOTEQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_MultMultContext : public Binary_operatorContext {
  public:
    BinOp_MultMultContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *STARSTAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_GreatContext : public Binary_operatorContext {
  public:
    BinOp_GreatContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *GREATER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_EquivalenceContext : public Binary_operatorContext {
  public:
    BinOp_EquivalenceContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *EQUIVALENCE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_WildNotEqualContext : public Binary_operatorContext {
  public:
    BinOp_WildNotEqualContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *WILD_NOTEQUAL_OP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_LessContext : public Binary_operatorContext {
  public:
    BinOp_LessContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *LESS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_PlusContext : public Binary_operatorContext {
  public:
    BinOp_PlusContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *PLUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinOp_BitwOrContext : public Binary_operatorContext {
  public:
    BinOp_BitwOrContext(Binary_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Binary_operatorContext* binary_operator();

  class  Inc_or_dec_operatorContext : public antlr4::ParserRuleContext {
  public:
    Inc_or_dec_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Inc_or_dec_operatorContext() = default;
    void copyFrom(Inc_or_dec_operatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IncDec_MinusMinusContext : public Inc_or_dec_operatorContext {
  public:
    IncDec_MinusMinusContext(Inc_or_dec_operatorContext *ctx);

    antlr4::tree::TerminalNode *MINUSMINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncDec_PlusPlusContext : public Inc_or_dec_operatorContext {
  public:
    IncDec_PlusPlusContext(Inc_or_dec_operatorContext *ctx);

    antlr4::tree::TerminalNode *PLUSPLUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Inc_or_dec_operatorContext* inc_or_dec_operator();

  class  Unary_module_path_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_module_path_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Unary_module_path_operatorContext() = default;
    void copyFrom(Unary_module_path_operatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnaryModOp_ReductXnor2Context : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_ReductXnor2Context(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_XNOR2();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryModOp_NotContext : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_NotContext(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *BANG();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryModOp_ReductNandContext : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_ReductNandContext(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_NAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryModOp_ReductXNor1Context : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_ReductXNor1Context(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_XNOR1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryModOp_TildaContext : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_TildaContext(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *TILDA();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryModOp_BitwOrContext : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_BitwOrContext(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryModOp_ReductNorContext : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_ReductNorContext(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_NOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryModOp_BitwXorContext : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_BitwXorContext(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_XOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryModOp_BitwAndContext : public Unary_module_path_operatorContext {
  public:
    UnaryModOp_BitwAndContext(Unary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Unary_module_path_operatorContext* unary_module_path_operator();

  class  Binary_module_path_operatorContext : public antlr4::ParserRuleContext {
  public:
    Binary_module_path_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Binary_module_path_operatorContext() = default;
    void copyFrom(Binary_module_path_operatorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BinModOp_EquivContext : public Binary_module_path_operatorContext {
  public:
    BinModOp_EquivContext(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *EQUIV();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinModOp_BitwXorContext : public Binary_module_path_operatorContext {
  public:
    BinModOp_BitwXorContext(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_XOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinModOp_LogicOrContext : public Binary_module_path_operatorContext {
  public:
    BinModOp_LogicOrContext(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *LOGICAL_OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinModOp_NotEqualContext : public Binary_module_path_operatorContext {
  public:
    BinModOp_NotEqualContext(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *NOTEQUAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinModOp_LogicAndContext : public Binary_module_path_operatorContext {
  public:
    BinModOp_LogicAndContext(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *LOGICAL_AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinModOp_BitwAndContext : public Binary_module_path_operatorContext {
  public:
    BinModOp_BitwAndContext(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_AND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinModOp_BitwOrContext : public Binary_module_path_operatorContext {
  public:
    BinModOp_BitwOrContext(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *BITW_OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinModOp_ReductXnor1Context : public Binary_module_path_operatorContext {
  public:
    BinModOp_ReductXnor1Context(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_XNOR1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinModOp_ReductXnor2Context : public Binary_module_path_operatorContext {
  public:
    BinModOp_ReductXnor2Context(Binary_module_path_operatorContext *ctx);

    antlr4::tree::TerminalNode *REDUCTION_XNOR2();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Binary_module_path_operatorContext* binary_module_path_operator();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Number_RealContext : public NumberContext {
  public:
    Number_RealContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *Real_number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_1Tickb0Context : public NumberContext {
  public:
    Number_1Tickb0Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_b0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_1TickB0Context : public NumberContext {
  public:
    Number_1TickB0Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_B0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_1Tickb1Context : public NumberContext {
  public:
    Number_1Tickb1Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_b1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_1TickB1Context : public NumberContext {
  public:
    Number_1TickB1Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_B1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_1TickbxContext : public NumberContext {
  public:
    Number_1TickbxContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_bx();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_1TickbXContext : public NumberContext {
  public:
    Number_1TickbXContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_bX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_1TickBxContext : public NumberContext {
  public:
    Number_1TickBxContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_Bx();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_1TickBXContext : public NumberContext {
  public:
    Number_1TickBXContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *ONE_TICK_BX();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_IntegralContext : public NumberContext {
  public:
    Number_IntegralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *Integral_number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_Tick0Context : public NumberContext {
  public:
    Number_Tick0Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *TICK_0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_Tick1Context : public NumberContext {
  public:
    Number_Tick1Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *TICK_1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_Tickb0Context : public NumberContext {
  public:
    Number_Tickb0Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *TICK_b0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_TickB0Context : public NumberContext {
  public:
    Number_TickB0Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *TICK_B0();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_Tickb1Context : public NumberContext {
  public:
    Number_Tickb1Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *TICK_b1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Number_TickB1Context : public NumberContext {
  public:
    Number_TickB1Context(NumberContext *ctx);

    antlr4::tree::TerminalNode *TICK_B1();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  Unbased_unsized_literalContext : public antlr4::ParserRuleContext {
  public:
    Unbased_unsized_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_0();
    antlr4::tree::TerminalNode *TICK_1();
    antlr4::tree::TerminalNode *TICK();
    antlr4::tree::TerminalNode *Simple_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unbased_unsized_literalContext* unbased_unsized_literal();

  class  Attribute_instanceContext : public antlr4::ParserRuleContext {
  public:
    Attribute_instanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS_STAR();
    std::vector<Attr_specContext *> attr_spec();
    Attr_specContext* attr_spec(size_t i);
    antlr4::tree::TerminalNode *STAR_CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_instanceContext* attribute_instance();

  class  Attr_specContext : public antlr4::ParserRuleContext {
  public:
    Attr_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Attr_nameContext *attr_name();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Constant_expressionContext *constant_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_specContext* attr_spec();

  class  Attr_nameContext : public antlr4::ParserRuleContext {
  public:
    Attr_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_nameContext* attr_name();

  class  Hierarchical_identifierContext : public antlr4::ParserRuleContext {
  public:
    Hierarchical_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Simple_identifier();
    antlr4::tree::TerminalNode* Simple_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Escaped_identifier();
    antlr4::tree::TerminalNode* Escaped_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THIS();
    antlr4::tree::TerminalNode* THIS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RANDOMIZE();
    antlr4::tree::TerminalNode* RANDOMIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SAMPLE();
    antlr4::tree::TerminalNode* SAMPLE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LOGIC();
    antlr4::tree::TerminalNode* LOGIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BIT();
    antlr4::tree::TerminalNode* BIT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> BYTE();
    antlr4::tree::TerminalNode* BYTE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEW();
    antlr4::tree::TerminalNode* NEW(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EXPECT();
    antlr4::tree::TerminalNode* EXPECT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DO();
    antlr4::tree::TerminalNode* DO(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SIGNED();
    antlr4::tree::TerminalNode* SIGNED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNSIGNED();
    antlr4::tree::TerminalNode* UNSIGNED(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FINAL();
    antlr4::tree::TerminalNode* FINAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GLOBAL();
    antlr4::tree::TerminalNode* GLOBAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SOFT();
    antlr4::tree::TerminalNode* SOFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONTEXT();
    antlr4::tree::TerminalNode* CONTEXT(size_t i);
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hierarchical_identifierContext* hierarchical_identifier();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *Escaped_identifier();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *RANDOMIZE();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *LOGIC();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *EXPECT();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *SIGNED();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *SOFT();
    antlr4::tree::TerminalNode *CONTEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  Interface_identifierContext : public antlr4::ParserRuleContext {
  public:
    Interface_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Interface_identifierContext* interface_identifier();

  class  Package_scopeContext : public antlr4::ParserRuleContext {
  public:
    Package_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLUMNCOLUMN();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *Escaped_identifier();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *RANDOMIZE();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *DOLLAR_UNIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Package_scopeContext* package_scope();

  class  Ps_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Simple_identifier();
    antlr4::tree::TerminalNode* Simple_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Escaped_identifier();
    antlr4::tree::TerminalNode* Escaped_identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THIS();
    antlr4::tree::TerminalNode* THIS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RANDOMIZE();
    antlr4::tree::TerminalNode* RANDOMIZE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SAMPLE();
    antlr4::tree::TerminalNode* SAMPLE(size_t i);
    antlr4::tree::TerminalNode *DOLLAR_UNIT();
    antlr4::tree::TerminalNode *COLUMNCOLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_identifierContext* ps_identifier();

  class  Ps_or_hierarchical_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_or_hierarchical_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Package_scopeContext *package_scope();
    Hierarchical_identifierContext *hierarchical_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_or_hierarchical_identifierContext* ps_or_hierarchical_identifier();

  class  Ps_or_hierarchical_array_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_or_hierarchical_array_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Implicit_class_handleContext *implicit_class_handle();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    Class_scopeContext *class_scope();
    Package_scopeContext *package_scope();
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_or_hierarchical_array_identifierContext* ps_or_hierarchical_array_identifier();

  class  Ps_or_hierarchical_sequence_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_or_hierarchical_sequence_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Package_scopeContext *package_scope();
    Dollar_root_keywordContext *dollar_root_keyword();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_BRACKET();
    antlr4::tree::TerminalNode* OPEN_BRACKET(size_t i);
    std::vector<Constant_expressionContext *> constant_expression();
    Constant_expressionContext* constant_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_BRACKET();
    antlr4::tree::TerminalNode* CLOSE_BRACKET(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_or_hierarchical_sequence_identifierContext* ps_or_hierarchical_sequence_identifier();

  class  Ps_type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Ps_type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *COLUMNCOLUMN();
    Package_scopeContext *package_scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_type_identifierContext* ps_type_identifier();

  class  System_taskContext : public antlr4::ParserRuleContext {
  public:
    System_taskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_task_namesContext *system_task_names();
    antlr4::tree::TerminalNode *OPEN_PARENS();
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    List_of_argumentsContext *list_of_arguments();
    Data_typeContext *data_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_taskContext* system_task();

  class  System_task_namesContext : public antlr4::ParserRuleContext {
  public:
    System_task_namesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DOLLAR();
    antlr4::tree::TerminalNode* DOLLAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Simple_identifier();
    antlr4::tree::TerminalNode* Simple_identifier(size_t i);
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *REALTIME();
    SigningContext *signing();
    antlr4::tree::TerminalNode *ASSERT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_task_namesContext* system_task_names();

  class  Top_directivesContext : public antlr4::ParserRuleContext {
  public:
    Top_directivesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Timescale_directiveContext *timescale_directive();
    Uselib_directiveContext *uselib_directive();
    antlr4::tree::TerminalNode *BACK_TICK();
    std::vector<antlr4::tree::TerminalNode *> Simple_identifier();
    antlr4::tree::TerminalNode* Simple_identifier(size_t i);
    NumberContext *number();
    antlr4::tree::TerminalNode *Real_number();
    Begin_keywords_directiveContext *begin_keywords_directive();
    End_keywords_directiveContext *end_keywords_directive();
    Unconnected_drive_directiveContext *unconnected_drive_directive();
    Nounconnected_drive_directiveContext *nounconnected_drive_directive();
    Default_nettype_directiveContext *default_nettype_directive();
    Default_decay_time_directiveContext *default_decay_time_directive();
    Default_trireg_strenght_directiveContext *default_trireg_strenght_directive();
    Delay_mode_distributed_directiveContext *delay_mode_distributed_directive();
    Delay_mode_path_directiveContext *delay_mode_path_directive();
    Delay_mode_unit_directiveContext *delay_mode_unit_directive();
    Delay_mode_zero_directiveContext *delay_mode_zero_directive();
    Protect_directiveContext *protect_directive();
    Endprotect_directiveContext *endprotect_directive();
    Protected_directiveContext *protected_directive();
    Endprotected_directiveContext *endprotected_directive();
    Expand_vectornets_directiveContext *expand_vectornets_directive();
    Noexpand_vectornets_directiveContext *noexpand_vectornets_directive();
    Autoexpand_vectornets_directiveContext *autoexpand_vectornets_directive();
    Remove_gatename_directiveContext *remove_gatename_directive();
    Noremove_gatenames_directiveContext *noremove_gatenames_directive();
    Remove_netname_directiveContext *remove_netname_directive();
    Noremove_netnames_directiveContext *noremove_netnames_directive();
    Accelerate_directiveContext *accelerate_directive();
    Noaccelerate_directiveContext *noaccelerate_directive();
    Disable_portfaults_directiveContext *disable_portfaults_directive();
    Enable_portfaults_directiveContext *enable_portfaults_directive();
    Nosuppress_faults_directiveContext *nosuppress_faults_directive();
    Suppress_faults_directiveContext *suppress_faults_directive();
    Signed_directiveContext *signed_directive();
    Unsigned_directiveContext *unsigned_directive();
    Celldefine_directiveContext *celldefine_directive();
    Endcelldefine_directiveContext *endcelldefine_directive();
    Pragma_directiveContext *pragma_directive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Top_directivesContext* top_directives();

  class  Pragma_directiveContext : public antlr4::ParserRuleContext {
  public:
    Pragma_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_PRAGMA();
    antlr4::tree::TerminalNode *Simple_identifier();
    std::vector<Pragma_expressionContext *> pragma_expression();
    Pragma_expressionContext* pragma_expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_directiveContext* pragma_directive();

  class  Pragma_expressionContext : public antlr4::ParserRuleContext {
  public:
    Pragma_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Pragma_valueContext *pragma_value();
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_expressionContext* pragma_expression();

  class  Pragma_valueContext : public antlr4::ParserRuleContext {
  public:
    Pragma_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENS();
    std::vector<Pragma_expressionContext *> pragma_expression();
    Pragma_expressionContext* pragma_expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PARENS();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    NumberContext *number();
    String_valueContext *string_value();
    antlr4::tree::TerminalNode *Simple_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pragma_valueContext* pragma_value();

  class  Timescale_directiveContext : public antlr4::ParserRuleContext {
  public:
    Timescale_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_TIMESCALE();
    std::vector<antlr4::tree::TerminalNode *> Integral_number();
    antlr4::tree::TerminalNode* Integral_number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Simple_identifier();
    antlr4::tree::TerminalNode* Simple_identifier(size_t i);
    antlr4::tree::TerminalNode *DIV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Timescale_directiveContext* timescale_directive();

  class  Begin_keywords_directiveContext : public antlr4::ParserRuleContext {
  public:
    Begin_keywords_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_BEGIN_KEYWORDS();
    antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Begin_keywords_directiveContext* begin_keywords_directive();

  class  End_keywords_directiveContext : public antlr4::ParserRuleContext {
  public:
    End_keywords_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_END_KEYWORDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_keywords_directiveContext* end_keywords_directive();

  class  Unconnected_drive_directiveContext : public antlr4::ParserRuleContext {
  public:
    Unconnected_drive_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_UNCONNECTED_DRIVE();
    antlr4::tree::TerminalNode *Simple_identifier();
    antlr4::tree::TerminalNode *PULL0();
    antlr4::tree::TerminalNode *PULL1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unconnected_drive_directiveContext* unconnected_drive_directive();

  class  Nounconnected_drive_directiveContext : public antlr4::ParserRuleContext {
  public:
    Nounconnected_drive_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_NOUNCONNECTED_DRIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nounconnected_drive_directiveContext* nounconnected_drive_directive();

  class  Default_nettype_directiveContext : public antlr4::ParserRuleContext {
  public:
    Default_nettype_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_DEFAULT_NETTYPE();
    antlr4::tree::TerminalNode *Simple_identifier();
    Net_typeContext *net_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_nettype_directiveContext* default_nettype_directive();

  class  Uselib_directiveContext : public antlr4::ParserRuleContext {
  public:
    Uselib_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_USELIB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Uselib_directiveContext* uselib_directive();

  class  Celldefine_directiveContext : public antlr4::ParserRuleContext {
  public:
    Celldefine_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_CELLDEFINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Celldefine_directiveContext* celldefine_directive();

  class  Endcelldefine_directiveContext : public antlr4::ParserRuleContext {
  public:
    Endcelldefine_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_ENDCELLDEFINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endcelldefine_directiveContext* endcelldefine_directive();

  class  Protect_directiveContext : public antlr4::ParserRuleContext {
  public:
    Protect_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_PROTECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Protect_directiveContext* protect_directive();

  class  Endprotect_directiveContext : public antlr4::ParserRuleContext {
  public:
    Endprotect_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_ENDPROTECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endprotect_directiveContext* endprotect_directive();

  class  Protected_directiveContext : public antlr4::ParserRuleContext {
  public:
    Protected_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_PROTECTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Protected_directiveContext* protected_directive();

  class  Endprotected_directiveContext : public antlr4::ParserRuleContext {
  public:
    Endprotected_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_ENDPROTECTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endprotected_directiveContext* endprotected_directive();

  class  Expand_vectornets_directiveContext : public antlr4::ParserRuleContext {
  public:
    Expand_vectornets_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_EXPAND_VECTORNETS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expand_vectornets_directiveContext* expand_vectornets_directive();

  class  Noexpand_vectornets_directiveContext : public antlr4::ParserRuleContext {
  public:
    Noexpand_vectornets_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_NOEXPAND_VECTORNETS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Noexpand_vectornets_directiveContext* noexpand_vectornets_directive();

  class  Autoexpand_vectornets_directiveContext : public antlr4::ParserRuleContext {
  public:
    Autoexpand_vectornets_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_AUTOEXPAND_VECTORNETS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Autoexpand_vectornets_directiveContext* autoexpand_vectornets_directive();

  class  Disable_portfaults_directiveContext : public antlr4::ParserRuleContext {
  public:
    Disable_portfaults_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_DISABLE_PORTFAULTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Disable_portfaults_directiveContext* disable_portfaults_directive();

  class  Enable_portfaults_directiveContext : public antlr4::ParserRuleContext {
  public:
    Enable_portfaults_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_ENABLE_PORTFAULTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enable_portfaults_directiveContext* enable_portfaults_directive();

  class  Nosuppress_faults_directiveContext : public antlr4::ParserRuleContext {
  public:
    Nosuppress_faults_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_NOSUPPRESS_FAULTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nosuppress_faults_directiveContext* nosuppress_faults_directive();

  class  Suppress_faults_directiveContext : public antlr4::ParserRuleContext {
  public:
    Suppress_faults_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_SUPPRESS_FAULTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Suppress_faults_directiveContext* suppress_faults_directive();

  class  Signed_directiveContext : public antlr4::ParserRuleContext {
  public:
    Signed_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_SIGNED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_directiveContext* signed_directive();

  class  Unsigned_directiveContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_UNSIGNED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_directiveContext* unsigned_directive();

  class  Remove_gatename_directiveContext : public antlr4::ParserRuleContext {
  public:
    Remove_gatename_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_REMOVE_GATENAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remove_gatename_directiveContext* remove_gatename_directive();

  class  Noremove_gatenames_directiveContext : public antlr4::ParserRuleContext {
  public:
    Noremove_gatenames_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_NOREMOVE_GATENAMES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Noremove_gatenames_directiveContext* noremove_gatenames_directive();

  class  Remove_netname_directiveContext : public antlr4::ParserRuleContext {
  public:
    Remove_netname_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_REMOVE_NETNAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Remove_netname_directiveContext* remove_netname_directive();

  class  Noremove_netnames_directiveContext : public antlr4::ParserRuleContext {
  public:
    Noremove_netnames_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_NOREMOVE_NETNAMES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Noremove_netnames_directiveContext* noremove_netnames_directive();

  class  Accelerate_directiveContext : public antlr4::ParserRuleContext {
  public:
    Accelerate_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_ACCELERATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Accelerate_directiveContext* accelerate_directive();

  class  Noaccelerate_directiveContext : public antlr4::ParserRuleContext {
  public:
    Noaccelerate_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_NOACCELERATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Noaccelerate_directiveContext* noaccelerate_directive();

  class  Default_trireg_strenght_directiveContext : public antlr4::ParserRuleContext {
  public:
    Default_trireg_strenght_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_DEFAULT_TRIREG_STRENGTH();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_trireg_strenght_directiveContext* default_trireg_strenght_directive();

  class  Default_decay_time_directiveContext : public antlr4::ParserRuleContext {
  public:
    Default_decay_time_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_DEFAULT_DECAY_TIME();
    NumberContext *number();
    antlr4::tree::TerminalNode *Simple_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_decay_time_directiveContext* default_decay_time_directive();

  class  Delay_mode_distributed_directiveContext : public antlr4::ParserRuleContext {
  public:
    Delay_mode_distributed_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_DELAY_MODE_DISTRIBUTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_mode_distributed_directiveContext* delay_mode_distributed_directive();

  class  Delay_mode_path_directiveContext : public antlr4::ParserRuleContext {
  public:
    Delay_mode_path_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_DELAY_MODE_PATH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_mode_path_directiveContext* delay_mode_path_directive();

  class  Delay_mode_unit_directiveContext : public antlr4::ParserRuleContext {
  public:
    Delay_mode_unit_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_DELAY_MODE_UNIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_mode_unit_directiveContext* delay_mode_unit_directive();

  class  Delay_mode_zero_directiveContext : public antlr4::ParserRuleContext {
  public:
    Delay_mode_zero_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TICK_DELAY_MODE_ZERO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Delay_mode_zero_directiveContext* delay_mode_zero_directive();

  class  Surelog_macro_not_definedContext : public antlr4::ParserRuleContext {
  public:
    Surelog_macro_not_definedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SURELOG_MACRO_NOT_DEFINED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Surelog_macro_not_definedContext* surelog_macro_not_defined();

  class  SllineContext : public antlr4::ParserRuleContext {
  public:
    SllineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SLLINE();
    std::vector<antlr4::tree::TerminalNode *> Integral_number();
    antlr4::tree::TerminalNode* Integral_number(size_t i);
    antlr4::tree::TerminalNode *String();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SllineContext* slline();

  class  EndconfigContext : public antlr4::ParserRuleContext {
  public:
    EndconfigContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDCONFIG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndconfigContext* endconfig();

  class  Config_declarationContext : public antlr4::ParserRuleContext {
  public:
    Config_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONFIG();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLUMN();
    antlr4::tree::TerminalNode* SEMICOLUMN(size_t i);
    Design_statementContext *design_statement();
    EndconfigContext *endconfig();
    std::vector<Local_parameter_declarationContext *> local_parameter_declaration();
    Local_parameter_declarationContext* local_parameter_declaration(size_t i);
    std::vector<Config_rule_statementContext *> config_rule_statement();
    Config_rule_statementContext* config_rule_statement(size_t i);
    antlr4::tree::TerminalNode *COLUMN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_declarationContext* config_declaration();

  class  Design_statementContext : public antlr4::ParserRuleContext {
  public:
    Design_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DESIGN();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Design_statementContext* design_statement();

  class  Config_rule_statementContext : public antlr4::ParserRuleContext {
  public:
    Config_rule_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Default_clauseContext *default_clause();
    Liblist_clauseContext *liblist_clause();
    antlr4::tree::TerminalNode *SEMICOLUMN();
    Inst_clauseContext *inst_clause();
    Use_clause_configContext *use_clause_config();
    Use_clauseContext *use_clause();
    Cell_clauseContext *cell_clause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Config_rule_statementContext* config_rule_statement();

  class  Default_clauseContext : public antlr4::ParserRuleContext {
  public:
    Default_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_clauseContext* default_clause();

  class  Inst_clauseContext : public antlr4::ParserRuleContext {
  public:
    Inst_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSTANCE();
    Inst_nameContext *inst_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inst_clauseContext* inst_clause();

  class  Inst_nameContext : public antlr4::ParserRuleContext {
  public:
    Inst_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inst_nameContext* inst_name();

  class  Cell_clauseContext : public antlr4::ParserRuleContext {
  public:
    Cell_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CELL();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cell_clauseContext* cell_clause();

  class  Liblist_clauseContext : public antlr4::ParserRuleContext {
  public:
    Liblist_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBLIST();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Liblist_clauseContext* liblist_clause();

  class  Use_clause_configContext : public antlr4::ParserRuleContext {
  public:
    Use_clause_configContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *CONFIG();
    antlr4::tree::TerminalNode *DOT();
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_clause_configContext* use_clause_config();

  class  Use_clauseContext : public antlr4::ParserRuleContext {
  public:
    Use_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *DOT();
    std::vector<Named_parameter_assignmentContext *> named_parameter_assignment();
    Named_parameter_assignmentContext* named_parameter_assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    Parameter_value_assignmentContext *parameter_value_assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Use_clauseContext* use_clause();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool property_exprSempred(Property_exprContext *_localctx, size_t predicateIndex);
  bool sequence_exprSempred(Sequence_exprContext *_localctx, size_t predicateIndex);
  bool block_event_expressionSempred(Block_event_expressionContext *_localctx, size_t predicateIndex);
  bool select_expressionSempred(Select_expressionContext *_localctx, size_t predicateIndex);
  bool event_expressionSempred(Event_expressionContext *_localctx, size_t predicateIndex);
  bool constant_expressionSempred(Constant_expressionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool module_path_expressionSempred(Module_path_expressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

