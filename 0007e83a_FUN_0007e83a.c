/*
 * Function: FUN_0007e83a
 * Entry:    0007e83a
 * Prototype: undefined FUN_0007e83a()
 */


int FUN_0007e83a(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int extraout_r2;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_6c;
  uint local_68;
  uint local_64;
  char acStack_60 [2];
  ushort local_5e;
  short local_58;
  ushort local_56;
  ushort local_54;
  short local_50 [4];
  undefined1 auStack_48 [36];
  
  iVar3 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8);
  local_6c = *(uint *)(param_1 + 4) & 0xffff0000;
  FUN_0007e55a(param_1,&local_6c);
  uVar1 = local_6c;
  uVar8 = (*(ushort *)(param_1 + 0xc) + local_6c) - iVar3;
  local_68 = uVar8;
  iVar4 = FUN_0007e53e(param_1,uVar8,acStack_60,8);
  if (iVar4 < 0) {
    return iVar4;
  }
  iVar4 = 0;
  pcVar7 = acStack_60;
  while (*(char *)(*(int *)(param_1 + 0x2c) + 4) == *pcVar7) {
    iVar4 = iVar4 + 1;
    pcVar7 = pcVar7 + 1;
    if (iVar4 == 8) goto LAB_0007e892;
  }
  iVar4 = FUN_0007e6a6(param_1,acStack_60);
  if (iVar4 == 0) {
    iVar4 = FUN_0004c4e4(param_1,&local_68);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  else {
    local_68 = (uVar8 & 0xffff0000) + (uint)local_5e;
  }
  do {
    uVar2 = local_68;
    iVar4 = FUN_0007e6e2(param_1,&local_68,&local_58);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_0007e672(param_1,&local_58);
    if (iVar4 != 0) {
      local_64 = *(uint *)(param_1 + 4);
      do {
        uVar9 = local_64;
        iVar4 = FUN_0007e6e2(param_1,&local_64,local_50);
        if (iVar4 != 0) {
          return iVar4;
        }
      } while (((local_50[0] != local_58) || (iVar4 = FUN_0007e672(param_1,local_50), iVar4 == 0))
              && (*(uint *)(param_1 + 4) != local_64));
      if ((uVar9 == uVar2) && (local_54 != 0)) {
        iVar4 = (uint)local_56 + (uVar2 & 0xffff0000);
        local_56 = (ushort)*(undefined4 *)(param_1 + 8);
        FUN_0007e5c8(&local_58);
        uVar9 = -**(int **)(param_1 + 0x2c) & 0x20;
        for (uVar11 = (uint)local_54; uVar11 != 0; uVar11 = uVar11 - uVar10) {
          uVar10 = uVar9;
          if (uVar11 <= uVar9) {
            uVar10 = uVar11;
          }
          iVar5 = FUN_0007e53e(param_1,iVar4,auStack_48,uVar10);
          if (iVar5 != 0) {
            return iVar5;
          }
          uVar6 = FUN_0007e776(param_1,*(undefined4 *)(param_1 + 8),auStack_48,uVar10);
          iVar5 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),uVar10,uVar6);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar5;
          if (extraout_r2 != 0) {
            return extraout_r2;
          }
          iVar4 = iVar4 + uVar10;
        }
        iVar4 = FUN_0007e7ea(param_1,&local_58);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
    }
  } while (uVar2 != uVar8 - iVar3);
LAB_0007e892:
  if ((*(uint *)(param_1 + 4) < (uint)(*(int *)(param_1 + 8) + iVar3)) ||
     (iVar3 = FUN_0007e80c(param_1), iVar3 == 0)) {
    iVar3 = FUN_0007e624(param_1,uVar1);
  }
  return iVar3;
}


