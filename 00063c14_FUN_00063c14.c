/*
 * Function: FUN_00063c14
 * Entry:    00063c14
 * Prototype: undefined FUN_00063c14()
 */


void FUN_00063c14(int param_1)

{
  if (DAT_2001d563 == '\0') {
    if (param_1 != 0) {
      FUN_00073518(&DAT_200066f0);
    }
  }
  else if (param_1 == 0) {
    FUN_00063be0();
  }
  DAT_2001d563 = (char)param_1;
  return;
}


