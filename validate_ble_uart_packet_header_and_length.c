/*
 * Function: validate_ble_uart_packet_header_and_length
 * Entry:    00085da2
 * Prototype: undefined validate_ble_uart_packet_header_and_length()
 */


int validate_ble_uart_packet_header_and_length
              (undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  
  iVar1 = validate_data_structure_and_update_state();
  if (iVar1 != 0) {
    if (param_2 == *(byte *)*param_1 >> 5) {
      return iVar1;
    }
    update_data_structure_state_alt(param_1,10,extraout_r2,*(byte *)*param_1,param_4);
  }
  return 0;
}


