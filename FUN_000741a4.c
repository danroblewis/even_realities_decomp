/*
 * Function: FUN_000741a4
 * Entry:    000741a4
 * Prototype: undefined FUN_000741a4()
 */


void FUN_000741a4(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00074d74(param_1 + 0x18);
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = FUN_00072040(&DAT_2000b490);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar4 = 0x72;
  }
  else {
    FUN_00072078(&DAT_2000b490);
    if (*(char *)(param_1 + 0xd) < '\0') {
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x7f;
      FUN_00073cdc(&DMIC_BUFFER_POINTER,param_1);
    }
    iVar3 = DMIC_BUFFER_SIZE;
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 0x10;
    FUN_000737d8(iVar3 == param_1);
    iVar3 = FUN_0007205c(&DAT_2000b490);
    if (iVar3 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      if (DMIC_BUFFER_SIZE != param_1) {
        return;
      }
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      initialize_magnetometer(uVar4);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
    uVar4 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar4);
}


