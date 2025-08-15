/*
 * Function: validate_device_properties_and_state
 * Entry:    00060ab0
 * Prototype: undefined validate_device_properties_and_state()
 */


undefined4 validate_device_properties_and_state(undefined4 param_1,byte *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_30;
  char *local_2c;
  uint uStack_28;
  uint local_24;
  byte local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined1 local_1b;
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    iVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar3;
    iVar2 = puVar3[1];
  }
  puVar3 = *(undefined4 **)(param_2 + 8);
  if (puVar3 == (undefined4 *)0x0) {
    iVar1 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar3;
    iVar1 = puVar3[1];
    if ((iVar1 != 0) && (iVar2 != 0)) {
      if (iVar1 != iVar2) {
        return 0xffffffea;
      }
      local_24 = iVar2 + 1;
      goto LAB_00060ae0;
    }
  }
  local_24 = iVar2 + 1 + iVar1;
LAB_00060ae0:
  local_20 = *param_2;
  uStack_28 = (uint)local_20;
  if (9 < local_24) {
    local_2c = "cinstr %02x transfer too long: %zu";
    local_30 = 4;
    execute_device_memory_data_compression(&DAT_00088270,0x2080,&local_30);
    return 0xffffffea;
  }
  local_1f = (undefined1)local_24;
  local_1e = 0x101;
  local_1c = 0;
  local_1b = param_3;
  handle_ble_connection_state_and_status_flags(param_1);
  uVar4 = handle_hardware_register_operation(&local_20,uVar4,uVar5);
  manage_device_state_with_spin_lock_validation(param_1);
  uVar4 = lookup_device_property_from_table(uVar4);
  return uVar4;
}


