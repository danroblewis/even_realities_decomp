/*
 * Function: FUN_0002560c
 * Entry:    0002560c
 * Prototype: undefined FUN_0002560c()
 */


int FUN_0002560c(void)

{
  int iVar1;
  
  iVar1 = FUN_000330a8(DAT_20007a44);
  if (iVar1 == 0) {
    iVar1 = enter_into_long_trip();
    if (iVar1 != 0) {
      iVar1 = -2;
    }
  }
  else {
    DEBUG_PRINT("init_nfc_comm is failed\n");
    iVar1 = -1;
  }
  return iVar1;
}


