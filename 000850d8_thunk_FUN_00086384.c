/*
 * Function: thunk_FUN_00086384
 * Entry:    000850d8
 * Prototype: undefined thunk_FUN_00086384()
 */


void thunk_FUN_00086384(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (param_1 != 0) {
    (*(code *)0x88840)((DAT_20002bb8 / 1000000) * param_1);
    return;
  }
  return;
}


