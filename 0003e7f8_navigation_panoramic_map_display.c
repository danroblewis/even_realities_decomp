/*
 * Function: navigation_panoramic_map_display
 * Entry:    0003e7f8
 * Prototype: undefined navigation_panoramic_map_display()
 */


void navigation_panoramic_map_display(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  byte local_30 [12];
  
  if (DAT_20004bbc == '\0') {
    if (2 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): reflash panoramic map to lcd\n","navigation_panoramic_map_display");
      }
      else {
        handle_heartbeat();
      }
    }
    iVar4 = get_work_mode();
    iVar12 = 0x640;
    iVar4 = iVar4 + 0xb90;
    while( true ) {
      uVar13 = 0;
      do {
        iVar8 = 0;
        do {
          iVar10 = *(int *)(iVar4 + uVar13 * 4);
          bVar1 = *(byte *)(iVar10 + iVar8);
          if (bVar1 != 0) {
            *(byte *)(iVar10 + iVar8) =
                 bVar1 & (&DAT_000aae20)[iVar8 + (uVar13 % 0x1a) * 0xa00 + iVar12];
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0x140);
        uVar13 = uVar13 + 1;
      } while (uVar13 != 199);
      iVar8 = get_work_mode();
      uVar11 = *(undefined4 *)(iVar8 + 0xeb4);
      iVar8 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar11,*(undefined4 *)(iVar8 + 0xeb8),0,0,0x280,199);
      if (iVar12 == 0x500) break;
      iVar12 = 0x500;
    }
    FUN_000432ec();
    iVar12 = 1;
    do {
      _clean_fb_data(iVar4,0,0,0,0x280,199);
      if (PANORAMIC_MAP_ACTIVE == '\x01') {
        iVar8 = get_ui_x_offset();
        uVar11 = get_ui_y_offset();
        iVar10 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bitmps_merge_draw
                  (iVar8 + 0x58,uVar11,iVar10 + 0x240,iVar5 + 0x88,&panoramic_map_buffer,
                   &DAT_20013dea,2,0xf);
        uVar2 = *(ushort *)(param_2 + 8);
        if ((uVar2 < 0x1e9) && (*(ushort *)(param_2 + 10) < 0x89)) {
          iVar8 = get_ui_x_offset();
          uVar3 = *(ushort *)(param_2 + 10);
          iVar10 = get_ui_y_offset();
          gui_4bit_bitmap_override(0x54,(uint)uVar2 + iVar8 + 0x52,(uVar3 - 6) + iVar10);
        }
        else if (0 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): APP send navigation offset overstep ,stop draw....\n",
                        "navigation_panoramic_map_display");
          }
          else {
            handle_heartbeat();
          }
        }
        uVar11 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        iVar10 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_utf_draw(0,param_2 + 0x95,0,uVar11,iVar8 + 0x37,iVar10 + 0x4c,iVar5 + 0x52,1,0,0,0,0);
        uVar11 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        iVar10 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_utf_draw(0,param_2 + 0xd,0,uVar11,iVar8 + 0x52,iVar10 + 0x4c,iVar5 + 0x6d,1,0,0,0,0);
        uVar11 = get_ui_x_offset();
        iVar8 = get_ui_y_offset();
        iVar10 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_utf_draw(0,param_2 + 0x25,0,uVar11,iVar8 + 0x6d,iVar10 + 0x4c,iVar5 + 0x88,1,0,0,0,0);
        DAT_2001ba2c = '\x01';
      }
      else {
        iVar8 = FUN_00023ee0();
        if (iVar8 == 6) {
          iVar8 = get_ui_x_offset();
          iVar10 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,"Sie sind von der Route abgekommen.",0,iVar8 + 0x7a,iVar10 + 0x37,
                       iVar5 + 0x23a,iVar7 + 0x52,1,0,0,0,0);
          iVar8 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar10 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar10 = iVar10 + 0x23a;
          pcVar9 = "Neuberechnung...";
          iVar8 = iVar8 + 0xd1;
        }
        else {
          iVar8 = get_ui_x_offset();
          iVar10 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,"You have gone off route.",0,iVar8 + 0xb0,iVar10 + 0x37,iVar5 + 0x226,
                       iVar7 + 0x52,1,0,0,0,0);
          iVar8 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar10 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar10 = iVar10 + 0x226;
          pcVar9 = "Recalculating...";
          iVar8 = iVar8 + 0xda;
        }
        gui_utf_draw(0,pcVar9,0,iVar8,iVar5 + 0x52,iVar10,iVar7 + 0x6d,1,0,0,0,0);
        DAT_2001ba2c = '\0';
      }
      iVar8 = get_work_mode();
      iVar8 = *(byte *)(*(int *)(iVar8 + 0xfec) + 0x5e) - 1;
      if (iVar8 != 0) {
        iVar8 = 1;
      }
      uVar11 = FUN_0007d224();
      uVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      EVEN_DASHBOARD_CLOCK_32x_TTF(uVar11,uVar6,iVar10 + 2,iVar5 + 0x4c,iVar7 + 0x1d,3,iVar8);
      uVar13 = 0;
      do {
        iVar8 = 0;
        do {
          local_30[0] = 1;
          local_30[1] = 3;
          local_30[2] = 5;
          local_30[3] = 7;
          local_30[4] = 7;
          local_30[5] = 7;
          local_30[6] = 7;
          local_30[7] = 7;
          iVar10 = *(int *)(iVar4 + uVar13 * 4);
          bVar1 = *(byte *)(iVar10 + iVar8);
          if (bVar1 != 0) {
            *(byte *)(iVar10 + iVar8) =
                 bVar1 & (&DAT_000aae20)
                         [iVar8 + (uint)local_30[iVar12] * 0x140 + (uVar13 % 0x1a) * 0xa00];
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0x140);
        uVar13 = uVar13 + 1;
      } while (uVar13 != 199);
      iVar8 = get_work_mode();
      uVar11 = *(undefined4 *)(iVar8 + 0xeb4);
      iVar8 = get_work_mode();
      iVar12 = iVar12 + 1;
      _reflash_fb_data_to_lcd(uVar11,*(undefined4 *)(iVar8 + 0xeb8),0,0,0x280,199);
    } while (iVar12 != 4);
    FUN_000432d0();
    if (PANORAMIC_MAP_ACTIVE == '\x01') {
      uVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0x95,0,uVar11,iVar12 + 0x37,iVar4 + 0x4c,iVar8 + 0x52,1,0,0,0,0);
      uVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0xd,0,uVar11,iVar12 + 0x52,iVar4 + 0x4c,iVar8 + 0x6d,1,0,0,0,0);
      uVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0x25,0,uVar11,iVar12 + 0x6d,iVar4 + 0x4c,iVar8 + 0x88,1,0,0,0,0);
    }
    iVar12 = get_work_mode();
    iVar12 = *(byte *)(*(int *)(iVar12 + 0xfec) + 0x5e) - 1;
    if (iVar12 != 0) {
      iVar12 = 1;
    }
    uVar11 = FUN_0007d224();
    uVar6 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    iVar8 = get_ui_x_offset();
    iVar10 = get_ui_y_offset();
    EVEN_DASHBOARD_CLOCK_32x_TTF(uVar11,uVar6,iVar4 + 2,iVar8 + 0x4c,iVar10 + 0x1d,3,iVar12);
  }
  if (PANORAMIC_MAP_READY == '\x01') {
    PANORAMIC_MAP_READY = '\0';
    if (PANORAMIC_MAP_ACTIVE == '\x01') {
      iVar12 = get_ui_x_offset();
      uVar11 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_bitmps_merge_draw
                (iVar12 + 0x58,uVar11,iVar4 + 0x240,iVar8 + 0x88,&panoramic_map_buffer,&DAT_20013dea
                 ,2,0xf);
      uVar2 = *(ushort *)(param_2 + 8);
      if ((uVar2 < 0x1e9) && (*(ushort *)(param_2 + 10) < 0x89)) {
        iVar12 = get_ui_x_offset();
        uVar3 = *(ushort *)(param_2 + 10);
        iVar4 = get_ui_y_offset();
        gui_4bit_bitmap_override(0x54,(uint)uVar2 + iVar12 + 0x52,(uVar3 - 6) + iVar4);
      }
      else if (0 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): APP send navigation offset overstep ,stop draw....\n",
                      "navigation_panoramic_map_display");
        }
        else {
          handle_heartbeat();
        }
      }
      if (DAT_2001ba2c != '\0') goto LAB_0003ed90;
      uVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0x95,0,uVar11,iVar12 + 0x37,iVar4 + 0x4c,iVar8 + 0x52,1,0,0,0,0);
      uVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0xd,0,uVar11,iVar12 + 0x52,iVar4 + 0x4c,iVar8 + 0x6d,1,0,0,0,0);
      iVar12 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      iVar8 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      iVar8 = iVar8 + 0x4c;
      iVar10 = iVar10 + 0x88;
      iVar4 = iVar4 + 0x6d;
      pcVar9 = (char *)(param_2 + 0x25);
    }
    else {
      iVar12 = get_work_mode();
      iVar4 = get_ui_x_offset();
      uVar11 = get_ui_y_offset();
      iVar8 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      _clean_fb_data(iVar12 + 0xb90,0,iVar4 + 0x58,uVar11,iVar8 + 0x240,iVar10 + 0x88);
      iVar12 = get_work_mode();
      uVar6 = *(undefined4 *)(iVar12 + 0xeb4);
      iVar12 = get_work_mode();
      uVar14 = *(undefined4 *)(iVar12 + 0xeb8);
      iVar12 = get_ui_x_offset();
      uVar11 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      _reflash_fb_data_to_lcd(uVar6,uVar14,iVar12 + 0x58,uVar11,iVar4 + 0x240,iVar8 + 0x88);
      iVar12 = FUN_00023ee0();
      if (iVar12 == 6) {
        iVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        iVar8 = get_ui_x_offset();
        iVar10 = get_ui_y_offset();
        gui_utf_draw(0,"Sie sind von der Route abgekommen.",0,iVar12 + 0x7a,iVar4 + 0x37,
                     iVar8 + 0x23a,iVar10 + 0x52,1,0,0,0,0);
        iVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        iVar8 = get_ui_x_offset();
        iVar10 = get_ui_y_offset();
        iVar4 = iVar4 + 0x52;
        iVar8 = iVar8 + 0x23a;
        iVar10 = iVar10 + 0x6d;
        pcVar9 = "Neuberechnung...";
        iVar12 = iVar12 + 0xd1;
      }
      else {
        iVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        iVar8 = get_ui_x_offset();
        iVar10 = get_ui_y_offset();
        gui_utf_draw(0,"You have gone off route.",0,iVar12 + 0xb0,iVar4 + 0x37,iVar8 + 0x226,
                     iVar10 + 0x52,1,0,0,0,0);
        iVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        iVar8 = get_ui_x_offset();
        iVar10 = get_ui_y_offset();
        iVar4 = iVar4 + 0x52;
        iVar8 = iVar8 + 0x226;
        iVar10 = iVar10 + 0x6d;
        pcVar9 = "Recalculating...";
        iVar12 = iVar12 + 0xda;
      }
    }
    gui_utf_draw(0,pcVar9,0,iVar12,iVar4,iVar8,iVar10,1,0,0,0,0);
  }
LAB_0003ed90:
  if (NAVIGATION_ACTIVE == '\x01') {
    NAVIGATION_ACTIVE = '\0';
    if (PANORAMIC_MAP_ACTIVE == '\x01') {
      uVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0x95,0,uVar11,iVar12 + 0x37,iVar4 + 0x4c,iVar8 + 0x52,1,0,0,0,0);
      uVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0xd,0,uVar11,iVar12 + 0x52,iVar4 + 0x4c,iVar8 + 0x6d,1,0,0,0,0);
      uVar11 = get_ui_x_offset();
      iVar12 = get_ui_y_offset();
      iVar4 = get_ui_x_offset();
      iVar8 = get_ui_y_offset();
      gui_utf_draw(0,param_2 + 0x25,0,uVar11,iVar12 + 0x6d,iVar4 + 0x4c,iVar8 + 0x88,1,0,0,0,0);
    }
    iVar12 = get_work_mode();
    iVar12 = *(byte *)(*(int *)(iVar12 + 0xfec) + 0x5e) - 1;
    if (iVar12 != 0) {
      iVar12 = 1;
    }
    uVar11 = FUN_0007d224();
    uVar6 = get_ui_x_offset();
    iVar4 = get_ui_y_offset();
    iVar8 = get_ui_x_offset();
    iVar10 = get_ui_y_offset();
    EVEN_DASHBOARD_CLOCK_32x_TTF(uVar11,uVar6,iVar4 + 2,iVar8 + 0x4c,iVar10 + 0x1d,3,iVar12);
  }
  if (OVERVIEW_MAP_READY == '\x01') {
    OVERVIEW_MAP_READY = '\0';
    if (*(int *)(param_2 + 0xb1) == 0x1210) {
      if (2 < LOG_LEVEL) {
        if (IS_DEBUG == 0) {
          DEBUG_PRINT("%s(): Data is in raw format.\n","navigation_panoramic_map_display");
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
                      "navigation_panoramic_map_display");
        }
        else {
          handle_heartbeat();
        }
      }
      fill_memory_buffer(&display_buffer,0,0x1210);
      resource_mutex_acquire(&WORK_MODE_CONTEXT,extraout_r1_00,0xffffffff,0xffffffff);
      FUN_0007da70(&overview_map_buffer,*(undefined4 *)(param_2 + 0xb1),&display_buffer);
    }
    DAT_2001ba2d = 1;
    mutex_unlock(&WORK_MODE_CONTEXT);
  }
  DAT_20004bbc = 1;
  DAT_20004bbd = 0;
  DAT_20004bcd = 0;
  return;
}


