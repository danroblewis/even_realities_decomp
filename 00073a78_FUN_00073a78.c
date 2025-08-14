/*
 * Function: FUN_00073a78
 * Entry:    00073a78
 * Prototype: undefined FUN_00073a78()
 */


void FUN_00073a78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  iVar3 = FUN_00072040(&DAT_2000b490);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar4 = 0x72;
  }
  else {
    FUN_00072078(&DAT_2000b490);
    if ((int)((uint)*(byte *)(param_1 + 0xd) << 0x1d) < 0) {
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfb;
      FUN_00073840(param_1);
      FUN_000739f0(&DAT_2000b490,uVar4);
      return;
    }
    iVar3 = FUN_0007205c(&DAT_2000b490);
    if (iVar3 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,param_4);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
    uVar4 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar4);
}


