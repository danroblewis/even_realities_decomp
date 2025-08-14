/*
 * Function: FUN_0004d4a8
 * Entry:    0004d4a8
 * Prototype: undefined FUN_0004d4a8()
 */


void FUN_0004d4a8(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = FUN_0004d490();
  piVar2 = &DAT_000882a0;
  while( true ) {
    if (&DAT_000882b0 < piVar2) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                   "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x1d1);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x1d1);
    }
    if (&UNK_000882af < piVar2) break;
    if ((*(char *)(piVar2[1] + 5) != '\0') && (*(code **)(*piVar2 + 4) != (code *)0x0)) {
      (**(code **)(*piVar2 + 4))(piVar2,uVar1);
    }
    piVar2 = piVar2 + 4;
  }
  return;
}


