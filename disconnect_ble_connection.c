/*
 * Function: disconnect_ble_connection
 * Entry:    0008142c
 * Prototype: undefined disconnect_ble_connection()
 */


void disconnect_ble_connection(int param_1)

{
  if (*(byte *)(param_1 + 0xd) - 7 < 2) {
    bt_connection_state_transition(param_1,1);
  }
  bt_connection_state_transition(param_1,0);
  return;
}


