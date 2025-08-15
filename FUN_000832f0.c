/*
 * Function: FUN_000832f0
 * Entry:    000832f0
 * Prototype: undefined FUN_000832f0()
 */


undefined4 FUN_000832f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 4;
  iVar1 = FUN_00082ff6(iVar4,10);
  if (iVar1 == 0) {
    uVar2 = FUN_00083090(param_1,4);
    iVar3 = *(int *)(param_1 + 0xf0);
    iVar1 = FUN_000830b0(uVar2,3);
    if (iVar1 != 0) {
      uVar2 = FUN_0005f5d0(iVar1 + 0xc,0x10);
      iVar3 = FUN_0008323a(param_1 + 0x47,param_1 + 0x27,param_1 + 9,param_1 + 0x10,iVar3 + 0x97,
                           iVar3 + 0x9e,uVar2);
      if (iVar3 == 0) {
        FUN_0005cb38(param_1,iVar1,0);
        FUN_0008304c(iVar4,0);
        goto LAB_00083362;
      }
      FUN_0005f24c(iVar1);
    }
    uVar2 = 8;
  }
  else {
    FUN_00083090(iVar4,0);
LAB_00083362:
    uVar2 = 0;
  }
  return uVar2;
}


