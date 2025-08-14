/*
 * Function: FUN_00085f9c
 * Entry:    00085f9c
 * Prototype: undefined FUN_00085f9c()
 */


void FUN_00085f9c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00085ebc(param_1,param_2,3,param_4,param_4);
  if (iVar1 != 0) {
    *param_1 = *param_1 + *(int *)(param_2 + 4);
  }
  return;
}


