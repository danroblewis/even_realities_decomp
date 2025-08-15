/*
 * Function: handle_ble_connection_insertion_with_privilege_management
 * Entry:    000738d4
 * Prototype: undefined handle_ble_connection_insertion_with_privilege_management()
 */


void handle_ble_connection_insertion_with_privilege_management
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = check_connection_state_validity(&DAT_2000b490);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar4 = 0x72;
  }
  else {
    update_connection_state_flags(&DAT_2000b490);
    insert_ble_connection_by_priority(param_1);
    iVar3 = validate_and_clear_connection_state(&DAT_2000b490);
    if (iVar3 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0,param_4);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
    uVar4 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar4);
}


