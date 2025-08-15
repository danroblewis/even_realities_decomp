/*
 * Function: manage_complex_work_mode_animations_and_states
 * Entry:    000417f8
 * Prototype: undefined manage_complex_work_mode_animations_and_states()
 */


void manage_complex_work_mode_animations_and_states(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined1 uVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 local_428;
  undefined1 auStack_424 [1024];
  
  local_428 = 0;
  fill_memory_buffer(auStack_424,0,0x3fc);
  iVar4 = get_work_mode();
  switch(*(undefined1 *)(*(int *)(iVar4 + 0x1014) + 2)) {
  case 0:
    uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
    iVar4 = get_work_mode();
    uVar16 = *(uint *)(*(int *)(iVar4 + 0x1014) + 4);
    uVar1 = (int)((ulonglong)uVar18 >> 0x20) - *(int *)(*(int *)(iVar4 + 0x1014) + 8);
    uVar2 = (uint)((uint)uVar18 < uVar16);
    if (uVar1 == uVar2 && (uint)(4000 < (uint)uVar18 - uVar16) <= uVar1 - uVar2) {
      return;
    }
    iVar4 = get_work_mode();
    *(char *)(*(int *)(iVar4 + 0x1014) + 3) = *(char *)(*(int *)(iVar4 + 0x1014) + 3) + '\x01';
    iVar4 = get_work_mode();
    if (*(byte *)(*(int *)(iVar4 + 0x1014) + 3) < 2) {
      return;
    }
    iVar4 = get_work_mode();
    uVar15 = 0;
    iVar5 = *(int *)(iVar4 + 0x1014);
    goto LAB_000418a6;
  case 3:
    iVar4 = get_work_mode();
    iVar5 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar5 + 0x1014) + 3) = *(undefined1 *)(iVar4 + 0xee4);
    if (5 < WORK_MODE_UI_RENDERING_STATE) {
      return;
    }
    if (WORK_MODE_UI_RENDERING_STATE != 0) {
      uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
      iVar4 = get_work_mode();
      uVar16 = *(uint *)(*(int *)(iVar4 + 0x1014) + 4);
      uVar1 = (int)((ulonglong)uVar18 >> 0x20) - *(int *)(*(int *)(iVar4 + 0x1014) + 8);
      uVar2 = (uint)((uint)uVar18 < uVar16);
      if (uVar1 == uVar2 && (uint)(1000 < (uint)uVar18 - uVar16) <= uVar1 - uVar2) {
        return;
      }
    }
    uVar12 = 0x10;
    goto LAB_000418d2;
  case 4:
    iVar4 = get_ui_x_offset();
    iVar5 = get_ui_y_offset();
    iVar5 = iVar5 + 0x70;
    iVar4 = iVar4 + 0x8a;
    goto LAB_00041938;
  case 5:
  case 0x14:
  case 0x15:
    iVar4 = get_work_mode();
    iVar5 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar5 + 0x1014) + 3) = *(undefined1 *)(iVar4 + 0xee4);
    if (WORK_MODE_STATE_AND_UI_CONFIGURATION == '\x01') {
      iVar4 = get_work_mode();
      if ((*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x05') &&
         (WORK_MODE_STATE_VALIDATION_FLAGS == '\0')) {
        uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
        iVar4 = get_work_mode();
        uVar16 = *(uint *)(*(int *)(iVar4 + 0x1014) + 4);
        uVar1 = (int)((ulonglong)uVar18 >> 0x20) - *(int *)(*(int *)(iVar4 + 0x1014) + 8);
        uVar2 = (uint)((uint)uVar18 < uVar16);
        if (uVar1 == uVar2 && (uint)(499 < (uint)uVar18 - uVar16) <= uVar1 - uVar2) {
          return;
        }
      }
      iVar4 = get_system_byte_1_alt();
      if (iVar4 == 6) {
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_dynamic_bitmap_draw(2,iVar4 + 0x42,iVar5 + 0x70,0,0,0,0);
        uVar12 = get_data_by_index_and_type(0x13);
        iVar4 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        iVar5 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar4 = iVar4 + 0x66;
      }
      else {
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_dynamic_bitmap_draw(2,iVar4 + 0x82,iVar5 + 0x70,0,0,0,0);
        uVar12 = get_data_by_index_and_type(0x13);
        iVar4 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        iVar5 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar4 = iVar4 + 0xa6;
      }
      gui_utf_draw(0,uVar12,0,iVar4,iVar6 + 0x6d,iVar5 + 0x240,iVar7 + 0x88,1,0,0,0,0);
      return;
    }
    if (WORK_MODE_STATE_AND_UI_CONFIGURATION != '\x02') {
      return;
    }
    uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
    iVar4 = get_work_mode();
    uVar16 = *(uint *)(*(int *)(iVar4 + 0x1014) + 4);
    uVar1 = (int)((ulonglong)uVar18 >> 0x20) - *(int *)(*(int *)(iVar4 + 0x1014) + 8);
    uVar2 = (uint)((uint)uVar18 < uVar16);
    if ((uVar1 != uVar2 || uVar1 - uVar2 < (uint)(2000 < (uint)uVar18 - uVar16)) ||
       (WORK_MODE_STATE_VALIDATION_FLAGS != '\0')) {
      if (WORK_MODE_ANIMATION_STATE == '\0') {
        WORK_MODE_ANIMATION_STATE = '\x01';
        uVar12 = get_data_by_index_and_type(0x14);
        uVar8 = get_ui_x_offset();
        uVar9 = get_ui_y_offset();
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        get_data_by_index_and_type(0x14);
        uVar10 = calculate_string_length();
        gui_utf_draw(0,uVar12,3,uVar8,uVar9,iVar4 + 0x76,iVar5 + 0x1b,1,uVar10,0,0,0);
        uVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        iVar5 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        gui_utf_draw(0,"12:47",1,uVar12,iVar4 + 0x1b,iVar5 + 0x68,iVar6 + 0x42,1,5,0,0,0);
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        gui_bmp_bitmap_draw_ex(0x29,iVar4 + 0xa6,iVar5 + 4,&local_428,0x55);
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        gui_utf_draw(0,&DAT_000aa60e,3,iVar4 + 0xc2,iVar5 + 3,iVar6 + 0xea,iVar7 + 0x1e,1,2,0,0,0);
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        gui_utf_draw(0,"*",3,iVar4 + 0xde,iVar5 + 3,iVar6 + 0xec,iVar7 + 0x1e,1,1,0,0,0);
        iVar4 = get_work_mode();
        bVar17 = *(char *)(*(int *)(iVar4 + 0x1014) + 2) != '\x05';
        if (bVar17) {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw_ex(0x3c,iVar4 + 0xa6,iVar5 + 0x23,&local_428,0x55);
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          pcVar13 = "0";
        }
        else {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x3c,iVar4 + 0xa6,iVar5 + 0x23,0,0,0);
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          pcVar13 = "1";
        }
        gui_utf_draw(0,pcVar13,3,iVar6 + 0xc2,iVar7 + 0x23,iVar4 + 0xd6,iVar5 + 0x3e,1,bVar17,0,0,0)
        ;
        uVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        gui_bmp_bitmap_draw_ex(0x39,uVar12,iVar4 + 0x51,&local_428,0x55);
        uVar12 = get_data_by_index_and_type(0x16);
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        get_data_by_index_and_type(0x16);
        uVar8 = calculate_string_length();
        gui_utf_draw(0,uVar12,0,iVar4 + 0x1c,iVar5 + 0x51,iVar6 + 0xf2,iVar7 + 0x6c,1,uVar8,0,0,0);
        uVar12 = get_data_by_index_and_type(0x15);
        uVar8 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        iVar5 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        get_data_by_index_and_type(0x15);
        uVar9 = calculate_string_length();
        gui_utf_draw(0,uVar12,0,uVar8,iVar4 + 0x6d,iVar5 + 0xf2,iVar6 + 0x88,1,uVar9,0,0,0);
        iVar4 = get_work_mode();
        if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x14') {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw(0x3b,iVar4 + 0x108,iVar5 + 1,0,0,0);
          uVar12 = get_data_by_index_and_type(0x17);
          iVar4 = get_ui_x_offset();
          uVar8 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          gui_utf_draw(0,uVar12,0,iVar4 + 0x126,uVar8,iVar5 + 0x202,iVar6 + 0x1b,1,0,0,0,0);
          iVar7 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar4 = get_ui_y_offset();
          uVar12 = 0;
          puVar14 = &DAT_000aa604;
        }
        else {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw_ex(0x3b,iVar4 + 0x108,iVar5 + 1,&local_428,0x55);
          uVar12 = get_data_by_index_and_type(0x17);
          iVar4 = get_ui_x_offset();
          uVar8 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          get_data_by_index_and_type(0x17);
          uVar9 = calculate_string_length();
          gui_utf_draw(0,uVar12,0,iVar4 + 0x126,uVar8,iVar5 + 0x202,iVar6 + 0x1b,1,uVar9,0,0,0);
          iVar4 = get_work_mode();
          if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x15') {
            puVar14 = &DAT_000aa600;
          }
          else {
            puVar14 = &DAT_000aa604;
          }
          iVar7 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar4 = get_ui_y_offset();
          uVar12 = 3;
        }
        gui_utf_draw(0,puVar14,3,iVar7 + 0x210,iVar6 + 1,iVar5 + 0x234,iVar4 + 0x1c,1,uVar12,0,0,0);
        iVar4 = get_work_mode();
        if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x15') {
          uVar12 = 0xe;
        }
        else {
          uVar12 = 0x18;
        }
        uVar12 = get_data_by_index_and_type(uVar12);
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        iVar11 = get_work_mode();
        if (*(char *)(*(int *)(iVar11 + 0x1014) + 2) == '\x15') {
          uVar8 = 0xe;
        }
        else {
          uVar8 = 0x18;
        }
        get_data_by_index_and_type(uVar8);
        uVar8 = calculate_string_length();
        gui_utf_draw(0,uVar12,0,iVar4 + 0x108,iVar5 + 0x1b,iVar6 + 0x232,iVar7 + 0x87,4,uVar8,0,0,0)
        ;
        iVar4 = get_ui_x_offset();
        uVar12 = get_ui_y_offset();
        gui_bmp_bitmap_draw_ex(0x4e,iVar4 + 0xfc,uVar12,&local_428,0x55);
        iVar4 = get_ui_x_offset();
        uVar12 = get_ui_y_offset();
        gui_bmp_bitmap_draw_ex(0x4f,iVar4 + 0x23e,uVar12,&local_428,0x55);
        uVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        iVar5 = get_ui_x_offset();
        iVar6 = get_ui_y_offset();
        gui_utf_draw(0," ",0,uVar12,iVar4 + 0x6d,iVar5 + 0x240,iVar6 + 0x88,1,0,0,0,0);
        iVar4 = get_work_mode();
        if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x05') {
          iVar4 = get_system_byte_1_alt();
          if (iVar4 == 6) {
            uVar12 = get_data_by_index_and_type(9);
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw(0,uVar12,0,iVar4 + 0x5c,iVar5 + 0x6d,iVar6 + 0x240,iVar7 + 0x88,1,0,0,0,0);
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar4 = iVar4 + 0xae;
          }
          else {
            uVar12 = get_data_by_index_and_type(9);
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            gui_utf_draw(0,uVar12,0,iVar4 + 0x6a,iVar5 + 0x6d,iVar6 + 0x240,iVar7 + 0x88,1,0,0,0,0);
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar4 = iVar4 + 0xca;
          }
          uVar12 = 0x7a;
        }
        else {
          iVar4 = get_work_mode();
          if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) != '\x14') {
            iVar4 = get_work_mode();
            if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x15') {
              iVar4 = get_system_byte_1_alt();
              if (iVar4 == 6) {
                uVar12 = get_data_by_index_and_type(0xf);
                iVar4 = get_ui_x_offset();
                iVar5 = get_ui_y_offset();
                iVar6 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar4 = iVar4 + 100;
              }
              else {
                uVar12 = get_data_by_index_and_type(0xf);
                iVar4 = get_ui_x_offset();
                iVar5 = get_ui_y_offset();
                iVar6 = get_ui_x_offset();
                iVar7 = get_ui_y_offset();
                iVar4 = iVar4 + 0x92;
              }
              gui_utf_draw(0,uVar12,0,iVar4,iVar5 + 0x6d,iVar6 + 0x240,iVar7 + 0x88,1,0,0,0,0);
            }
            goto LAB_00041f3a;
          }
          uVar12 = get_data_by_index_and_type(0xb);
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          gui_utf_draw(0,uVar12,0,iVar4 + 0x54,iVar5 + 0x6d,iVar6 + 0x240,iVar7 + 0x88,1,0,0,0,0);
          iVar4 = get_system_byte_1_alt();
          if (iVar4 == 6) {
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar4 = iVar4 + 0xaa;
          }
          else {
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar4 = iVar4 + 0xb2;
          }
          uVar12 = 0x7b;
        }
        gui_bmp_bitmap_draw(uVar12,iVar4,iVar5 + 0x87,0,0,0);
      }
LAB_00041f3a:
      iVar4 = get_work_mode();
      if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x05') {
        iVar4 = get_system_byte_1_alt();
        if (iVar4 == 6) {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar5 = iVar5 + 0x70;
          iVar4 = iVar4 + 0x38;
        }
        else {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar5 = iVar5 + 0x70;
          iVar4 = iVar4 + 0x46;
        }
      }
      else {
        iVar4 = get_work_mode();
        if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) != '\x14') {
          iVar4 = get_work_mode();
          if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) != '\x15') goto LAB_00041f76;
          iVar4 = get_system_byte_1_alt();
          if (iVar4 == 6) {
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar5 = iVar5 + 0x70;
            iVar4 = iVar4 + 0x40;
          }
          else {
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar5 = iVar5 + 0x70;
            iVar4 = iVar4 + 0x6e;
          }
          goto LAB_000422ba;
        }
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar5 = iVar5 + 0x70;
        iVar4 = iVar4 + 0x30;
      }
LAB_00041f70:
      uVar12 = 0xb;
LAB_00041f72:
      gui_bmp_dynamic_bitmap_draw(uVar12,iVar4,iVar5,0,0,0,0);
    }
LAB_00041f76:
    iVar4 = get_work_mode();
    if (*(char *)(*(int *)(iVar4 + 0x1014) + 3) == '\x01') {
      WORK_MODE_STATE_VALIDATION_FLAGS = '\x01';
    }
    break;
  case 6:
  case 0x13:
    iVar4 = get_work_mode();
    iVar5 = get_work_mode();
    *(undefined1 *)(*(int *)(iVar5 + 0x1014) + 3) = *(undefined1 *)(iVar4 + 0xee4);
    cVar3 = WORK_MODE_STATE_AND_UI_CONFIGURATION;
    if (WORK_MODE_STATE_AND_UI_CONFIGURATION != '\x01') {
      if (WORK_MODE_STATE_AND_UI_CONFIGURATION != '\x02') {
        return;
      }
      uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
      iVar4 = get_work_mode();
      uVar16 = *(uint *)(*(int *)(iVar4 + 0x1014) + 4);
      uVar1 = (int)((ulonglong)uVar18 >> 0x20) - *(int *)(*(int *)(iVar4 + 0x1014) + 8);
      uVar2 = (uint)((uint)uVar18 < uVar16);
      if ((uVar1 == uVar2 && (uint)(2000 < (uint)uVar18 - uVar16) <= uVar1 - uVar2) &&
         (WORK_MODE_STATE_VALIDATION_FLAGS == '\0')) goto LAB_00041f76;
      if (WORK_MODE_ANIMATION_STATE == '\0') {
        WORK_MODE_ANIMATION_STATE = '\x01';
        iVar4 = get_work_mode();
        if (-1 < (int)((uint)*(byte *)(*(int *)(iVar4 + 0x1014) + 0x1f) << 0x1d)) {
          send_event_status(0x15);
          iVar4 = get_work_mode();
          *(byte *)(*(int *)(iVar4 + 0x1014) + 0x1f) =
               *(byte *)(*(int *)(iVar4 + 0x1014) + 0x1f) | 4;
        }
        iVar4 = get_work_mode();
        if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x06') {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          gui_bmp_bitmap_draw_ex(0x3c,iVar4 + 0x212,iVar5 + 4,&local_428,0x55);
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          pcVar13 = "1";
          uVar12 = 1;
LAB_00042560:
          gui_utf_draw(0,pcVar13,3,iVar4 + 0x22e,iVar5 + 3,iVar6 + 0x23e,iVar7 + 0x1e,1,uVar12,0,0,0
                      );
        }
        else {
          iVar4 = get_work_mode();
          if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x13') {
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            gui_bmp_bitmap_draw(0x3c,iVar4 + 0x212,iVar5 + 4,0,0,0);
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            uVar12 = 0;
            pcVar13 = "0";
            goto LAB_00042560;
          }
        }
        uVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        gui_bmp_bitmap_draw_ex(0x38,uVar12,iVar4 + 4,&local_428,0x55);
        uVar12 = get_data_by_index_and_type(0x1a);
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar6 = get_ui_x_offset();
        iVar7 = get_ui_y_offset();
        get_data_by_index_and_type(0x1a);
        uVar8 = calculate_string_length();
        gui_utf_draw(0,uVar12,0,iVar4 + 0x24,iVar5 + 3,iVar6 + 0x150,iVar7 + 0x1e,1,uVar8,0,0,0);
        iVar4 = get_work_mode();
        if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x06') {
          uVar12 = get_data_by_index_and_type(0x1c);
          uVar8 = get_ui_x_offset();
          iVar4 = get_ui_y_offset();
          iVar5 = get_ui_x_offset();
          iVar6 = get_ui_y_offset();
          uVar9 = 0x1c;
LAB_00042606:
          get_data_by_index_and_type(uVar9);
          uVar9 = calculate_string_length();
          gui_utf_draw(0,uVar12,0,uVar8,iVar4 + 0x37,iVar5 + 0x240,iVar6 + 0x6d,2,uVar9,0,0,0);
        }
        else {
          iVar4 = get_work_mode();
          if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x13') {
            uVar12 = get_data_by_index_and_type(0xc);
            uVar8 = get_ui_x_offset();
            iVar4 = get_ui_y_offset();
            iVar5 = get_ui_x_offset();
            iVar6 = get_ui_y_offset();
            uVar9 = 0xc;
            goto LAB_00042606;
          }
        }
        iVar4 = get_work_mode();
        if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x06') {
          iVar4 = get_system_byte_1_alt();
          if (iVar4 == 6) {
            uVar12 = get_data_by_index_and_type(0x10);
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar4 = iVar4 + 0x34;
          }
          else {
            uVar12 = get_data_by_index_and_type(0x10);
            iVar4 = get_ui_x_offset();
            iVar5 = get_ui_y_offset();
            iVar6 = get_ui_x_offset();
            iVar7 = get_ui_y_offset();
            iVar4 = iVar4 + 0x72;
          }
          gui_utf_draw(0,uVar12,0,iVar4,iVar5 + 0x6d,iVar6 + 0x240,iVar7 + 0x88,1,0,0,0,0);
        }
        else {
          iVar4 = get_work_mode();
          if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x13') {
            iVar4 = get_system_byte_1_alt();
            if (iVar4 == 6) {
              uVar12 = get_data_by_index_and_type(10);
              iVar4 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              gui_utf_draw(0,uVar12,0,iVar4 + 0x8a,iVar5 + 0x6d,iVar6 + 0x240,iVar7 + 0x88,1,0,0,0,0
                          );
              iVar4 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              iVar4 = iVar4 + 0xdc;
            }
            else {
              uVar12 = get_data_by_index_and_type(10);
              iVar4 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              iVar6 = get_ui_x_offset();
              iVar7 = get_ui_y_offset();
              gui_utf_draw(0,uVar12,0,iVar4 + 0x94,iVar5 + 0x6d,iVar6 + 0x240,iVar7 + 0x88,1,0,0,0,0
                          );
              iVar4 = get_ui_x_offset();
              iVar5 = get_ui_y_offset();
              iVar4 = iVar4 + 0xf4;
            }
            gui_bmp_bitmap_draw(0x7a,iVar4,iVar5 + 0x87,0,0,0);
          }
        }
      }
      iVar4 = get_work_mode();
      if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x06') {
        iVar4 = get_system_byte_1_alt();
        if (iVar4 == 6) {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar5 = iVar5 + 0x70;
          iVar4 = iVar4 + 0x10;
        }
        else {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar5 = iVar5 + 0x70;
          iVar4 = iVar4 + 0x4e;
        }
LAB_000422ba:
        uVar12 = 3;
        goto LAB_00041f72;
      }
      iVar4 = get_work_mode();
      if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x13') {
        iVar4 = get_system_byte_1_alt();
        if (iVar4 == 6) {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar5 = iVar5 + 0x70;
          iVar4 = iVar4 + 0x66;
        }
        else {
          iVar4 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar5 = iVar5 + 0x70;
          iVar4 = iVar4 + 0x70;
        }
        goto LAB_00041f70;
      }
      goto LAB_00041f76;
    }
    iVar4 = get_work_mode();
    if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) == '\x06') {
      uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
      iVar4 = get_work_mode();
      uVar16 = *(uint *)(*(int *)(iVar4 + 0x1014) + 4);
      uVar1 = (int)((ulonglong)uVar18 >> 0x20) - *(int *)(*(int *)(iVar4 + 0x1014) + 8);
      uVar2 = (uint)((uint)uVar18 < uVar16);
      if (uVar1 == uVar2 && (uint)(2000 < (uint)uVar18 - uVar16) <= uVar1 - uVar2) {
        return;
      }
      if (WORK_MODE_ANIMATION_STATE == '\0') {
        WORK_MODE_ANIMATION_STATE = cVar3;
        reset_animation_counters();
        uVar12 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        gui_bmp_bitmap_draw_ex(0x38,uVar12,iVar4 + 0x37,&local_428,0x55);
        iVar4 = get_system_byte_1_alt();
        if (iVar4 == 6) {
          uVar12 = get_data_by_index_and_type(0x19);
          iVar4 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar4 = iVar4 + 0x34;
        }
        else {
          uVar12 = get_data_by_index_and_type(0x19);
          iVar4 = get_ui_x_offset();
          iVar7 = get_ui_y_offset();
          iVar6 = get_ui_x_offset();
          iVar5 = get_ui_y_offset();
          iVar4 = iVar4 + 0x8c;
        }
        gui_utf_draw(0,uVar12,0,iVar4,iVar7 + 0x6d,iVar6 + 0x240,iVar5 + 0x88,1,0,0,0,0);
      }
      iVar4 = get_system_byte_1_alt();
      if (iVar4 == 6) {
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar5 = iVar5 + 0x70;
        iVar4 = iVar4 + 0x10;
      }
      else {
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar5 = iVar5 + 0x70;
        iVar4 = iVar4 + 0x68;
      }
    }
    else {
      iVar4 = get_work_mode();
      if (*(char *)(*(int *)(iVar4 + 0x1014) + 2) != '\x13') {
        return;
      }
      iVar4 = get_system_byte_1_alt();
      if (iVar4 == 6) {
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar5 = iVar5 + 0x70;
        iVar4 = iVar4 + 0x74;
      }
      else {
        iVar4 = get_ui_x_offset();
        iVar5 = get_ui_y_offset();
        iVar5 = iVar5 + 0x70;
        iVar4 = iVar4 + 0x82;
      }
    }
    uVar12 = 2;
    goto LAB_000423d0;
  case 8:
    iVar4 = get_system_byte_1_alt();
    if (iVar4 == 6) {
      iVar4 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar5 = iVar5 + 0x70;
      iVar4 = iVar4 + 0x88;
    }
    else {
      iVar4 = get_ui_x_offset();
      iVar5 = get_ui_y_offset();
      iVar5 = iVar5 + 0x70;
      iVar4 = iVar4 + 0x66;
    }
LAB_00041938:
    uVar12 = 0xc;
LAB_000423d0:
    gui_bmp_dynamic_bitmap_draw(uVar12,iVar4,iVar5,0,0,0,0);
    break;
  case 0xf:
  case 0x11:
    iVar4 = get_work_mode();
    iVar5 = get_work_mode();
    iVar5 = *(int *)(iVar5 + 0x1014);
    uVar15 = *(undefined1 *)(iVar4 + 0xee4);
LAB_000418a6:
    *(undefined1 *)(iVar5 + 3) = uVar15;
    break;
  case 0x16:
    uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
    iVar4 = get_work_mode();
    uVar16 = *(uint *)(*(int *)(iVar4 + 0x1014) + 4);
    uVar1 = (int)((ulonglong)uVar18 >> 0x20) - *(int *)(*(int *)(iVar4 + 0x1014) + 8);
    uVar2 = (uint)((uint)uVar18 < uVar16);
    if (uVar1 != uVar2 || uVar1 - uVar2 < (uint)(4000 < (uint)uVar18 - uVar16)) {
      iVar4 = get_work_mode();
      *(undefined1 *)(*(int *)(iVar4 + 0x1014) + 2) = 5;
    }
    break;
  case 0x17:
    if (5 < WORK_MODE_UI_RENDERING_STATE) {
      return;
    }
    if (WORK_MODE_UI_RENDERING_STATE != 0) {
      uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
      iVar4 = get_work_mode();
      uVar16 = *(uint *)(*(int *)(iVar4 + 0x1014) + 4);
      uVar1 = (int)((ulonglong)uVar18 >> 0x20) - *(int *)(*(int *)(iVar4 + 0x1014) + 8);
      uVar2 = (uint)((uint)uVar18 < uVar16);
      if (uVar1 == uVar2 && (uint)(1000 < (uint)uVar18 - uVar16) <= uVar1 - uVar2) {
        return;
      }
    }
    uVar12 = 0x14;
LAB_000418d2:
    WORK_MODE_UI_RENDERING_STATE = WORK_MODE_UI_RENDERING_STATE + 1;
    send_event_status(uVar12);
    uVar18 = calculate_ble_connection_timing_with_scaling_alt3();
    iVar4 = get_work_mode();
    *(undefined8 *)(*(int *)(iVar4 + 0x1014) + 4) = uVar18;
  }
  return;
}


