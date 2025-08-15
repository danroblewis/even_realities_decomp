/*
 * Function: bt_connection_state_transition_with_callback
 * Entry:    00056960
 * Prototype: undefined bt_connection_state_transition_with_callback()
 */


void bt_connection_state_transition_with_callback(byte param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = validate_and_process_ble_characteristics_with_validation_and_callback_execution
                    (&DAT_20006138);
  if (iVar1 != 0) {
    if ((param_1 & *(byte *)(iVar1 + 2)) != 0) {
      (*param_2)(iVar1,param_3);
    }
    validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar1);
    return;
  }
  return;
}


