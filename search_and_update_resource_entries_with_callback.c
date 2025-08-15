/*
 * Function: search_and_update_resource_entries_with_callback
 * Entry:    0004d058
 * Prototype: undefined __stdcall search_and_update_resource_entries_with_callback(undefined4 resource_context, undefined4 search_key, undefined4 update_data)
 */


void search_and_update_resource_entries_with_callback
               (int resource_context,undefined4 search_key,undefined4 update_data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(resource_context + 0xb0);
  iVar2 = iVar4 + -0x15c;
  while( true ) {
    iVar1 = compare_byte_arrays(search_key,iVar2);
    if (iVar1 == 0) {
      iVar1 = manage_audio_data_structure_with_validation
                        (iVar2 + -0x40,resource_context,search_key,0xffffffff,update_data,
                         *(undefined4 *)(iVar4 + 0x10),&LAB_0007ed26_1);
      if (iVar1 != 0) {
        return;
      }
      *(undefined1 *)(iVar3 * 0x70 + iVar4 + -0x138) = 1;
      if (*(code **)(iVar4 + 0xc) != (code *)0x0) {
        (**(code **)(iVar4 + 0xc))(iVar2 + -0x40);
      }
    }
    iVar2 = iVar2 + 0x70;
    if (iVar3 != 0) break;
    iVar3 = 1;
  }
  return;
}


