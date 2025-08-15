/*
 * Function: bt_connection_disconnect_with_callback_and_state_validation
 * Entry:    00057394
 * Prototype: undefined bt_connection_disconnect_with_callback_and_state_validation()
 */


void bt_connection_disconnect_with_callback_and_state_validation(void)

{
  DAT_2001d531 = DAT_2001d531 + '\x01';
  if (DAT_2001d531 == '\0') {
    DAT_2001d531 = '\x01';
  }
  return;
}


