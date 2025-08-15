/*
 * Function: extract_data_and_process_bit_flags
 * Entry:    00083bca
 * Prototype: undefined extract_data_and_process_bit_flags()
 */


void extract_data_and_process_bit_flags
               (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = extract_data_structure_value_with_shift(param_1,&local_14,param_3,param_4,param_1);
  if (-1 < iVar1) {
    process_bit_flags_with_state_management(param_1,param_2,~local_14);
    return;
  }
  return;
}


