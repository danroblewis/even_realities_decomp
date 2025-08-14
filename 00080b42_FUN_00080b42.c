/*
 * Function: FUN_00080b42
 * Entry:    00080b42
 * Prototype: undefined FUN_00080b42()
 */


uint FUN_00080b42(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    if (param_3 < 8) {
      return 0xffffffc3;
    }
    uVar2 = (*(ushort *)(param_2 + 2) << 8 | *(ushort *)(param_2 + 2) >> 8) + 8;
    if ((0x9ab < param_3) || (0x9ab < uVar2)) {
      return 0xffffffc1;
    }
    if (uVar2 < param_3) {
      return 0xffffff75;
    }
    iVar1 = FUN_000526e4();
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar1 == 0) {
      return 0xfffffff4;
    }
    *(ushort *)(param_1 + 0x44) = uVar2;
  }
  else if (*(ushort *)(param_1 + 0x44) < param_3) {
    return 0xffffff75;
  }
  FUN_00083740(*(int *)(param_1 + 0x40) + 0xc,param_2,param_3);
  param_3 = *(ushort *)(param_1 + 0x44) - param_3;
  *(short *)(param_1 + 0x44) = (short)param_3;
  return param_3 & 0xffff;
}


