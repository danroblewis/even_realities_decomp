/*
 * Function: FUN_00077e4c
 * Entry:    00077e4c
 * Prototype: undefined FUN_00077e4c()
 */


void FUN_00077e4c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_2000cc24 = 0;
  iVar1 = FUN_000807e8(param_2,param_3,param_3,0,param_4);
  if ((iVar1 == -1) && (DAT_2000cc24 != 0)) {
    *param_1 = DAT_2000cc24;
  }
  return;
}


