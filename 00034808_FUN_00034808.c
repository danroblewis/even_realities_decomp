/*
 * Function: FUN_00034808
 * Entry:    00034808
 * Prototype: undefined FUN_00034808()
 */


bool FUN_00034808(void)

{
  int iVar1;
  
  iVar1 = FUN_00033cdc();
  if (iVar1 != 0) {
    if ((DAT_2001a229 == '\x05') && (iVar1 = is_msg_expiration(), iVar1 == 1)) {
      return true;
    }
    if (DAT_2001a229 == '\x03') {
      iVar1 = FUN_000347cc();
      return iVar1 == 1;
    }
  }
  return false;
}


