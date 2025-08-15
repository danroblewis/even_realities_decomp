/*
 * Function: write_ble_uart_packet_extended_length_marker_type5
 * Entry:    0008634c
 * Prototype: undefined write_ble_uart_packet_extended_length_marker_type5()
 */


void write_ble_uart_packet_extended_length_marker_type5(undefined4 param_1)

{
  write_ble_uart_packet_header_byte(param_1,5,0x1f);
  return;
}


