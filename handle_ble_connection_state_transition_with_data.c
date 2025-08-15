/*
 * Function: handle_ble_connection_state_transition_with_data
 * Entry:    00074b10
 * Prototype: undefined handle_ble_connection_state_transition_with_data(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined param_6, undefined4 param_7)
 */


void handle_ble_connection_state_transition_with_data(void)

{
  undefined4 *in_stack_00000008;
  
  handle_ble_connection_state_transition();
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = *(undefined4 *)(DMIC_BUFFER_SIZE + 0x14);
  }
  return;
}


