/*
 * Function: FUN_00074a54
 * Entry:    00074a54
 * Prototype: undefined FUN_00074a54()
 */


int FUN_00074a54(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
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
  iVar3 = FUN_00072040(&DAT_2000b490);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar6 = 0x72;
  }
  else {
    FUN_00072078(&DAT_2000b490);
    piVar5 = (int *)*param_1;
    if (param_1 == piVar5) {
      iVar3 = 0;
    }
    else if (piVar5 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      piVar5[0x24] = param_2;
      piVar5[5] = param_3;
      FUN_00074274(piVar5);
      FUN_00074d74(piVar5 + 6);
      FUN_00073840(piVar5);
    }
    iVar4 = FUN_0007205c(&DAT_2000b490);
    if (iVar4 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      return iVar3;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,param_4);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
    uVar6 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar6);
}


