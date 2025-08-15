/*
 * Function: manage_ui_animation_state_and_rendering
 * Entry:    0003cb58
 * Prototype: undefined manage_ui_animation_state_and_rendering()
 */


undefined4 manage_ui_animation_state_and_rendering(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  set_work_mode_parameter(param_1 + 0x24);
  if (param_3 == 2) {
    gui_screen_clear();
    iVar3 = get_work_mode();
    **(undefined1 **)(iVar3 + 0x1010) = 0;
    DAT_2001b9aa = '\0';
  }
  else if (DAT_2001b9aa == '\0') {
    gui_screen_clear();
    set_work_mode_flag_bit_1();
    reset_animation_counters();
    DAT_2001b9aa = '\x01';
    uVar9 = FUN_0007d2d8();
    iVar3 = get_work_mode();
    *(undefined8 *)(*(int *)(iVar3 + 0x1010) + 3) = uVar9;
    if (DAT_2001b9ab == '\x01') {
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      gui_bmp_dynamic_bitmap_draw(7,iVar3 + 0xd8,iVar4 + 0x3a,0,0,0,1);
      uVar5 = FUN_0007d4b2(0x27);
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      iVar3 = iVar3 + 0x10c;
    }
    else if (DAT_2001b9ab == '\x02') {
      uVar5 = get_ui_x_offset();
      iVar3 = get_ui_y_offset();
      gui_bmp_bitmap_draw(0x48,uVar5,iVar3 + 0x3a,0,0,0);
      uVar5 = FUN_0007d4b2(0x26);
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      iVar3 = iVar3 + 0x58;
    }
    else {
      if (DAT_2001b9ab != '\0') {
        return 0;
      }
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      gui_bmp_dynamic_bitmap_draw(6,iVar3 + 0xec,iVar4 + 0x3a,0,0,0,1);
      uVar5 = FUN_0007d4b2(0x25);
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      iVar6 = get_ui_x_offset();
      iVar7 = get_ui_y_offset();
      iVar3 = iVar3 + 0x120;
    }
    gui_utf_draw(0,uVar5,0,iVar3,iVar4 + 0x37,iVar6 + 0x240,iVar7 + 0x88,2,0,0,0,0);
  }
  else if (DAT_2001b9aa == '\x01') {
    if (DAT_2001b9ab == '\x01') {
      iVar3 = get_ui_x_offset();
      iVar4 = get_ui_y_offset();
      gui_bmp_dynamic_bitmap_draw(7,iVar3 + 0xd8,iVar4 + 0x3a,0,0,0,1);
      uVar9 = FUN_0007d2d8();
      iVar3 = get_work_mode();
      uVar8 = *(uint *)(*(int *)(iVar3 + 0x1010) + 3);
      uVar1 = (int)((ulonglong)uVar9 >> 0x20) - *(int *)(*(int *)(iVar3 + 0x1010) + 7);
      uVar2 = (uint)((uint)uVar9 < uVar8);
      if (uVar1 != uVar2 || uVar1 - uVar2 < (uint)(0x5db < (uint)uVar9 - uVar8)) {
        iVar3 = get_work_mode();
        **(undefined1 **)(iVar3 + 0x1010) = 0;
      }
    }
    else {
      if (DAT_2001b9ab == '\x02') {
        uVar9 = FUN_0007d2d8();
        iVar3 = get_work_mode();
        uVar8 = *(uint *)(*(int *)(iVar3 + 0x1010) + 3);
        uVar1 = (int)((ulonglong)uVar9 >> 0x20) - *(int *)(*(int *)(iVar3 + 0x1010) + 7);
        uVar2 = (uint)((uint)uVar9 < uVar8);
        if (uVar1 == uVar2 && (uint)(0x5db < (uint)uVar9 - uVar8) <= uVar1 - uVar2) {
          return 0;
        }
      }
      else if (DAT_2001b9ab == '\0') {
        iVar3 = get_ui_x_offset();
        iVar4 = get_ui_y_offset();
        gui_bmp_dynamic_bitmap_draw(6,iVar3 + 0xec,iVar4 + 0x3a,0,0,0,1);
        uVar9 = FUN_0007d2d8();
        iVar3 = get_work_mode();
        uVar8 = *(uint *)(*(int *)(iVar3 + 0x1010) + 3);
        uVar1 = (int)((ulonglong)uVar9 >> 0x20) - *(int *)(*(int *)(iVar3 + 0x1010) + 7);
        uVar2 = (uint)((uint)uVar9 < uVar8);
        if (uVar1 == uVar2 && (uint)(0x5db < (uint)uVar9 - uVar8) <= uVar1 - uVar2) {
          return 0;
        }
        iVar3 = get_work_mode();
        **(undefined1 **)(iVar3 + 0x1010) = 0;
        return 0;
      }
      iVar3 = get_work_mode();
      **(undefined1 **)(iVar3 + 0x1010) = 0;
    }
  }
  return 0;
}


