/*
 * Function: parse_ble_uart_packet_with_validation_flags
 * Entry:    00086006
 * Prototype: undefined parse_ble_uart_packet_with_validation_flags()
 */


int parse_ble_uart_packet_with_validation_flags
              (undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte bVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = param_2;
  uStack_10 = param_3;
  iVar1 = parse_ble_uart_packet_with_size_limit(param_1,(int)&uStack_14 + 3,param_3,param_4,param_1)
  ;
  if (iVar1 != 0) {
    bVar2 = uStack_14._3_1_ - 0x14;
    uStack_14 = (byte *)CONCAT13(bVar2,(undefined3)uStack_14);
    if (bVar2 < 2) {
      *param_2 = bVar2 & 1;
      return iVar1;
    }
    reset_ble_uart_buffer_position(param_1,10);
  }
  return 0;
}


