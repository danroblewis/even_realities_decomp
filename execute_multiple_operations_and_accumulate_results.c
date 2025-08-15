/*
 * Function: execute_multiple_operations_and_accumulate_results
 * Entry:    0007fe2a
 * Prototype: undefined execute_multiple_operations_and_accumulate_results()
 */


int execute_multiple_operations_and_accumulate_results
              (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = call_function_pointer_with_bit_manipulation(param_1,1,param_3,param_4,param_1);
  if (iVar1 == 0) {
    iVar2 = execute_callback_function_with_parameter(param_1,0x14,&local_1c,1);
    local_1c = CONCAT31(local_1c._1_3_,(byte)local_1c & 0xfb | (byte)((param_2 & 1) << 2));
    iVar3 = call_function_pointer_with_parameter_from_structure_alt(param_1,0x14,&local_1c,1);
    iVar1 = call_function_pointer_with_bit_manipulation(param_1,0);
    iVar1 = iVar2 + iVar3 + iVar1;
  }
  return iVar1;
}


