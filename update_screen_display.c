/*
 * Function: update_screen_display
 * Entry:    00036a18
 * Prototype: undefined __stdcall update_screen_display(undefined4 framebuffer_ptr, undefined4 mode, undefined4 screen_width, undefined4 screen_height)
 */


undefined4
update_screen_display(int framebuffer_ptr,undefined4 param_2,int screen_width,int screen_height)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_18;
  int local_14;
  
  local_18 = screen_width;
  local_14 = screen_height;
  if (screen_width == 2) {
    gui_screen_clear();
    CURRENT_DISPLAY_X = 0xffffffff;
    CURRENT_DISPLAY_Y = 0xffffffff;
    LAST_WORK_MODE_ID = -1;
  }
  else {
    if (DISPLAY_UPDATE_FLAG == '\0') {
      iVar1 = get_work_mode();
      if ((*(ushort *)(iVar1 + 0x1072) == CURRENT_DISPLAY_X) &&
         (iVar1 = get_work_mode(), *(ushort *)(iVar1 + 0x1074) == CURRENT_DISPLAY_Y)) {
        return 0;
      }
      gui_screen_clear();
      iVar1 = get_work_mode();
      CURRENT_DISPLAY_X = (uint)*(ushort *)(iVar1 + 0x1072);
      iVar1 = get_work_mode();
      CURRENT_DISPLAY_Y = (uint)*(ushort *)(iVar1 + 0x1074);
      uVar2 = get_display_dimensions_and_bitmap(0,&local_18,&local_14);
      draw_4bit_bitmap_to_framebuffer
                (framebuffer_ptr + 0x24,uVar2,local_18 / 2,local_14,CURRENT_DISPLAY_X,
                 CURRENT_DISPLAY_Y);
      iVar1 = get_work_mode();
      uVar2 = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      iVar3 = local_14 + CURRENT_DISPLAY_Y;
      iVar4 = local_18 + CURRENT_DISPLAY_X;
      uVar5 = *(undefined4 *)(iVar1 + 0xeb8);
    }
    else {
      if (LAST_WORK_MODE_ID == CURRENT_WORK_MODE_ID) {
        return 0;
      }
      LAST_WORK_MODE_ID = CURRENT_WORK_MODE_ID;
      gui_screen_clear();
      CURRENT_DISPLAY_X = 0;
      CURRENT_DISPLAY_Y = 0;
      get_display_dimensions_and_bitmap(0,&local_18,&local_14);
      load_bmp_image_from_flash(CURRENT_WORK_MODE_ID);
      iVar1 = get_work_mode();
      uVar2 = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      iVar3 = local_14 + CURRENT_DISPLAY_Y;
      iVar4 = local_18 + CURRENT_DISPLAY_X;
      uVar5 = *(undefined4 *)(iVar1 + 0xeb8);
    }
    _reflash_fb_data_to_lcd(uVar2,uVar5,CURRENT_DISPLAY_X,CURRENT_DISPLAY_Y,iVar4,iVar3);
  }
  return 0;
}


