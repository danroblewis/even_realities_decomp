/*
 * Function: FUN_000757b0
 * Entry:    000757b0
 * Prototype: undefined FUN_000757b0()
 */


undefined4 FUN_000757b0(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = FUN_00072040(&DAT_2000b4a0);
  if (iVar3 != 0) {
    FUN_00072078(&DAT_2000b4a0);
    piVar4 = (int *)*param_1;
    param_1[3] = param_2;
    param_1[2] = 1;
    if (param_1 == piVar4) {
      iVar3 = FUN_0007205c(&DAT_2000b4a0);
      if (iVar3 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b4a0);
        uVar7 = 0xf0;
        goto LAB_000757e4;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar6 = 0;
    }
    else {
      iVar3 = *piVar4;
      piVar5 = (int *)piVar4[1];
      *piVar5 = iVar3;
      *(int **)(iVar3 + 4) = piVar5;
      *piVar4 = 0;
      piVar4[1] = 0;
      uVar6 = setup_image_processing();
      FUN_000739f0(&DAT_2000b4a0,uVar7);
    }
    return uVar6;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
               "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
  DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b4a0);
  uVar7 = 0x72;
LAB_000757e4:
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar7);
}


