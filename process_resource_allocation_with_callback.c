/*
 * Function: process_resource_allocation_with_callback
 * Entry:    0004cce0
 * Prototype: undefined __stdcall process_resource_allocation_with_callback(undefined4 resource_context, undefined4 allocation_buffer, undefined4 allocation_flags, undefined4 callback_data)
 */


void process_resource_allocation_with_callback
               (int resource_context,int allocation_buffer,undefined4 allocation_flags,
               undefined4 callback_data)

{
  int iVar1;
  
  iVar1 = FUN_00070fb4(allocation_buffer,resource_context + 0xe0,allocation_flags,0xffffffff,
                       callback_data,*(undefined4 *)(resource_context + 0x1ac),&LAB_0007eae0_1);
  if (iVar1 == 0) {
    *(undefined1 *)(allocation_buffer + 100) = 1;
    if (*(code **)(resource_context + 0x1a8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0004cd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(resource_context + 0x1a8))(allocation_buffer);
      return;
    }
  }
  return;
}


