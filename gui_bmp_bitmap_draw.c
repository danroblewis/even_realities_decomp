/*
 * Function: gui_bmp_bitmap_draw
 * Entry:    00043484
 * Prototype: undefined __stdcall gui_bmp_bitmap_draw(undefined4 bitmap_id, undefined4 x_pos, undefined4 y_pos, int param_4, undefined4 param_height, undefined4 param_width)
 */


undefined4
gui_bmp_bitmap_draw(uint bitmap_id,int x_pos,int y_pos,int param_4,int param_height,int param_width)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 framebuffer_addr;
  ulonglong display_config;
  undefined4 bitmap_data;
  int bitmap_width;
  int bitmap_height;
  
  if (((param_4 == 0) && (param_height == 0)) && (param_width == 0)) {
    bitmap_width = param_width;
    bitmap_height = param_width;
    if (bitmap_id - 0x16 < 0x67) {
      iVar1 = _012_resource_manger_get(4,bitmap_id,&bitmap_width,&bitmap_height,&bitmap_data,0);
      if (iVar1 < 0) {
        if (1 < LOG_LEVEL) {
          if (IS_DEBUG == 0) {
            DEBUG_PRINT("%s(): can\'t find resource,please check resource name !\n",
                        "gui_bmp_bitmap_draw");
          }
          else {
            handle_heartbeat();
          }
        }
        return 0xffffffff;
      }
      uVar2 = get_display_config_flags();
      if ((uVar2 & 2) != 0) {
        _clean_fb_data(MAIN_FRAMEBUFFER,0,x_pos,y_pos,bitmap_width + 2 + x_pos,bitmap_height + y_pos
                      );
      }
      draw_bitmap_to_framebuffer
                (MAIN_FRAMEBUFFER,bitmap_data,bitmap_width / 2,bitmap_height,x_pos,y_pos);
      iVar1 = get_display_config_flags();
      if (-1 < iVar1 << 0x1e) {
        return 0;
      }
      iVar1 = get_work_mode();
      framebuffer_addr = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      iVar3 = bitmap_height + y_pos;
      iVar4 = bitmap_width + 2 + x_pos;
    }
    else {
      display_config = get_display_config_flags();
      iVar1 = (int)(display_config >> 0x20);
      if ((display_config & 2) != 0) {
        _clean_fb_data(MAIN_FRAMEBUFFER,0,iVar1,y_pos,iVar1 + 0x18,y_pos + 0x18);
      }
      bitmap_data = get_bitmap_data_by_index(bitmap_id & 0xff,0x120);
      draw_bitmap_to_framebuffer(MAIN_FRAMEBUFFER,bitmap_data,0xc,0x18,x_pos,y_pos);
      iVar1 = get_display_config_flags();
      if (-1 < iVar1 << 0x1e) {
        return 0;
      }
      iVar1 = get_work_mode();
      framebuffer_addr = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      iVar3 = y_pos + 0x18;
      iVar4 = x_pos + 0x18;
    }
    _reflash_fb_data_to_lcd(framebuffer_addr,*(undefined4 *)(iVar1 + 0xeb8),x_pos,y_pos,iVar4,iVar3)
    ;
  }
  return 0;
}


