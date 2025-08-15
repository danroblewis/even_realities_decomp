/*
 * Function: manage_task_state_transition_with_priority_control
 * Entry:    0004b908
 * Prototype: undefined manage_task_state_transition_with_priority_control()
 */


void * manage_task_state_transition_with_priority_control(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *additional_param;
  void *pvVar9;
  int *piVar10;
  int priority;
  
  pvVar4 = (void *)validate_heap_chunk_parameters(param_1,param_2);
  if ((int)pvVar4 < 0) {
    return pvVar4;
  }
  piVar10 = param_1 + 5;
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
  iVar5 = check_connection_state_validity(piVar10);
  if (iVar5 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",piVar10);
    uVar8 = 0x72;
  }
  else {
    update_connection_state_flags(piVar10);
    uVar1 = *(ushort *)(param_1 + 7);
    pvVar4 = (void *)(uVar1 & 7);
    if (*(short *)((int)param_1 + 0x1e) == -1) {
      pvVar9 = (void *)0xfffffff5;
LAB_0004b9a6:
      iVar5 = 0;
    }
    else {
      pvVar9 = pvVar4;
      if (pvVar4 != (void *)0x2) {
        switch(pvVar4) {
        case (void *)0x0:
        case (void *)0x4:
        case (void *)0x6:
          *param_2 = 0;
          additional_param = (undefined4 *)param_1[1];
          if (additional_param == (undefined4 *)0x0) {
            *param_1 = (int)param_2;
            param_1[1] = (int)param_2;
          }
          else {
            *additional_param = param_2;
            param_1[1] = (int)param_2;
          }
          if ((uVar1 & 7) == 0) {
            manage_task_state_and_priority(param_1,2,priority,additional_param);
            return pvVar4;
          }
          break;
        case (void *)0x1:
          pvVar9 = (void *)0xfffffffb;
          break;
        default:
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == (1UL << (0))",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x1c8);
          uVar8 = 0x1c8;
          pcVar6 = "WEST_TOPDIR/zephyr/lib/os/onoff.c";
          goto LAB_0004b9d2;
        case (void *)0x5:
          pvVar9 = (void *)0xffffff7a;
        }
        goto LAB_0004b9a6;
      }
      *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
    }
    iVar7 = validate_and_clear_connection_state(piVar10);
    if (iVar7 != 0) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(priority);
      }
      InstructionSynchronizationBarrier(0xf);
      if (iVar5 != 0) {
        allocate_memory_with_callback(param_1,param_2,pvVar4,0);
      }
      return pvVar9;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",piVar10);
    uVar8 = 0xf0;
  }
  pcVar6 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_0004b9d2:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar6,uVar8);
}


