/*
 * Function: suspend_system_and_close_display
 * Entry:    000289b0
 * Prototype: undefined suspend_system_and_close_display()
 */


void suspend_system_and_close_display(void)

{
  int work_mode_ptr;
  
  call_data_verification_if_needed();
  get_work_mode();
  global_system_suspend();
  work_mode_ptr = get_work_mode();
  *(undefined1 *)(work_mode_ptr + 0xee4) = 1;
  display_close_screen(3);
  work_mode_ptr = get_work_mode();
  *(undefined1 *)(work_mode_ptr + 0xd5) = 0;
  SYSTEM_SUSPEND_AND_DISPLAY_CLOSE_BUFFER = 0;
  return;
}


