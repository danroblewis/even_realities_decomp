/*
 * Function: validate_and_process_ble_descriptor
 * Entry:    0005a090
 * Prototype: undefined validate_and_process_ble_descriptor()
 */


void validate_and_process_ble_descriptor(int param_1)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  iVar1 = FUN_00080f92(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
  if (iVar1 == 0) {
    iVar1 = find_ble_descriptor_by_uuid(*(undefined1 *)(param_1 + 8),param_1 + 0x90);
    if (iVar1 != 0) {
      FUN_00082928();
    }
  }
  else {
    iStack_18 = process_ble_descriptor_and_log();
    if (iStack_18 != 0) {
      local_1c = "Failed to clear SC %d";
      local_20 = 3;
      ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_20);
    }
  }
  return;
}


