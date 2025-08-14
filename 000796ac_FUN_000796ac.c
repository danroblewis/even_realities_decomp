/*
 * Function: FUN_000796ac
 * Entry:    000796ac
 * Prototype: undefined FUN_000796ac()
 */


void FUN_000796ac(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    (*DAT_20002ef4)("mutex_free called with NULL parameter");
  }
  if (((param_1[1] & 0x3a000000) != 0) && (param_1[1] != 0xa95c5f2c)) {
    param_1[1] = 0xa95c5f2c;
    *param_1 = 0;
  }
  return;
}


