/*
 * Function: manage_task_state_transition_with_priority_control
 * Entry:    0004b908
 * Prototype: undefined manage_task_state_transition_with_priority_control()
 */


uint manage_task_state_transition_with_priority_control(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *additional_param;
  uint uVar8;
  int *piVar9;
  int priority;
  
  uVar3 = FUN_0007e1c6();
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  piVar9 = param_1 + 5;
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
  iVar4 = FUN_00072040(piVar9);
  if (iVar4 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",piVar9);
    uVar7 = 0x72;
  }
  else {
    FUN_00072078(piVar9);
    uVar1 = *(ushort *)(param_1 + 7);
    uVar3 = uVar1 & 7;
    if (*(short *)((int)param_1 + 0x1e) == -1) {
      uVar8 = 0xfffffff5;
LAB_0004b9a6:
      iVar4 = 0;
    }
    else {
      uVar8 = uVar3;
      if (uVar3 != 2) {
        switch(uVar3) {
        case 0:
        case 4:
        case 6:
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
            return uVar3;
          }
          break;
        case 1:
          uVar8 = 0xfffffffb;
          break;
        default:
          DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","state == (1UL << (0))",
                       "WEST_TOPDIR/zephyr/lib/os/onoff.c",0x1c8);
          uVar7 = 0x1c8;
          pcVar5 = "WEST_TOPDIR/zephyr/lib/os/onoff.c";
          goto LAB_0004b9d2;
        case 5:
          uVar8 = 0xffffff7a;
        }
        goto LAB_0004b9a6;
      }
      *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + 1;
    }
    iVar6 = FUN_0007205c(piVar9);
    if (iVar6 != 0) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(priority);
      }
      InstructionSynchronizationBarrier(0xf);
      if (iVar4 != 0) {
        FUN_0007e1e6(param_1,param_2,uVar3,0);
      }
      return uVar8;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",piVar9);
    uVar7 = 0xf0;
  }
  pcVar5 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_0004b9d2:
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar5,uVar7);
}


