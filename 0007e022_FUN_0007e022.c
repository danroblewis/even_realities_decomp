/*
 * Function: FUN_0007e022
 * Entry:    0007e022
 * Prototype: undefined FUN_0007e022()
 */


void FUN_0007e022(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 8);
  iVar1 = FUN_0007de18();
  if ((0x7fff < uVar4) && (iVar1 == 1)) {
    return;
  }
  uVar4 = FUN_0007de82(uVar4,iVar1);
  iVar2 = param_1 + uVar4 * 4;
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1 << (uVar4 & 0xff);
    *(int *)(iVar2 + 0x10) = param_2;
    FUN_0007de02(param_1,param_2,2,param_2);
    uVar3 = 3;
    iVar1 = param_2;
  }
  else {
    uVar3 = FUN_0007ddec(param_1,iVar1,2);
    FUN_0007de02(param_1,param_2);
    FUN_0007de02(param_1,param_2,3,iVar1);
    FUN_0007de02(param_1,uVar3);
    uVar3 = 2;
  }
  FUN_0007de02(param_1,iVar1,uVar3);
  return;
}


