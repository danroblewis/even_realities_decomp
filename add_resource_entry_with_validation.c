/*
 * Function: add_resource_entry_with_validation
 * Entry:    0004d0c4
 * Prototype: undefined __stdcall add_resource_entry_with_validation(undefined4 resource_context, undefined4 operation_type, undefined4 resource_entry, undefined4 additional_data)
 */


undefined4
add_resource_entry_with_validation
          (int resource_context,int operation_type,int resource_entry,undefined4 additional_data)

{
  undefined4 uVar1;
  
  if ((resource_context == 0) || (resource_entry == 0)) {
    uVar1 = 0xffffffea;
  }
  else if (operation_type == 1) {
    uVar1 = manage_audio_data_structure_with_validation
                      (resource_entry,resource_context + 0xe0,resource_entry + 0x40,0xffffffff,
                       0xffffffff,*(undefined4 *)(resource_context + 0x1ac),&LAB_0007ed26_1,
                       additional_data);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


