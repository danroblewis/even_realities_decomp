/*
 * Function: dispatch_ble_characteristic_operation
 * Entry:    0005b890
 * Prototype: undefined dispatch_ble_characteristic_operation()
 */


undefined4 dispatch_ble_characteristic_operation(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 local_28;
  char *local_24;
  
  if (*(int *)(param_1 + 8) != 0x5a465) {
    return 1;
  }
  puVar5 = *(undefined **)(param_1 + 0xc);
  if (puVar5 == &DAT_20002a20) {
    iVar1 = 0;
    puVar4 = &DAT_2000ff19;
    do {
      iVar2 = compare_byte_arrays_7_bytes(puVar4,&DAT_000f2b3a);
      if (iVar2 == 0) {
        iVar2 = bt_connection_disconnect_with_parameter_validation_and_callback(puVar4[-1],puVar4,7)
        ;
        if (iVar2 == 0) {
          puVar3 = *(undefined2 **)(*(int *)(param_3 + 0x10) + 0x10);
          create_and_configure_ble_descriptor(puVar4[-1],puVar4,*puVar3,puVar3[1]);
        }
        else {
          validate_and_process_ble_characteristics_with_callback_validation_and_state_management();
        }
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iVar1 != 3);
  }
  if (*(short *)(puVar5 + 8) != *(short *)(param_3 + 0xc)) {
    return 1;
  }
  iVar1 = bt_connection_disconnect_with_validation_and_callback(*puVar5,puVar5 + 1);
  if (iVar1 == 0) {
    return 1;
  }
  if ((*(char *)(iVar1 + 0xd) == '\a') &&
     ((*(code **)(puVar5 + 0x14) == (code *)0x0 ||
      (iVar2 = (**(code **)(puVar5 + 0x14))(iVar1,param_1), iVar2 != 0)))) {
    iVar2 = ble_permission_access_validator(iVar1,param_1,0x94);
    if (iVar2 == 0) {
      if (*(short *)(param_3 + 0xc) == 2) {
        uVar6 = *(ushort *)(puVar5 + 8) & 2;
        if ((*(ushort *)(puVar5 + 8) & 2) != 0) {
          iVar2 = ble_characteristic_value_change_handler
                            (iVar1,*(undefined2 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x10));
          if (iVar2 != 0) goto LAB_0005b9a4;
          *(char *)(*(int *)(param_3 + 0x10) + 0x16) =
               *(char *)(*(int *)(param_3 + 0x10) + 0x16) + '\x01';
          uVar6 = 0;
        }
      }
      else {
        if (*(short *)(param_3 + 0xc) != 1) {
          validate_and_process_ble_characteristics_with_callback_validation_and_state_management
                    (iVar1);
          *(undefined4 *)(param_3 + 8) = 0;
          return 1;
        }
        uVar6 = *(ushort *)(puVar5 + 8) & 1;
        if ((*(ushort *)(puVar5 + 8) & 1) != 0) {
          iVar2 = handle_ble_characteristic_write_request
                            (iVar1,*(undefined2 *)(param_3 + 4),*(undefined4 *)(param_3 + 0x10));
LAB_0005b9a4:
          validate_and_process_ble_characteristics_with_callback_validation_and_state_management
                    (iVar1);
          *(int *)(param_3 + 8) = iVar2;
          if (-1 < iVar2) {
            return 1;
          }
          return 0;
        }
      }
      validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar1);
      *(uint *)(param_3 + 8) = uVar6;
      return 1;
    }
    local_24 = "Link is not encrypted";
    local_28 = 2;
    ble_data_processing_wrapper(&DAT_00088128,0x1080,&local_28);
  }
  validate_and_process_ble_characteristics_with_callback_validation_and_state_management(iVar1);
  return 1;
}


