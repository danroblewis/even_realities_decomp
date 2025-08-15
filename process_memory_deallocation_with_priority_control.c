/*
 * Function: process_memory_deallocation_with_priority_control
 * Entry:    0004d578
 * Prototype: undefined __stdcall process_memory_deallocation_with_priority_control(undefined4 memory_ptr)
 */


void process_memory_deallocation_with_priority_control(uint *memory_ptr)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar3 = DAT_2000a0cc;
  iVar4 = (**(code **)(DAT_2000a0cc + 0x1c))(memory_ptr);
  iVar7 = iVar3 + 0x14;
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar5 = FUN_00072040(iVar7);
  if (iVar5 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar7);
    uVar8 = 0x72;
  }
  else {
    FUN_00072078(iVar7);
    *(byte *)memory_ptr = (byte)*memory_ptr & 0xfe;
    if ((*(int *)(iVar3 + 0x10) << 0x1e < 0) &&
       (memory_ptr != (uint *)(*(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0xc) * 4))) {
      *memory_ptr = *memory_ptr & 3 | iVar4 << 2;
    }
    else {
      *(byte *)memory_ptr = (byte)*memory_ptr & 0xfd;
      if (*(int *)(iVar3 + 0xc) == *(int *)(iVar3 + 8)) {
        uVar6 = FUN_0007e35c(iVar3,*(int *)(iVar3 + 0xc),iVar4);
        *(undefined4 *)(iVar3 + 8) = uVar6;
      }
      FUN_0007e378(iVar3,iVar4);
    }
    iVar4 = FUN_0007205c(iVar7);
    if (iVar4 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar8);
      }
      InstructionSynchronizationBarrier(0xf);
      z_spin_lock_valid(iVar3 + 0x2c);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",iVar7);
    uVar8 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar8);
}


