/*
 * Function: allocate_buffer_block_with_mutex_protection
 * Entry:    00076c3c
 * Prototype: undefined allocate_buffer_block_with_mutex_protection()
 */


undefined4 * allocate_buffer_block_with_mutex_protection(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  acquire_buffer_allocation_mutex();
  if (DAT_20002d3c == 0) {
    initialize_buffer_structure_with_mutex_protection(&DAT_20002d24);
  }
  piVar3 = &DAT_20002d6c;
  do {
    iVar1 = piVar3[1];
    puVar2 = (undefined4 *)piVar3[2];
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      if (*(short *)(puVar2 + 3) == 0) {
        puVar2[0x19] = 0;
        puVar2[3] = 0xffff0001;
        initialize_recursive_mutex(puVar2 + 0x16);
        release_buffer_allocation_mutex();
        *puVar2 = 0;
        puVar2[6] = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        fill_memory_buffer(puVar2 + 0x17,0,8);
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        return puVar2;
      }
      puVar2 = puVar2 + 0x1a;
    }
    if (*piVar3 == 0) {
      iVar1 = allocate_buffer_memory(param_1,4);
      *piVar3 = iVar1;
      if (iVar1 == 0) {
        release_buffer_allocation_mutex();
        *param_1 = 0xc;
        return (undefined4 *)0x0;
      }
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}


