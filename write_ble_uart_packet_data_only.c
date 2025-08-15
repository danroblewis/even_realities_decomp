/*
 * Function: write_ble_uart_packet_data_only
 * Entry:    000862ee
 * Prototype: undefined write_ble_uart_packet_data_only()
 */


undefined4 write_ble_uart_packet_data_only(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = write_ble_uart_packet_with_length_encoding(param_1,0,param_2,param_3);
    return uVar1;
  }
  check_ble_uart_packet_buffer_status(param_1,0xe);
  return 0;
}


