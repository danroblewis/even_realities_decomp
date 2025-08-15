/*
 * Function: schedule_ble_connection_timeout_with_priority
 * Entry:    00074bf4
 * Prototype: undefined schedule_ble_connection_timeout_with_priority()
 */


void schedule_ble_connection_timeout_with_priority
               (int *param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  
  if (param_4 == -1 && param_3 == 0xffffffff) {
    return;
  }
  if (*param_1 == 0) {
    param_1[2] = param_2;
    uVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar6 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar7 = getBasePriority(), uVar7 == 0 || 0x20 < uVar7)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar4 = check_connection_state_validity(&DAT_2000b498);
    if (iVar4 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b498);
      uVar6 = 0x72;
    }
    else {
      update_connection_state_flags(&DAT_2000b498);
      if ((int)((param_4 + 1) - (uint)(param_3 != 0xffffffff)) < 0 ==
          (SBORROW4(param_4,-1) != SBORROW4(param_4 + 1,(uint)(param_3 != 0xffffffff)))) {
        uVar7 = get_ble_timing_offset();
        iVar10 = param_3 + 1 + uVar7;
        iVar4 = param_4 + (uint)(0xfffffffe < param_3) +
                ((int)uVar7 >> 0x1f) + (uint)CARRY4(param_3 + 1,uVar7);
      }
      else {
        iVar10 = (-BLE_CONNECTION_TIMEOUT_SCHEDULING - 2) - param_3;
        iVar4 = (((-1 - DAT_200069e4) - (uint)(0xfffffffe < BLE_CONNECTION_TIMEOUT_SCHEDULING)) -
                param_4) - (uint)(-BLE_CONNECTION_TIMEOUT_SCHEDULING - 2 < param_3);
        if (iVar4 < (int)(uint)(iVar10 == 0)) {
          iVar10 = 1;
          iVar4 = 0;
        }
      }
      param_1[4] = iVar10;
      param_1[5] = iVar4;
      piVar2 = DAT_20002d00;
      piVar11 = (int *)0x0;
      if ((int **)BLE_CONNECTION_TIMEOUT_CONFIGURATION != &BLE_CONNECTION_TIMEOUT_CONFIGURATION) {
        piVar11 = BLE_CONNECTION_TIMEOUT_CONFIGURATION;
      }
      for (; piVar11 != (int *)0x0; piVar11 = (int *)*piVar11) {
        uVar7 = piVar11[4];
        iVar10 = piVar11[5];
        uVar8 = param_1[4];
        iVar4 = param_1[5];
        if ((int)((iVar4 - iVar10) - (uint)(uVar8 < uVar7)) < 0 !=
            (SBORROW4(iVar4,iVar10) != SBORROW4(iVar4 - iVar10,(uint)(uVar8 < uVar7)))) {
          puVar9 = (undefined4 *)piVar11[1];
          piVar11[4] = uVar7 - uVar8;
          piVar11[5] = (iVar10 - iVar4) - (uint)(uVar7 < uVar8);
          *param_1 = (int)piVar11;
          param_1[1] = (int)puVar9;
          *puVar9 = param_1;
          piVar11[1] = (int)param_1;
          goto LAB_00074cf0;
        }
        param_1[4] = uVar8 - uVar7;
        param_1[5] = (iVar4 - iVar10) - (uint)(uVar8 < uVar7);
        if (piVar11 == piVar2) break;
      }
      *param_1 = (int)&BLE_CONNECTION_TIMEOUT_CONFIGURATION;
      param_1[1] = (int)piVar2;
      *piVar2 = (int)param_1;
      DAT_20002d00 = param_1;
LAB_00074cf0:
      if (((int **)BLE_CONNECTION_TIMEOUT_CONFIGURATION != &BLE_CONNECTION_TIMEOUT_CONFIGURATION) &&
         (param_1 == BLE_CONNECTION_TIMEOUT_CONFIGURATION)) {
        uVar5 = calculate_ble_timeout_delay_with_validation();
        schedule_ble_timer_event(uVar5,0);
      }
      iVar4 = validate_and_clear_connection_state(&DAT_2000b498);
      if (iVar4 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar6);
        }
        InstructionSynchronizationBarrier(0xf);
        return;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
      DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b498);
      uVar6 = 0xf0;
    }
    pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!sys_dnode_is_linked(&to->node)",
                 "WEST_TOPDIR/zephyr/kernel/timeout.c",0x6e);
    DEBUG_PRINT2(&DAT_000f53ff);
    uVar6 = 0x6e;
    pcVar3 = "WEST_TOPDIR/zephyr/kernel/timeout.c";
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar3,uVar6);
}


