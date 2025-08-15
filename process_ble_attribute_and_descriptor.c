/*
 * Function: process_ble_attribute_and_descriptor
 * Entry:    00082bd4
 * Prototype: undefined process_ble_attribute_and_descriptor()
 */


void process_ble_attribute_and_descriptor
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uStack_20;
  char *pcStack_1c;
  int iStack_18;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = check_ble_attribute_processing_enabled();
  if (((iVar1 != 0) && (iVar1 = find_ble_attribute_by_handle(param_1), iVar1 != 0)) &&
     ((int)((uint)*(byte *)(iVar1 + 8) << 0x1f) < 0)) {
    conditional_ble_service_discovery_processing(iVar1,1);
  }
  if ((param_3 == 0) &&
     (puVar2 = (undefined1 *)
               find_ble_descriptor_by_uuid(*(undefined1 *)(param_1 + 8),param_1 + 0x90),
     puVar2 != (undefined1 *)0x0)) {
    *(undefined4 *)(puVar2 + 8) = 0;
    iStack_18 = format_bluetooth_log_message_with_callback(*puVar2,puVar2 + 1,puVar2 + 8,4);
    if (iStack_18 != 0) {
      pcStack_1c = "failed to store SC (err %d)";
      uStack_20 = 3;
      ble_data_processing_wrapper(&DAT_00088128,0x1840,&uStack_20);
    }
    return;
  }
  return;
}


