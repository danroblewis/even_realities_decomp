/*
 * Function: handle_ble_characteristic_discovery
 * Entry:    0005c87c
 * Prototype: undefined handle_ble_characteristic_discovery()
 */


void handle_ble_characteristic_discovery(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x90;
  local_20 = param_2;
  uStack_1c = param_3;
  iVar1 = is_ble_uuid_valid_and_available(*(undefined1 *)(param_1 + 8),iVar3);
  ble_handle_mapping_utility(1,0xffff,&LAB_0005a2fc_1,&local_20);
  if (iVar1 != 0) {
    process_ble_handle_mapping_and_log(*(undefined1 *)(param_1 + 8),iVar3);
  }
  iVar2 = find_ble_characteristic_by_uuid(*(undefined1 *)(param_1 + 8),param_2);
  if ((iVar2 != 0) && (copy_data_structure_fields(iVar2 + 1,param_3), iVar1 != 0)) {
    log_ble_characteristic_status(*(undefined1 *)(param_1 + 8),iVar3);
  }
  return;
}


