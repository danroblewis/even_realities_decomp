/*
 * Function: gui_bitmap_draw
 * Entry:    00043a68
 * Prototype: undefined gui_bitmap_draw(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined1 param_6)
 */


undefined4
gui_bitmap_draw(uint param_1,int param_2,int param_3,int param_4,int param_5,byte param_6)

{
  uint uVar1;
  byte bVar2;
  char *format_string;
  byte bVar3;
  int extraout_r2;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 local_2c [2];
  
  if (((param_3 < (int)param_1) || (param_4 < param_2)) || (0xf < param_6)) {
    if (LOG_LEVEL < 2) {
      return 0xffffffff;
    }
    format_string = "%s(): input param error,please check postion content\n";
  }
  else {
    if ((param_1 & 1) == 0) {
      uVar12 = get_display_config_flags();
      if ((uVar12 & 2) != 0) {
        _clean_fb_data(MAIN_FRAMEBUFFER,0,param_1 - 2,(int)(uVar12 >> 0x20),extraout_r2 + 2,param_4)
        ;
      }
      uVar1 = (int)(param_3 - param_1) >> 3;
      iVar6 = MAIN_FRAMEBUFFER + param_2 * 4;
      iVar11 = 0;
      for (iVar7 = 0; iVar7 < param_4 - param_2; iVar7 = iVar7 + 1) {
        pbVar9 = (byte *)(param_5 + iVar11);
        for (iVar4 = 0; iVar4 < (int)uVar1; iVar4 = iVar4 + 1) {
          bVar2 = *pbVar9;
          bVar3 = 0;
          local_2c[0] = 0;
          uVar5 = 0;
          do {
            if (((int)(uint)bVar2 >> (uVar5 & 0xff) & 1U) != 0) {
              if ((int)(uVar5 << 0x1f) < 0) {
                bVar3 = bVar3 | param_6;
              }
              else {
                bVar3 = bVar3 | param_6 << 4;
              }
            }
            uVar10 = uVar5 + 1;
            if ((uVar10 & 1) == 0) {
              *(byte *)((int)local_2c + ((int)uVar5 >> 1)) = bVar3;
              bVar3 = 0;
            }
            uVar5 = uVar10;
          } while (uVar10 != 8);
          *(undefined4 *)(*(int *)(iVar6 + iVar7 * 4) + iVar4 * 4 + (int)param_1 / 2) = local_2c[0];
          pbVar9 = pbVar9 + 1;
        }
        iVar11 = iVar11 + (uVar1 & ~((int)(param_3 - param_1) >> 0x1f));
      }
      iVar6 = get_display_config_flags();
      if (iVar6 << 0x1e < 0) {
        iVar6 = get_work_mode();
        uVar8 = *(undefined4 *)(iVar6 + 0xeb4);
        iVar6 = get_work_mode();
        _reflash_fb_data_to_lcd
                  (uVar8,*(undefined4 *)(iVar6 + 0xeb8),param_1 - 2,param_2,param_3 + 2,param_4);
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
    DEBUG_PRINT(format_string,"gui_bitmap_draw");
  }
  else {
    handle_heartbeat();
  }
  return 0xffffffff;
}


