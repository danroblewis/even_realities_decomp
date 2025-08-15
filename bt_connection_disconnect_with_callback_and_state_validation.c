/*
 * Function: bt_connection_disconnect_with_callback_and_state_validation
 * Entry:    00057394
 * Prototype: undefined bt_connection_disconnect_with_callback_and_state_validation()
 */


void bt_connection_disconnect_with_callback_and_state_validation(void)

{
  BLUETOOTH_CONNECTION_DISCONNECT_BUFFER_2 = BLUETOOTH_CONNECTION_DISCONNECT_BUFFER_2 + '\x01';
  if (BLUETOOTH_CONNECTION_DISCONNECT_BUFFER_2 == '\0') {
    BLUETOOTH_CONNECTION_DISCONNECT_BUFFER_2 = '\x01';
  }
  return;
}


