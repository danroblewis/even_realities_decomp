/*
 * Function: write_ble_uart_packet_32bit_value
 * Entry:    0008630c
 * Prototype: undefined write_ble_uart_packet_32bit_value()
 */


void write_ble_uart_packet_32bit_value
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  write_ble_uart_packet_with_sign_extension(param_1,&local_c,4,param_4,param_1);
  return;
}


