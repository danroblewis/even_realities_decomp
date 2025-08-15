/*
 * Function: initialize_bluetooth_stack_and_store_previous_state
 * Entry:    0004d508
 * Prototype: undefined initialize_bluetooth_stack_and_store_previous_state()
 */


void initialize_bluetooth_stack_and_store_previous_state(void)

{
  initialize_bluetooth_stack_with_configuration(&MEMORY_ALLOCATION_BUFFER_MANAGER,&DAT_0008aca0);
  BLUETOOTH_STACK_PREVIOUS_STATE = &MEMORY_ALLOCATION_BUFFER_MANAGER;
  return;
}


