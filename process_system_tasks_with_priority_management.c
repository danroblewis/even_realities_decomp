/*
 * Function: process_system_tasks_with_priority_management
 * Entry:    0004d334
 * Prototype: undefined __stdcall process_system_tasks_with_priority_management(undefined4 task_mode, undefined4 timing_flag)
 */


/* WARNING: Removing unreachable block (ram,0x0004d34a) */

uint process_system_tasks_with_priority_management(int task_mode,int timing_flag)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = &DAT_000882a0;
  iVar1 = increment_counter(&DAT_2000a0dc);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
    while( true ) {
      if (&DAT_000882b0 < piVar3) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend <= _log_backend_list_end",
                     "WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x126);
        DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
        assertion_failure("WEST_TOPDIR/zephyr/subsys/logging/log_core.c",0x126);
      }
      if (&UNK_000882af < piVar3) break;
      if ((char)piVar3[3] != '\0') {
        if (*(code **)(*piVar3 + 0xc) != (code *)0x0) {
          (**(code **)(*piVar3 + 0xc))(piVar3);
        }
        if ((*(code **)(*piVar3 + 0x10) == (code *)0x0) ||
           (iVar1 = (**(code **)(*piVar3 + 0x10))(piVar3), iVar1 == 0)) {
          initialize_task_entry_with_priority_and_state(piVar3,*(undefined4 *)piVar3[1],4);
        }
        else {
          uVar2 = uVar2 | 1 << (uVar4 & 0xff);
        }
        uVar4 = uVar4 + 1;
      }
      piVar3 = piVar3 + 4;
    }
    if (task_mode == 0) {
      return uVar2;
    }
    while (uVar2 != 0) {
      uVar2 = process_bit_flags_with_callback_execution(uVar2);
      if (timing_flag != 0) {
        calculate_ble_schedule_timing(0x148,0);
      }
    }
  }
  return 0;
}


