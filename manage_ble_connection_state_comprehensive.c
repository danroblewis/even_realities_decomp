/*
 * Function: manage_ble_connection_state_comprehensive
 * Entry:    0007cb48
 * Prototype: undefined manage_ble_connection_state_comprehensive()
 */


undefined4
manage_ble_connection_state_comprehensive(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1f;
  }
  if ((uVar5 == 0) || (param_3 == 0 && param_4 == 0)) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar6 = param_1;
    uVar5 = param_3;
    iVar3 = check_connection_state_validity(&DAT_2000b474);
    if (iVar3 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,iVar6,param_2,uVar5);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b474);
      uVar4 = 0x72;
    }
    else {
      update_connection_state_flags(&DAT_2000b474);
      if (*(int *)(param_1 + 8) == 0) {
        if ((param_3 | param_4) != 0) {
          uVar4 = handle_ble_connection_state_transition
                            (&DAT_2000b474,uVar4,param_1,param_3 | param_4,param_3,param_4);
          return uVar4;
        }
        iVar3 = validate_and_clear_connection_state(&DAT_2000b474);
        if (iVar3 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar4);
          }
          InstructionSynchronizationBarrier(0xf);
          return 0xfffffff0;
        }
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        iVar3 = validate_and_clear_connection_state(&DAT_2000b474);
        if (iVar3 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar4);
          }
          InstructionSynchronizationBarrier(0xf);
          return 0;
        }
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,iVar6,param_2,uVar5);
      DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b474);
      uVar4 = 0xf0;
    }
    pcVar2 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "((arch_is_in_isr() == 0) || ((timeout).ticks == (((k_timeout_t) {0})).ticks))",
                 "WEST_TOPDIR/zephyr/kernel/sem.c",0x80,param_1,param_2,param_3);
    DEBUG_PRINT2(&DAT_000f53ff);
    uVar4 = 0x80;
    pcVar2 = "WEST_TOPDIR/zephyr/kernel/sem.c";
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar2,uVar4);
}


