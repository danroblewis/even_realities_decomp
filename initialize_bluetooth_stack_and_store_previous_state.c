/*
 * Function: initialize_bluetooth_stack_and_store_previous_state
 * Entry:    0004d508
 * Prototype: undefined initialize_bluetooth_stack_and_store_previous_state()
 */


void initialize_bluetooth_stack_and_store_previous_state(void)

{
  initialize_bluetooth_stack_with_configuration(&DAT_20003648,&DAT_0008aca0);
  DAT_2000a0cc = &DAT_20003648;
  return;
}


