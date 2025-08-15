/*
 * Function: erase_audio_buffer
 * Entry:    0002f008
 * Prototype: undefined erase_audio_buffer()
 */


int erase_audio_buffer(void)

{
  int iVar1;
  
  iVar1 = FUN_00060dd0(&FLASH_DRIVER_INTERFACE,0x400000,0x10000);
  if (iVar1 == 0) {
    DAT_20002404 = 0x400000;
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): Flash erase ok \n\n","erase_audio_buffer");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): Flash erase failed! %d\n\n","erase_audio_buffer",iVar1);
    }
    else {
      handle_heartbeat();
    }
  }
  return iVar1;
}


