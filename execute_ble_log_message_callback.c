/*
 * Function: execute_ble_log_message_callback
 * Entry:    0005a28c
 * Prototype: undefined execute_ble_log_message_callback()
 */


int execute_ble_log_message_callback
              (undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  iVar1 = (*param_3)(param_4,&DAT_20006390,0x10);
  if (iVar1 < 0) {
    local_1c = "Failed to decode value (err %zd)";
    local_20 = 3;
    iStack_18 = iVar1;
    ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_20);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


