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
    FUN_00072908(&DAT_200079e4);
    while (iVar1 = FUN_0002f758(), iVar1 != 0) {
      audioStreamFileManagerHandler();
    }
    while (iVar1 = FUN_00024678(), iVar1 != 0) {
      QuickNoteStoreHandler();
    }
    while (iVar1 = FUN_00023ef8(), iVar1 != 0) {
      SettingStoreHandler();
    }
  } while( true );
}


