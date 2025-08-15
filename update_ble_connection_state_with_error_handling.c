/*
 * Function: update_ble_connection_state_with_error_handling
 * Entry:    0005cb38
 * Prototype: undefined update_ble_connection_state_with_error_handling()
 */


void update_ble_connection_state_with_error_handling
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_18;
  char *local_14;
  
  uVar1 = FUN_00081820(*(undefined4 *)(param_1 + 0xf0),6,param_2,param_3,0);
  if ((int)uVar1 != 0) {
    if ((int)uVar1 == -0x69) {
      local_14 = "Ran out of TX buffers or contexts.";
      local_18 = 2;
      FUN_00083074(&DAT_00088180,0x1040,&local_18);
    }
    decrement_reference_count_and_cleanup_memory(param_2);
    return;
  }
  FUN_0007350c(param_1 + 0x208,(int)((ulonglong)uVar1 >> 0x20),0xf0000,0);
  return;
}


