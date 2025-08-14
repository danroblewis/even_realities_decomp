/*
 * Function: FUN_00073bf4
 * Entry:    00073bf4
 * Prototype: undefined FUN_00073bf4()
 */


void FUN_00073bf4(void)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = FUN_00072040(&DAT_2000b490);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar5 = 0x72;
LAB_00073c24:
    pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
  else {
    FUN_00072078(&DAT_2000b490);
    if (*(char *)(DAT_2000b450 + 0xf) == '\0') {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "_kernel.cpus[0].current->base.sched_locked != 0U",
                   "WEST_TOPDIR/zephyr/kernel/sched.c",0x3f8);
      DEBUG_PRINT2(&DAT_000f53ff);
      uVar5 = 0x3f8;
    }
    else {
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = getCurrentExceptionNumber();
        uVar4 = uVar4 & 0x1f;
      }
      if (uVar4 == 0) {
        *(char *)(DAT_2000b450 + 0xf) = *(char *)(DAT_2000b450 + 0xf) + '\x01';
        FUN_000737d8();
        iVar2 = FUN_0007205c(&DAT_2000b490);
        if (iVar2 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar5);
          }
          InstructionSynchronizationBarrier(0xf);
          uVar5 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            uVar5 = getBasePriority();
          }
          bVar1 = (bool)isCurrentModePrivileged();
          if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
            setBasePriority(0x20);
          }
          InstructionSynchronizationBarrier(0xf);
          FUN_00086634(uVar5);
          return;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
        uVar5 = 0xf0;
        goto LAB_00073c24;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                   "WEST_TOPDIR/zephyr/kernel/sched.c",0x3f9);
      DEBUG_PRINT2(&DAT_000f53ff);
      uVar5 = 0x3f9;
    }
    pcVar3 = "WEST_TOPDIR/zephyr/kernel/sched.c";
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar3,uVar5);
}


