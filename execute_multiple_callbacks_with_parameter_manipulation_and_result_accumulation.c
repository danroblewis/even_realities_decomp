/*
 * Function: execute_multiple_callbacks_with_parameter_manipulation_and_result_accumulation
 * Entry:    0007fb7a
 * Prototype: undefined execute_multiple_callbacks_with_parameter_manipulation_and_result_accumulation()
 */


int execute_multiple_callbacks_with_parameter_manipulation_and_result_accumulation
              (undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  uint local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = execute_callback_function_with_parameter(param_1,0x18,&local_14,1);
  local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xfd | (byte)((param_2 >> 7 & 1) << 1));
  iVar2 = call_function_pointer_with_parameter_from_structure_alt(param_1,0x18,&local_14,1);
  iVar1 = iVar1 + iVar2;
  if (iVar1 == 0) {
    iVar2 = execute_callback_function_with_parameter(param_1,0x62,&local_18,1);
    local_18 = CONCAT31(local_18._1_3_,(byte)local_18 & 0xe7 | (byte)((param_2 & 3) << 3));
    iVar1 = call_function_pointer_with_parameter_from_structure_alt(param_1,0x62,&local_18,1);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}


