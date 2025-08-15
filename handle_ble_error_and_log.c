/*
 * Function: handle_ble_error_and_log
 * Entry:    0005cbe0
 * Prototype: undefined handle_ble_error_and_log()
 */


undefined4 handle_ble_error_and_log(undefined4 param_1)

{
  undefined4 local_18;
  char *local_14;
  undefined4 uStack_10;
  
  local_14 = "No available SMP context for conn %p";
  local_18 = 3;
  uStack_10 = param_1;
  process_and_compress_data_wrapper(&DAT_00088180,0x1840,&local_18);
  return 0xfffffff4;
}


