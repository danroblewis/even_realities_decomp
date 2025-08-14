/*
 * Function: FUN_0005a9d8
 * Entry:    0005a9d8
 * Prototype: undefined FUN_0005a9d8()
 */


void FUN_0005a9d8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  param_1 = param_1 + 4;
  if (DAT_2000af14 == (int *)0x0) {
    DAT_2000af10 = param_1;
    DAT_2000af14 = (int *)param_1;
    return;
  }
  *DAT_2000af14 = param_1;
  DAT_2000af14 = (int *)param_1;
  return;
}


