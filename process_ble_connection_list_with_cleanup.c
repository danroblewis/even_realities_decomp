/*
 * Function: process_ble_connection_list_with_cleanup
 * Entry:    000744a4
 * Prototype: undefined process_ble_connection_list_with_cleanup()
 */


int process_ble_connection_list_with_cleanup(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
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
  iVar3 = check_connection_state_validity(&DAT_2000b490);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar5 = 0x72;
  }
  else {
    update_connection_state_flags(&DAT_2000b490);
    piVar4 = (int *)*param_1;
    if (param_1 == piVar4) {
      piVar4 = (int *)0x0;
    }
    else if (piVar4 != (int *)0x0) {
      remove_ble_connection_from_active_list(piVar4);
      cleanup_ble_connection_state_with_validation(piVar4 + 6);
    }
    iVar3 = validate_and_clear_connection_state(&DAT_2000b490);
    if (iVar3 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar5);
      }
      InstructionSynchronizationBarrier(0xf);
      return (int)piVar4;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
    uVar5 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar5);
}


