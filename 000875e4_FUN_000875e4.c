/*
 * Function: FUN_000875e4
 * Entry:    000875e4
 * Prototype: undefined FUN_000875e4()
 */


undefined4 FUN_000875e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_s1;
  int extraout_s1_00;
  int local_30;
  int aiStack_2c [2];
  
  uVar3 = FUN_00078c44(param_1,&local_30);
  uVar4 = FUN_00078c44(param_2,aiStack_2c);
  iVar1 = (local_30 - aiStack_2c[0]) + (*(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10)) * 0x20;
  if (iVar1 < 1) {
    iVar2 = extraout_s1_00 + iVar1 * -0x100000;
    iVar1 = extraout_s1;
  }
  else {
    iVar1 = extraout_s1 + iVar1 * 0x100000;
    iVar2 = extraout_s1_00;
  }
  uVar3 = float_multiply_64bit(uVar3,iVar1,uVar4,iVar2);
  return uVar3;
}


