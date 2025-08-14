/*
 * Function: ui_raster_height_task
 * Entry:    000430c0
 * Prototype: undefined ui_raster_height_task()
 */


undefined4 ui_raster_height_task(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  local_20 = -1;
  local_1c = -1;
  if (param_3 == 2) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ui_raster_height_task exit...\n","ui_raster_height_task");
      }
      else {
        handle_heartbeat();
      }
    }
    FUN_0003af78(param_1,param_2,2);
    DAT_20002540 = -1;
    DAT_2000253c = -1;
  }
  else {
    cal_panel_canvas_coord(&local_20,&local_1c);
    iVar3 = local_20;
    if ((local_20 != DAT_20002540) || (local_1c != DAT_2000253c)) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): ui_raster_height_task reflash...\n","ui_raster_height_task");
        }
        else {
          handle_heartbeat();
        }
      }
      gui_screen_clear();
      iVar1 = local_1c;
      DAT_20002540 = iVar3;
      DAT_2000253c = local_1c;
      iVar2 = get_work_mode();
      *(int *)(iVar2 + 0xec4) = iVar3;
      iVar3 = get_work_mode();
      *(int *)(iVar3 + 0xeb8) = iVar1;
      FUN_0003af78(param_1,param_2,1);
      iVar3 = get_work_mode();
      *(undefined4 *)(iVar3 + 0x104c) = 0x26;
      iVar3 = get_work_mode();
      z_spin_lock_valid(iVar3 + 0x80);
    }
  }
  return 0;
}


