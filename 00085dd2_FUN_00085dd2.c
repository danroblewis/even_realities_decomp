/*
 * Function: FUN_00085dd2
 * Entry:    00085dd2
 * Prototype: undefined FUN_00085dd2()
 */


int FUN_00085dd2(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00085d82();
  if (iVar1 != 0) {
    if (*(char *)*param_1 == -1) {
      *param_1 = (char *)*param_1 + 1;
      return iVar1;
    }
    FUN_00085d70(param_1,10);
  }
  return 0;
}


