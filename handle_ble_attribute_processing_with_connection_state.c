/*
 * Function: handle_ble_attribute_processing_with_connection_state
 * Entry:    00082ec8
 * Prototype: undefined handle_ble_attribute_processing_with_connection_state()
 */


undefined4 handle_ble_attribute_processing_with_connection_state(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = find_ble_attribute_by_handle();
  if ((iVar1 != 0) && ((int)((uint)*(byte *)(iVar1 + 8) << 0x1f) < 0)) {
    iVar4 = iVar1 + 0xc;
    uVar2 = get_ble_handle_value(iVar4);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
        return 0;
      }
      uVar2 = clear_bits_in_value(iVar4,0xfffffffd);
      if ((uVar2 & 2) == 0) {
        iVar3 = check_ble_attribute_processing_enabled(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = get_ble_connection_bit_flag(param_1);
        if (iVar3 == 0) {
          return 0;
        }
        clear_bits_in_value(iVar4,0xfffffffd);
      }
      cleanup_ble_connection_list(param_1);
      conditional_ble_service_discovery_processing(iVar1,1);
    }
  }
  return 1;
}


