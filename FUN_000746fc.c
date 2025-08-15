/*
 * Function: FUN_000746fc
 * Entry:    000746fc
 * Prototype: undefined FUN_000746fc()
 */


int FUN_000746fc(uint param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getCurrentExceptionNumber();
    uVar6 = uVar6 & 0x1f;
  }
  if (uVar6 == 0) {
    if (param_1 == 0 && param_2 == 0) {
      FUN_000745c8();
      return 0;
    }
    if ((int)((param_2 + 1) - (uint)(param_1 < 0xfffffffe)) < 0 ==
        (SBORROW4(param_2,-1) != SBORROW4(param_2 + 1,(uint)(param_1 < 0xfffffffe)))) {
      iVar3 = setup_touch_sensor(param_1,param_2,param_1 + 2);
      uVar6 = param_1 + iVar3;
    }
    else {
      uVar6 = -param_1 - 2;
    }
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
    iVar3 = FUN_00072040(&DAT_2000b490);
    if (iVar3 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
      uVar5 = 0x72;
    }
    else {
      FUN_00072078(&DAT_2000b490);
      DAT_2000b484 = DMIC_BUFFER_SIZE;
      FUN_00073e88();
      FUN_00074bf4(DMIC_BUFFER_SIZE + 0x18,&LAB_00086660_1,param_1,param_2);
      *(byte *)(DMIC_BUFFER_SIZE + 0xd) = *(byte *)(DMIC_BUFFER_SIZE + 0xd) | 0x10;
      iVar3 = FUN_0007205c(&DAT_2000b490);
      if (iVar3 != 0) {
        process_data_with_validation_and_callback_alt4(uVar5);
        if (-1 < (int)((uint)*(byte *)(DMIC_BUFFER_SIZE + 0xd) << 0x1b)) {
          uVar4 = setup_touch_sensor();
          if ((int)-(uint)(uVar6 < uVar4) < (int)(uint)(uVar6 - uVar4 == 0)) {
            return 0;
          }
          return uVar6 - uVar4;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                     "!z_is_thread_state_set(_kernel.cpus[0].current, ((1UL << (4))))",
                     "WEST_TOPDIR/zephyr/kernel/sched.c",0x5b2);
        DEBUG_PRINT2(&DAT_000f53ff);
        uVar5 = 0x5b2;
        goto LAB_00074722;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x111);
      DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
      uVar5 = 0x111;
    }
    pcVar2 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0x596);
    DEBUG_PRINT2(&DAT_000f53ff);
    uVar5 = 0x596;
LAB_00074722:
    pcVar2 = "WEST_TOPDIR/zephyr/kernel/sched.c";
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar2,uVar5);
}


