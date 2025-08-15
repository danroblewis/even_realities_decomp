/*
 * Function: initialize_microphone
 * Entry:    000868b4
 * Prototype: undefined initialize_microphone()
 */


void initialize_microphone(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + -4);
  iVar5 = iVar4 + 0x14;
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = check_connection_state_validity(iVar5);
  if (iVar3 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72,param_4);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",iVar5);
    uVar6 = 0x72;
  }
  else {
    update_connection_state_flags(iVar5);
    manage_heap_chunk_with_validation(iVar4,param_1 + -4);
    iVar4 = setup_ambient_light_sensor(iVar4 + 0xc);
    if (iVar4 != 0) {
      validate_ble_connection_state_with_priority(iVar5,uVar6);
      return;
    }
    iVar4 = validate_and_clear_connection_state(iVar5);
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
    DEBUG_PRINT2("\tNot my spinlock %p\n",iVar5);
    uVar6 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar6);
}


