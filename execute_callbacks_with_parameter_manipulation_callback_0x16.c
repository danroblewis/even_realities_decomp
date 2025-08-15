/*
 * Function: execute_callbacks_with_parameter_manipulation_callback_0x16
 * Entry:    0007fa7a
 * Prototype: undefined execute_callbacks_with_parameter_manipulation_callback_0x16()
 */


void execute_callbacks_with_parameter_manipulation_callback_0x16
               (undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = execute_callback_function_with_parameter(param_1,0x16,&local_14,1,param_1);
  if (iVar1 == 0) {
    local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0x7f | (byte)((param_2 & 1) << 7));
    call_function_pointer_with_parameter_from_structure_alt(param_1,0x16,&local_14,1);
  }
  return;
}


