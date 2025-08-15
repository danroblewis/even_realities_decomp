/*
 * Function: gui_bmp_bitmap_draw_ex
 * Entry:    000435d4
 * Prototype: undefined gui_bmp_bitmap_draw_ex(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined1 param_5)
 */


undefined4
gui_bmp_bitmap_draw_ex(undefined4 param_1,int param_2,int param_3,int param_4,byte param_5)

{
  char *format_string;
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  if (param_5 == 0) {
    if (LOG_LEVEL < 2) {
      return 0xffffffff;
    }
    format_string = "%s(): dark light value parampter error,exit!\n";
  }
  else {
    iVar1 = _012_resource_manger_get(4,param_1,&local_24,&local_20,&local_1c,0);
    if (-1 < iVar1) {
      iVar1 = local_20 * (local_24 / 2);
      memcpy(param_4,local_1c,iVar1);
      pbVar3 = (byte *)(param_4 + -1);
      while (iVar1 - (int)(pbVar3 + (1 - param_4)) != 0 && (int)(pbVar3 + (1 - param_4)) <= iVar1) {
        pbVar3 = pbVar3 + 1;
        if (*pbVar3 != 0) {
          *pbVar3 = *pbVar3 & param_5;
        }
      }
      uVar2 = get_display_config_flags();
      if ((uVar2 & 2) != 0) {
        _clean_fb_data(MAIN_FRAMEBUFFER,0,param_2,param_3,local_24 + 2 + param_2,local_20 + param_3)
        ;
      }
      draw_4bit_bitmap_to_framebuffer
                (MAIN_FRAMEBUFFER,param_4,local_24 / 2,local_20,param_2,param_3);
      iVar1 = get_display_config_flags();
      if (iVar1 << 0x1e < 0) {
        iVar1 = get_work_mode();
        uVar4 = *(undefined4 *)(iVar1 + 0xeb4);
        iVar1 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar4,*(undefined4 *)(iVar1 + 0xeb8),param_2,param_3,local_24 + 2 + param_2,
                   local_20 + param_3);
      }
      return 0;
    }
    if (LOG_LEVEL < 2) {
      return 0xffffffff;
    }
    format_string = "%s(): can\'t find resource,please check resource name !\n";
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"gui_bmp_bitmap_draw_ex");
  }
  else {
    handle_heartbeat();
  }
  return 0xffffffff;
}


