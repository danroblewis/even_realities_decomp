/*
 * Function: manage_task_state_decrement_with_priority_control
 * Entry:    0004ba38
 * Prototype: undefined manage_task_state_decrement_with_priority_control()
 */


undefined4
manage_task_state_decrement_with_priority_control
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int priority;
  
  piVar7 = param_1 + 5;
  priority = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    priority = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar4 = check_connection_state_validity(piVar7);
  if (iVar4 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",piVar7);
    uVar6 = 0x72;
  }
  else {
    update_connection_state_flags(piVar7);
    if ((*(ushort *)(param_1 + 7) & 7) == 2) {
      sVar1 = *(short *)((int)param_1 + 0x1e);
      if (sVar1 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","mgr->refs > 0",
                     "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x1ef,param_4);
        uVar6 = 0x1ef;
        pcVar5 = "WEST_TOPDIR/zephyr/lib/os/onoff.c";
        goto LAB_0004bac6;
      }
      *(short *)((int)param_1 + 0x1e) = sVar1 + -1;
      uVar6 = 2;
      if (sVar1 == 1) {
        manage_task_state_and_priority(param_1,2,priority,0);
        return 2;
      }
    }
    else if ((*(ushort *)(param_1 + 7) & 7) == 1) {
      uVar6 = 0xfffffffb;
    }
    else {
      uVar6 = 0xffffff7a;
    }
    iVar4 = validate_and_clear_connection_state(piVar7);
    if (iVar4 != 0) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(priority);
      }
      InstructionSynchronizationBarrier(0xf);
      return uVar6;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,param_4);
    DEBUG_PRINT2("\tNot my spinlock %p\n",piVar7);
    uVar6 = 0xf0;
  }
  pcVar5 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_0004bac6:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar5,uVar6);
}


