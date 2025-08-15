/*
 * Function: update_ble_connection_priority_with_magnetometer
 * Entry:    00074554
 * Prototype: undefined update_ble_connection_priority_with_magnetometer()
 */


void update_ble_connection_priority_with_magnetometer(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 + 0x10U < 0x1f) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getCurrentExceptionNumber();
      uVar4 = uVar4 & 0x1f;
    }
    if (uVar4 == 0) {
      iVar2 = update_ble_connection_priority();
      if ((iVar2 != 0) && (*(char *)(DMIC_BUFFER_SIZE + 0xf) == '\0')) {
        uVar3 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          uVar3 = getBasePriority();
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
          setBasePriority(0x20);
        }
        InstructionSynchronizationBarrier(0xf);
        initialize_magnetometer(uVar3);
        return;
      }
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0x53e);
    DEBUG_PRINT2(&DAT_000f53ff);
    uVar3 = 0x53e;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n",
                 "((((prio)) == 15 && z_is_idle_thread_entry((((void *)0)))) || (((15 - 1) >= ((-16))) && ((prio)) >= ((-16)) && ((prio)) <= (15 - 1)))"
                 ,"WEST_TOPDIR/zephyr/kernel/sched.c",0x53d);
    DEBUG_PRINT2("\tinvalid priority (%d); allowed range: %d to %d\n",param_2,0xe,0xfffffff0);
    uVar3 = 0x53d;
  }
                    /* WARNING: Subroutine does not return */
  trigger_system_service_call("WEST_TOPDIR/zephyr/kernel/sched.c",uVar3);
}


