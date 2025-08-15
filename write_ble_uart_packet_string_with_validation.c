/*
 * Function: write_ble_uart_packet_string_with_validation
 * Entry:    00086338
 * Prototype: undefined write_ble_uart_packet_string_with_validation()
 */


int write_ble_uart_packet_string_with_validation(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  uVar4 = param_1[3];
  if (((uVar2 < uVar4) && (uVar3 = param_2[1], uVar3 <= uVar4 - uVar2)) &&
     ((*param_2 == 0 ||
      (iVar1 = calculate_bit_mask_from_string_length(param_2 + 1,4),
      uVar2 + uVar3 + 1 + iVar1 <= uVar4)))) {
    iVar1 = write_ble_uart_packet_with_length_encoding(param_1,2,param_2 + 1,4);
    if (iVar1 != 0) {
      if (*param_1 != *param_2) {
        copy_memory_safe(*param_1,*param_2,param_2[1]);
      }
      *param_1 = *param_1 + param_2[1];
      return iVar1;
    }
  }
  else {
    check_ble_uart_packet_buffer_status(param_1,8);
  }
  return 0;
}


