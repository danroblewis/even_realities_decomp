/*
 * Function: gui_bitmps_merge_draw
 * Entry:    00043bd8
 * Prototype: undefined __stdcall gui_bitmps_merge_draw(undefined4 x_start, undefined4 y_start, undefined4 x_end, undefined4 y_end, undefined4 param_5, undefined4 param_6, undefined1 flag1, undefined1 flag2)
 */


undefined4
gui_bitmps_merge_draw
          (uint x_start,int y_start,int x_end,int y_end,int param_5,int param_6,byte flag1,
          byte flag2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char *format_string;
  undefined4 extraout_r2;
  int i;
  uint uVar4;
  int iVar5;
  int j;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  byte *local_5c;
  undefined4 local_2c [2];
  
  if (((x_end < (int)x_start) || (y_end < y_start)) || (0xf < (flag1 | flag2))) {
    if (LOG_LEVEL < 2) {
      return 0xffffffff;
    }
    format_string = "%s(): input param error,please check postion content\n";
  }
  else {
    if ((x_start & 1) == 0) {
      uVar11 = get_display_config_flags();
      if ((int)uVar11 << 0x1e < 0) {
        _clean_fb_data(MAIN_FRAMEBUFFER,0,x_start,(int)((ulonglong)uVar11 >> 0x20),extraout_r2,y_end
                      );
      }
      iVar9 = 0;
      uVar4 = (int)(x_end - x_start) >> 3;
      iVar5 = MAIN_FRAMEBUFFER + y_start * 4;
      for (i = 0; i < y_end - y_start; i = i + 1) {
        pbVar8 = (byte *)(param_6 + iVar9);
        local_5c = (byte *)(param_5 + iVar9);
        for (j = 0; j < (int)uVar4; j = j + 1) {
          bVar1 = *local_5c;
          bVar2 = *pbVar8;
          bVar3 = 0;
          local_2c[0] = 0;
          uVar6 = 0;
          do {
            if (((int)(uint)bVar1 >> (uVar6 & 0xff) & 1U) != 0) {
              if ((int)(uVar6 << 0x1f) < 0) {
                bVar3 = bVar3 | flag1;
              }
              else {
                bVar3 = bVar3 | flag1 << 4;
              }
            }
            if (((int)(uint)bVar2 >> (uVar6 & 0xff) & 1U) != 0) {
              if ((int)(uVar6 << 0x1f) < 0) {
                bVar3 = bVar3 | flag2;
              }
              else {
                bVar3 = bVar3 | flag2 << 4;
              }
            }
            uVar10 = uVar6 + 1;
            if ((uVar10 & 1) == 0) {
              *(byte *)((int)local_2c + ((int)uVar6 >> 1)) = bVar3;
              bVar3 = 0;
            }
            uVar6 = uVar10;
          } while (uVar10 != 8);
          *(undefined4 *)(*(int *)(iVar5 + i * 4) + j * 4 + (int)x_start / 2) = local_2c[0];
          pbVar8 = pbVar8 + 1;
          local_5c = local_5c + 1;
        }
        iVar9 = iVar9 + (uVar4 & ~((int)(x_end - x_start) >> 0x1f));
      }
      i = get_display_config_flags();
      if (i << 0x1e < 0) {
        i = get_work_mode();
        uVar7 = *(undefined4 *)(i + 0xeb4);
        i = get_work_mode();
        _reflash_fb_data_to_lcd(uVar7,*(undefined4 *)(i + 0xeb8),x_start,y_start,x_end,y_end);
        return 0;
      }
      return 0;
    }
    if (LOG_LEVEL < 2) {
      return 0xffffffff;
    }
    format_string =
         "%s(): Scenarios where the starting point of x is an even number are not currently supported.\n"
    ;
  }
  if (IS_DEBUG == 0) {
    DEBUG_PRINT(format_string,"gui_bitmps_merge_draw");
  }
  else {
    handle_heartbeat();
  }
  return 0xffffffff;
}


