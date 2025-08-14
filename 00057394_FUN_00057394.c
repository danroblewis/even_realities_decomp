/*
 * Function: FUN_00057394
 * Entry:    00057394
 * Prototype: undefined FUN_00057394()
 */


void FUN_00057394(void)

{
  DAT_2001d531 = DAT_2001d531 + '\x01';
  if (DAT_2001d531 == '\0') {
    DAT_2001d531 = '\x01';
  }
  return;
}


