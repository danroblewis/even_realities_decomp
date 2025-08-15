/*
 * Function: FUN_00082cba
 * Entry:    00082cba
 * Prototype: undefined FUN_00082cba()
 */


undefined4 FUN_00082cba(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_2 + 0x12);
  if (((int)(param_3 << 0x1f) < 0) && (((uVar1 & 0x95) == 0 || (*(int *)(param_2 + 4) == 0)))) {
    return 2;
  }
  if (((int)(param_3 << 0x1e) < 0) && (((uVar1 & 0x12a) == 0 || (*(int *)(param_2 + 8) == 0)))) {
    return 3;
  }
  param_3 = param_3 & uVar1;
  if ((param_3 & 0x3c) == 0) {
LAB_00082d02:
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xb) == '\0') {
      iVar2 = FUN_0008145c(param_1);
      if (iVar2 != 0) {
        return 0xf;
      }
    }
    else if ((((param_3 & 0x30) == 0) || (uVar4 = FUN_000814e2(param_1), 2 < uVar4)) &&
            (((param_3 & 0x180) == 0 ||
             ((*(int *)(param_1 + 0xc0) != 0 &&
              ((int)((uint)*(byte *)(*(int *)(param_1 + 0xc0) + 0xd) << 0x1b) < 0))))))
    goto LAB_00082d02;
    uVar3 = 5;
  }
  return uVar3;
}


