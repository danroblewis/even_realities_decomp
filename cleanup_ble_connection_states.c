/*
 * Function: cleanup_ble_connection_states
 * Entry:    000729fc
 * Prototype: undefined cleanup_ble_connection_states()
 */


void cleanup_ble_connection_states(int param_1)

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
  iVar3 = check_connection_state_validity(&DAT_2000b474);
  if (iVar3 != 0) {
    update_connection_state_flags(&DAT_2000b474);
    while (iVar3 = process_ble_connection_list_with_cleanup(param_1), iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x90) = 0xfffffff5;
      handle_ble_connection_insertion_with_privilege_management();
    }
    *(undefined4 *)(param_1 + 8) = 0;
    initialize_audio_system(param_1 + 0x10,2);
    validate_ble_connection_state_with_priority(&DAT_2000b474,uVar4);
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
               "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
  DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b474);
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
}


