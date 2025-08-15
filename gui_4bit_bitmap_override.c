/*
 * Function: gui_4bit_bitmap_override
 * Entry:    00043d78
 * Prototype: undefined __stdcall gui_4bit_bitmap_override(undefined4 bitmap_id, undefined4 x_pos, undefined4 y_pos)
 */


undefined4 gui_4bit_bitmap_override(undefined4 bitmap_id,uint x_pos,uint y_pos)

{
  int iVar1;
  undefined4 uVar2;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if ((x_pos < 0x281) && (y_pos < 0x1e1)) {
    iVar1 = _012_resource_manger_get(4,bitmap_id,&local_1c,&local_18,&local_14,0);
    if (-1 < iVar1) {
      draw_bitmap_with_extended_parameters(MAIN_FRAMEBUFFER,local_14,local_1c,local_18,x_pos,y_pos);
      iVar1 = get_display_config_flags();
      if (iVar1 << 0x1e < 0) {
        iVar1 = get_work_mode();
        uVar2 = *(undefined4 *)(iVar1 + 0xeb4);
        iVar1 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar2,*(undefined4 *)(iVar1 + 0xeb8),x_pos,y_pos,local_1c + x_pos,
                   local_18 + y_pos);
      }
      return 0;
    }
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): can\'t find resource,please check resource name !\n",
                    "gui_4bit_bitmap_override");
      }
      else {
        handle_heartbeat();
      }
    }
  }
  else if (0 < LOG_LEVEL) {
    if (IS_DEBUG == 0) {
      DEBUG_PRINT("%s(): gui_4bit_bitmap_override parampter overstep!!! stop draw bitmap !!! x= %d,y= %d\n"
                  ,"gui_4bit_bitmap_override",x_pos,y_pos);
    }
    else {
      handle_heartbeat("%s(): gui_4bit_bitmap_override parampter overstep!!! stop draw bitmap !!! x= %d,y= %d\n"
                       ,"gui_4bit_bitmap_override",x_pos,y_pos);
    }
  }
  return 0xffffffff;
}


