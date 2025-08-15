/*
 * Function: FUN_00084d36
 * Entry:    00084d36
 * Prototype: undefined FUN_00084d36()
 */


void FUN_00084d36(void)

{
  int iVar1;
  
  iVar1 = process_timer_interrupt_callback_with_parameter();
  *(undefined1 *)(iVar1 + 8) = 0;
  process_data_with_callback_execution_alt2();
  manage_timer_interrupt_callback_state(5);
  return;
}


