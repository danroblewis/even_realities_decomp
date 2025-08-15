/*
 * Function: gui_bmp_dynamic_bitmap_draw
 * Entry:    0004334c
 * Prototype: undefined gui_bmp_dynamic_bitmap_draw(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined1 param_7)
 */


undefined4 gui_bmp_dynamic_bitmap_draw(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte in_stack_00000008;
  byte local_2d;
  int local_2c;
  int local_28;
  int local_24 [2];
  
  local_2c = 0;
  local_28 = 0;
  local_24[0] = 0;
  iVar1 = _012_resource_manger_get(5,param_1,&local_2c,&local_28,local_24,&local_2d);
  if (iVar1 < 0) {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): can\'t find resource,please check resource name !\n",
                    "gui_bmp_dynamic_bitmap_draw");
      }
      else {
        handle_heartbeat();
      }
    }
    uVar2 = 0xffffffff;
  }
  else {
    ANIM_FRAME_COUNTER = (ushort)local_2d;
    uVar3 = get_display_config_flags();
    if ((uVar3 & 2) != 0) {
      _clean_fb_data(MAIN_FRAMEBUFFER,0,param_2,param_3,local_2c + param_2,local_28 + param_3);
    }
    draw_bitmap_to_framebuffer
              (MAIN_FRAMEBUFFER,
               local_28 * ((int)(local_2c * (uint)ANIM_FRAME_IDX) / 2) + local_24[0],local_2c / 2,
               local_28,param_2,param_3);
    iVar1 = get_display_config_flags();
    if (iVar1 << 0x1e < 0) {
      iVar1 = get_work_mode();
      uVar2 = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      _reflash_fb_data_to_lcd
                (uVar2,*(undefined4 *)(iVar1 + 0xeb8),param_2,param_3,local_2c + param_2,
                 local_28 + param_3);
    }
    if ((((int)(uint)ANIM_FRAME_IDX < (int)(ANIM_FRAME_COUNTER - 1)) || (in_stack_00000008 == 0)) ||
       ((int)(uint)ANIM_FRAME_ROW_IDX < (int)(in_stack_00000008 - 1))) {
      ANIM_FRAME_IDX = ANIM_FRAME_IDX + 1;
    }
    if ((uint)ANIM_FRAME_COUNTER <= (uint)ANIM_FRAME_IDX) {
      ANIM_FRAME_IDX = 0;
      ANIM_FRAME_ROW_IDX = ANIM_FRAME_ROW_IDX + 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}


