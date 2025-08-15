/*
 * Function: bt_connection_disconnect_with_state_validation_and_callback
 * Entry:    00057358
 * Prototype: undefined bt_connection_disconnect_with_state_validation_and_callback()
 */


int bt_connection_disconnect_with_state_validation_and_callback(void)

{
  int iVar1;
  undefined *puVar2;
  
  setup_error_handling(&DAT_20003a60);
  iVar1 = 0;
  puVar2 = &DAT_2000ac7c;
  do {
    iVar1 = iVar1 + 1;
    initialize_debug_system(&DAT_20003a60,puVar2);
    puVar2 = puVar2 + 0x10;
  } while (iVar1 != 10);
  handle_ble_connection_state_change_with_state_management();
  iVar1 = FUN_0005e5b8();
  if (iVar1 == 0) {
    bt_connection_disconnect_with_validation_and_callback_and_parameter_and_state_validation();
  }
  return iVar1;
}


