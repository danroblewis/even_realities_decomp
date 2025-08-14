/*
 * Function: FUN_00078570
 * Entry:    00078570
 * Prototype: undefined FUN_00078570()
 */


void FUN_00078570(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_2000cc24 = 0;
  iVar1 = FUN_000807de(param_2);
  if ((iVar1 == -1) && (DAT_2000cc24 != 0)) {
    *param_1 = DAT_2000cc24;
  }
  return;
}


