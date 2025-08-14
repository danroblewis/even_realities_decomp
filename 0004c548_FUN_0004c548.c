/*
 * Function: FUN_0004c548
 * Entry:    0004c548
 * Prototype: undefined FUN_0004c548()
 */


int FUN_0004c548(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_r2;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 local_70;
  char *local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  char local_5c [2];
  ushort local_5a;
  ushort local_58;
  short local_54 [2];
  short local_50;
  undefined1 auStack_4c [4];
  uint local_48;
  undefined4 local_30;
  char *local_2c;
  
  puVar8 = param_1 + 5;
  FUN_000864c2(puVar8);
  iVar2 = (**(code **)(*(int *)(param_1[10] + 8) + 0xc))();
  param_1[0xb] = iVar2;
  if (iVar2 == 0) {
    local_2c = "Could not obtain flash parameters";
LAB_0004c56a:
    local_30 = 2;
    FUN_0007e658(&DAT_000881b8,0x1040,&local_30);
    return -0x16;
  }
  piVar3 = (int *)(**(code **)(*(int *)(param_1[10] + 8) + 0xc))();
  if (0x1f < *piVar3 - 1U) {
    local_2c = "Unsupported write block size";
    goto LAB_0004c56a;
  }
  uVar10 = FUN_00083a92(param_1[10],*param_1,auStack_4c);
  if ((int)uVar10 != 0) {
    local_2c = "Unable to get page info";
    goto LAB_0004c56a;
  }
  local_60 = (uint)*(ushort *)(param_1 + 3);
  if ((local_60 == 0) || (local_60 = local_60 - local_48 * (local_60 / local_48), local_60 != 0)) {
    local_2c = "Invalid sector size";
    goto LAB_0004c56a;
  }
  if (*(ushort *)((int)param_1 + 0xe) < 2) {
    local_2c = "Configuration error - sector count";
    goto LAB_0004c56a;
  }
  cVar1 = *(char *)(param_1[0xb] + 4);
  resource_mutex_acquire(puVar8,(int)((ulonglong)uVar10 >> 0x20),0xffffffff,0xffffffff);
  iVar2 = FUN_0007e65e(param_1[0xb],8);
  uVar7 = 0;
  for (uVar9 = 0; (uVar9 & 0xffff) < (uint)*(ushort *)((int)param_1 + 0xe); uVar9 = uVar9 + 1) {
    local_60 = uVar9 * 0x10000 + ((uint)*(ushort *)(param_1 + 3) - iVar2 & 0xffff);
    iVar4 = FUN_0007e5da(param_1,local_60,cVar1,8);
    if (iVar4 != 0) {
      FUN_0007e55a(param_1,&local_60);
      uVar7 = uVar7 + 1 & 0xffff;
      iVar4 = FUN_0007e5da(param_1,local_60,cVar1,8);
      if (iVar4 == 0) break;
    }
  }
  if (*(ushort *)((int)param_1 + 0xe) == uVar7) {
    mutex_unlock(puVar8);
    return -0x2d;
  }
  if (((uint)*(ushort *)((int)param_1 + 0xe) == (uVar9 & 0xffff)) &&
     (iVar4 = FUN_0007e5da(param_1,local_60 - iVar2,cVar1,8), iVar4 == 0)) {
    FUN_0007e55a(param_1,&local_60);
  }
  iVar4 = FUN_0004c4e4(param_1,&local_60);
  if (iVar4 == 0) {
    uVar9 = local_60 & 0xffff0000;
    param_1[1] = local_60;
    param_1[2] = uVar9;
    while ((uint)param_1[2] <= (uint)param_1[1]) {
      iVar4 = FUN_0007e53e(param_1,param_1[1],local_5c,8);
      if (iVar4 != 0) goto LAB_0004c672;
      iVar4 = 0;
      pcVar6 = local_5c;
      while (cVar1 == *pcVar6) {
        iVar4 = iVar4 + 1;
        pcVar6 = pcVar6 + 1;
        if (iVar4 == 8) goto LAB_0004c6b2;
      }
      iVar5 = FUN_0007e672(param_1,local_5c);
      iVar4 = param_1[1];
      if (iVar5 != 0) {
        uVar7 = (uint)local_58;
        param_1[2] = uVar9;
        iVar5 = FUN_0007e65e(param_1[0xb],local_5a + uVar7);
        param_1[2] = iVar5 + uVar9;
        iVar4 = extraout_r2;
        if ((iVar5 + uVar9 == extraout_r2) && (uVar7 != 0)) {
          iVar2 = -0x1d;
          goto LAB_0004c8a4;
        }
      }
      param_1[1] = iVar4 - iVar2;
    }
LAB_0004c6b2:
    local_60 = param_1[1] & 0xffff0000;
    FUN_0007e55a(param_1,&local_60);
    iVar4 = FUN_0007e5da(param_1,local_60,cVar1,*(undefined2 *)(param_1 + 3));
    if (iVar4 < 0) goto LAB_0004c672;
    uVar9 = param_1[1];
    if (iVar4 == 0) {
      while( true ) {
        uVar9 = param_1[2];
        if ((uint)param_1[1] <= uVar9) break;
        iVar4 = FUN_0007e5da(param_1,uVar9,cVar1,param_1[1] - uVar9);
        if (iVar4 < 0) goto LAB_0004c672;
        if (iVar4 == 0) break;
        param_1[2] = param_1[2] + *(int *)param_1[0xb];
      }
      if ((param_1[1] + iVar2 * 2 == (uint)*(ushort *)(param_1 + 3)) &&
         (param_1[2] != (param_1[1] & 0xffff0000))) {
        iVar4 = FUN_0007e624(param_1);
        if (iVar4 != 0) goto LAB_0004c672;
        param_1[2] = param_1[1] & 0xffff0000;
        goto LAB_0004c814;
      }
    }
    else {
      do {
        uVar9 = iVar2 + uVar9;
        local_60 = uVar9;
        if ((uint)*(ushort *)(param_1 + 3) - iVar2 <= (uVar9 & 0xffff)) {
          local_2c = "No GC Done marker found: restarting gc";
          local_30 = 2;
          FUN_0007e658(&DAT_000881b8,0x10c0,&local_30);
          iVar4 = FUN_0007e624(param_1,param_1[1]);
          if (iVar4 != 0) goto LAB_0004c672;
          uVar9 = (param_1[1] & 0xffff0000) + (uint)*(ushort *)(param_1 + 3) + iVar2 * -2;
          param_1[1] = uVar9;
          param_1[2] = uVar9 & 0xffff0000;
          iVar4 = FUN_0007e83a(param_1);
          goto LAB_0004c730;
        }
        iVar4 = FUN_0007e53e(param_1,uVar9,local_54,8);
        if (iVar4 != 0) goto LAB_0004c672;
        iVar4 = FUN_0007e672(param_1,local_54);
      } while (((iVar4 == 0) || (local_54[0] != -1)) || (local_50 != 0));
      local_2c = "GC Done marker found";
      local_30 = 2;
      FUN_0007e658(&DAT_000881b8,0x10c0,&local_30);
      local_60 = param_1[1] & 0xffff0000;
      FUN_0007e55a(param_1,&local_60);
      iVar4 = FUN_0007e624(param_1,local_60);
    }
LAB_0004c730:
    if (iVar4 == 0) {
LAB_0004c814:
      if ((uint)*(ushort *)(param_1 + 1) == (uint)*(ushort *)(param_1 + 3) + iVar2 * -2) {
        iVar2 = FUN_0007e80c(param_1);
LAB_0004c8a4:
        mutex_unlock(puVar8);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      else {
        mutex_unlock(puVar8);
      }
      *(undefined1 *)(param_1 + 4) = 1;
      local_68 = (uint)*(ushort *)((int)param_1 + 0xe);
      local_64 = (uint)*(ushort *)(param_1 + 3);
      local_6c = "%d Sectors of %d bytes";
      local_70 = 4;
      FUN_0007e658(&DAT_000881b8,0x20c0,&local_70);
      local_6c = "alloc wra: %d, %x";
      local_68 = (uint)param_1[1] >> 0x10;
      local_64 = param_1[1] & 0xffff;
      local_70 = 4;
      FUN_0007e658(&DAT_000881b8,0x20c0,&local_70);
      local_70 = 4;
      local_6c = "data wra: %d, %x";
      local_68 = (uint)param_1[2] >> 0x10;
      local_64 = param_1[2] & 0xffff;
      FUN_0007e658(&DAT_000881b8,0x20c0,&local_70);
      return 0;
    }
  }
LAB_0004c672:
  mutex_unlock(puVar8);
  return iVar4;
}


