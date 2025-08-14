/*
 * Function: FUN_00085c38
 * Entry:    00085c38
 * Prototype: undefined FUN_00085c38()
 */


int FUN_00085c38(int param_1,undefined4 param_2)

{
  undefined4 *extraout_r2;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar5;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar5 = FUN_00085c12(iVar2,param_2,param_1);
  if ((int)uVar5 != 0) {
    if (*(uint *)(iVar2 + 4) < *(uint *)(iVar2 + 8)) {
      *(undefined1 *)((int)extraout_r2 + 0x11) = 0;
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      puVar1 = (undefined4 *)((((int *)extraout_r2[5])[1] + -1) * 0x18 + *(int *)extraout_r2[5]);
      puVar3 = extraout_r2;
      do {
        puVar4 = puVar3 + 1;
        *puVar1 = *puVar3;
        puVar1 = puVar1 + 1;
        puVar3 = puVar4;
      } while (puVar4 != extraout_r2 + 6);
      extraout_r2[2] = (int)((ulonglong)uVar5 >> 0x20);
      return (int)uVar5;
    }
    FUN_00085c26(extraout_r2,1);
  }
  return 0;
}


