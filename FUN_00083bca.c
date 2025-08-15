/*
 * Function: FUN_00083bca
 * Entry:    00083bca
 * Prototype: undefined FUN_00083bca()
 */


void FUN_00083bca(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint local_14;
  undefined4 uStack_10;
  
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = FUN_00083ba6(param_1,&local_14,param_3,param_4,param_1);
  if (-1 < iVar1) {
    FUN_00083b62(param_1,param_2,~local_14);
    return;
  }
  return;
}


