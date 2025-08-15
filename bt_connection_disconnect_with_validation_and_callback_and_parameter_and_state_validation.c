/*
 * Function: bt_connection_disconnect_with_validation_and_callback_and_parameter_and_state_validation
 * Entry:    000579d0
 * Prototype: undefined bt_connection_disconnect_with_validation_and_callback_and_parameter_and_state_validation()
 */


void bt_connection_disconnect_with_validation_and_callback_and_parameter_and_state_validation(void)

{
  undefined *puVar1;
  int iVar2;
  
  setup_error_handling(&DAT_20003a44);
  iVar2 = 0;
  puVar1 = &DAT_2000ad34;
  do {
    fill_memory_buffer(puVar1,0,0x10);
    iVar2 = iVar2 + 1;
    initialize_debug_system(&DAT_20003a44,puVar1);
    puVar1 = puVar1 + 0x10;
  } while (iVar2 != 10);
  return;
}


