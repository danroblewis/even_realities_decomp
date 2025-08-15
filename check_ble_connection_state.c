/*
 * Function: check_ble_connection_state
 * Entry:    0005cac0
 * Prototype: undefined check_ble_connection_state()
 */


undefined4 check_ble_connection_state(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x238);
  if ((undefined *)*puVar1 == &DAT_20006450) {
    *puVar1 = BT_CONNECTION_DISCONNECT_CALLBACK_VALIDATION;
  }
  return *puVar1;
}


