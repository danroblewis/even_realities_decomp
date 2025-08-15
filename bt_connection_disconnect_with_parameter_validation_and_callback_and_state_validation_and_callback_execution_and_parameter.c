/*
 * Function: bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
 * Entry:    0005858c
 * Prototype: undefined bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter()
 */


undefined4
bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution_and_parameter
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xd) == '\a') {
    iVar1 = find_ble_connection_by_handle(param_1,4,param_3,7,param_1,param_2,param_3,param_4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x118) << 0x1d < 0)) {
      return *(undefined4 *)(iVar1 + -8);
    }
    uVar2 = 0x1040;
  }
  else {
    uVar2 = 0x1080;
  }
  process_and_compress_data_wrapper(&DAT_00088100,uVar2,&stack0xfffffff0);
  return 0;
}


