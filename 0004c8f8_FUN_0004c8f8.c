/*
 * Function: FUN_0004c8f8
 * Entry:    0004c8f8
 * Prototype: undefined FUN_0004c8f8()
 */


uint FUN_0004c8f8(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  uint extraout_r2_00;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_4c;
  ushort local_48;
  ushort local_46;
  ushort local_44;
  undefined2 local_40;
  short local_3e;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_30;
  char *local_2c;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar4 = 0xfffffff3;
    local_2c = "NVS not initialized";
    local_30 = 2;
    FUN_0007e658(&DAT_000881b8,0x1040,&local_30);
  }
  else {
    iVar1 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8);
    uVar2 = FUN_0007e65e(extraout_r2,param_4);
    if (((uint)*(ushort *)(param_1 + 0xc) + iVar1 * -4 < param_4) ||
       ((param_4 != 0 && (param_3 == 0)))) {
      uVar4 = 0xffffffea;
    }
    else {
      local_4c = *(uint *)(param_1 + 4);
      do {
        uVar4 = local_4c;
        uVar6 = FUN_0007e6e2(param_1,&local_4c,&local_48);
        uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if ((uint)uVar6 != 0) {
          return (uint)uVar6;
        }
        if (local_48 == param_2) {
          uVar6 = FUN_0007e672(param_1,&local_48);
          uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 != 0) {
            if (param_4 == 0) {
              if (local_44 == 0) {
                return 0;
              }
            }
            else if (local_44 == param_4) {
              uVar6 = FUN_0007e574(param_1,(uVar4 & 0xffff0000) + (uint)local_46,param_3,param_4);
              uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
              if ((int)(uint)uVar6 < 1) {
                return (uint)uVar6;
              }
            }
            goto LAB_0004c9ba;
          }
        }
      } while (*(uint *)(param_1 + 4) != local_4c);
      uVar4 = 0;
      if (param_4 != 0) {
LAB_0004c9ba:
        if (uVar2 != 0) {
          uVar2 = uVar2 + iVar1 & 0xffff;
        }
        resource_mutex_acquire(param_1 + 0x14,uVar3,0xffffffff,0xffffffff);
        for (uVar5 = 0; uVar5 != *(ushort *)(param_1 + 0xe); uVar5 = uVar5 + 1) {
          if (uVar2 + *(int *)(param_1 + 8) <= *(uint *)(param_1 + 4)) {
            local_3e = (short)*(int *)(param_1 + 8);
            local_3a = 0xff;
            local_40 = (undefined2)param_2;
            local_3c = (undefined2)param_4;
            FUN_0007e5c8(&local_40);
            uVar4 = FUN_0007e776(param_1,*(undefined4 *)(param_1 + 8),param_3,param_4);
            iVar1 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),param_4);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1;
            if ((uVar4 == 0) && (uVar4 = FUN_0007e7ea(param_1,&local_40), uVar4 == 0)) {
              uVar4 = param_4;
            }
            goto LAB_0004ca30;
          }
          iVar1 = FUN_0007e65e(*(undefined4 *)(param_1 + 0x2c),8);
          local_40 = 0xffff;
          local_3a = 0xff;
          local_3c = 0;
          local_3e = (short)extraout_r2_00 + (short)iVar1;
          *(uint *)(param_1 + 4) =
               ((extraout_r2_00 & 0xffff0000) + (uint)*(ushort *)(param_1 + 0xc)) - iVar1;
          FUN_0007e5c8(&local_40);
          FUN_0007e7ea(param_1,&local_40);
          FUN_0007e55a(param_1,param_1 + 4);
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 4) & 0xffff0000;
          uVar4 = FUN_0007e83a(param_1);
          if (uVar4 != 0) goto LAB_0004ca30;
        }
        uVar4 = 0xffffffe4;
LAB_0004ca30:
        mutex_unlock(param_1 + 0x14);
      }
    }
  }
  return uVar4;
}


