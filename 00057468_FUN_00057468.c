/*
 * Function: FUN_00057468
 * Entry:    00057468
 * Prototype: undefined FUN_00057468()
 */


undefined4 FUN_00057468(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (DAT_20006210 != 0) {
    uVar1 = FUN_00057438();
    return uVar1;
  }
  DAT_20006214 = &DAT_0008b264;
  *param_2 = &DAT_20006210;
  return 0;
}


