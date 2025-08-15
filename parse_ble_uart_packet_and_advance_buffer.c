/*
 * Function: parse_ble_uart_packet_and_advance_buffer
 * Entry:    00085f9c
 * Prototype: undefined parse_ble_uart_packet_and_advance_buffer()
 */


void parse_ble_uart_packet_and_advance_buffer
               (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = parse_ble_uart_packet_with_length_validation(param_1,param_2,3,param_4,param_4);
  if (iVar1 != 0) {
    *param_1 = *param_1 + *(int *)(param_2 + 4);
  }
  return;
}


