/*
 * Function: validate_device_properties_with_ab_size
 * Entry:    0008397e
 * Prototype: undefined validate_device_properties_with_ab_size()
 */


int validate_device_properties_with_ab_size(undefined4 param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  uStack_10 = 0;
  local_c = 0;
  local_14 = 0xab;
  iVar1 = validate_device_properties_and_state(param_1,&local_14,0,0xab,param_1);
  if (-1 < iVar1) {
    handle_ble_uart_packet_processing_completion(0x23);
    iVar1 = 0;
  }
  return iVar1;
}


