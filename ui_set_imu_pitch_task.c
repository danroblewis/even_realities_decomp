/*
 * Function: ui_set_imu_pitch_task
 * Entry:    00046b80
 * Prototype: undefined ui_set_imu_pitch_task()
 */


undefined4 ui_set_imu_pitch_task(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  byte local_30 [12];
  
  get_work_mode();
  set_work_mode_parameter(param_1 + 0x24);
  set_work_mode_flag_bit_1();
  if ((char)IMU_PITCH_TASK_DATA == '\0') {
    if (param_3 == 1) {
      cVar2 = IMU_PITCH_TASK_DATA._1_1_;
      if (IMU_PITCH_TASK_DATA._1_1_ != '\0') {
        return 0;
      }
      configure_advanced_utf_drawing();
      gui_screen_clear();
      reset_animation_counters();
      IMU_PITCH_REFLASH_BUFFER = cVar2;
      IMU_PITCH_TASK_DATA._0_1_ = cVar2;
      IMU_PITCH_TASK_DATA._1_1_ = 1;
      reset_animation_counters();
      IMU_PITCH_TASK_DATA = CONCAT11(IMU_PITCH_TASK_DATA._1_1_,1);
      clear_work_mode_flag_bit_1();
      iVar6 = 0;
      do {
        set_imu_pitch_reflash();
        uVar7 = 0;
        do {
          iVar5 = 0;
          do {
            iVar9 = *(int *)(param_1 + 0x24 + uVar7 * 4);
            puVar3 = (undefined *)0x7070605;
            bVar1 = *(byte *)(iVar9 + iVar5);
            local_30[0] = 1;
            local_30[1] = 2;
            local_30[2] = 3;
            local_30[3] = 4;
            local_30[4] = 5;
            local_30[5] = 6;
            local_30[6] = 7;
            local_30[7] = 7;
            pbVar4 = local_30 + 8;
            if (bVar1 != 0) {
              puVar3 = &DASHBOARD_PIXEL_MASK_TABLE;
              pbVar4 = (byte *)(uint)(byte)(&DASHBOARD_PIXEL_MASK_TABLE)
                                           [iVar5 + (uint)local_30[iVar6] * 0x140 +
                                                    (uVar7 % 0x1a) * 0xa00];
              *(byte *)(iVar9 + iVar5) =
                   bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                           [iVar5 + (uint)local_30[iVar6] * 0x140 + (uVar7 % 0x1a) * 0xa00];
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0x140);
          uVar7 = uVar7 + 1;
        } while (uVar7 != 199);
        iVar5 = get_work_mode(0x4030201,puVar3,pbVar4);
        uVar8 = *(undefined4 *)(iVar5 + 0xeb4);
        iVar5 = get_work_mode();
        iVar6 = iVar6 + 1;
        _reflash_fb_data_to_lcd(uVar8,*(undefined4 *)(iVar5 + 0xeb8),0,0,0x280,199);
      } while (iVar6 != 8);
      set_work_mode_flag_bit_1();
      return 0;
    }
    if (param_3 != 2) {
      return 0;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): set_imu_pitch process received exit packet ...\n","ui_set_imu_pitch_task"
                   );
      }
      else {
        handle_heartbeat();
      }
    }
    gui_screen_clear();
  }
  else {
    if ((char)IMU_PITCH_TASK_DATA != '\x01') {
      return 0;
    }
    if (param_3 == 1) {
      set_imu_pitch_reflash();
      return 0;
    }
    if (param_3 != 2) {
      return 0;
    }
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): set_imu_pitch process received exit packet ...\n","ui_set_imu_pitch_task"
                   );
      }
      else {
        handle_heartbeat();
      }
    }
    animate_framebuffer_with_pattern();
  }
  configure_advanced_utf_drawing();
  IMU_PITCH_REFLASH_BUFFER = 0;
  IMU_PITCH_TASK_DATA = 0;
  return 0;
}


