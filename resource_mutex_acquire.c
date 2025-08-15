/*
 * Function: resource_mutex_acquire
 * Entry:    0007d376
 * Prototype: undefined __stdcall resource_mutex_acquire(undefined4 resource_context, undefined4 operation_type, undefined4 wait_data, undefined4 wait_length)
 */


undefined4
resource_mutex_acquire(int *resource_context,int operation_type,int *wait_data,int wait_length)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r3;
  int *piVar7;
  uint uVar8;
  
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getCurrentExceptionNumber();
    uVar8 = uVar8 & 0x1f;
  }
  if (uVar8 != 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                 "WEST_TOPDIR/zephyr/kernel/mutex.c",0x65,resource_context,operation_type);
    DEBUG_PRINT2("\tmutexes cannot be used inside ISRs\n");
    uVar5 = 0x65;
    pcVar2 = "WEST_TOPDIR/zephyr/kernel/mutex.c";
    goto LAB_000723de;
  }
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
  piVar7 = resource_context;
  iVar3 = check_connection_state_validity(&DAT_2000b470);
  if (iVar3 == 0) {
LAB_000723fa:
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,piVar7,operation_type);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b470);
    uVar5 = 0x72;
  }
  else {
    update_connection_state_flags(&DAT_2000b470);
    if (resource_context[3] == 0) {
      iVar3 = (int)*(char *)(DMIC_BUFFER_SIZE + 0xe);
LAB_0007244e:
      resource_context[3] = resource_context[3] + 1;
      iVar6 = DMIC_BUFFER_SIZE;
      resource_context[4] = iVar3;
      resource_context[2] = iVar6;
      iVar3 = validate_and_clear_connection_state(&DAT_2000b470);
      if (iVar3 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar5);
        }
        InstructionSynchronizationBarrier(0xf);
        return 0;
      }
    }
    else {
      if (resource_context[2] == DMIC_BUFFER_SIZE) {
        iVar3 = resource_context[4];
        goto LAB_0007244e;
      }
      if (wait_data == (int *)0x0 && wait_length == 0) {
        iVar3 = validate_and_clear_connection_state(&DAT_2000b470);
        if (iVar3 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar5);
          }
          InstructionSynchronizationBarrier(0xf);
          return 0xfffffff0;
        }
      }
      else {
        iVar6 = (int)*(char *)(resource_context[2] + 0xe);
        iVar3 = (int)*(char *)(DMIC_BUFFER_SIZE + 0xe);
        if (iVar6 <= *(char *)(DMIC_BUFFER_SIZE + 0xe)) {
          iVar3 = iVar6;
        }
        if (iVar3 < -0x7f) {
          iVar3 = -0x7f;
        }
        iVar4 = 0;
        if (iVar3 < iVar6) {
          iVar4 = setup_buffer_management();
          iVar6 = extraout_r3;
        }
        iVar3 = handle_ble_connection_state_transition
                          (&DAT_2000b470,uVar5,resource_context,iVar6,wait_data,wait_length);
        if (iVar3 == 0) {
          return 0;
        }
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
        iVar3 = check_connection_state_validity(&DAT_2000b470);
        piVar7 = wait_data;
        operation_type = wait_length;
        if (iVar3 == 0) goto LAB_000723fa;
        update_connection_state_flags(&DAT_2000b470);
        piVar7 = wait_data;
        operation_type = wait_length;
        if (resource_context[2] != 0) {
          piVar7 = (int *)*resource_context;
          iVar3 = resource_context[4];
          if ((resource_context != piVar7) && (piVar7 != (int *)0x0)) {
            if (*(char *)((int)piVar7 + 0xe) <= iVar3) {
              iVar3 = (int)*(char *)((int)piVar7 + 0xe);
            }
            if (iVar3 < -0x7f) {
              iVar3 = -0x7f;
            }
          }
          iVar3 = setup_buffer_management(resource_context[2],iVar3);
          piVar7 = wait_data;
          operation_type = wait_length;
          if (iVar3 != 0) goto LAB_00072504;
        }
        if (iVar4 != 0) {
LAB_00072504:
          validate_ble_connection_state_with_priority(&DAT_2000b470,uVar5);
          return 0xfffffff5;
        }
        iVar3 = validate_and_clear_connection_state(&DAT_2000b470);
        if (iVar3 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar5);
          }
          InstructionSynchronizationBarrier(0xf);
          return 0xfffffff5;
        }
      }
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,piVar7,operation_type);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b470);
    uVar5 = 0xf0;
  }
  pcVar2 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
LAB_000723de:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar2,uVar5);
}


