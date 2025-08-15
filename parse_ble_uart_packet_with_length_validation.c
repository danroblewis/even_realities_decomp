/*
 * Function: parse_ble_uart_packet_with_length_validation
 * Entry:    00085ebc
 * Prototype: undefined parse_ble_uart_packet_with_length_validation()
 */


int parse_ble_uart_packet_with_length_validation
              (int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = validate_ble_uart_packet_header_and_length(param_1,param_3,param_3,param_4,param_4);
  if ((iVar1 != 0) && (iVar1 = parse_length_encoded_data(param_1,param_2 + 1), iVar1 != 0)) {
    iVar2 = *param_1;
    *param_2 = iVar2;
    if ((uint)param_2[1] <= (uint)(param_1[3] - iVar2)) {
      return iVar1;
    }
    reset_ble_uart_buffer_position(param_1,8);
  }
  return 0;
}


