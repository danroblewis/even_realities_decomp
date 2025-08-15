/*
 * Function: handle_ble_connection_state_transition
 * Entry:    00073f6c
 * Prototype: undefined handle_ble_connection_state_transition(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void handle_ble_connection_state_transition
               (undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  DAT_2000b484 = DMIC_BUFFER_SIZE;
  if (param_1 == &DAT_2000b490) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "sizeof(sched_spinlock) == 0 || lock != &sched_spinlock",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0x35f);
    uVar5 = 0x35f;
    pcVar3 = "WEST_TOPDIR/zephyr/kernel/sched.c";
  }
  else {
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar4 = check_connection_state_validity(&DAT_2000b490,param_2,0x20,uVar5);
    if (iVar4 == 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                   "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
      DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
      uVar5 = 0x72;
    }
    else {
      update_connection_state_flags(&DAT_2000b490);
      update_ble_connection_parameters(DMIC_BUFFER_SIZE,param_3,param_5,param_6);
      iVar4 = validate_and_clear_connection_state(param_1);
      if (iVar4 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x111);
      }
      else {
        iVar4 = validate_and_clear_connection_state(&DAT_2000b490);
        if (iVar4 != 0) {
          process_data_with_validation_and_callback_alt4(param_2);
          return;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x111);
        param_1 = &DAT_2000b490;
      }
      DEBUG_PRINT2("\tNot my spinlock %p\n",param_1);
      uVar5 = 0x111;
    }
    pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar3,uVar5);
}


