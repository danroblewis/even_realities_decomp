/*
 * Function: reset_ble_uart_buffer_position
 * Entry:    00085dc4
 * Prototype: undefined reset_ble_uart_buffer_position()
 */


void reset_ble_uart_buffer_position(undefined4 *param_1)

{
  *param_1 = param_1[1];
  param_1[2] = param_1[2] + 1;
  update_data_structure_state_alt();
  return;
}


