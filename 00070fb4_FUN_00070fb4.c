/*
 * Function: FUN_00070fb4
 * Entry:    00070fb4
 * Prototype: undefined FUN_00070fb4(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


uint FUN_00070fb4(byte *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (((param_1 == (byte *)0x0) || (param_2 == 0)) || (param_6 == 0)) {
    return 0xfffff82d;
  }
  iVar5 = param_2 + 0x58;
  uVar3 = param_4;
  FUN_0008583a(iVar5);
  if (param_4 == 0xffffffff) {
    iVar1 = param_2 + 0x48;
    uVar2 = *(uint *)(param_2 + 0x48) & 1;
    if (uVar2 != 0) {
      uVar2 = 0;
      do {
        uVar2 = uVar2 + 1;
        if (uVar2 == 0x80) goto LAB_0007109e;
      } while ((int)((*(uint *)(iVar1 + (uVar2 >> 5) * 4) >> (uVar2 & 0x1f)) << 0x1f) < 0);
    }
    param_4 = uVar2 + 0x400;
    *(uint *)(iVar1 + (uVar2 >> 5) * 4) = *(uint *)(iVar1 + (uVar2 >> 5) * 4) | 1 << (uVar2 & 0x1f);
  }
  else if (0x3ff < param_4) {
    uVar2 = param_4 - 0x400;
    if (uVar2 < 0x80) {
      uVar4 = *(uint *)(param_2 + 0x48 + (uVar2 >> 5) * 4);
      if (-1 < (int)((uVar4 >> (uVar2 & 0x1f)) << 0x1f)) {
        *(uint *)(param_2 + 0x48 + (uVar2 >> 5) * 4) = 1 << (uVar2 & 0x1f) | uVar4;
        goto LAB_0007101c;
      }
LAB_0007109e:
      uVar3 = 0xfffff829;
    }
    else {
      uVar3 = 0xfffff82d;
    }
    z_spin_lock_valid(iVar5);
    return uVar3;
  }
LAB_0007101c:
  FUN_00070f74(param_2,param_1,param_3,param_4,param_5,param_6,param_7,uVar3);
  z_spin_lock_valid(iVar5);
  uVar3 = (uint)*param_1;
  if ((uVar3 != 0) && (uVar3 = (uint)*(byte *)(param_2 + 0x90), uVar3 != 0)) {
    if (*(int *)(param_1 + 0x28) == -1) {
      uVar3 = FUN_00085898(param_1,0);
      if (uVar3 != 0) {
        FUN_00085846(param_1);
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


