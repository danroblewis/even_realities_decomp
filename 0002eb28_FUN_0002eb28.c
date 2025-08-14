/*
 * Function: FUN_0002eb28
 * Entry:    0002eb28
 * Prototype: undefined FUN_0002eb28()
 */


void FUN_0002eb28(uint param_1,int param_2)

{
  if (param_1 < 3) {
    if (param_2 != 0) {
      (&DAT_20018da6)[param_1] = 1;
      return;
    }
    (&DAT_20018da6)[param_1] = 0;
  }
  return;
}


