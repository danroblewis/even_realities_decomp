/*
 * Function: gui_verticalLine_process_bar
 * Entry:    0004396c
 * Prototype: undefined gui_verticalLine_process_bar(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined1 param_6)
 */


undefined4
gui_verticalLine_process_bar
          (uint param_1,int param_2,uint param_3,int param_4,undefined4 param_5,byte param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  
  if ((param_1 == param_3) && (param_2 <= param_4)) {
    uVar4 = (uint)param_6;
    if ((param_1 & 1) == 0) {
      uVar5 = 0xf0;
    }
    else {
      uVar5 = 0xf;
    }
    if (99 < uVar4) {
      uVar4 = 100;
    }
    uVar6 = get_display_config_flags();
    if ((uVar6 & 2) != 0) {
      _clean_fb_data(MAIN_FRAMEBUFFER,0,param_1 - 6,(int)(uVar6 >> 0x20),param_1 + 6,param_4);
    }
    piVar3 = (int *)(MAIN_FRAMEBUFFER + param_2 * 4);
    for (iVar2 = 0; iVar2 < param_4 - param_2; iVar2 = iVar2 + 1) {
      *(undefined1 *)(*piVar3 + (int)param_1 / 2) = uVar5;
      piVar3 = piVar3 + 1;
    }
    iVar2 = get_display_config_flags();
    if (iVar2 << 0x1e < 0) {
      iVar2 = get_work_mode();
      uVar1 = *(undefined4 *)(iVar2 + 0xeb4);
      iVar2 = get_work_mode();
      _reflash_fb_data_to_lcd
                (uVar1,*(undefined4 *)(iVar2 + 0xeb8),param_1 - 6,param_2 + -0xe,param_3 + 6,
                 param_4 + 0xe);
    }
    uVar1 = 0;
    gui_bmp_bitmap_draw(0x17,param_1 - 4,(int)(uVar4 * ((param_4 - param_2) + -0xd)) / 100 + param_2
                        ,0,0,0);
  }
  else {
    if (1 < LOG_LEVEL) {
      if (IS_DEBUG == 0) {
        DEBUG_PRINT("%s(): input param error,please check postion content\n",
                    "gui_verticalLine_process_bar",param_3,0,param_1,param_2,param_3);
      }
      else {
        handle_heartbeat();
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


