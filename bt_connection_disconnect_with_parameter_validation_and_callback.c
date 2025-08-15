/*
 * Function: bt_connection_disconnect_with_parameter_validation_and_callback
 * Entry:    00057330
 * Prototype: undefined bt_connection_disconnect_with_parameter_validation_and_callback()
 */


undefined4 bt_connection_disconnect_with_parameter_validation_and_callback(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffea;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1 = param_1 + 0xc;
  iVar1 = param_1;
  if (BT_CONNECTION_DISCONNECT_PARAMETERS != (int *)0x0) {
    *BT_CONNECTION_DISCONNECT_PARAMETERS = param_1;
    iVar1 = BLE_CONNECTION_STATE_BUFFER;
  }
  BLE_CONNECTION_STATE_BUFFER = iVar1;
  BT_CONNECTION_DISCONNECT_PARAMETERS = (int *)param_1;
  return 0;
}


