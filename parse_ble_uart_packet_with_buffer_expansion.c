/*
 * Function: parse_ble_uart_packet_with_buffer_expansion
 * Entry:    00085fa2
 * Prototype: undefined parse_ble_uart_packet_with_buffer_expansion()
 */


int parse_ble_uart_packet_with_buffer_expansion(int param_1)

{
  int iVar1;
  
  iVar1 = parse_ble_uart_extended_length_packet(param_1,5);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      return iVar1;
    }
    if (*(uint *)(param_1 + 8) < 0x7fffffff) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) << 1;
      return iVar1;
    }
    reset_ble_uart_buffer_position(param_1,5);
  }
  return 0;
}


