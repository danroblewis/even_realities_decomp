/*
 * Function: process_ble_connection_state
 * Entry:    00073b1c
 * Prototype: undefined process_ble_connection_state()
 */


void process_ble_connection_state(void)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar2 = check_connection_state_validity(&DAT_2000b490);
  if (iVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_lock_valid(l)",
                 "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0x72);
    DEBUG_PRINT2("\tInvalid spinlock %p\n",&DAT_2000b490);
    uVar5 = 0x72;
LAB_00073b4c:
    pcVar3 = "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h";
  }
  else {
    update_connection_state_flags(&DAT_2000b490);
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getCurrentExceptionNumber();
      uVar4 = uVar4 & 0x1f;
    }
    if (uVar4 == 0) {
      if (*(char *)(DMIC_BUFFER_SIZE + 0xf) != '\x01') {
        *(char *)(DMIC_BUFFER_SIZE + 0xf) = *(char *)(DMIC_BUFFER_SIZE + 0xf) + -1;
        iVar2 = validate_and_clear_connection_state(&DAT_2000b490);
        if (iVar2 != 0) {
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar5);
          }
          InstructionSynchronizationBarrier(0xf);
          return;
        }
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","z_spin_unlock_valid(l)",
                     "WEST_TOPDIR/zephyr/include/zephyr/spinlock.h",0xf0);
        DEBUG_PRINT2("\tNot my spinlock %p\n",&DAT_2000b490);
        uVar5 = 0xf0;
        goto LAB_00073b4c;
      }
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                   "_kernel.cpus[0].current->base.sched_locked != 1U",
                   "WEST_TOPDIR/zephyr/kernel/include/ksched.h",0xfe);
      DEBUG_PRINT2(&DAT_000f53ff);
      uVar5 = 0xfe;
    }
    else {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                   "WEST_TOPDIR/zephyr/kernel/include/ksched.h",0xfd);
      DEBUG_PRINT2(&DAT_000f53ff);
      uVar5 = 0xfd;
    }
    pcVar3 = "WEST_TOPDIR/zephyr/kernel/include/ksched.h";
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call(pcVar3,uVar5);
}


