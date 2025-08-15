/*
 * Function: execute_callback_with_parameter_processing_and_bit_0_manipulation
 * Entry:    0007fb4c
 * Prototype: undefined execute_callback_with_parameter_processing_and_bit_0_manipulation()
 */


void execute_callback_with_parameter_processing_and_bit_0_manipulation
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = execute_callback_function_with_parameter(param_1,0x12,&local_14,1,param_1);
  if (iVar1 == 0) {
    local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xfe | (byte)param_2 & 1);
    call_function_pointer_with_parameter_from_structure_alt(param_1,0x12,&local_14,1);
  }
  return;
}


