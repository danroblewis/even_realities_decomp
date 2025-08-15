/*
 * Function: manage_timer_interrupt_callback_state
 * Entry:    00063c14
 * Prototype: undefined manage_timer_interrupt_callback_state()
 */


void manage_timer_interrupt_callback_state(int param_1)

{
  if (DAT_2001d563 == '\0') {
    if (param_1 != 0) {
      acquire_mutex_with_priority_control(&DAT_200066f0);
    }
  }
  else if (param_1 == 0) {
    manage_timer_interrupt_callback_dispatch();
  }
  DAT_2001d563 = (char)param_1;
  return;
}


