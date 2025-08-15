/*
 * Function: calculate_ble_connection_timing_with_validation
 * Entry:    00086698
 * Prototype: undefined calculate_ble_connection_timing_with_validation()
 */


undefined8 calculate_ble_connection_timing_with_validation(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = check_connection_state_validity(&DAT_2000b498);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b498);
    uVar6 = 0x72;
  }
  else {
    update_connection_state_flags(&DAT_2000b498);
    uVar3 = get_ble_timing_offset();
    iVar4 = uVar3 + DAT_200069e0;
    iVar5 = DAT_200069e4 + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar3,DAT_200069e0);
    iVar2 = validate_and_clear_connection_state(&DAT_2000b498);
    if (iVar2 != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      return CONCAT44(iVar5,iVar4);
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
    DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b498);
    uVar6 = 0xf0;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",uVar6);
}


