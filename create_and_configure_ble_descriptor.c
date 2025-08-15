/*
 * Function: create_and_configure_ble_descriptor
 * Entry:    0005a128
 * Prototype: undefined create_and_configure_ble_descriptor()
 */


void create_and_configure_ble_descriptor
               (undefined1 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  char *local_1c;
  
  puVar1 = (undefined1 *)find_ble_descriptor_by_uuid();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)find_ble_descriptor_by_uuid(0,&DAT_000f2b3a);
    if (puVar1 == (undefined1 *)0x0) {
      local_1c = "unable to save SC: no cfg left";
      local_20 = 2;
      ble_data_processing_wrapper(&DAT_00088128,0x1040,&local_20);
      return;
    }
    *puVar1 = param_1;
    FUN_000828da(puVar1 + 1,param_2);
  }
  uVar3 = (uint)*(ushort *)(puVar1 + 10);
  if (*(ushort *)(puVar1 + 8) == 0) {
    if (uVar3 == 0) {
      *(short *)(puVar1 + 8) = (short)param_3;
    }
    else {
LAB_0005a196:
      if (param_4 <= uVar3) {
        return;
      }
    }
  }
  else {
    if (*(ushort *)(puVar1 + 8) <= param_3) goto LAB_0005a196;
    *(short *)(puVar1 + 8) = (short)param_3;
    if (param_4 <= uVar3) goto LAB_0005a178;
  }
  *(short *)(puVar1 + 10) = (short)param_4;
LAB_0005a178:
  iVar2 = FUN_00080f92(*puVar1,puVar1 + 1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = format_bluetooth_log_message_with_callback(*puVar1,puVar1 + 1,puVar1 + 8,4);
  if (iVar2 != 0) {
    local_1c = "failed to store SC (err %d)";
    local_20 = 3;
    ble_data_processing_wrapper(&DAT_00088128,0x1840,&local_20);
  }
  return;
}


