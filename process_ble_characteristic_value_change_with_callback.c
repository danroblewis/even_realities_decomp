/*
 * Function: process_ble_characteristic_value_change_with_callback
 * Entry:    00058bfc
 * Prototype: undefined process_ble_characteristic_value_change_with_callback()
 */


void process_ble_characteristic_value_change_with_callback(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_50;
  char *local_4c;
  undefined1 *local_48;
  undefined1 auStack_40 [4];
  int local_3c;
  byte local_38;
  undefined1 auStack_34 [40];
  
  param_1[0x46] = param_1[0x46] | 4;
  FUN_00081c22(param_1 + -2);
  FUN_000732d4(param_1 + 0x56,0x59921);
  iVar1 = *param_1;
  local_38 = 1;
  local_3c = iVar1;
  iVar2 = FUN_00080f92(*(undefined1 *)(iVar1 + 8),iVar1 + 0x90);
  if (iVar2 != 0) {
    if (*(char *)(iVar1 + 8) == '\0') {
      local_48 = (undefined1 *)0x0;
    }
    else {
      FUN_0007dc4a(auStack_40,4);
      local_48 = auStack_40;
    }
    process_data_with_callback_and_parameter_alt6(auStack_34,0x24,"ccc",iVar1 + 0x90);
    initialize_buffer_structure_with_validation(auStack_34,0x5af8d);
  }
  ble_handle_mapping_utility(1,0xffff,0x5b555,&local_3c);
  uVar3 = get_ble_property_value(iVar1);
  if ((uVar3 < local_38) &&
     (local_48 = (undefined1 *)FUN_0008149a(iVar1), local_48 != (undefined1 *)0x0)) {
    local_4c = "Failed to set security for bonded peer (%d)";
    local_50 = 3;
    ble_data_processing_wrapper(&DAT_00088128,0x1880,&local_50);
  }
  return;
}


