/*
 * Function: process_data_with_callback_and_parameter_alt6
 * Entry:    00052e7c
 * Prototype: undefined process_data_with_callback_and_parameter_alt6(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void process_data_with_callback_and_parameter_alt6
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
               int param_5)

{
  if (param_5 == 0) {
    format_string_with_variable_arguments
              (param_1,param_2,"bt/%s/%02x%02x%02x%02x%02x%02x%u",param_3,param_4[6],param_4[5],
               param_4[4],param_4[3],param_4[2],param_4[1],*param_4);
  }
  else {
    format_string_with_variable_arguments
              (param_1,param_2,"bt/%s/%02x%02x%02x%02x%02x%02x%u/%s",param_3,param_4[6],param_4[5],
               param_4[4],param_4[3],param_4[2],param_4[1],*param_4,param_5);
  }
  return;
}


