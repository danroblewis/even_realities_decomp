/*
 * Function: parse_ble_uart_packet_with_counter_increment
 * Entry:    0008603c
 * Prototype: undefined parse_ble_uart_packet_with_counter_increment()
 */


int parse_ble_uart_packet_with_counter_increment
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = validate_ble_uart_packet_header_and_length(param_1,6,param_3,param_4,param_4);
  if ((iVar1 == 0) || (iVar1 = parse_length_encoded_data(param_1,param_2,4), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return iVar1;
}


