/*
 * Function: write_ble_uart_packet_with_sign_extension
 * Entry:    0008629e
 * Prototype: undefined write_ble_uart_packet_with_sign_extension()
 */


undefined4 write_ble_uart_packet_with_sign_extension(undefined4 param_1,byte *param_2,uint param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uStack_18;
  byte *pbStack_14;
  
  uStack_18 = param_1;
  pbStack_14 = param_2;
  if (param_3 < 9) {
    pbVar3 = param_2 + param_3;
    pbVar2 = (byte *)&uStack_18;
    if ((char)pbVar3[-1] < '\0') {
      for (; param_2 != pbVar3; param_2 = param_2 + 1) {
        *pbVar2 = ~*param_2;
        pbVar2 = pbVar2 + 1;
      }
      uVar1 = 1;
      param_2 = (byte *)&uStack_18;
    }
    else {
      uVar1 = 0;
    }
    if (param_3 != 0) {
      uVar1 = write_ble_uart_packet_with_length_encoding(param_1,uVar1,param_2);
      return uVar1;
    }
    uVar1 = 0xe;
  }
  else {
    uVar1 = 5;
  }
  check_ble_uart_packet_buffer_status(param_1,uVar1);
  return 0;
}


