/*
 * Function: cleanup_ble_connection_states_comprehensive
 * Entry:    000753ec
 * Prototype: undefined cleanup_ble_connection_states_comprehensive()
 */


void cleanup_ble_connection_states_comprehensive(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = param_2 * 0x14 + param_1;
LAB_000753fe:
  if (param_2 == 0) {
    return;
  }
  *(undefined4 *)(iVar3 + -0xc) = 0;
  switch(*(byte *)(iVar3 + -7) & 0x3f) {
  case 0:
    goto switchD_00075418_caseD_0;
  case 1:
    if (*(int *)(iVar3 + -4) == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->signal != ((void *)0)",
                   "WEST_TOPDIR/zephyr/kernel/poll.c",0xbe);
      DEBUG_PRINT2("\tinvalid poll signal\n\n");
      uVar5 = 0xbe;
      break;
    }
LAB_000754b4:
    iVar7 = *(int *)(iVar3 + -0x14);
    if (iVar7 != 0) {
      piVar6 = *(int **)(iVar3 + -0x10);
      *piVar6 = iVar7;
      *(int **)(iVar7 + 4) = piVar6;
      *(undefined4 *)(iVar3 + -0x14) = 0;
      *(undefined4 *)(iVar3 + -0x10) = 0;
    }
switchD_00075418_caseD_0:
    iVar7 = validate_and_clear_connection_state(&DAT_2000b4a0);
    if (iVar7 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
      DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b4a0);
      uVar5 = 0xf0;
LAB_000754e4:
      pcVar4 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
      goto LAB_00075444;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(param_3);
    }
    InstructionSynchronizationBarrier(0xf);
    param_3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      param_3 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar7 = check_connection_state_validity(&DAT_2000b4a0);
    param_2 = param_2 + -1;
    if (iVar7 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b4a0);
      uVar5 = 0x72;
      goto LAB_000754e4;
    }
    update_connection_state_flags(&DAT_2000b4a0);
    iVar3 = iVar3 + -0x14;
    goto LAB_000753fe;
  case 2:
    if (*(int *)(iVar3 + -4) != 0) goto LAB_000754b4;
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->sem != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/poll.c",0xb6);
    DEBUG_PRINT2("\tinvalid semaphore\n\n");
    uVar5 = 0xb6;
    break;
  default:
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0","WEST_TOPDIR/zephyr/kernel/poll.c",0xcf);
    DEBUG_PRINT2("\tinvalid event type\n\n");
    uVar5 = 0xcf;
    break;
  case 4:
    if (*(int *)(iVar3 + -4) != 0) goto LAB_000754b4;
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->queue != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/poll.c",0xba);
    DEBUG_PRINT2("\tinvalid queue\n\n");
    uVar5 = 0xba;
    break;
  case 8:
    if (*(int *)(iVar3 + -4) != 0) goto LAB_000754b4;
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event->msgq != ((void *)0)",
                 "WEST_TOPDIR/zephyr/kernel/poll.c",0xc2);
    DEBUG_PRINT2("\tinvalid message queue\n\n");
    uVar5 = 0xc2;
  }
  pcVar4 = "WEST_TOPDIR/zephyr/kernel/poll.c";
LAB_00075444:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar4,uVar5);
}


