/*
 * Function: FUN_00050b8c
 * Entry:    00050b8c
 * Prototype: undefined FUN_00050b8c()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050b8c(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (DAT_2000b450 == param_1) {
    uVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar5 = getCurrentExceptionNumber();
      uVar5 = uVar5 & 0x1f;
    }
    if (uVar5 != 0) {
      _DAT_e000ed04 = _DAT_e000ed04 | 0x10000000;
      _DAT_e000ed24 = _DAT_e000ed24 & 0xffff7fff;
    }
  }
  uVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar6 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = FUN_00072040(&DAT_2000b490);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar6 = 0x72;
  }
  else {
    FUN_00072078(&DAT_2000b490);
    if ((int)((uint)*(byte *)(param_1 + 0xc) << 0x1f) < 0) {
      iVar3 = FUN_0007205c(&DAT_2000b490);
      if (iVar3 != 0) {
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(uVar6);
        }
        InstructionSynchronizationBarrier(0xf);
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/kernel/sched.c",0x6d7);
        DEBUG_PRINT2("\taborting essential thread %p\n",param_1);
        uVar6 = 0x6d7;
LAB_00074940:
        pcVar4 = "WEST_TOPDIR/zephyr/kernel/sched.c";
        goto LAB_000748ee;
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xd);
      if (-1 < (int)((uint)bVar1 << 0x1c)) {
        if ((char)bVar1 < '\0') {
          *(byte *)(param_1 + 0xd) = bVar1 & 0x5f | 8;
          FUN_00073cdc(&DAT_2000b464,param_1);
        }
        else {
          *(byte *)(param_1 + 0xd) = bVar1 & 0xdf | 8;
        }
        if (*(int *)(param_1 + 8) != 0) {
          FUN_00074274(param_1);
        }
        FUN_00074d74(param_1 + 0x18);
        while ((iVar3 = *(int *)(param_1 + 0x58), iVar3 != param_1 + 0x58 && (iVar3 != 0))) {
          FUN_00074274(iVar3);
          FUN_00074d74(iVar3 + 0x18);
          *(undefined4 *)(iVar3 + 0x90) = 0;
          FUN_00073840(iVar3);
        }
        FUN_000737d8(1);
        FUN_00050304(param_1);
        if (DAT_2000b450 == param_1) {
          uVar5 = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            uVar5 = getCurrentExceptionNumber();
            uVar5 = uVar5 & 0x1f;
          }
          if (uVar5 == 0) {
            iVar3 = FUN_0007205c(&DAT_2000b490);
            if (iVar3 != 0) {
              FUN_000501d4(uVar6);
              DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/kernel/sched.c",
                           0x70d);
              DEBUG_PRINT2("\taborted _current back from dead\n");
              uVar6 = 0x70d;
              goto LAB_00074940;
            }
            DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                         "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x111);
            DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
            uVar6 = 0x111;
            goto LAB_000748ec;
          }
        }
      }
      iVar3 = FUN_0007205c(&DAT_2000b490);
      if (iVar3 != 0) {
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(uVar6);
        }
        InstructionSynchronizationBarrier(0xf);
        return;
      }
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
    uVar6 = 0xf0;
  }
LAB_000748ec:
  pcVar4 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_000748ee:
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar4,uVar6);
}


