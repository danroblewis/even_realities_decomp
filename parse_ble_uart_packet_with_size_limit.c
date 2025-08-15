/*
 * Function: parse_ble_uart_packet_with_size_limit
 * Entry:    00085fd2
 * Prototype: undefined parse_ble_uart_packet_with_size_limit()
 */


undefined4
parse_ble_uart_packet_with_size_limit
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = validate_ble_uart_packet_header_and_length(param_1,7);
  if (iVar1 != 0) {
    if ((*(byte *)*param_1 & 0x1f) < 0x19) {
      uVar2 = parse_length_encoded_data(param_1,param_2,1,param_4);
      return uVar2;
    }
    update_data_structure_state_alt(param_1,10);
  }
  return 0;
}


