/*
 * Function: thunk_FUN_000745c8
 * Entry:    0007cb50
 * Prototype: undefined thunk_FUN_000745c8()
 */


void thunk_FUN_000745c8(void)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 in_r3;
  
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getCurrentExceptionNumber();
    uVar8 = uVar8 & 0x1f;
  }
  if (uVar8 == 0) {
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar8 = getBasePriority(), uVar8 == 0 || 0x20 < uVar8)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar4 = FUN_00072040(&DAT_2000b490);
    if (iVar4 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,in_r3);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
      uVar5 = 0x72;
    }
    else {
      FUN_00072078(&DAT_2000b490);
      *(byte *)((int)DMIC_BUFFER_SIZE + 0xd) = *(byte *)((int)DMIC_BUFFER_SIZE + 0xd) & 0x7f;
      FUN_00073cdc(&DMIC_BUFFER_POINTER);
      puVar2 = DMIC_BUFFER_SIZE;
      *(byte *)((int)DMIC_BUFFER_SIZE + 0xd) = *(byte *)((int)DMIC_BUFFER_SIZE + 0xd) | 0x80;
      if (puVar2 == (undefined4 *)&DAT_20006720) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!z_is_idle_thread_object(thread)",
                     "WEST_TOPDIR/zephyr/kernel/sched.c",0xc1,in_r3);
        uVar5 = 0xc1;
        goto LAB_000745e8;
      }
      puVar7 = DMIC_BUFFER_POINTER;
      if ((undefined4 **)DMIC_BUFFER_POINTER == &DMIC_BUFFER_POINTER) {
        puVar7 = (undefined4 *)0x0;
      }
      for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7) {
        if ((*(char *)((int)puVar2 + 0xe) != *(char *)((int)puVar7 + 0xe)) &&
           (*(char *)((int)puVar2 + 0xe) < *(char *)((int)puVar7 + 0xe))) {
          puVar6 = (undefined4 *)puVar7[1];
          *puVar2 = puVar7;
          puVar2[1] = puVar6;
          *puVar6 = puVar2;
          puVar7[1] = puVar2;
          goto LAB_0007468c;
        }
        if (puVar7 == DAT_2000b468) break;
      }
      *puVar2 = &DMIC_BUFFER_POINTER;
      puVar2[1] = DAT_2000b468;
      *DAT_2000b468 = puVar2;
      DAT_2000b468 = puVar2;
LAB_0007468c:
      FUN_000737d8(1);
      iVar4 = FUN_0007205c(&DAT_2000b490);
      if (iVar4 != 0) {
        process_data_with_validation_and_callback_alt4(uVar5);
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x111);
      DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
      uVar5 = 0x111;
    }
    pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0x57a,in_r3);
    DEBUG_PRINT2(&DAT_000f53ff);
    uVar5 = 0x57a;
LAB_000745e8:
    pcVar3 = "WEST_TOPDIR/zephyr/kernel/sched.c";
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar3,uVar5);
}


