/*
 * Function: FUN_00087736
 * Entry:    00087736
 * Prototype: undefined FUN_00087736()
 */


undefined4 FUN_00087736(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((uint)param_2[2] <= param_4) {
    uVar3 = param_2[2];
    if (((int)(short)param_2[3] & 0x480U) != 0) {
      iVar4 = *param_2 - param_2[4];
      uVar2 = param_4 + 1 + iVar4;
      uVar3 = (param_2[5] * 3) / 2;
      if (uVar3 < uVar2) {
        uVar3 = uVar2;
      }
      if ((int)(short)param_2[3] << 0x15 < 0) {
        iVar1 = FUN_00076e20(param_1,uVar3);
        if (iVar1 == 0) {
LAB_000877d8:
          *param_1 = 0xc;
          *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
          return 0xffffffff;
        }
        memcpy(iVar1,param_2[4],iVar4);
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
      }
      else {
        iVar1 = FUN_000876ec(param_1,param_2[4],uVar3);
        if (iVar1 == 0) {
          FUN_00076d8c(param_1,param_2[4]);
          goto LAB_000877d8;
        }
      }
      param_2[4] = iVar1;
      param_2[5] = uVar3;
      *param_2 = iVar1 + iVar4;
      param_2[2] = uVar3 - iVar4;
      uVar3 = param_4;
    }
    if (uVar3 <= param_4) goto LAB_000877a8;
  }
  uVar3 = param_4;
LAB_000877a8:
  FUN_00086c44(*param_2,param_3,uVar3);
  param_2[2] = param_2[2] - uVar3;
  *param_2 = *param_2 + uVar3;
  return 0;
}


