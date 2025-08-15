/*
 * Function: FUN_00086384
 * Entry:    00086384
 * Prototype: undefined FUN_00086384()
 */


void FUN_00086384(int param_1)

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


