/*
 * Function: allocate_and_initialize_resource_buffer_with_string_copy
 * Entry:    0004cf78
 * Prototype: undefined __stdcall allocate_and_initialize_resource_buffer_with_string_copy(undefined4 resource_context, undefined4 buffer_ptr, undefined4 string_data)
 */


undefined4
allocate_and_initialize_resource_buffer_with_string_copy
          (int resource_context,int *buffer_ptr,undefined4 *string_data)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_24;
  undefined4 *puStack_20;
  
  iVar5 = *(int *)(resource_context + 0x10);
  if (*(int *)(iVar5 + 0x3bc) != 2) {
    return 0xfffffff0;
  }
  if (((char *)*string_data != (char *)0x0) && (cVar1 = *(char *)*string_data, cVar1 != '\0')) {
    local_24 = buffer_ptr;
    puStack_20 = string_data;
    if (*(int *)(iVar5 + 0x3b8) == 0) {
      iVar6 = iVar5 + 0x1b0;
      resource_mutex_acquire(iVar6,buffer_ptr,0xffffffff,0xffffffff);
      iVar2 = check_and_allocate_memory_with_fallback(iVar5,&local_24,*string_data);
      piVar3 = local_24;
      if (local_24 != (int *)0x0) {
        local_24[0x1a] = (int)(string_data + 2);
        iVar4 = string_data[5];
        *(undefined1 *)(local_24 + 0x19) = 0;
        local_24[0x1b] = iVar4;
        local_24[0xf] = (int)local_24;
        if (iVar2 == 0) {
          safe_string_copy_with_padding(local_24 + 0x10,*string_data,0x20);
          mutex_unlock(iVar6);
        }
        else {
          mutex_unlock(iVar6);
          process_resource_allocation_with_callback(iVar5,piVar3,*string_data,piVar3[0x18]);
        }
LAB_0004cff8:
        *buffer_ptr = (int)piVar3;
        return 0;
      }
      mutex_unlock(iVar6);
    }
    else {
      piVar3 = (int *)FUN_0007eae4(iVar5,&LAB_000a8ea0,string_data,cVar1,resource_context);
      if (piVar3 != (int *)0x0) {
        piVar3[0x1a] = (int)(string_data + 2);
        iVar2 = string_data[5];
        piVar3[0xf] = (int)piVar3;
        piVar3[0x1b] = iVar2;
        *(undefined1 *)(piVar3 + 0x19) = 0;
        safe_string_copy_with_padding(piVar3 + 0x10,*string_data,0x20);
        iVar5 = add_resource_entry_with_validation(iVar5,1,piVar3);
        if (iVar5 == 0) goto LAB_0004cff8;
      }
    }
  }
  return 0xffffffea;
}


