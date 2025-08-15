/*
 * Function: FUN_000719f4
 * Entry:    000719f4
 * Prototype: undefined FUN_000719f4(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_000719f4(int *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,uint param_6
                )

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r3;
  int *piVar6;
  undefined4 uVar7;
  uint local_30;
  uint uStack_2c;
  
  initialize_display_controller(&local_30);
  piVar6 = param_1 + 5;
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = FUN_00072040(piVar6);
  if (iVar2 == 0) {
LAB_00071a32:
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",piVar6);
    uVar7 = 0x72;
  }
  else {
    FUN_00072078(piVar6);
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getCurrentExceptionNumber();
      uVar5 = uVar5 & 0x1f;
    }
    if ((uVar5 != 0) && (uVar5 = param_5 | param_6, uVar5 != 0)) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "!arch_is_in_isr() || ((timeout).ticks == (((k_timeout_t) {0})).ticks)",
                   "WEST_TOPDIR/zephyr/kernel/kheap.c",0x4a);
      DEBUG_PRINT2(&DAT_000f53ff);
      uVar7 = 0x4a;
      pcVar3 = "WEST_TOPDIR/zephyr/kernel/kheap.c";
      goto LAB_00071aac;
    }
    while ((iVar2 = allocate_heap_memory_with_alignment(param_1,param_2,param_3,uVar5), iVar2 == 0
           && (param_5 != 0 || param_6 != 0))) {
      setup_framebuffer(&local_30);
      param_6 = uStack_2c;
      param_5 = local_30;
      FUN_00073f6c(piVar6,uVar7,param_1 + 3,uStack_2c,local_30,uStack_2c);
      uVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar7 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar2 = FUN_00072040(piVar6);
      if (iVar2 == 0) goto LAB_00071a32;
      FUN_00072078(piVar6);
      uVar5 = extraout_r3;
    }
    iVar4 = FUN_0007205c(piVar6);
    if (iVar4 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      return iVar2;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",piVar6);
    uVar7 = 0xf0;
  }
  pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_00071aac:
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar3,uVar7);
}


