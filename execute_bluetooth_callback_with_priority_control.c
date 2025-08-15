/*
 * Function: execute_bluetooth_callback_with_priority_control
 * Entry:    0004be0c
 * Prototype: undefined __stdcall execute_bluetooth_callback_with_priority_control(undefined4 callback_context, undefined4 callback_data)
 */


void execute_bluetooth_callback_with_priority_control(int callback_context,byte *callback_data)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = (**(code **)(callback_context + 0x1c))(callback_data);
  iVar5 = callback_context + 0x14;
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
  iVar4 = FUN_00072040(iVar5);
  if (iVar4 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar5);
    uVar3 = 0x72;
  }
  else {
    FUN_00072078(iVar5);
    *callback_data = *callback_data | 1;
    uVar3 = FUN_0007e35c(callback_context,*(undefined4 *)(callback_context + 4),uVar3);
    *(undefined4 *)(callback_context + 4) = uVar3;
    FUN_0007e4f2(callback_context);
    iVar4 = FUN_0007205c(iVar5);
    if (iVar4 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",iVar5);
    uVar3 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar3);
}


