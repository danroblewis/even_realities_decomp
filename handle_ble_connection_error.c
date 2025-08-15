/*
 * Function: handle_ble_connection_error
 * Entry:    0005e3e0
 * Prototype: undefined handle_ble_connection_error()
 */


void handle_ble_connection_error(int param_1)

{
  undefined4 local_10;
  char *local_c;
  
  local_c = "SMP Timeout";
  local_10 = 2;
  FUN_00083074(&DAT_00088180,0x1040,&local_10);
  handle_ble_connection_state_change(param_1 + -0x208,8);
  FUN_00083090(param_1 + -0x204,4);
  return;
}


