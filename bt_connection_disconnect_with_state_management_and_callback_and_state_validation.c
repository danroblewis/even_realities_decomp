/*
 * Function: bt_connection_disconnect_with_state_management_and_callback_and_state_validation
 * Entry:    00057438
 * Prototype: undefined bt_connection_disconnect_with_state_management_and_callback_and_state_validation()
 */


undefined4
bt_connection_disconnect_with_state_management_and_callback_and_state_validation(undefined4 param_1)

{
  undefined4 local_18;
  char *local_14;
  undefined4 uStack_10;
  
  local_14 = "No available L2CAP context for conn %p";
  local_18 = 3;
  uStack_10 = param_1;
  FUN_00081746(&DAT_00088160,0x1840,&local_18);
  return 0xfffffff4;
}


