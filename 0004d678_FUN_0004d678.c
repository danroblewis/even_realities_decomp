/*
 * Function: FUN_0004d678
 * Entry:    0004d678
 * Prototype: undefined FUN_0004d678()
 */


void FUN_0004d678(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_2001d44c == '\0') {
    FUN_0004d334(1);
    piVar2 = &DAT_000882a0;
    while( true ) {
      if (&DAT_000882b0 < piVar2) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                     "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x188);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x188);
      }
      if (&UNK_000882af < piVar2) break;
      if (*(char *)(piVar2[1] + 5) != '\0') {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = piVar2 + 4;
    }
    do {
      iVar1 = FUN_0004d594();
    } while (iVar1 != 0);
    DAT_2001d44c = '\x01';
  }
  return;
}


