/*
 * Function: validate_ble_connection_state_with_priority
 * Entry:    000739f0
 * Prototype: undefined validate_ble_connection_state_with_priority()
 */


void validate_ble_connection_state_with_priority(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getCurrentExceptionNumber();
      uVar4 = uVar4 & 0x1f;
    }
    if (uVar4 == 0) {
      if (BLE_CONNECTION_PRIORITY_VALIDATION != DMIC_BUFFER_SIZE) {
        iVar2 = validate_and_clear_connection_state();
        if (iVar2 != 0) {
          process_data_with_validation_and_callback_alt4(0);
          return;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x111);
        DEBUG_PRINT2("\tNot my spinlock %p\n",param_1);
        uVar3 = 0x111;
        goto LAB_00073a28;
      }
    }
  }
  iVar2 = validate_and_clear_connection_state(param_1);
  if (iVar2 != 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(param_2);
    }
    InstructionSynchronizationBarrier(0xf);
    return;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
               "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
  DEBUG_PRINT2("\tNot my spinlock %p\n",param_1);
  uVar3 = 0xf0;
LAB_00073a28:
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar3);
}


