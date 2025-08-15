/*
 * Function: handle_ble_descriptor_discovery
 * Entry:    0005c8d8
 * Prototype: undefined handle_ble_descriptor_discovery()
 */


int handle_ble_descriptor_discovery(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined4 local_20;
  undefined1 local_1c;
  undefined3 uStack_1b;
  undefined4 uStack_18;
  
  _local_1c = CONCAT31((int3)((uint)param_2 >> 8),(char)param_1);
  local_20 = param_2;
  uStack_18 = param_3;
  ble_handle_mapping_utility(1,0xffff,&LAB_0005a2d4_1,&local_20);
  iVar1 = format_bluetooth_log_message_with_memory(param_1,param_2);
  if ((-1 < iVar1) && (iVar1 = process_ble_descriptor_and_log(param_1,param_2), -1 < iVar1)) {
    iVar1 = find_ble_characteristic_by_uuid(param_1,param_2);
    if (iVar1 != 0) {
      initialize_ble_connection_data();
    }
    iVar1 = format_bluetooth_log_message_with_memory(param_1,param_2);
    if (-1 < iVar1) {
      iVar1 = 0;
      puVar5 = &DAT_2000af19;
      do {
        if (((byte)puVar5[-1] == param_1) &&
           (iVar2 = compare_byte_arrays_7_bytes(param_2,puVar5), iVar2 != 0)) {
          puVar4 = &DAT_2000af18 + iVar1;
          piVar3 = *(int **)((int)&BLE_DESCRIPTOR_DISCOVERY_HANDLING_STATE_2 + iVar1);
          if (piVar3 != (int *)0x0) {
            iVar1 = *piVar3;
            if (iVar1 != 0) {
              iVar1 = iVar1 + -0x18;
            }
            *(undefined2 *)(piVar3 + -2) = 0;
            manage_ble_characteristic_value_buffer(0,puVar4,0,piVar3 + -6);
            if (iVar1 != 0) {
              while (iVar2 = *(int *)(iVar1 + 0x18), iVar2 != 0) {
                *(undefined2 *)(iVar1 + 0x10) = 0;
                manage_ble_characteristic_value_buffer(0,puVar4,0,iVar1);
                iVar1 = iVar2 + -0x18;
              }
              *(undefined2 *)(iVar1 + 0x10) = 0;
              manage_ble_characteristic_value_buffer(0,puVar4,0,iVar1);
            }
          }
          break;
        }
        iVar1 = iVar1 + 0x10;
        puVar5 = puVar5 + 0x10;
      } while (iVar1 != 0x30);
      iVar1 = 0;
    }
  }
  return iVar1;
}


