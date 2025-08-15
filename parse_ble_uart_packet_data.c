/*
 * Function: parse_ble_uart_packet_data
 * Entry:    00085f6c
 * Prototype: undefined parse_ble_uart_packet_data()
 */


void parse_ble_uart_packet_data(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = validate_ble_uart_packet_header_and_length(param_1,0);
  if (iVar1 != 0) {
    parse_length_encoded_data(param_1,param_2,param_3);
    return;
  }
  return;
}


