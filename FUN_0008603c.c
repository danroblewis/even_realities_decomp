/*
 * Function: FUN_0008603c
 * Entry:    0008603c
 * Prototype: undefined FUN_0008603c()
 */


int FUN_0008603c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00085da2(param_1,6,param_3,param_4,param_4);
  if ((iVar1 == 0) || (iVar1 = FUN_00085e1a(param_1,param_2,4), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return iVar1;
}


