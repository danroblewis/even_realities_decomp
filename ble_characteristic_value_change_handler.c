/*
 * Function: ble_characteristic_value_change_handler
 * Entry:    0005b270
 * Prototype: undefined ble_characteristic_value_change_handler()
 */


int ble_characteristic_value_change_handler(undefined4 param_1,undefined2 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 local_28;
  char *local_24;
  
  iVar2 = ble_permission_access_validator(param_1,*(undefined4 *)(param_3 + 4),0x94);
  if (iVar2 == 0) {
    iVar2 = ble_attribute_validation_handler(param_1,*(undefined4 *)(param_3 + 4),2);
    if (iVar2 == 0) {
      local_24 = "Device is not subscribed to characteristic";
      local_28 = 2;
      iVar2 = -0x16;
      ble_data_processing_wrapper(&DAT_00088128,0x1080,&local_28);
    }
    else {
      uVar1 = *(ushort *)(param_3 + 0x14);
      iVar2 = handle_ble_connection_state_change_with_parameter_validation(0xf0000,0);
      iVar4 = uVar1 + 2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = iVar4;
        *(undefined1 *)(iVar2 + 0x11) = 0x1d;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 4) = 0x825d5;
        *(int *)(iVar2 + 0x18) = param_3;
        iVar4 = process_ble_characteristic_value_change_with_callback_execution(param_1,0x1d,iVar4);
        if (iVar4 != 0) {
          update_ble_connection_state(iVar4,0,0,1);
          puVar3 = (undefined2 *)ble_memory_allocation_utility(iVar4 + 0xc,2);
          *puVar3 = param_2;
          ble_memory_allocation_utility(iVar4 + 0xc,*(undefined2 *)(param_3 + 0x14));
          memcpy(puVar3 + 1,*(undefined4 *)(param_3 + 0x10),*(undefined2 *)(param_3 + 0x14));
          *(int *)(iVar2 + 8) = iVar4;
          iVar4 = enqueue_ble_connection_request(param_1,iVar2);
          if (iVar4 == 0) {
            return 0;
          }
          cleanup_ble_connection_and_free_memory(iVar2);
          return iVar4;
        }
        local_24 = "No buffer available to send indication";
        local_28 = 2;
        ble_data_processing_wrapper(&DAT_00088128,0x1080,&local_28);
        cleanup_ble_connection_and_free_memory(iVar2);
      }
      iVar2 = -0xc;
    }
  }
  else {
    iVar2 = -1;
    local_24 = "Link is not encrypted";
    local_28 = 2;
    ble_data_processing_wrapper(&DAT_00088128,0x1080,&local_28);
  }
  return iVar2;
}


