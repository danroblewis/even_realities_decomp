/*
 * Function: process_string_with_maximum_value_and_validation
 * Entry:    00077c78
 * Prototype: undefined process_string_with_maximum_value_and_validation()
 */


void process_string_with_maximum_value_and_validation
               (undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *local_70 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  
  local_5c = 0x7fffffff;
  local_68 = 0x7fffffff;
  local_64 = 0xffff0208;
  local_70[0] = param_1;
  local_60 = param_1;
  process_printf_format_comprehensive(DAT_20002d20,local_70,param_2,param_3);
  *local_70[0] = 0;
  return;
}


