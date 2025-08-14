/*
 * Function: FUN_00035f28
 * Entry:    00035f28
 * Prototype: undefined FUN_00035f28()
 */


void FUN_00035f28(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char *format_string;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte local_30 [12];
  
  if (param_3 == 0) {
    uVar2 = 0x152;
    format_string = "[%s-%d]curMsg is NULL !\n";
  }
  else {
    if (param_1 != 0) {
      FUN_000432ec();
      iVar5 = 0;
      do {
        FUN_00035afc(param_2,param_3);
        uVar4 = 0;
        do {
          iVar3 = 0;
          do {
            iVar6 = *(int *)(param_1 + uVar4 * 4);
            local_30[0] = 1;
            local_30[1] = 3;
            local_30[2] = 5;
            local_30[3] = 7;
            local_30[4] = 7;
            local_30[5] = 7;
            local_30[6] = 7;
            local_30[7] = 7;
            bVar1 = *(byte *)(iVar6 + iVar3);
            if (bVar1 != 0) {
              *(byte *)(iVar6 + iVar3) =
                   bVar1 & (&DAT_000aae20)
                           [iVar3 + (uint)local_30[iVar5] * 0x140 + (uVar4 % 0x1a) * 0xa00];
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x140);
          uVar4 = uVar4 + 1;
        } while (uVar4 != 199);
        get_schedule_timing(0xa4,0);
        iVar3 = get_work_mode();
        uVar2 = *(undefined4 *)(iVar3 + 0xeb4);
        iVar3 = get_work_mode();
        iVar5 = iVar5 + 1;
        _reflash_fb_data_to_lcd(uVar2,*(undefined4 *)(iVar3 + 0xeb8),0,0,0x280,199);
      } while (iVar5 != 8);
      FUN_000432d0();
      return;
    }
    uVar2 = 0x157;
    format_string = "[%s-%d]fb is NULL !\n";
  }
  if (IS_DEBUG != 0) {
    handle_heartbeat();
    return;
  }
  DEBUG_PRINT(format_string,"draw_particle_effects",uVar2);
  return;
}


