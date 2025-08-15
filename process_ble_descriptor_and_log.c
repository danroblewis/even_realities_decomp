/*
 * Function: process_ble_descriptor_and_log
 * Entry:    0005a044
 * Prototype: undefined process_ble_descriptor_and_log()
 */


undefined4 process_ble_descriptor_and_log(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_20;
  char *local_1c;
  int iStack_18;
  
  puVar1 = (undefined1 *)find_ble_descriptor_by_uuid();
  if (puVar1 != (undefined1 *)0x0) {
    iVar2 = format_bluetooth_log_message_with_parameters(*puVar1,puVar1 + 1);
    if (iVar2 != 0) {
      local_1c = "failed to delete SC (err %d)";
      local_20 = 3;
      iStack_18 = iVar2;
      ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_20);
    }
    initialize_structure_with_zeros(puVar1);
  }
  return 0;
}


