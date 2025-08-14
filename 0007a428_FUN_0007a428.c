/*
 * Function: FUN_0007a428
 * Entry:    0007a428
 * Prototype: undefined FUN_0007a428()
 */


void FUN_0007a428(void)

{
  int iVar1;
  
  iVar1 = (*DAT_20002f14)(DAT_20002f08);
  if (iVar1 != 0) {
    (*DAT_20002ef4)("Could not lock power save mutex");
  }
  DAT_2000d3ac = 0;
                    /* WARNING: Could not recover jumptable at 0x0007a44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_20002f18)(DAT_20002f08);
  return;
}


