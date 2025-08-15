/*
 * Function: navigation_overview_map_display
 * Entry:    0003e05c
 * Prototype: undefined navigation_overview_map_display()
 */


void navigation_overview_map_display(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  byte local_30 [12];
  
  if (DAT_20004bbd == '\0') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): reflash overview map && text\n","navigation_overview_map_display");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar2 = get_work_mode();
    iVar7 = 0x640;
    iVar2 = iVar2 + 0xb90;
    while( true ) {
      uVar9 = 0;
      do {
        iVar6 = 0;
        do {
          iVar10 = *(int *)(iVar2 + uVar9 * 4);
          bVar1 = *(byte *)(iVar10 + iVar6);
          if (bVar1 != 0) {
            *(byte *)(iVar10 + iVar6) =
                 bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)[iVar6 + (uVar9 % 0x1a) * 0xa00 + iVar7];
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x140);
        uVar9 = uVar9 + 1;
      } while (uVar9 != 199);
      iVar6 = get_work_mode();
      uVar8 = *(undefined4 *)(iVar6 + 0xeb4);
      iVar6 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar8,*(undefined4 *)(iVar6 + 0xeb8),0,0,0x280,199);
      if (iVar7 == 0x500) break;
      iVar7 = 0x500;
    }
    if ((OVERVIEW_MAP_ACTIVE == '\x01') && (DAT_2001ba2d == '\0')) {
      if (*(int *)(param_2 + 0xb1) == 0x1210) {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): Data is in raw format.\n","navigation_overview_map_display");
          }
          else {
            handle_heartbeat();
          }
        }
        fill_memory_buffer(&display_buffer,0,0x1210);
        resource_mutex_acquire(&WORK_MODE_CONTEXT,extraout_r1,0xffffffff,0xffffffff);
        memcpy(&display_buffer,&overview_map_buffer,0x1210);
      }
      else {
        if (2 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): Data is in rle compress raw format.\n",
                        "navigation_overview_map_display");
          }
          else {
            handle_heartbeat();
          }
        }
        fill_memory_buffer(&display_buffer,0,0x1210);
        resource_mutex_acquire(&WORK_MODE_CONTEXT,extraout_r1_01,0xffffffff,0xffffffff);
        FUN_0007da70(&overview_map_buffer,*(undefined4 *)(param_2 + 0xb1),&display_buffer);
      }
      DAT_2001ba2d = '\x01';
      mutex_unlock(&WORK_MODE_CONTEXT);
    }
    clear_work_mode_flag_bit_1();
    iVar7 = 1;
    do {
      _clean_fb_data(iVar2,0,0,0,0x280,199);
      iVar6 = get_ui_x_offset();
      uVar8 = get_ui_y_offset();
      iVar10 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_bitmps_merge_draw
                (iVar6 + 0x1b6,uVar8,iVar10 + 0x240,iVar3 + 0x88,&display_buffer,&DAT_2001c336,2,0xf
                );
      fill_memory_buffer(&DAT_2001b9ac,0,0x80);
      process_string_with_error_handling_and_validation
                (&DAT_2001b9ac,0x80,"%s %s",param_2 + 0xd,param_2 + 0x25);
      iVar6 = get_ui_x_offset();
      uVar8 = get_ui_y_offset();
      iVar10 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_utf_draw(0,&DAT_2001b9ac,0,iVar6 + 0xe8,uVar8,iVar10 + 0x1ae,iVar3 + 0x1b,1,0,0,0,0);
      uVar8 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar10 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0x7d,0,uVar8,iVar6 + 0x6c,iVar10 + 200,iVar3 + 0x87,1,0,0,0,0);
      uVar8 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      iVar10 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0x3d,0,uVar8,iVar6 + 0x1d,iVar10 + 0x1ae,iVar3 + 0x38,1,0,0,0,0);
      iVar6 = get_work_mode();
      iVar6 = *(byte *)(*(int *)(iVar6 + 0xfec) + 0x5e) - 1;
      if (iVar6 != 0) {
        iVar6 = 1;
      }
      uVar8 = get_work_mode_timestamp();
      uVar4 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      EVEN_DASHBOARD_CLOCK_32x_TTF(uVar8,uVar4,iVar10 + 2,iVar3 + 0x4c,iVar5 + 0x1d,3,iVar6);
      navigation_direction_img_display(*(undefined1 *)(param_2 + 1));
      uVar9 = 0;
      do {
        iVar6 = 0;
        do {
          local_30[0] = 1;
          local_30[1] = 3;
          local_30[2] = 5;
          local_30[3] = 7;
          local_30[4] = 7;
          local_30[5] = 7;
          local_30[6] = 7;
          local_30[7] = 7;
          iVar10 = *(int *)(iVar2 + uVar9 * 4);
          bVar1 = *(byte *)(iVar10 + iVar6);
          if (bVar1 != 0) {
            *(byte *)(iVar10 + iVar6) =
                 bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                         [iVar6 + (uint)local_30[iVar7] * 0x140 + (uVar9 % 0x1a) * 0xa00];
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x140);
        uVar9 = uVar9 + 1;
      } while (uVar9 != 199);
      iVar6 = get_work_mode();
      uVar8 = *(undefined4 *)(iVar6 + 0xeb4);
      iVar6 = get_work_mode();
      iVar7 = iVar7 + 1;
      _reflash_fb_data_to_lcd(uVar8,*(undefined4 *)(iVar6 + 0xeb8),0,0,0x280,199);
    } while (iVar7 != 4);
    set_work_mode_flag_bit_1();
    iVar7 = get_ui_x_offset();
    uVar8 = get_ui_y_offset();
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,&DAT_2001b9ac,0,iVar7 + 0xe8,uVar8,iVar2 + 0x1ae,iVar6 + 0x1b,1,0,0,0,0);
    uVar8 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,param_2 + 0x7d,0,uVar8,iVar7 + 0x6c,iVar2 + 200,iVar6 + 0x87,1,0,0,0,0);
    uVar8 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,param_2 + 0x3d,0,uVar8,iVar7 + 0x1d,iVar2 + 0x1ae,iVar6 + 0x38,1,0,0,0,0);
    iVar7 = get_work_mode();
    iVar7 = *(byte *)(*(int *)(iVar7 + 0xfec) + 0x5e) - 1;
    if (iVar7 != 0) {
      iVar7 = 1;
    }
    uVar8 = get_work_mode_timestamp();
    uVar4 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar10 = get_ui_y_offset();
    EVEN_DASHBOARD_CLOCK_32x_TTF(uVar8,uVar4,iVar2 + 2,iVar6 + 0x4c,iVar10 + 0x1d,3,iVar7);
  }
  if (OVERVIEW_MAP_READY != '\x01') goto LAB_0003e644;
  if (OVERVIEW_MAP_ACTIVE == '\x01') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): reflash overview map ....\n","navigation_overview_map_display");
      }
      else {
        handle_heartbeat();
      }
    }
    if (*(int *)(param_2 + 0xb1) == 0x1210) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): Data is in raw format.\n","navigation_overview_map_display");
        }
        else {
          handle_heartbeat();
        }
      }
      fill_memory_buffer(&display_buffer,0,0x1210);
      resource_mutex_acquire(&WORK_MODE_CONTEXT,extraout_r1_00,0xffffffff,0xffffffff);
      memcpy(&display_buffer,&overview_map_buffer,0x1210);
    }
    else {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): Data is in rle compress raw format.\n",
                      "navigation_overview_map_display");
        }
        else {
          handle_heartbeat();
        }
      }
      fill_memory_buffer(&display_buffer,0,0x1210);
      resource_mutex_acquire(&WORK_MODE_CONTEXT,extraout_r1_02,0xffffffff,0xffffffff);
      FUN_0007da70(&overview_map_buffer,*(undefined4 *)(param_2 + 0xb1),&display_buffer);
    }
    DAT_2001ba2d = '\x01';
    mutex_unlock(&WORK_MODE_CONTEXT);
LAB_0003e56c:
    iVar7 = get_ui_x_offset();
    uVar8 = get_ui_y_offset();
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_bitmps_merge_draw
              (iVar7 + 0x1b6,uVar8,iVar2 + 0x240,iVar6 + 0x88,&display_buffer,&DAT_2001c336,2,0xf);
  }
  else if (DAT_2001ba2d == '\x01') goto LAB_0003e56c;
  OVERVIEW_MAP_READY = '\0';
LAB_0003e644:
  if (NAVIGATION_ACTIVE == '\x01') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): reflash text info ....\n","navigation_overview_map_display");
      }
      else {
        handle_heartbeat();
      }
    }
    fill_memory_buffer(&DAT_2001b9ac,0,0x80);
    process_string_with_error_handling_and_validation
              (&DAT_2001b9ac,0x80,"%s %s",param_2 + 0xd,param_2 + 0x25);
    iVar7 = get_ui_x_offset();
    uVar8 = get_ui_y_offset();
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,&DAT_2001b9ac,0,iVar7 + 0xe8,uVar8,iVar2 + 0x1ae,iVar6 + 0x1b,1,0,0,0,0);
    uVar8 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,param_2 + 0x3d,0,uVar8,iVar7 + 0x1d,iVar2 + 0x1ae,iVar6 + 0x38,1,0,0,0,0);
    uVar8 = get_ui_x_offset();
    iVar7 = get_ui_y_offset();
    iVar2 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,param_2 + 0x7d,0,uVar8,iVar7 + 0x6c,iVar2 + 200,iVar6 + 0x87,1,0,0,0,0);
    iVar7 = get_work_mode();
    iVar7 = *(byte *)(*(int *)(iVar7 + 0xfec) + 0x5e) - 1;
    if (iVar7 != 0) {
      iVar7 = 1;
    }
    uVar8 = get_work_mode_timestamp();
    uVar4 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar6 = get_ui_x_offset();
    iVar10 = get_ui_y_offset();
    EVEN_DASHBOARD_CLOCK_32x_TTF(uVar8,uVar4,iVar2 + 2,iVar6 + 0x4c,iVar10 + 0x1d,3,iVar7);
    navigation_direction_img_display(*(undefined1 *)(param_2 + 1));
    NAVIGATION_ACTIVE = '\0';
  }
  DAT_20004bbc = 0;
  DAT_20004bbd = 1;
  DAT_20004bcd = 0;
  return;
}


