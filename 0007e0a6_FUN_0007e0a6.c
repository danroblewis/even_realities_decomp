/*
 * Function: FUN_0007e0a6
 * Entry:    0007e0a6
 * Prototype: undefined FUN_0007e0a6()
 */


void FUN_0007e0a6(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  
  iVar1 = FUN_0007de18();
  iVar2 = FUN_0007ddec(param_1,param_2 + iVar1,1);
  if (-1 < iVar2 << 0x1f) {
    FUN_0007def6(param_1,param_2 + iVar1);
    iVar1 = FUN_0007de18(param_1,param_2);
    FUN_0007dfe6(param_1,param_2,param_2 + iVar1);
  }
  iVar1 = FUN_0007ddec(param_1,param_2,0);
  uVar3 = FUN_0007ddec(param_1,param_2 - iVar1,1);
  if ((uVar3 & extraout_r2) == 0) {
    FUN_0007def6(param_1,param_2 - iVar1);
    iVar1 = FUN_0007ddec(param_1,param_2,0);
    FUN_0007dfe6(param_1,param_2 - iVar1,param_2);
    iVar1 = FUN_0007ddec(param_1,param_2,0);
    param_2 = param_2 - iVar1;
  }
  FUN_0007e022(param_1,param_2);
  return;
}


