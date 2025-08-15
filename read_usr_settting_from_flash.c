/*
 * Function: read_usr_settting_from_flash
 * Entry:    00023400
 * Prototype: undefined read_usr_settting_from_flash()
 */


undefined4 read_usr_settting_from_flash(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [21];
  undefined1 local_1b;
  undefined2 local_1a;
  
  fill_memory_buffer(auStack_30,0,0x20);
  iVar1 = flash_settings_read(0x134000,auStack_30,0x20);
  if (iVar1 == 0) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): read usr settings success!\n","read_usr_settting_from_flash");
      }
      else {
        handle_heartbeat();
      }
    }
    *(undefined1 *)(param_1 + 0x15) = local_1b;
    *(undefined2 *)(param_1 + 0x16) = local_1a;
    uVar2 = 0;
  }
  else {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): usr_flash_settings_read error!\n","read_usr_settting_from_flash");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


