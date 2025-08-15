/*
 * Function: flash_ops_thread
 * Entry:    00023480
 * Prototype: undefined flash_ops_thread()
 */


void flash_ops_thread(void)

{
  int iVar1;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): flash op thread startup ...\n","flash_ops_thread");
    }
    else {
      handle_heartbeat();
    }
  }
  do {
    manage_ble_connection_state_comprehensive(&DAT_200079e4);
    while (iVar1 = get_sensor_data_buffer_address_alt(), iVar1 != 0) {
      audioStreamFileManagerHandler();
    }
    while (iVar1 = get_system_data_24_alt(), iVar1 != 0) {
      QuickNoteStoreHandler();
    }
    while (iVar1 = get_system_data_24(), iVar1 != 0) {
      SettingStoreHandler();
    }
  } while( true );
}


