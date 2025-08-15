/*
 * Function: FUN_00071c20
 * Entry:    00071c20
 * Prototype: undefined FUN_00071c20()
 */


int FUN_00071c20(int param_1,int *param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  
  iVar6 = param_1 + 8;
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
  iVar8 = param_1;
  piVar9 = param_2;
  iVar5 = param_3;
  iVar3 = FUN_00072040(iVar6);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,iVar8,piVar9);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar6);
    uVar7 = 0x72;
  }
  else {
    FUN_00072078(iVar6);
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 == (undefined4 *)0x0) {
      if (param_3 != 0 || param_4 != 0) {
        iVar6 = FUN_00073f6c(iVar6,uVar7,param_1,0,param_3,param_4,iVar5);
        if (iVar6 != 0) {
          return iVar6;
        }
        *param_2 = *(int *)(DMIC_BUFFER_SIZE + 0x14);
        return 0;
      }
      iVar5 = -0xc;
      *param_2 = 0;
    }
    else {
      *param_2 = (int)puVar4;
      *(undefined4 *)(param_1 + 0x18) = *puVar4;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      iVar5 = 0;
    }
    iVar3 = FUN_0007205c(iVar6);
    if (iVar3 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      return iVar5;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,iVar8,piVar9);
    DEBUG_PRINT2("\tNot my spinlock %p\n",iVar6);
    uVar7 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar7);
}


