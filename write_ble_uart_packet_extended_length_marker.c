/*
 * Function: write_ble_uart_packet_extended_length_marker
 * Entry:    00086344
 * Prototype: undefined write_ble_uart_packet_extended_length_marker()
 */


void write_ble_uart_packet_extended_length_marker(undefined4 param_1)

{
  write_ble_uart_packet_header_byte(param_1,4,0x1f);
  return;
}


