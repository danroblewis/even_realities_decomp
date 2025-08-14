/*
 * Function: FUN_00033088
 * Entry:    00033088
 * Prototype: undefined FUN_00033088()
 */


undefined4 FUN_00033088(int param_1)

{
  if (param_1 != 0) {
    if (DAT_20002428 != param_1) {
      DAT_20002428 = param_1;
    }
    DAT_2000242c = 1;
    return 0;
  }
  return 0xffffffff;
}


