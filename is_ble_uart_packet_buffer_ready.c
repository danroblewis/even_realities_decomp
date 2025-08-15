/*
 * Function: is_ble_uart_packet_buffer_ready
 * Entry:    000861ae
 * Prototype: undefined is_ble_uart_packet_buffer_ready()
 */


bool is_ble_uart_packet_buffer_ready(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x10) != '\0')) {
    return *(int *)(param_1 + 0xc) == 0;
  }
  return true;
}


