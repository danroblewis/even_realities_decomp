/*
 * Function: handle_ble_connection_state_change_with_validation
 * Entry:    00059488
 * Prototype: undefined handle_ble_connection_state_change_with_validation()
 */


undefined4 handle_ble_connection_state_change_with_validation(undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 auStack_44 [20];
  undefined4 local_30;
  undefined1 *puStack_2c;
  int local_28;
  undefined1 *local_24;
  char local_1c;
  
  uVar5 = *(short *)(param_2 + 0x10) - 4U & 0xff;
  if ((uVar5 != 2) && (uVar5 != 0x10)) {
    return 4;
  }
  puVar2 = (ushort *)update_buffer_position_and_size_alt(param_2 + 0xc,4);
  uVar6 = *puVar2;
  uVar1 = puVar2[1];
  iVar3 = format_data_by_size(auStack_44,puVar2 + 2,uVar5);
  if (iVar3 == 0) {
    return 0xe;
  }
  if (uVar6 != 0) {
    if (uVar1 == 0) {
      uVar6 = 0;
    }
    else if (uVar6 <= uVar1) {
      fill_memory_buffer(&local_30,0);
      local_28 = process_ble_characteristic_value_change_with_validation_and_callback(param_1,9,1);
      if (local_28 == 0) {
        return 0x11;
      }
      local_30 = param_1;
      puStack_2c = auStack_44;
      local_24 = (undefined1 *)ble_memory_allocation_utility(local_28 + 0xc,1);
      *local_24 = 0;
      local_1c = '\n';
      process_ble_handle_mapping_wrapper(uVar6,uVar1,0x58809,&local_30);
      if (local_1c == '\0') {
        handle_ble_characteristic_value_change_with_debug_init(param_1,local_28);
        return 0;
      }
      bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                (*(undefined4 *)(local_28 + 0x18));
      decrement_reference_count_and_cleanup_memory(local_28);
      cVar4 = local_1c;
      goto LAB_000594e8;
    }
  }
  cVar4 = '\x01';
LAB_000594e8:
  handle_ble_characteristic_value_change_with_callback_and_debug(param_1,8,uVar6,cVar4);
  return 0;
}


