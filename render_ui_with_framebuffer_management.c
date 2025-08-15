/*
 * Function: render_ui_with_framebuffer_management
 * Entry:    000440ec
 * Prototype: undefined render_ui_with_framebuffer_management(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7, undefined param_8, undefined4 param_9)
 */


void render_ui_with_framebuffer_management
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
               int param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_4c [10];
  
  iVar2 = get_ui_y_offset();
  if (iVar2 < 0x21) {
    iVar2 = get_display_config_flags();
    iVar4 = param_5 + 0x1b;
    if (iVar2 << 0x1e < 0) {
      _clean_fb_data(MAIN_FRAMEBUFFER,0,param_4,iVar4,param_6,param_7 + 0x1b);
    }
    clear_work_mode_flag_bit_1();
    gui_utf_draw(0,param_2,0,param_4,iVar4,param_6,param_7 + 0x1b,param_8,param_9,0,0,0);
    set_work_mode_flag_bit_1();
    iVar2 = 0;
    do {
      local_4c[0] = 3;
      local_4c[1] = 6;
      local_4c[2] = 9;
      local_4c[3] = 0xc;
      local_4c[4] = 0xf;
      local_4c[5] = 0x12;
      local_4c[6] = 0x15;
      local_4c[7] = 0x18;
      local_4c[8] = 0x1b;
      iVar3 = get_work_mode();
      uVar5 = *(undefined4 *)(iVar3 + 0xeb4);
      iVar3 = get_work_mode();
      puVar1 = local_4c + iVar2;
      iVar2 = iVar2 + 1;
      _reflash_fb_data_to_lcd_ex
                (uVar5,*(undefined4 *)(iVar3 + 0xeb8),param_4,param_5,param_6,param_7,*puVar1);
    } while (iVar2 != 9);
    draw_bitmap_with_extended_parameters_alt
              (MAIN_FRAMEBUFFER,param_4,param_5,param_4,iVar4,0x1b,param_6 - param_4);
    iVar2 = get_display_config_flags();
    param_5 = param_7;
  }
  else {
    iVar2 = get_ui_y_offset();
    if (iVar2 < 0x21) {
      return;
    }
    draw_bitmap_with_extended_parameters_alt
              (MAIN_FRAMEBUFFER,param_4,param_5 + -0x1b,param_4,param_5,0x1b,param_6 - param_4);
    iVar2 = get_display_config_flags();
    if (iVar2 << 0x1e < 0) {
      _clean_fb_data(MAIN_FRAMEBUFFER,0,param_4,param_5,param_6,param_7);
    }
    clear_work_mode_flag_bit_1();
    gui_utf_draw(0,param_2,0,param_4,param_5,param_6,param_7,param_8,param_9,0,0,0);
    set_work_mode_flag_bit_1();
    iVar2 = 0;
    do {
      local_4c[0] = 0xffffffe5;
      local_4c[1] = 0xffffffeb;
      local_4c[2] = 0xffffffee;
      local_4c[3] = 0xfffffff1;
      local_4c[4] = 0xfffffff4;
      local_4c[5] = 0xfffffff7;
      local_4c[6] = 0xfffffffa;
      local_4c[7] = 0xfffffffd;
      local_4c[8] = 0;
      iVar4 = get_work_mode();
      uVar5 = *(undefined4 *)(iVar4 + 0xeb4);
      iVar4 = get_work_mode();
      puVar1 = local_4c + iVar2;
      iVar2 = iVar2 + 1;
      _reflash_fb_data_to_lcd_ex
                (uVar5,*(undefined4 *)(iVar4 + 0xeb8),param_4,param_5,param_6,param_7,*puVar1);
    } while (iVar2 != 9);
    iVar2 = get_display_config_flags();
  }
  if (-1 < iVar2 << 0x1e) {
    return;
  }
  _clean_fb_data(MAIN_FRAMEBUFFER,0,param_4,param_5);
  return;
}


