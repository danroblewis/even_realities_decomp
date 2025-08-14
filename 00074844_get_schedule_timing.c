/*
 * Function: get_schedule_timing
 * Entry:    00074844
 * Prototype: undefined __stdcall get_schedule_timing(undefined4 timeout_ms, undefined4 timeout_flags, undefined4 param_3, undefined4 param_4)
 */


uint get_schedule_timing(int timeout_ms,int timeout_flags,undefined4 param_3,undefined4 param_4)

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
    FUN_0007e2ec("WEST_TOPDIR/zephyr/kernel/sched.c",0x5c1);
  }
  if (timeout_flags == -1 && timeout_ms == -1) {
    FUN_000741a4(DAT_2000b450);
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_000746fc();
    uVar3 = (uint)((longlong)iVar2 * 1000) >> 0xf |
            (int)((ulonglong)((longlong)iVar2 * 1000) >> 0x20) << 0x11;
  }
  return uVar3;
}


