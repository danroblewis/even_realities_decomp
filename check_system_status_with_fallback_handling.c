/*
 * Function: check_system_status_with_fallback_handling
 * Entry:    0007954c
 * Prototype: undefined check_system_status_with_fallback_handling()
 */


undefined4 check_system_status_with_fallback_handling(void)

{
  int iVar1;
  
  if ((DAT_2000cc2c == 0) || (DAT_2000cc28 == 0)) {
    iVar1 = main_system_initialization_with_error_handling();
    if (iVar1 != 0) {
      if (7 < iVar1 - 1U) {
        return 0xffff8ffe;
      }
      return *(undefined4 *)(&DAT_00098780 + (iVar1 - 1U) * 4);
    }
    DAT_2000cc28 = 1;
  }
  DAT_2000cc2c = 1;
  return 0;
}


