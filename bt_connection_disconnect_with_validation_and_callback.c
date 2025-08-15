/*
 * Function: bt_connection_disconnect_with_validation_and_callback
 * Entry:    00056e74
 * Prototype: undefined bt_connection_disconnect_with_validation_and_callback()
 */


int bt_connection_disconnect_with_validation_and_callback(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = validate_and_process_ble_characteristics_with_validation_and_callback_execution
                    (&DAT_20006138);
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 2) == '\x01') &&
       (iVar2 = FUN_000814e6(iVar1,param_1,param_2), iVar2 != 0)) {
      return iVar1;
    }
    validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar1);
  }
  return 0;
}


