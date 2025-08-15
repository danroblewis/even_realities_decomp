/*
 * Function: write_ble_uart_packet_byte_with_type7_header
 * Entry:    00086378
 * Prototype: undefined write_ble_uart_packet_byte_with_type7_header()
 */


void write_ble_uart_packet_byte_with_type7_header(undefined4 param_1,char param_2)

{
  write_ble_uart_packet_with_length_encoding
            (param_1,7,&stack0xfffffff7,1,param_1,
             CONCAT13(param_2 + 0x14U,(uint3)(byte)(param_2 + 0x14U)));
  return;
}


