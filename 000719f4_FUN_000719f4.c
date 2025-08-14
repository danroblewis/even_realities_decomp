/*
 * Function: FUN_000719f4
 * Entry:    000719f4
 * Prototype: undefined FUN_000719f4(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


int FUN_000719f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int local_30;
  int iStack_2c;
  
  FUN_0008669c(&local_30);
  iVar2 = iStack_2c;
  iVar5 = local_30;
  iVar7 = param_1 + 0x14;
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = FUN_00072040(iVar7);
  if (iVar3 == 0) {
LAB_00071a32:
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar7);
    uVar8 = 0x72;
  }
  else {
    FUN_00072078(iVar7);
    uVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar6 = getCurrentExceptionNumber();
      uVar6 = uVar6 & 0x1f;
    }
    if ((uVar6 != 0) && (param_5 != 0 || param_6 != 0)) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "!arch_is_in_isr() || ((timeout).ticks == (((k_timeout_t) {0})).ticks)",
                   "WEST_TOPDIR/zephyr/kernel/kheap.c",0x4a);
      DEBUG_PRINT2(&DAT_000f53ff);
      uVar8 = 0x4a;
      pcVar4 = "WEST_TOPDIR/zephyr/kernel/kheap.c";
      goto LAB_00071aac;
    }
    while ((uVar9 = FUN_0004b2b0(param_1,param_2,param_3), (int)uVar9 == 0 &&
           (param_5 != 0 || param_6 != 0))) {
      FUN_000866e4(&local_30,(int)((ulonglong)uVar9 >> 0x20),iVar5,iVar2);
      param_6 = iStack_2c;
      param_5 = local_30;
      FUN_00073f6c(iVar7,uVar8,param_1 + 0xc,iStack_2c,local_30,iStack_2c);
      uVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar8 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar3 = FUN_00072040(iVar7);
      if (iVar3 == 0) goto LAB_00071a32;
      FUN_00072078(iVar7);
    }
    iVar5 = FUN_0007205c(iVar7);
    if (iVar5 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar8);
      }
      InstructionSynchronizationBarrier(0xf);
      return (int)uVar9;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",iVar7);
    uVar8 = 0xf0;
  }
  pcVar4 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_00071aac:
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar4,uVar8);
}


