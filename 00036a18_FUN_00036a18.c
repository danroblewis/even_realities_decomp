/*
 * Function: FUN_00036a18
 * Entry:    00036a18
 * Prototype: undefined FUN_00036a18()
 */


undefined4 FUN_00036a18(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_18;
  int local_14;
  
  local_18 = param_3;
  local_14 = param_4;
  if (param_3 == 2) {
    gui_screen_clear();
    DAT_200024e4 = 0xffffffff;
    DAT_200024e0 = 0xffffffff;
    DAT_200033d4 = -1;
  }
  else {
    if (DAT_2001b811 == '\0') {
      iVar1 = get_work_mode();
      if ((*(ushort *)(iVar1 + 0x1072) == DAT_200024e4) &&
         (iVar1 = get_work_mode(), *(ushort *)(iVar1 + 0x1074) == DAT_200024e0)) {
        return 0;
      }
      gui_screen_clear();
      iVar1 = get_work_mode();
      DAT_200024e4 = (uint)*(ushort *)(iVar1 + 0x1072);
      iVar1 = get_work_mode();
      DAT_200024e0 = (uint)*(ushort *)(iVar1 + 0x1074);
      uVar2 = FUN_00047a84(0,&local_18,&local_14);
      FUN_0007d53a(param_1 + 0x24,uVar2,local_18 / 2,local_14,DAT_200024e4,DAT_200024e0);
      iVar1 = get_work_mode();
      uVar2 = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      iVar3 = local_14 + DAT_200024e0;
      iVar4 = local_18 + DAT_200024e4;
      uVar5 = *(undefined4 *)(iVar1 + 0xeb8);
    }
    else {
      if (DAT_200033d4 == DAT_2001b810) {
        return 0;
      }
      DAT_200033d4 = DAT_2001b810;
      gui_screen_clear();
      DAT_200024e4 = 0;
      DAT_200024e0 = 0;
      FUN_00047a84(0,&local_18,&local_14);
      FUN_00036820(DAT_2001b810);
      iVar1 = get_work_mode();
      uVar2 = *(undefined4 *)(iVar1 + 0xeb4);
      iVar1 = get_work_mode();
      iVar3 = local_14 + DAT_200024e0;
      iVar4 = local_18 + DAT_200024e4;
      uVar5 = *(undefined4 *)(iVar1 + 0xeb8);
    }
    _reflash_fb_data_to_lcd(uVar2,uVar5,DAT_200024e4,DAT_200024e0,iVar4,iVar3);
  }
  return 0;
}


