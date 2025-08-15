/*
 * Function: process_string_with_maximum_value_handling
 * Entry:    0007797c
 * Prototype: undefined process_string_with_maximum_value_handling()
 */


void process_string_with_maximum_value_handling(undefined1 *param_1,undefined4 param_2)

{
  undefined1 *local_78 [2];
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  
  local_64 = 0x7fffffff;
  local_70 = 0x7fffffff;
  local_6c = 0xffff0208;
  local_78[0] = param_1;
  local_68 = param_1;
  process_printf_format_comprehensive(STRING_PROCESSING_AND_PRINTF_CONFIGURATION,local_78,param_2);
  *local_78[0] = 0;
  return;
}


