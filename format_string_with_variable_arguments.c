/*
 * Function: format_string_with_variable_arguments
 * Entry:    0007ddbe
 * Prototype: undefined format_string_with_variable_arguments()
 */


void format_string_with_variable_arguments
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  format_string_with_length_check(param_1,param_2,param_3,&uStack_4,param_1,&uStack_4,param_3);
  return;
}


