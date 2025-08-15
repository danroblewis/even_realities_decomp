/*
 * Function: render_work_mode_ui_based_on_state
 * Entry:    00040794
 * Prototype: undefined render_work_mode_ui_based_on_state()
 */


void render_work_mode_ui_based_on_state(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined4 uVar13;
  byte local_30 [12];
  
  iVar2 = get_work_mode();
  if (DAT_2001cdd3 == '\0') {
    return;
  }
  DAT_2001cdd3 = 0;
  gui_screen_clear();
  iVar3 = get_work_mode();
  if ((((((*(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\0') &&
         (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\n')) &&
        (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\v')) &&
       ((iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x05' &&
        (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x06')))) &&
      ((iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x13' &&
       ((iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x14' &&
        (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x15')))))) &&
     ((iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x0e' &&
      ((((iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x0f' &&
         (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x10')) &&
        (iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x11')) &&
       ((iVar3 = get_work_mode(), *(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x03' ||
        (DAT_2001cdce != 2)))))))) {
    iVar3 = get_work_mode();
    iVar10 = *(int *)(iVar3 + 0x1014);
    uVar4 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,iVar10 + 0x1b,3,uVar4,iVar3 + 0x37,iVar5 + 0x28,iVar6 + 0x52,4,0,0,0,0);
  }
  iVar3 = get_work_mode();
  switch(*(undefined1 *)(*(int *)(iVar3 + 0x1014) + 2)) {
  case 0:
    clear_work_mode_flag_bit_1();
    DAT_20009ff4 = 0;
    while (DAT_20009ff4 < 8) {
      uVar4 = get_ui_x_offset();
      uVar9 = 0;
      iVar3 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x16,uVar4,iVar3 + 0x38,0,0,0);
      uVar4 = get_data_by_index_and_type((&DAT_200034f3)[DAT_2001cdce],1);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,iVar3 + 0x40,iVar5 + 0x37,iVar6 + 0x240,iVar10 + 0x88,4,0,0,0,0);
      do {
        iVar3 = 0;
        do {
          iVar5 = *(int *)(iVar2 + 0xb90 + uVar9 * 4);
          local_30[0] = 1;
          local_30[1] = 3;
          local_30[2] = 5;
          local_30[3] = 7;
          local_30[4] = 7;
          local_30[5] = 7;
          local_30[6] = 7;
          local_30[7] = 7;
          bVar1 = *(byte *)(iVar5 + iVar3);
          if (bVar1 != 0) {
            *(byte *)(iVar5 + iVar3) =
                 bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                         [iVar3 + (uint)local_30[DAT_20009ff4] * 0x140 + (uVar9 % 0x1a) * 0xa00];
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x140);
        uVar9 = uVar9 + 1;
      } while (uVar9 != 199);
      DAT_20009ff4 = DAT_20009ff4 + 1;
      iVar3 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar3 + 0xeb4);
      iVar3 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar4,*(undefined4 *)(iVar3 + 0xeb8),0,0,0x280,199);
    }
    goto LAB_00040928;
  case 1:
    uVar4 = FUN_0007d4b2(6);
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar5 = iVar5 + 0x88;
    iVar3 = iVar3 + 0x240;
    iVar2 = iVar2 + 0x37;
    iVar6 = iVar6 + 0x8c;
    break;
  case 2:
    uVar4 = FUN_0007d4b2(0x20);
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar5 = iVar5 + 0x88;
    iVar3 = iVar3 + 0x240;
    iVar2 = iVar2 + 0x37;
    iVar6 = iVar6 + 0x80;
    break;
  case 3:
  case 5:
  case 0x14:
  case 0x15:
    if (DAT_2001cdce == 1) {
      iVar2 = get_work_mode();
      if (*(char *)(*(int *)(iVar2 + 0x1014) + 2) != '\x03') {
        iVar2 = get_work_mode();
        if (*(char *)(*(int *)(iVar2 + 0x1014) + 2) != '\x15') goto switchD_000408e4_caseD_a;
        DAT_2001cdd0 = 0;
        iVar2 = get_work_mode();
        if ((*(byte *)(*(int *)(iVar2 + 0x1014) + 0x1f) & 3) != 1) goto switchD_000408e4_caseD_a;
        send_event_status(0x14);
        iVar2 = get_work_mode();
        *(byte *)(*(int *)(iVar2 + 0x1014) + 0x1f) = *(byte *)(*(int *)(iVar2 + 0x1014) + 0x1f) | 2;
        iVar2 = get_work_mode();
        uVar8 = 0x17;
        iVar2 = *(int *)(iVar2 + 0x1014);
LAB_00040c1c:
        *(undefined1 *)(iVar2 + 2) = uVar8;
        goto switchD_000408e4_caseD_a;
      }
      DAT_2001cdd0 = 0;
      uVar4 = FUN_0007d4b2(8);
      iVar6 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar5 = iVar5 + 0x88;
      uVar13 = 4;
      iVar6 = iVar6 + 0x8c;
      goto LAB_00040bc6;
    }
    if (DAT_2001cdce != 2) goto switchD_000408e4_caseD_a;
    iVar3 = get_work_mode();
    if ((*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x15') &&
       (iVar3 = get_work_mode(),
       -1 < (int)((uint)*(byte *)(*(int *)(iVar3 + 0x1014) + 0x1f) << 0x1f))) {
      send_event_status(0x13);
      iVar3 = get_work_mode();
      *(byte *)(*(int *)(iVar3 + 0x1014) + 0x1f) = *(byte *)(*(int *)(iVar3 + 0x1014) + 0x1f) | 1;
    }
    if (DAT_2001cdd1 != '\0') {
LAB_00040c64:
      DAT_2001cdd2 = 0;
      goto switchD_000408e4_caseD_a;
    }
    iVar3 = get_work_mode();
    if ((*(char *)(*(int *)(iVar3 + 0x1014) + 2) != '\x15') || (DAT_20004c00 == '\x01')) {
      clear_work_mode_flag_bit_1();
    }
    DAT_20009ff4 = 0;
    while (DAT_20009ff4 < 8) {
      uVar4 = FUN_0007d4b2(0x14);
      uVar13 = get_ui_x_offset();
      uVar7 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,3,uVar13,uVar7,iVar3 + 0x76,iVar5 + 0x1b,1,0,0,0,0);
      uVar4 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,"12:47",1,uVar4,iVar3 + 0x1b,iVar5 + 0x68,iVar6 + 0x42,1,0,0,0,0);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x29,iVar3 + 0xa6,iVar5 + 4,0,0,0);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,&DAT_000aa60e,3,iVar3 + 0xc2,iVar5 + 3,iVar6 + 0xea,iVar10 + 0x1e,1,0,0,0,0);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,"*",3,iVar3 + 0xde,iVar5 + 3,iVar6 + 0xec,iVar10 + 0x1e,1,0,0,0,0);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x3c,iVar3 + 0xa6,iVar5 + 0x23,0,0,0);
      iVar3 = get_work_mode();
      if (*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x05') {
        pcVar11 = "1";
      }
      else {
        iVar3 = get_work_mode();
        if (*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x03') {
          pcVar11 = "3";
        }
        else {
          pcVar11 = "0";
        }
      }
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,pcVar11,3,iVar3 + 0xc2,iVar5 + 0x23,iVar6 + 0xd6,iVar10 + 0x3e,1,0,0,0,0);
      uVar4 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x39,uVar4,iVar3 + 0x51,0,0,0);
      uVar4 = FUN_0007d4b2(0x16);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,iVar3 + 0x1c,iVar5 + 0x51,iVar6 + 0xf2,iVar10 + 0x6c,1,0,0,0,0);
      uVar4 = FUN_0007d4b2(0x15);
      uVar13 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,uVar13,iVar3 + 0x6d,iVar5 + 0xf2,iVar6 + 0x88,1,0,0,0,0);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x3b,iVar3 + 0x108,iVar5 + 1,0,0,0);
      uVar4 = FUN_0007d4b2(0x17);
      iVar3 = get_ui_x_offset();
      uVar13 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,iVar3 + 0x126,uVar13,iVar5 + 0x202,iVar6 + 0x1b,1,0,0,0,0);
      iVar3 = get_work_mode();
      if (*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x15') {
        puVar12 = &DAT_000aa600;
      }
      else {
        puVar12 = &DAT_000aa604;
      }
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,puVar12,3,iVar3 + 0x210,iVar5 + 1,iVar6 + 0x234,iVar10 + 0x1c,1,0,0,0,0);
      iVar3 = get_work_mode();
      if (*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x15') {
        uVar4 = 0xe;
      }
      else {
        uVar4 = 0x18;
      }
      uVar4 = FUN_0007d4b2(uVar4);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,iVar3 + 0x108,iVar5 + 0x1b,iVar6 + 0x232,iVar10 + 0x87,4,0,0,0,0);
      iVar3 = get_ui_x_offset();
      uVar4 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x4e,iVar3 + 0xfc,uVar4,0,0,0);
      iVar3 = get_ui_x_offset();
      uVar4 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x4f,iVar3 + 0x23e,uVar4,0,0,0);
      iVar3 = get_work_mode();
      if ((*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x15') && (DAT_20004c00 != '\x01')) break;
      uVar9 = 0;
      do {
        iVar3 = 0;
        do {
          iVar5 = *(int *)(iVar2 + 0xb90 + uVar9 * 4);
          local_30[0] = 1;
          local_30[1] = 3;
          local_30[2] = 5;
          local_30[3] = 7;
          local_30[4] = 7;
          local_30[5] = 7;
          local_30[6] = 7;
          local_30[7] = 7;
          bVar1 = *(byte *)(iVar5 + iVar3);
          if (bVar1 != 0) {
            *(byte *)(iVar5 + iVar3) =
                 bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                         [iVar3 + (uint)local_30[DAT_20009ff4] * 0x140 + (uVar9 % 0x1a) * 0xa00];
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x140);
        uVar9 = uVar9 + 1;
      } while (uVar9 != 199);
      DAT_20009ff4 = DAT_20009ff4 + 1;
      iVar3 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar3 + 0xeb4);
      iVar3 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar4,*(undefined4 *)(iVar3 + 0xeb8),0,0,0x280,199);
    }
    goto LAB_00040928;
  case 4:
    uVar4 = FUN_0007d4b2(7);
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,uVar4,0,iVar2 + 0xd2,iVar3 + 0x37,iVar5 + 0x240,iVar6 + 0x52,1,0,0,0,0);
    uVar4 = FUN_0007d4b2(0x1f);
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar5 = iVar5 + 0x88;
    iVar3 = iVar3 + 0x240;
    iVar2 = iVar2 + 0x6d;
    iVar6 = iVar6 + 0xae;
    goto LAB_00040b66;
  case 6:
  case 0x13:
    if (DAT_2001cdce == 1) {
      iVar2 = get_work_mode();
      if (*(char *)(*(int *)(iVar2 + 0x1014) + 2) == '\x06') {
        uVar4 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        gui_bmp_bitmap_draw(0x38,uVar4,iVar2 + 0x37,0,0,0);
        iVar2 = get_work_mode();
        if ((*(byte *)(*(int *)(iVar2 + 0x1014) + 0x1f) & 0xc) != 4) goto switchD_000408e4_caseD_a;
        send_event_status(0x16);
        iVar2 = get_work_mode();
        *(byte *)(*(int *)(iVar2 + 0x1014) + 0x1f) = *(byte *)(*(int *)(iVar2 + 0x1014) + 0x1f) | 8;
        iVar2 = get_work_mode();
        uVar8 = 5;
        iVar2 = *(int *)(iVar2 + 0x1014);
        goto LAB_00040c1c;
      }
      iVar2 = get_work_mode();
      if (*(char *)(*(int *)(iVar2 + 0x1014) + 2) != '\x13') goto switchD_000408e4_caseD_a;
      uVar4 = FUN_0007d4b2(0x22);
      iVar6 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar5 = iVar5 + 0x88;
      iVar2 = iVar2 + 0x6d;
      iVar6 = iVar6 + 0xa6;
      uVar13 = 1;
      goto LAB_000411c8;
    }
    if (DAT_2001cdce != 2) goto switchD_000408e4_caseD_a;
    iVar3 = get_work_mode();
    if (*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x06') {
      iVar3 = get_work_mode();
      if (-1 < (int)((uint)*(byte *)(*(int *)(iVar3 + 0x1014) + 0x1f) << 0x1d)) {
        send_event_status(0x15);
        iVar3 = get_work_mode();
        *(byte *)(*(int *)(iVar3 + 0x1014) + 0x1f) = *(byte *)(*(int *)(iVar3 + 0x1014) + 0x1f) | 4;
      }
    }
    else {
      iVar3 = get_work_mode();
      if ((*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x13') && (DAT_2001cdd1 != '\0'))
      goto LAB_00040c64;
    }
    clear_work_mode_flag_bit_1();
    DAT_20009ff4 = 0;
    while (DAT_20009ff4 < 8) {
      iVar3 = get_ui_x_offset();
      uVar9 = 0;
      iVar5 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x3c,iVar3 + 0x212,iVar5 + 4,0,0,0);
      iVar3 = get_work_mode();
      if (*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x06') {
        pcVar11 = "1";
      }
      else {
        pcVar11 = "0";
      }
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,pcVar11,3,iVar3 + 0x22e,iVar5 + 3,iVar6 + 0x23e,iVar10 + 0x1e,1,0,0,0,0);
      uVar4 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x38,uVar4,iVar3 + 4,0,0,0);
      uVar4 = FUN_0007d4b2(0x1a);
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar10 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,iVar3 + 0x24,iVar5 + 3,iVar6 + 0x150,iVar10 + 0x1e,1,0,0,0,0);
      iVar3 = get_work_mode();
      if (*(char *)(*(int *)(iVar3 + 0x1014) + 2) == '\x06') {
        uVar4 = 0x1c;
      }
      else {
        uVar4 = 0xc;
      }
      uVar4 = FUN_0007d4b2(uVar4);
      uVar13 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,uVar13,iVar3 + 0x37,iVar5 + 0x240,iVar6 + 0x6d,2,0,0,0,0);
      do {
        iVar3 = 0;
        do {
          iVar5 = *(int *)(iVar2 + 0xb90 + uVar9 * 4);
          local_30[0] = 1;
          local_30[1] = 3;
          local_30[2] = 5;
          local_30[3] = 7;
          local_30[4] = 7;
          local_30[5] = 7;
          local_30[6] = 7;
          local_30[7] = 7;
          bVar1 = *(byte *)(iVar5 + iVar3);
          if (bVar1 != 0) {
            *(byte *)(iVar5 + iVar3) =
                 bVar1 & (&DASHBOARD_PIXEL_MASK_TABLE)
                         [iVar3 + (uint)local_30[DAT_20009ff4] * 0x140 + (uVar9 % 0x1a) * 0xa00];
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x140);
        uVar9 = uVar9 + 1;
      } while (uVar9 != 199);
      DAT_20009ff4 = DAT_20009ff4 + 1;
      iVar3 = get_work_mode();
      uVar4 = *(undefined4 *)(iVar3 + 0xeb4);
      iVar3 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar4,*(undefined4 *)(iVar3 + 0xeb8),0,0,0x280,199);
    }
LAB_00040928:
    set_work_mode_flag_bit_1();
    goto switchD_000408e4_caseD_a;
  case 7:
  case 9:
  case 0xc:
  case 0xd:
    uVar4 = FUN_0007d4b2(0x21);
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar5 = iVar5 + 0x88;
    iVar3 = iVar3 + 0x240;
    iVar2 = iVar2 + 0x37;
    iVar6 = iVar6 + 0x72;
    break;
  case 8:
    iVar2 = get_system_byte_1_alt();
    if (iVar2 == 6) {
      uVar4 = FUN_0007d4b2(7);
      iVar2 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,iVar2 + 0xc6,iVar3 + 0x37,iVar5 + 0x240,iVar6 + 0x52,1,0,0,0,0);
      uVar4 = FUN_0007d4b2(0x1f);
      iVar6 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar3 = iVar3 + 0x240;
      iVar5 = iVar5 + 0x88;
      iVar2 = iVar2 + 0x6d;
      iVar6 = iVar6 + 0xac;
    }
    else {
      uVar4 = FUN_0007d4b2(7);
      iVar2 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      iVar5 = get_ui_x_offset();
      iVar6 = get_ui_y_offset();
      gui_utf_draw(0,uVar4,0,iVar2 + 0xd2,iVar3 + 0x37,iVar5 + 0x240,iVar6 + 0x52,1,0,0,0,0);
      uVar4 = FUN_0007d4b2(0x1f);
      iVar6 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar3 = iVar3 + 0x240;
      iVar5 = iVar5 + 0x88;
      iVar2 = iVar2 + 0x6d;
      iVar6 = iVar6 + 0x8a;
    }
LAB_00040b66:
    uVar13 = 1;
    goto LAB_00040a7e;
  default:
    goto switchD_000408e4_caseD_a;
  case 0xe:
  case 0xf:
    uVar4 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x36,uVar4,iVar2 + 0x37,0,0,0);
    iVar2 = get_work_mode();
    if ((*(char *)(*(int *)(iVar2 + 0x1014) + 2) == '\x0f') && (DAT_2001cdce == 1))
    goto switchD_000408e4_caseD_a;
    uVar4 = FUN_0007d4b2(0x23);
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar5 = iVar5 + 0x88;
    iVar3 = iVar3 + 0x240;
    iVar2 = iVar2 + 0x37;
    iVar6 = iVar6 + 0xb8;
    break;
  case 0x10:
  case 0x11:
    iVar2 = get_work_mode();
    if ((*(char *)(*(int *)(iVar2 + 0x1014) + 2) == '\x11') && (DAT_2001cdce == 1)) {
      uVar4 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x38,uVar4,iVar2 + 0x37,0,0,0);
      goto switchD_000408e4_caseD_a;
    }
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x3c,iVar2 + 0x212,iVar3 + 4,0,0,0);
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,"1",3,iVar2 + 0x22e,iVar3 + 3,iVar5 + 0x23e,iVar6 + 0x1e,1,1,0,0,0);
    uVar4 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    gui_bmp_bitmap_draw(0x38,uVar4,iVar2 + 4,0,0,0);
    uVar4 = FUN_0007d4b2(0x1a);
    iVar2 = get_ui_x_offset();
    iVar3 = get_ui_y_offset();
    iVar5 = get_ui_x_offset();
    iVar6 = get_ui_y_offset();
    gui_utf_draw(0,uVar4,0,iVar2 + 0x24,iVar3 + 3,iVar5 + 0x150,iVar6 + 0x1e,1,0,0,0,0);
    uVar4 = FUN_0007d4b2(0x1c);
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar5 = iVar5 + 0x6d;
    uVar13 = 2;
LAB_00040bc6:
    iVar2 = iVar2 + 0x37;
LAB_000411c8:
    iVar3 = iVar3 + 0x240;
    goto LAB_00040a7e;
  case 0x16:
    uVar4 = FUN_0007d4b2(0x11);
    iVar6 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar3 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar5 = iVar5 + 0x88;
    iVar3 = iVar3 + 0x240;
    iVar2 = iVar2 + 0x37;
    iVar6 = iVar6 + 0x6a;
    break;
  case 0x17:
    iVar2 = get_system_byte_1_alt();
    if (iVar2 == 6) {
      uVar4 = FUN_0007d4b2(0x12);
      iVar6 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar5 = iVar5 + 0x88;
      iVar3 = iVar3 + 0x240;
      iVar2 = iVar2 + 0x37;
      iVar6 = iVar6 + 0x48;
    }
    else {
      uVar4 = FUN_0007d4b2(0x12);
      iVar6 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      iVar3 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar5 = iVar5 + 0x88;
      iVar3 = iVar3 + 0x240;
      iVar2 = iVar2 + 0x37;
      iVar6 = iVar6 + 0x88;
    }
  }
  uVar13 = 4;
LAB_00040a7e:
  gui_utf_draw(0,uVar4,0,iVar6,iVar2,iVar3,iVar5,uVar13,0,0,0,0);
switchD_000408e4_caseD_a:
  iVar2 = get_work_mode();
  DAT_20004c00 = *(undefined1 *)(iVar2 + 0xee4);
  return;
}


