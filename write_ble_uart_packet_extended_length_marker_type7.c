/*
 * Function: write_ble_uart_packet_extended_length_marker_type7
 * Entry:    0008635c
 * Prototype: undefined write_ble_uart_packet_extended_length_marker_type7()
 */


void write_ble_uart_packet_extended_length_marker_type7(undefined4 param_1)

{
  write_ble_uart_packet_header_byte(param_1,7,0x1f);
  return;
}


