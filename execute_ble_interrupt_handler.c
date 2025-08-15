/*
 * Function: execute_ble_interrupt_handler
 * Entry:    00083848
 * Prototype: undefined execute_ble_interrupt_handler()
 */


void execute_ble_interrupt_handler(void)

{
  ble_interrupt_handler_with_priority_control();
  return;
}


