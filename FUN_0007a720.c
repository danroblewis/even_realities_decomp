/*
 * Function: FUN_0007a720
 * Entry:    0007a720
 * Prototype: undefined FUN_0007a720(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6)
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_0007a720(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,int param_6,
                int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_54;
  uint local_50;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_7 == 0) {
    local_50 = *(uint *)(param_2 + 0x10);
  }
  else {
    local_50 = _DAT_00ff0c0c;
    if (_DAT_00ff0c0c == 0xffffffff) {
      local_50 = 0x210;
    }
  }
  *param_4 = param_6;
  *param_5 = 0;
  if (param_3 == 0) {
    iVar1 = FUN_0007a50c(param_1,param_2,1,&local_48,param_7);
    if (iVar1 != 0) goto LAB_0007a802;
  }
  else {
    if ((*(int *)(param_2 + 0x24) != _DAT_50845130) || (_DAT_50845138 != 10)) {
      iVar1 = 0xf10c30;
      goto LAB_0007a802;
    }
    local_48 = (uint)*(byte *)((int)param_1 + 3);
  }
  param_6 = param_6 + 8;
  local_54 = 4;
  uVar5 = local_50 % 6;
  do {
    *param_5 = local_50;
    if (local_50 == 0) {
LAB_0007a954:
      iVar1 = FUN_0007a63c(param_6,local_50,*(undefined4 *)(param_2 + 0x14));
      if ((iVar1 == 0) &&
         (iVar1 = FUN_0007a6a0(param_6,local_50,*(undefined4 *)(param_2 + 0x18),0x400), iVar1 == 0))
      break;
      *param_5 = 0;
    }
    else {
      uVar3 = 0;
      FUN_0007b10c();
      iVar4 = param_6;
      uVar2 = local_50;
      if (param_1 != (uint *)0x0) {
        while (param_2 != 0) {
          local_44 = 0;
          if (local_48 == 0) {
            iVar1 = 0xf10c31;
            goto LAB_0007a7ba;
          }
          iVar1 = FUN_0007b0ec(param_2,&local_48);
          if ((iVar1 != 0) || (iVar1 = FUN_0007b0b8(local_48,param_2), iVar1 != 0))
          goto LAB_0007a7ba;
          if (local_48 == 8) {
            _DAT_5084510c = 3;
          }
          else if (local_48 == 4) {
            _DAT_5084510c = 2;
          }
          else {
            _DAT_5084510c = (uint)(local_48 == 2);
          }
          _DAT_50845140 = 1;
          _DAT_508451c4 = 1;
          _DAT_50845130 = *(int *)(param_2 + 0x24);
          _DAT_5084512c = 0;
          _DAT_50845108 = 0xffffffff;
          _DAT_50845100 = 0xffffffe4;
          FUN_0007a2ac(_DAT_50845a04 | 0x400);
          _DAT_50845138 = 10;
          _DAT_508451d8 =
               *(int *)(param_2 + 0x24) * (*(uint *)(param_2 + 0x10) / 0x18) * 0x18000 >> 6;
          _DAT_5084512c = 1;
          *param_1 = local_48 << 8 | local_48 << 0x18 | *param_1 & 0xffffff;
          iVar1 = FUN_0007b098(&local_44);
          if ((local_44 & 0x1a) != 0 || iVar1 != 0) goto LAB_0007a7c0;
          local_40 = _DAT_50845114;
          local_3c = _DAT_50845118;
          local_38 = _DAT_5084511c;
          local_34 = _DAT_50845120;
          local_30 = _DAT_50845124;
          local_2c = _DAT_50845128;
          if ((uVar3 == uVar2 / 6) && (uVar5 != 0)) {
            uVar2 = uVar2 - uVar5;
            copy_memory_safe(iVar4,&local_40,uVar5);
            iVar4 = iVar4 + uVar5;
          }
          else {
            uVar2 = uVar2 - 0x18;
            copy_memory_safe(iVar4,&local_40,0x18);
            iVar4 = iVar4 + 0x18;
          }
          if (uVar2 == 0) goto LAB_0007a954;
          uVar3 = uVar3 + 1;
          FUN_0007b10c();
        }
      }
      local_44 = 0;
      iVar1 = 0xf10c35;
    }
LAB_0007a7ba:
    if (iVar1 == 0xf10c02) goto LAB_0007a802;
LAB_0007a7c0:
    if (local_48 == 8) {
LAB_0007a988:
      iVar1 = 0xf10c32;
      goto LAB_0007a802;
    }
    local_48 = local_48 << 1;
    iVar1 = FUN_0007a50c(param_1,param_2,0,&local_48,0);
    if (iVar1 == 0xf10c31) {
      if (*(int *)(param_2 + 0x20) != 0) goto LAB_0007a988;
      goto LAB_0007a802;
    }
    if (iVar1 != 0) goto LAB_0007a802;
    *param_1 = *param_1 >> 8 & 0xff0000 | *param_1 & 0xffffff;
    local_54 = local_54 + -1;
  } while (local_54 != 0);
  iVar1 = 0;
LAB_0007a802:
  FUN_0007b10c();
  return iVar1;
}


