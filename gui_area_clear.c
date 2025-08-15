/*
 * Function: gui_area_clear
 * Entry:    00043228
 * Prototype: undefined gui_area_clear()
 */


undefined4
gui_area_clear(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (2 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): exec area clear command....\n","gui_area_clear",param_3,0,param_1,param_2);
    }
    else {
      handle_heartbeat();
    }
  }
  iVar1 = jbd_get_manager();
  if (*(int *)(iVar1 + 0x35c) == 0) {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): c->init_done = 0,init failed, can\'t write data!\n","gui_area_clear");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = get_work_mode();
    _clean_fb_data(iVar1 + 0xb90,0,param_1,param_2,param_3,param_4);
    iVar1 = get_work_mode();
    uVar2 = *(undefined4 *)(iVar1 + 0xeb4);
    iVar1 = get_work_mode();
    _reflash_fb_data_to_lcd(uVar2,*(undefined4 *)(iVar1 + 0xeb8),param_1,param_2,param_3,param_4);
    uVar2 = 0;
  }
  return uVar2;
}


