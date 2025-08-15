/*
 * Function: parse_ble_uart_extended_length_packet
 * Entry:    00085f06
 * Prototype: undefined parse_ble_uart_extended_length_packet()
 */


int parse_ble_uart_extended_length_packet(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  
  puVar4 = param_1;
  local_14 = param_2;
  uStack_10 = param_3;
  iVar1 = validate_ble_uart_packet_header_and_length();
  if (iVar1 != 0) {
    bVar3 = *(byte *)*param_1 & 0x1f;
    if (bVar3 == 0x1f) {
      local_14 = 0xffffffef;
      if (param_1[2] == 0) {
        update_data_structure_state_alt(param_1,3);
        return 0;
      }
      *param_1 = (byte *)*param_1 + 1;
      param_1[2] = param_1[2] + -1;
    }
    else {
      iVar1 = parse_length_encoded_data(param_1,&local_14,4,bVar3,puVar4);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 0;
    }
    iVar2 = process_ready_data_structure(param_1,local_14);
    if (iVar2 != 0) {
      *(char *)(param_1 + 4) = (char)iVar1;
      return iVar2;
    }
    *param_1 = param_1[1];
    param_1[2] = param_1[2] + 1;
  }
  return 0;
}


