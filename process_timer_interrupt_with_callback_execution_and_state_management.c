/*
 * Function: process_timer_interrupt_with_callback_execution_and_state_management
 * Entry:    00084d36
 * Prototype: undefined process_timer_interrupt_with_callback_execution_and_state_management()
 */


void process_timer_interrupt_with_callback_execution_and_state_management(void)

{
  int iVar1;
  
  iVar1 = process_timer_interrupt_callback_with_parameter();
  *(undefined1 *)(iVar1 + 8) = 0;
  process_data_with_callback_execution_alt2();
  manage_timer_interrupt_callback_state(5);
  return;
}


