/*
 * Function: ble_handle_mapping_processor
 * Entry:    0005b0b8
 * Prototype: undefined ble_handle_mapping_processor()
 */


undefined4 ble_handle_mapping_processor(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  sVar1 = map_ble_handle_to_index();
  ble_handle_mapping_utility(sVar1 + 1,sVar1 + 1,&LAB_00082ab2_1,&local_c,param_1);
  return local_c;
}


