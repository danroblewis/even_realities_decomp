/*
 * Function: configure_work_mode_state
 * Entry:    00019b38
 * Prototype: undefined __stdcall configure_work_mode_state(undefined4 flag_value1, undefined4 flag_value_2)
 */


void configure_work_mode_state(undefined4 flag_value1,undefined4 flag_value_2)

{
  resource_mutex_acquire(&WORK_MODE_CONTEXT,flag_value_2,flag_value1,flag_value_2);
  return;
}


