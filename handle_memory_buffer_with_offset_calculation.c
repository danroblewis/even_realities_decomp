/*
 * Function: handle_memory_buffer_with_offset_calculation
 * Entry:    00084e58
 * Prototype: undefined handle_memory_buffer_with_offset_calculation()
 */


void handle_memory_buffer_with_offset_calculation(int param_1)

{
  uint uVar1;
  undefined1 local_c;
  undefined3 uStack_b;
  undefined4 uStack_8;
  
  uVar1 = *(int *)(param_1 + 8) - 0x18U & 0xfffffff8;
  uStack_8 = 1;
  _local_c = CONCAT31((int3)(uVar1 >> 8),1);
  handle_memory_buffer_with_bounds_checking(param_1,uVar1,&local_c,1,param_1);
  return;
}


