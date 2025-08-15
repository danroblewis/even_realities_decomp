/*
 * Function: ui_raster_height_task
 * Entry:    000430c0
 * Prototype: undefined __stdcall ui_raster_height_task(undefined4 framebuffer_ptr, undefined4 _screen_id, undefined4 operation_mode)
 */


undefined4
ui_raster_height_task(undefined4 framebuffer_ptr,undefined4 _screen_id,int operation_mode)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  local_20 = -1;
  local_1c = -1;
  if (operation_mode == 2) {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): ui_raster_height_task exit...\n","ui_raster_height_task");
      }
      else {
        handle_heartbeat();
      }
    }
    manage_dashboard_ui_operations(framebuffer_ptr,_screen_id,2);
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
      manage_dashboard_ui_operations(framebuffer_ptr,_screen_id,1);
      iVar3 = get_work_mode();
      *(undefined4 *)(iVar3 + 0x104c) = 0x26;
      iVar3 = get_work_mode();
      z_spin_lock_valid(iVar3 + 0x80);
    }
  }
  return 0;
}


