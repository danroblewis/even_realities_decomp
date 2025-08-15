/*
 * Function: manage_device_power_state_and_initialization
 * Entry:    00060b48
 * Prototype: undefined manage_device_power_state_and_initialization()
 */


uint manage_device_power_state_and_initialization
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  uint uStack_20;
  uint local_1c;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  local_1c = param_4;
  iVar1 = check_data_structure_bit_flag();
  if (iVar1 == 0) {
    if (param_2 != 0) {
      if (param_2 != 1) {
        return 0xffffff7a;
      }
      uVar2 = process_device_data_with_callback_execution(*(undefined4 *)(iVar4 + 0x34),0);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      iVar3 = initialize_hardware_configuration(iVar4,&LAB_000838ca_1,iVar5);
      if (iVar3 != 0xbad0000) {
        return 0xfffffffb;
      }
      uVar2 = validate_device_properties_with_ab_size(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      initialize_device_and_ble_connection(param_1);
      return 0;
    }
    uVar2 = check_device_capabilities_and_state(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = (uint)*(byte *)(iVar5 + 0x60);
    if ((uVar2 == 0) && (iVar1 = hardware_register_operation_wrapper(), iVar1 == 0xbad0000)) {
      local_24 = 0xb9;
      uStack_20 = uVar2;
      local_1c = uVar2;
      uVar2 = validate_device_properties_and_state(param_1,&local_24,0,0xb9,iVar3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      handle_ble_uart_packet_processing_completion(10);
      cleanup_hardware_interrupt_configuration();
      uVar2 = process_device_data_with_callback_execution(*(undefined4 *)(iVar4 + 0x34),1);
      return uVar2 & (int)uVar2 >> 0x1f;
    }
  }
  return 0xfffffff0;
}


