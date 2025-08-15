/*
 * Function: gui_screen_clear
 * Entry:    000431c0
 * Prototype: undefined gui_screen_clear()
 */


undefined4 gui_screen_clear(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): exec screen clear command....\n","gui_screen_clear");
    }
    else {
      handle_heartbeat();
    }
  }
  iVar1 = jbd_get_manager();
  if (*(int *)(iVar1 + 0x35c) == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): c->init_done = 0,init failed, can\'t write data!\n","gui_screen_clear");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  else {
    FUN_0007d6f4(0);
    uVar2 = 0;
  }
  return uVar2;
}


