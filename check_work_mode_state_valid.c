/*
 * Function: check_work_mode_state_valid
 * Entry:    0002bed0
 * Prototype: undefined __stdcall check_work_mode_state_valid(undefined4 work_mode_context)
 */


bool check_work_mode_state_valid(int work_mode_context)

{
  while (PERSISTENT_TASK_STATUS_MANAGER != '\0') {
    short_timing_delay();
  }
  return 1 < *(byte *)(work_mode_context + 0xd5);
}


