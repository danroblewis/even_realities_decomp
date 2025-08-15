/*
 * Function: process_data_with_callback_execution_and_bit_manipulation_for_id_0xa
 * Entry:    0007fbd6
 * Prototype: undefined process_data_with_callback_execution_and_bit_manipulation_for_id_0xa()
 */


void process_data_with_callback_execution_and_bit_manipulation_for_id_0xa
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = execute_callback_function_with_parameter(param_1,10,&local_14,1,param_1);
  if (iVar1 == 0) {
    local_14 = CONCAT31(local_14._1_3_,(byte)local_14 & 0xf8 | (byte)param_2 & 7);
    call_function_pointer_with_parameter_from_structure_alt(param_1,10,&local_14,1);
  }
  return;
}


