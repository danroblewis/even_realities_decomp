/*
 * Function: thunk_FUN_00074f68
 * Entry:    0007c398
 * Prototype: undefined thunk_FUN_00074f68()
 */


undefined8 thunk_FUN_00074f68(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = FUN_00072040(&DAT_2000b498);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b498);
    uVar6 = 0x72;
  }
  else {
    FUN_00072078(&DAT_2000b498);
    uVar3 = FUN_00074b68();
    iVar4 = uVar3 + DAT_200069e0;
    iVar5 = DAT_200069e4 + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar3,DAT_200069e0);
    iVar2 = FUN_0007205c(&DAT_2000b498);
    if (iVar2 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      return CONCAT44(iVar5,iVar4);
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b498);
    uVar6 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar6);
}


