/*
 * Function: FUN_0004a16c
 * Entry:    0004a16c
 * Prototype: undefined FUN_0004a16c()
 */


void FUN_0004a16c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piStack_18;
  undefined4 uStack_14;
  
  uVar1 = (uint)(*param_1 << 0x17) >> 0x1a;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  else {
    iVar2 = 0x78 - uVar1;
  }
  piStack_18 = param_1;
  uStack_14 = param_2;
  FUN_0007d894(&piStack_18,param_1,8);
  FUN_0007d8f4(param_1,&DAT_200034f7,iVar2);
  FUN_0007d8f4(param_1,&piStack_18,8);
  FUN_0007d894(param_2,param_1 + 2,0x10);
  return;
}


