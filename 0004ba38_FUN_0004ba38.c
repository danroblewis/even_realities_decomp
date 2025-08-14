/*
 * Function: FUN_0004ba38
 * Entry:    0004ba38
 * Prototype: undefined FUN_0004ba38()
 */


undefined4 FUN_0004ba38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ushort uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar8 = param_1 + 0x14;
  uVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar9 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar4 = FUN_00072040(iVar8);
  if (iVar4 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar8);
    uVar9 = 0x72;
  }
  else {
    FUN_00072078(iVar8);
    uVar6 = *(ushort *)(param_1 + 0x1c) & 7;
    if (uVar6 == 2) {
      sVar1 = *(short *)(param_1 + 0x1e);
      if (sVar1 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","mgr->refs > 0",
                     "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x1ef);
        uVar9 = 0x1ef;
        pcVar5 = "WEST_TOPDIR/zephyr/lib/os/onoff.c";
        goto LAB_0004bac6;
      }
      *(short *)(param_1 + 0x1e) = sVar1 + -1;
      uVar7 = 2;
      if (sVar1 == 1) {
        FUN_0004b4fc(param_1,2,uVar9,0,param_4);
        return 2;
      }
    }
    else if (uVar6 == 1) {
      uVar7 = 0xfffffffb;
    }
    else {
      uVar7 = 0xffffff7a;
    }
    iVar4 = FUN_0007205c(iVar8);
    if (iVar4 != 0) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar9);
      }
      InstructionSynchronizationBarrier(0xf);
      return uVar7;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",iVar8);
    uVar9 = 0xf0;
  }
  pcVar5 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_0004bac6:
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar5,uVar9);
}


