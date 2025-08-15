/*
 * Function: FUN_00085622
 * Entry:    00085622
 * Prototype: undefined FUN_00085622(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


undefined4
FUN_00085622(int param_1,undefined2 param_2,int param_3,int *param_4,int param_5,int param_6,
            int *param_7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_7 = param_1;
  param_7[1] = param_3;
  *(undefined2 *)(param_7 + 2) = param_2;
  uVar1 = *(ushort *)(param_4 + 2);
  uVar2 = (uint)uVar1;
  param_7[3] = param_5;
  *(ushort *)((int)param_7 + 10) = uVar1;
  *(ushort *)(param_7 + 9) = uVar1;
  param_7[4] = param_6;
  iVar3 = *param_4;
  iVar5 = param_4[1];
  iVar4 = iVar3 + uVar2 * 0x10;
  param_7[5] = uVar2;
  param_7[6] = iVar3;
  param_7[7] = iVar4;
  param_7[8] = iVar4 + (uVar2 + 2) * 2 + iVar5 + 1 & -iVar5;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = 0;
    while (iVar4 = param_7[6] + iVar3 * 0x10, iVar3 < (int)(uVar2 - 1)) {
      iVar3 = iVar3 + 1;
      *(short *)(iVar4 + 0xe) = (short)iVar3;
    }
    *(undefined1 *)(iVar4 + 0xe) = 0;
    *(undefined1 *)(iVar4 + 0xf) = 0x80;
  }
  return 0;
}


