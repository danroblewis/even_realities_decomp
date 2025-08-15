/*
 * Function: initialize_system_configuration_with_parameter_setup
 * Entry:    0007a9e0
 * Prototype: undefined initialize_system_configuration_with_parameter_setup()
 */


void initialize_system_configuration_with_parameter_setup
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  manage_system_configuration_with_bit_pattern_analysis
            (param_1,param_2,0,auStack_18,auStack_14,param_3,1);
  return;
}


