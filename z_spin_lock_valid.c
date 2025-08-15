/*
 * Function: z_spin_lock_valid
 * Entry:    000859b2
 * Prototype: undefined z_spin_lock_valid()
 */


void z_spin_lock_valid(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    iVar3 = process_ble_connection_list_with_cleanup(param_1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (*(int *)(param_1 + 0xc) != iVar3) {
        iVar3 = iVar3 + 1;
      }
      *(int *)(param_1 + 8) = iVar3;
      initialize_audio_system(param_1 + 0x10,2);
    }
    else {
      *(undefined4 *)(iVar3 + 0x90) = 0;
      handle_ble_connection_insertion_with_privilege_management();
    }
    validate_ble_connection_state_with_priority(&DAT_2000b474,uVar4);
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
               "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
  DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b474);
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
}


