/*
 * Function: FUN_000635a4
 * Entry:    000635a4
 * Prototype: undefined FUN_000635a4()
 */


undefined4 FUN_000635a4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (1 < param_1) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chan >= 0 && chan < (1 + 1)",
                 "WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0x8d,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0x8d);
  }
  uVar1 = 0x50015044;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


