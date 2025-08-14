/*
 * Function: FUN_0007df98
 * Entry:    0007df98
 * Prototype: undefined FUN_0007df98()
 */


void FUN_0007df98(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0007de18();
  iVar1 = (param_2 - param_3) + iVar1;
  FUN_0007de54(param_1,param_2,param_3 - param_2);
  FUN_0007de54(param_1,param_3,iVar1);
  FUN_0007de02(param_1,param_3,0,param_3 - param_2);
  iVar2 = FUN_0007de18(param_1,param_3);
  FUN_0007de02(param_1,param_3 + iVar2,0,iVar1);
  return;
}


