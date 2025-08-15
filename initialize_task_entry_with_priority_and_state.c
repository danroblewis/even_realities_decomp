/*
 * Function: initialize_task_entry_with_priority_and_state
 * Entry:    0004d8f8
 * Prototype: undefined __stdcall initialize_task_entry_with_priority_and_state(undefined4 task_entry, undefined4 task_data, undefined1 param_3)
 */


void initialize_task_entry_with_priority_and_state
               (int task_entry,undefined4 task_data,undefined1 param_3)

{
  if (task_entry == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","backend != ((void *)0)",
                 "WEST_TOPDIR/zephyr/include/zephyr/logging/log_backend.h",0xdf);
                    /* WARNING: Subroutine does not return */
    trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/logging/log_backend.h",0xdf);
  }
  *(char *)(*(int *)(task_entry + 4) + 4) = (char)(task_entry + -0x882a0 >> 4) + '\x01';
  *(undefined1 *)(*(int *)(task_entry + 4) + 6) = param_3;
  **(undefined4 **)(task_entry + 4) = task_data;
  *(undefined1 *)(*(int *)(task_entry + 4) + 5) = 1;
  if (DAT_2001d44b == '\0') {
    z_spin_lock_valid(&DAT_200039f8);
  }
  DAT_2001d44b = 1;
  return;
}


