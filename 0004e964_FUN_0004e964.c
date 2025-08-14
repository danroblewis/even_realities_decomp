/*
 * Function: FUN_0004e964
 * Entry:    0004e964
 * Prototype: undefined FUN_0004e964()
 */


void FUN_0004e964(void)

{
  DAT_2000a28c = DAT_2000a28c | 2;
  if ((code *)*DAT_2000a2b0 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0004e982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_2000a2b0)(&DAT_2000a154,DAT_2000a158);
  return;
}


