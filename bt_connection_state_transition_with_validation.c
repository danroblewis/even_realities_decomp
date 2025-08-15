/*
 * Function: bt_connection_state_transition_with_validation
 * Entry:    00056908
 * Prototype: undefined bt_connection_state_transition_with_validation()
 */


int bt_connection_state_transition_with_validation
              (undefined4 param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_28;
  char *local_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = find_ble_connection_by_handle_in_range(&DAT_20006138,1,param_1);
  if (iVar1 != 0) {
    if ((param_2 & *(byte *)(iVar1 + 2)) != 0) {
      return iVar1;
    }
    local_24 = "incompatible handle %u";
    local_28 = 3;
    uStack_20 = param_1;
    bt_log_connection_error(&DAT_00088108,0x1880,&local_28);
    validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar1);
  }
  return 0;
}


