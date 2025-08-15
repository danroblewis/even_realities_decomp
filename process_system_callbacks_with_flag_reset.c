/*
 * Function: process_system_callbacks_with_flag_reset
 * Entry:    0004d4a8
 * Prototype: undefined process_system_callbacks_with_flag_reset()
 */


void process_system_callbacks_with_flag_reset(void)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = get_and_reset_system_flag();
  piVar2 = &DAT_000882a0;
  while( true ) {
    if (&DAT_000882b0 < piVar2) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                   "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x1d1);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x1d1);
    }
    if (&UNK_000882af < piVar2) break;
    if ((*(char *)(piVar2[1] + 5) != '\0') && (*(code **)(*piVar2 + 4) != (code *)0x0)) {
      (**(code **)(*piVar2 + 4))(piVar2,uVar1);
    }
    piVar2 = piVar2 + 4;
  }
  return;
}


