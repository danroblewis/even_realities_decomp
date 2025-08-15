/*
 * Function: control_timer_operation
 * Entry:    0003443c
 * Prototype: undefined control_timer_operation()
 */


void control_timer_operation(int param_1)

{
  DAT_2001a229 = (undefined1)param_1;
  if (param_1 == 0) {
    decrement_timer_counter();
    return;
  }
  return;
}


