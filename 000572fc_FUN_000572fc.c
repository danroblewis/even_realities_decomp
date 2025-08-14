/*
 * Function: FUN_000572fc
 * Entry:    000572fc
 * Prototype: undefined FUN_000572fc()
 */


undefined4 FUN_000572fc(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (DAT_2000ad28 != (int *)0x0) {
      return 0xffffff88;
    }
    if ((param_1[4] == 0) &&
       ((((*param_1 != 0 || (param_1[1] != 0)) || (param_1[2] != 0)) || (param_1[5] != 0)))) {
      return 0xffffffea;
    }
  }
  DAT_2000ad28 = param_1;
  return 0;
}


