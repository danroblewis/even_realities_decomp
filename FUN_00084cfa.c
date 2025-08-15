/*
 * Function: FUN_00084cfa
 * Entry:    00084cfa
 * Prototype: undefined FUN_00084cfa()
 */


undefined4 FUN_00084cfa(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  uVar3 = 9 - (param_2 & 1);
  iVar2 = *(int *)(param_1 + 0x10);
  if ((int)(param_2 << 0x1e) < 0) {
    uVar3 = uVar3 & 0xfffffff7;
  }
  *(uint *)(*piVar4 + 0x50c) = uVar3;
  uVar3 = *(uint *)(iVar2 + 0x20);
  uVar1 = handle_unsigned_division(uVar3 << 0xf,uVar3 >> 0x11,1000,0,param_4);
  *(undefined4 *)(*piVar4 + 0x504) = uVar1;
  FUN_00067e30(piVar4);
  return 0;
}


