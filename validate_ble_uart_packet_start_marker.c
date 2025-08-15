/*
 * Function: validate_ble_uart_packet_start_marker
 * Entry:    00085dd2
 * Prototype: undefined validate_ble_uart_packet_start_marker()
 */


int validate_ble_uart_packet_start_marker(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = validate_data_structure_and_update_state();
  if (iVar1 != 0) {
    if (*(char *)*param_1 == -1) {
      *param_1 = (char *)*param_1 + 1;
      return iVar1;
    }
    update_data_structure_state_alt(param_1,10);
  }
  return 0;
}


