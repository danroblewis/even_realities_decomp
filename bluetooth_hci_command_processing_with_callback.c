/*
 * Function: bluetooth_hci_command_processing_with_callback
 * Entry:    00054828
 * Prototype: undefined bluetooth_hci_command_processing_with_callback()
 */


undefined4 bluetooth_hci_command_processing_with_callback(int param_1)

{
  int iVar1;
  undefined4 local_20;
  char *local_1c;
  uint uStack_18;
  
  uStack_18 = (uint)*(byte *)(param_1 + 0x18);
  if (uStack_18 == 1) {
    iVar1 = map_value_category(**(undefined1 **)(param_1 + 0xc));
    if (iVar1 << 0x1f < 0) {
      bluetooth_hci_command_processing_with_validation(param_1);
    }
    if (-1 < iVar1 << 0x1e) {
      return 0;
    }
  }
  else if (uStack_18 != 3) {
    local_1c = "Invalid buf type %u";
    local_20 = 3;
    call_system_cleanup_alt(&DAT_00088138,0x1840,&local_20);
    decrement_reference_count_and_cleanup_memory(param_1);
    return 0xffffffea;
  }
  process_data_with_parameter_validation_and_compression_alt(param_1);
  return 0;
}


