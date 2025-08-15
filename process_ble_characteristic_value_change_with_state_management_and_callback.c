/*
 * Function: process_ble_characteristic_value_change_with_state_management_and_callback
 * Entry:    000591a0
 * Prototype: undefined process_ble_characteristic_value_change_with_state_management_and_callback()
 */


undefined4
process_ble_characteristic_value_change_with_state_management_and_callback
          (undefined4 param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 local_44 [2];
  undefined2 local_42;
  undefined1 auStack_40 [20];
  undefined4 local_2c;
  undefined1 *puStack_28;
  int local_24;
  char *local_20;
  undefined4 local_1c;
  
  uVar6 = *(short *)(param_2 + 0x10) - 4U & 0xff;
  if ((uVar6 != 2) && (uVar6 != 0x10)) {
    return 4;
  }
  puVar2 = (ushort *)update_buffer_position_and_size_alt(param_2 + 0xc,4);
  uVar5 = *puVar2;
  uVar1 = puVar2[1];
  iVar3 = format_data_by_size(auStack_40,puVar2 + 2,uVar6);
  if (iVar3 == 0) {
    return 0xe;
  }
  if (uVar5 != 0) {
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else if (uVar5 <= uVar1) {
      local_44[0] = 0;
      local_42 = 0x2800;
      iVar3 = compare_data_structures(auStack_40,local_44);
      if (iVar3 != 0) {
        uVar6 = (ushort)local_2c;
        local_2c = CONCAT22(0x2801,uVar6 & 0xff00);
        iVar3 = compare_data_structures(auStack_40,&local_2c);
        if (iVar3 != 0) {
          uVar4 = 0x10;
          goto LAB_00059274;
        }
      }
      fill_memory_buffer(&local_2c,0,0x14);
      local_24 = process_ble_characteristic_value_change_with_validation_and_callback
                           (param_1,0x11,1);
      if (local_24 == 0) {
        return 0x11;
      }
      local_2c = param_1;
      puStack_28 = auStack_40;
      local_20 = (char *)ble_memory_allocation_utility(local_24 + 0xc,1);
      *local_20 = '\0';
      local_1c = 0;
      FUN_00081cee(uVar5,uVar1,0x58751,&local_2c);
      if (*local_20 != '\0') {
        FUN_000821a4(param_1,local_24);
        return 0;
      }
      bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
                (*(undefined4 *)(local_24 + 0x18));
      decrement_reference_count_and_cleanup_memory(local_24);
      uVar4 = 10;
      goto LAB_00059274;
    }
  }
  uVar4 = 1;
LAB_00059274:
  FUN_000821f4(param_1,0x10,uVar5,uVar4);
  return 0;
}


