/*
 * Function: FUN_00086064
 * Entry:    00086064
 * Prototype: undefined FUN_00086064()
 */


int FUN_00086064(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  uint uVar9;
  byte **ppbVar10;
  bool bVar11;
  undefined1 auStack_3c [4];
  uint local_38;
  uint local_34;
  byte *local_30 [2];
  uint local_28;
  byte *local_24;
  undefined1 local_20;
  
  if (param_2 != 0) {
    uVar5 = 0xe;
    goto LAB_0008606e;
  }
  iVar2 = FUN_00085d82();
  if (iVar2 == 0) {
    return 0;
  }
  local_38 = 0;
  local_34 = 0;
  bVar1 = *(byte *)*param_1;
  ppbVar10 = local_30;
  puVar7 = param_1;
  do {
    pbVar3 = (byte *)*puVar7;
    pbVar6 = (byte *)puVar7[1];
    puVar7 = puVar7 + 2;
    *ppbVar10 = pbVar3;
    ppbVar10[1] = pbVar6;
    ppbVar10 = ppbVar10 + 2;
  } while (puVar7 != param_1 + 6);
  while( true ) {
    uVar9 = (uint)(bVar1 >> 5);
    if (uVar9 != 6) break;
    iVar4 = FUN_0008603c(local_30,auStack_3c);
    if (iVar4 == 0) {
      return 0;
    }
    if (local_24 <= local_30[0]) goto LAB_0008610e;
    bVar1 = *local_30[0];
  }
  if ((bVar1 & 0x1f) == 0x1f) {
    if (uVar9 - 4 < 2) {
      iVar4 = iVar2;
      if (uVar9 != 4) {
        bVar8 = true;
LAB_00086146:
        local_20 = (undefined1)iVar4;
        if (local_34 != 0 || local_34 < (0x7fffffff < local_38)) {
          uVar5 = 5;
          goto LAB_0008606e;
        }
        bVar11 = CARRY4(local_38,local_38);
        local_38 = local_38 * 2;
        local_34 = local_34 * 2 + (uint)bVar11;
        if (!bVar8) goto LAB_00086162;
      }
      local_20 = (undefined1)iVar4;
      bVar8 = true;
      local_30[0] = local_30[0] + 1;
      local_38 = 0xffffffef;
      local_34 = 0;
LAB_00086162:
      local_28 = local_38;
      while (iVar4 = FUN_00085d36(local_30), iVar4 == 0) {
        iVar4 = FUN_00086064(local_30,0);
        if (iVar4 == 0) {
          return 0;
        }
      }
      if ((bVar8) && (iVar4 = FUN_00085dd2(local_30), iVar4 == 0)) {
        return 0;
      }
      goto LAB_000860ee;
    }
    iVar4 = FUN_00085e1a(local_30,&local_38);
    if (iVar4 == 0) {
      return 0;
    }
    if (4 < uVar9) goto LAB_000860ee;
  }
  else {
    iVar4 = FUN_00085e1a(local_30,&local_38);
    if (iVar4 == 0) {
      return 0;
    }
    if (uVar9 == 4) {
      bVar8 = false;
      local_20 = 0;
      goto LAB_00086162;
    }
    if (4 < uVar9) {
      if (uVar9 != 5) goto LAB_000860ee;
      iVar4 = 0;
      bVar8 = false;
      goto LAB_00086146;
    }
  }
  if (uVar9 - 2 < 2) {
    uVar9 = (int)local_24 - (int)local_30[0] >> 0x1f;
    if (uVar9 <= local_34 &&
        (uint)(local_38 <= (uint)((int)local_24 - (int)local_30[0])) <= uVar9 - local_34) {
LAB_0008610e:
      uVar5 = 8;
LAB_0008606e:
      FUN_00085d70(param_1,uVar5);
      return 0;
    }
    local_30[0] = local_30[0] + local_38;
  }
LAB_000860ee:
  *param_1 = local_30[0];
  param_1[2] = param_1[2] + -1;
  return iVar2;
}


