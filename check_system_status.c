/*
 * Function: check_system_status
 * Entry:    000165b4
 * Prototype: undefined check_system_status()
 */


int check_system_status(void)

{
  int iVar1;
  
  iVar1 = SYSTEM_STATIC_INFO_RESET_7 + -0x12345678;
  if (iVar1 != 0) {
    iVar1 = -1;
  }
  return iVar1;
}


