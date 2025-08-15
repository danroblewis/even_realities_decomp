/*
 * Function: manage_privileged_mode_with_flag_clearing_and_memory_processing
 * Entry:    00084b32
 * Prototype: undefined manage_privileged_mode_with_flag_clearing_and_memory_processing()
 */


void manage_privileged_mode_with_flag_clearing_and_memory_processing(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_1 + 0x10);
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar4 = *(int *)(iVar5 + 0xc);
  *(uint *)(iVar4 + 0xc0) = *(uint *)(iVar4 + 0xc0) & ~param_2;
  iVar5 = *(int *)(iVar5 + 0xc);
  if (*(int *)(iVar5 + 0xc0) == 0) {
    if (param_2 == 2) {
      uVar3 = manage_memory_buffer_with_string_processing_and_busy_wait
                        (*(undefined4 *)(param_1 + 4),iVar5 + 0xc4,5);
      *(undefined1 *)(iVar5 + 0xc9) = uVar3;
    }
    *(undefined4 *)(**(int **)(param_1 + 4) + 0x500) = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


