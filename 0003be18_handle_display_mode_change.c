/*
 * Function: handle_display_mode_change
 * Entry:    0003be18
 * Prototype: undefined __stdcall handle_display_mode_change(undefined4 display_state, undefined4 param_2, undefined4 param_3, undefined4 draw_flags)
 */


undefined4
handle_display_mode_change
          (byte *display_state,undefined4 param_2,undefined4 param_3,undefined4 draw_flags)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = (uint)*display_state;
  if (uVar4 < 6) {
    if (UI_ANIMATION_STATE != 1) {
      reset_animation_counters();
      UI_ANIMATION_STATE = 1;
      uVar1 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      clear_ui_area(uVar1,iVar2 + 0x36);
      iVar2 = get_work_mode();
      uVar1 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar1,*(undefined4 *)(iVar2 + 0xeb8),0,0,0x280,199);
    }
    uVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar2 = iVar2 + 0x36;
    uVar3 = 1;
  }
  else if (uVar4 == 6) {
    if (UI_ANIMATION_STATE != 9) {
      reset_animation_counters();
      UI_ANIMATION_STATE = 9;
      uVar1 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      clear_ui_area(uVar1,iVar2 + 0x36);
      iVar2 = get_work_mode();
      uVar1 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar1,*(undefined4 *)(iVar2 + 0xeb8),0,0,0x280,199);
    }
    uVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar2 = iVar2 + 0x36;
    uVar3 = 9;
  }
  else {
    if (uVar4 != 7) {
      if (uVar4 < 0xc) {
        if (UI_ANIMATION_STATE == 0xff) {
          return 0;
        }
        reset_animation_counters();
        UI_ANIMATION_STATE = 0xff;
        uVar1 = get_ui_x_offset();
        iVar2 = get_ui_y_offset();
        clear_ui_area(uVar1,iVar2 + 0x36);
        iVar2 = get_work_mode();
        uVar1 = *(undefined4 *)(iVar2 + 0xeb4);
        iVar2 = get_work_mode();
        _reflash_fb_data_to_lcd(uVar1,*(undefined4 *)(iVar2 + 0xeb8),0,0,0x280,199);
        return 0;
      }
      if (uVar4 - 0xc < 2) {
        return 0;
      }
      if (uVar4 == 0xf) {
        return 0;
      }
      if ((uVar4 != 0xe) && (uVar4 != 0x10)) {
        return 0;
      }
      if (UI_ANIMATION_STATE == 0xff) {
        return 0;
      }
      reset_animation_counters();
      UI_ANIMATION_STATE = 0xff;
      return 0;
    }
    if (UI_ANIMATION_STATE != 4) {
      reset_animation_counters();
      UI_ANIMATION_STATE = 4;
      uVar1 = get_ui_x_offset();
      iVar2 = get_ui_y_offset();
      clear_ui_area(uVar1,iVar2 + 0x36);
      iVar2 = get_work_mode();
      uVar1 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      _reflash_fb_data_to_lcd(uVar1,*(undefined4 *)(iVar2 + 0xeb8),0,0,0x280,199);
    }
    uVar1 = get_ui_x_offset();
    iVar2 = get_ui_y_offset();
    iVar2 = iVar2 + 0x36;
    uVar3 = 4;
  }
  gui_bmp_dynamic_bitmap_draw(uVar3,uVar1,iVar2,0,0,0,0,draw_flags);
  return 0;
}


