/*
 * Function: initialize_buffer_structure_with_mutex_protection
 * Entry:    00076bcc
 * Prototype: undefined initialize_buffer_structure_with_mutex_protection()
 */


void initialize_buffer_structure_with_mutex_protection(undefined *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  acquire_buffer_mutex();
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    puVar2 = &DAT_20002d24;
    *(undefined1 **)(param_1 + 0x28) = &LAB_00076b90_1;
    if (param_1 == &DAT_20002d24) {
      puVar2 = (undefined *)0x1;
    }
    if (param_1 == &DAT_20002d24) {
      *(undefined **)(param_1 + 0x18) = puVar2;
    }
    uVar1 = allocate_buffer_block_with_mutex_protection(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = allocate_buffer_block_with_mutex_protection(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = allocate_buffer_block_with_mutex_protection(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    configure_buffer_parameters_with_memory_initialization(*(undefined4 *)(param_1 + 4),4,0);
    configure_buffer_parameters_with_memory_initialization(*(undefined4 *)(param_1 + 8),9,1);
    configure_buffer_parameters_with_memory_initialization(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  release_mutex(&DAT_20003818);
  return;
}


