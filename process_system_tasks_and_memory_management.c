/*
 * Function: process_system_tasks_and_memory_management
 * Entry:    0004d678
 * Prototype: undefined process_system_tasks_and_memory_management()
 */


void process_system_tasks_and_memory_management(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_2001d44c == '\0') {
    process_system_tasks_with_priority_management(1);
    piVar2 = &DAT_000882a0;
    while( true ) {
      if (&DAT_000882b0 < piVar2) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                     "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x188);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x188);
      }
      if (&UNK_000882af < piVar2) break;
      if (*(char *)(piVar2[1] + 5) != '\0') {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = piVar2 + 4;
    }
    do {
      iVar1 = process_memory_management_with_timing_control();
    } while (iVar1 != 0);
    DAT_2001d44c = '\x01';
  }
  return;
}


