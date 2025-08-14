/*
 * Function: FUN_0007dfe6
 * Entry:    0007dfe6
 * Prototype: undefined FUN_0007dfe6()
 */


void FUN_0007dfe6(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0007de18();
  iVar2 = FUN_0007de18(param_1,param_3);
  FUN_0007de54(param_1,param_2,iVar1 + iVar2);
  iVar3 = FUN_0007de18(param_1,param_3);
  FUN_0007de02(param_1,param_3 + iVar3,0,iVar1 + iVar2);
  return;
}


