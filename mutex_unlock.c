/*
 * Function: mutex_unlock
 * Entry:    0007eb4a
 * Prototype: undefined __stdcall mutex_unlock(undefined4 mutex)
 */


undefined4 mutex_unlock(int mutex)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1f;
  }
  if (uVar5 == 0) {
    if (*(int *)(mutex + 8) == 0) {
      return 0xffffffea;
    }
    if (*(int *)(mutex + 8) != DMIC_BUFFER_SIZE) {
      return 0xffffffff;
    }
    iVar4 = *(int *)(mutex + 0xc);
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        *(int *)(mutex + 0xc) = iVar4 + -1;
        return 0;
      }
      uVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar3 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar4 = check_connection_state_validity(&DAT_2000b470);
      if (iVar4 == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
        DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b470);
        uVar3 = 0x72;
      }
      else {
        update_connection_state_flags(&DAT_2000b470);
        setup_buffer_management(*(undefined4 *)(mutex + 8),*(undefined4 *)(mutex + 0x10));
        iVar4 = process_ble_connection_list_with_cleanup(mutex);
        *(int *)(mutex + 8) = iVar4;
        if (iVar4 != 0) {
          *(int *)(mutex + 0x10) = (int)*(char *)(iVar4 + 0xe);
          *(undefined4 *)(iVar4 + 0x90) = 0;
          FUN_000738d4();
          validate_ble_connection_state_with_priority(&DAT_2000b470,uVar3);
          return 0;
        }
        *(undefined4 *)(mutex + 0xc) = 0;
        iVar4 = validate_and_clear_connection_state(&DAT_2000b470);
        if (iVar4 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar3);
          }
          InstructionSynchronizationBarrier(0xf);
          return 0;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b470);
        uVar3 = 0xf0;
      }
      pcVar2 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
      goto LAB_00072578;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","mutex->lock_count > 0U",
                 "WEST_TOPDIR/zephyr/kernel/mutex.c",0xe5);
    uVar3 = 0xe5;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                 "WEST_TOPDIR/zephyr/kernel/mutex.c",0xcd);
    DEBUG_PRINT2("\tmutexes cannot be used inside ISRs\n");
    uVar3 = 0xcd;
  }
  pcVar2 = "WEST_TOPDIR/zephyr/kernel/mutex.c";
LAB_00072578:
                    /* WARNING: Subroutine does not return */
  assertion_failure(pcVar2,uVar3);
}


