/*
 * Function: process_string_with_length_calculation_and_validation
 * Entry:    000779bc
 * Prototype: undefined process_string_with_length_calculation_and_validation()
 */


void process_string_with_length_calculation_and_validation
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_74;
  undefined2 local_72;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_5c;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_74 = 0x204;
  local_80 = param_1;
  local_70 = param_1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  local_7c = calculate_string_length();
  local_5c = &LAB_00086f56_1;
  local_4c = 0;
  local_38 = 0;
  local_72 = 0xffff;
  local_6c = local_7c;
  parse_format_string_comprehensive
            (STRING_PROCESSING_AND_PRINTF_CONFIGURATION,&local_80,param_2,&uStack_8);
  return;
}


