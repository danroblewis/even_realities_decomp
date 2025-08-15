/*
 * Function: FUN_00063bcc
 * Entry:    00063bcc
 * Prototype: undefined FUN_00063bcc()
 */


void FUN_00063bcc(void)

{
  int iVar1;
  
  iVar1 = process_data_with_callback_and_parameter_alt(0xc);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 4) = &DAT_000fa9cc;
  }
  return;
}


