/*
 * Function: FUN_00063bcc
 * Entry:    00063bcc
 * Prototype: undefined FUN_00063bcc()
 */


void FUN_00063bcc(void)

{
  int iVar1;
  
  iVar1 = FUN_0004f564(0xc);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 4) = &DAT_000fa9cc;
  }
  return;
}


