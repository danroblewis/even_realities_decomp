/*
 * Function: FUN_00072f28
 * Entry:    00072f28
 * Prototype: undefined FUN_00072f28()
 */


undefined4 FUN_00072f28(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_14;
  undefined4 uStack_10;
  
  local_14 = param_1;
  uStack_10 = param_3;
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","work != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/work.c",0x174,param_1);
    uVar6 = 0x174;
    pcVar3 = "WEST_TOPDIR/zephyr/kernel/work.c";
  }
  else {
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
    iVar4 = FUN_00072040(&DAT_2000b480);
    if (iVar4 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_1);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b480);
      uVar6 = 0x72;
    }
    else {
      FUN_00072078(&DAT_2000b480);
      uVar5 = FUN_00072cd4(param_2,&local_14);
      iVar4 = FUN_0007205c(&DAT_2000b480);
      if (iVar4 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar6);
        }
        InstructionSynchronizationBarrier(0xf);
        return uVar5;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,param_1);
      DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b480);
      uVar6 = 0xf0;
    }
    pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar3,uVar6);
}


