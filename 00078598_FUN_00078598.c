/*
 * Function: FUN_00078598
 * Entry:    00078598
 * Prototype: undefined FUN_00078598()
 */


void FUN_00078598(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_2000cc24 = 0;
  iVar1 = FUN_0004b17c(param_2,param_3,param_4,param_4,param_4);
  if ((iVar1 == -1) && (DAT_2000cc24 != 0)) {
    *param_1 = DAT_2000cc24;
  }
  return;
}


