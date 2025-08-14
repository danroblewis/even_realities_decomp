/*
 * Function: FUN_00074060
 * Entry:    00074060
 * Prototype: undefined FUN_00074060()
 */


int FUN_00074060(undefined4 *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  uVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar9 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = FUN_00072040(&DAT_2000b490);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar9 = 0x72;
  }
  else {
    FUN_00072078(&DAT_2000b490);
    if (((*(byte *)((int)param_1 + 0xd) & 0x1f) == 0) && (param_1[6] == 0)) {
      bVar6 = *(byte *)((int)param_1 + 0xd) & 0x7f;
      *(byte *)((int)param_1 + 0xd) = bVar6;
      FUN_00073cdc(&DAT_2000b464,param_1,0,bVar6,param_4);
      *(char *)((int)param_1 + 0xe) = param_2;
      *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 0x80;
      if (param_1 == (undefined4 *)&DAT_20006720) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!z_is_idle_thread_object(thread)",
                     "WEST_TOPDIR/zephyr/kernel/sched.c",0xc1);
        uVar9 = 0xc1;
        pcVar4 = "WEST_TOPDIR/zephyr/kernel/sched.c";
        goto LAB_000740e0;
      }
      puVar8 = (undefined4 *)0x0;
      if ((undefined4 **)DAT_2000b464 != &DAT_2000b464) {
        puVar8 = DAT_2000b464;
      }
      for (; puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)*puVar8) {
        if ((param_2 != *(char *)((int)puVar8 + 0xe)) && (param_2 < *(char *)((int)puVar8 + 0xe))) {
          puVar7 = (undefined4 *)puVar8[1];
          *param_1 = puVar8;
          param_1[1] = puVar7;
          *puVar7 = param_1;
          puVar8[1] = param_1;
          goto LAB_00074138;
        }
        if (DAT_2000b468 == puVar8) break;
      }
      *param_1 = &DAT_2000b464;
      param_1[1] = DAT_2000b468;
      *DAT_2000b468 = param_1;
      DAT_2000b468 = param_1;
LAB_00074138:
      FUN_000737d8(1);
    }
    else {
      iVar3 = 0;
      *(char *)((int)param_1 + 0xe) = param_2;
    }
    iVar5 = FUN_0007205c(&DAT_2000b490);
    if (iVar5 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar9);
      }
      InstructionSynchronizationBarrier(0xf);
      return iVar3;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
    uVar9 = 0xf0;
  }
  pcVar4 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_000740e0:
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec(pcVar4,uVar9);
}


