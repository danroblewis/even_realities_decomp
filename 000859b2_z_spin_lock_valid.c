/*
 * Function: z_spin_lock_valid
 * Entry:    000859b2
 * Prototype: undefined z_spin_lock_valid()
 */


void z_spin_lock_valid(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
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
  iVar3 = FUN_00072040(&DAT_2000b474);
  if (iVar3 != 0) {
    FUN_00072078(&DAT_2000b474);
    iVar3 = FUN_000744a4(param_1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0xc) != iVar3) {
        iVar3 = iVar3 + 1;
      }
      *(int *)(param_1 + 8) = iVar3;
      FUN_0008688e(param_1 + 0x10,2);
    }
    else {
      *(undefined4 *)(iVar3 + 0x90) = 0;
      FUN_000738d4();
    }
    FUN_000739f0(&DAT_2000b474,uVar4);
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
               "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
  DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b474);
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
}


