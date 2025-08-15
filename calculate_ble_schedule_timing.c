/*
 * Function: calculate_ble_schedule_timing
 * Entry:    0007ce5c
 * Prototype: undefined __stdcall calculate_ble_schedule_timing(undefined4 timeout_ms, undefined4 timeout_flags, undefined4 param_3, undefined4 param_4)
 */


uint calculate_ble_schedule_timing
               (int timeout_ms,int timeout_flags,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1f;
  }
  if (uVar3 != 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","!arch_is_in_isr()",
                 "WEST_TOPDIR/zephyr/kernel/sched.c",0x5c1,param_4);
    DEBUG_PRINT2(&DAT_000f53ff);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/zephyr/kernel/sched.c",0x5c1);
  }
  if (timeout_flags == -1 && timeout_ms == -1) {
    cleanup_ble_connection_with_magnetometer(DMIC_BUFFER_SIZE);
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = integrate_ble_connection_with_touch_sensor();
    uVar3 = (uint)((longlong)iVar2 * 1000) >> 0xf |
            (int)((ulonglong)((longlong)iVar2 * 1000) >> 0x20) << 0x11;
  }
  return uVar3;
}


