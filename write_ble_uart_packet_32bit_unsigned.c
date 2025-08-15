/*
 * Function: write_ble_uart_packet_32bit_unsigned
 * Entry:    00086334
 * Prototype: undefined write_ble_uart_packet_32bit_unsigned()
 */


void write_ble_uart_packet_32bit_unsigned
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  write_ble_uart_packet_data_only(param_1,&uStack_c,4,param_4,param_1);
  return;
}


