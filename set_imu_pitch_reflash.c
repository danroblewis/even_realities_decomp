/*
 * Function: set_imu_pitch_reflash
 * Entry:    000469bc
 * Prototype: undefined set_imu_pitch_reflash()
 */


undefined4 set_imu_pitch_reflash(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = get_work_mode();
  if (*(byte *)(iVar1 + 0xf0) < 2) {
    if (IMU_PITCH_REFLASH_BUFFER != *(byte *)(iVar1 + 0xf0)) {
      gui_screen_clear();
      IMU_PITCH_REFLASH_BUFFER = *(byte *)(iVar1 + 0xf0);
    }
    if (*(char *)(iVar1 + 0xf0) == '\x01') {
      iVar1 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x7c,iVar1 + 0x52,iVar3 + 0x65,0,0,0);
      iVar1 = get_system_byte_1_alt();
      if (iVar1 == 6) {
        iVar1 = 0xb6;
      }
      else {
        iVar1 = 0xba;
      }
      uVar2 = get_data_by_index_and_type(4);
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,uVar2,0,iVar1 + iVar3,iVar4 + 0x3c,iVar5 + 0x240,iVar6 + 0x57,1,0,0,0,0);
      iVar1 = get_system_byte_1_alt();
      if (iVar1 == 6) {
        iVar1 = 0x78;
      }
      else {
        iVar1 = 0x9e;
      }
      uVar2 = 5;
    }
    else {
      iVar1 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x7c,iVar1 + 0x52,iVar3 + 0x65,0,0,0);
      iVar1 = get_system_byte_1_alt();
      if (iVar1 == 6) {
        iVar1 = 0xd0;
      }
      else {
        iVar1 = 0xc0;
      }
      uVar2 = get_data_by_index_and_type(2);
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,uVar2,0,iVar1 + iVar3,iVar4 + 0x3c,iVar5 + 0x240,iVar6 + 0x57,1,0,0,0,0);
      iVar1 = get_system_byte_1_alt();
      if (iVar1 == 6) {
        iVar1 = 0x22;
      }
      else {
        iVar1 = 0x6e;
      }
      uVar2 = 3;
    }
    uVar2 = get_data_by_index_and_type(uVar2);
    iVar3 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    iVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,uVar2,0,iVar1 + iVar3,iVar4 + 0x71,iVar5 + 0x240,iVar6 + 0x8c,1,0,0,0,0);
    uVar2 = 0;
  }
  else {
    if (0 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): set_imu_pitch:horiz_step over E_IMU_PITCH_STEP_MAX\n",
                    "set_imu_pitch_reflash");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


