/*
 * Function: allocate_and_initialize_resource_buffer_with_string_copy
 * Entry:    0004cf78
 * Prototype: undefined __stdcall allocate_and_initialize_resource_buffer_with_string_copy(undefined4 resource_context, undefined4 buffer_ptr, undefined4 string_data)
 */


undefined4
allocate_and_initialize_resource_buffer_with_string_copy
          (int resource_context,int *buffer_ptr,undefined4 *string_data)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_24;
  undefined4 *puStack_20;
  
  iVar4 = *(int *)(resource_context + 0x10);
  if (*(int *)(iVar4 + 0x3bc) != 2) {
    return 0xfffffff0;
  }
  if (((char *)*string_data != (char *)0x0) && (*(char *)*string_data != '\0')) {
    local_24 = buffer_ptr;
    puStack_20 = string_data;
    if (*(int *)(iVar4 + 0x3b8) == 0) {
      iVar5 = iVar4 + 0x1b0;
      resource_mutex_acquire(iVar5,buffer_ptr,0xffffffff,0xffffffff,resource_context);
      iVar1 = check_and_allocate_memory_with_fallback(iVar4,&local_24,*string_data);
      piVar2 = local_24;
      if (local_24 != (int *)0x0) {
        local_24[0x1a] = (int)(string_data + 2);
        iVar3 = string_data[5];
        *(undefined1 *)(local_24 + 0x19) = 0;
        local_24[0x1b] = iVar3;
        local_24[0xf] = (int)local_24;
        if (iVar1 == 0) {
          safe_string_copy_with_padding(local_24 + 0x10,*string_data,0x20);
          mutex_unlock(iVar5);
        }
        else {
          mutex_unlock(iVar5);
          process_resource_allocation_with_callback(iVar4,piVar2,*string_data,piVar2[0x18]);
        }
LAB_0004cff8:
        *buffer_ptr = (int)piVar2;
        return 0;
      }
      mutex_unlock(iVar5);
    }
    else {
      piVar2 = (int *)find_data_structure_by_comparison(iVar4,&LAB_000a8ea0);
      if (piVar2 != (int *)0x0) {
        piVar2[0x1a] = (int)(string_data + 2);
        iVar1 = string_data[5];
        piVar2[0xf] = (int)piVar2;
        piVar2[0x1b] = iVar1;
        *(undefined1 *)(piVar2 + 0x19) = 0;
        safe_string_copy_with_padding(piVar2 + 0x10,*string_data,0x20);
        iVar4 = add_resource_entry_with_validation(iVar4,1,piVar2);
        if (iVar4 == 0) goto LAB_0004cff8;
      }
    }
  }
  return 0xffffffea;
}


