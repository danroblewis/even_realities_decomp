/*
 * Function: FUN_0004be0c
 * Entry:    0004be0c
 * Prototype: undefined FUN_0004be0c()
 */


void FUN_0004be0c(int param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar3 = (**(code **)(param_1 + 0x1c))(param_2);
  iVar5 = param_1 + 0x14;
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
    *param_2 = *param_2 | 1;
    uVar3 = FUN_0007e35c(param_1,*(undefined4 *)(param_1 + 4),uVar3);
    *(undefined4 *)(param_1 + 4) = uVar3;
    FUN_0007e4f2(param_1);
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
  FUN_0007e2ec("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar3);
}


