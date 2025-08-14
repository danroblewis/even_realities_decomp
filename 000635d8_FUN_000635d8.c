/*
 * Function: FUN_000635d8
 * Entry:    000635d8
 * Prototype: undefined FUN_000635d8()
 */


undefined4 FUN_000635d8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (1 < param_1) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","chan >= 0 && chan < (1 + 1)",
                 "WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0xc3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/zephyr/drivers/timer/nrf_rtc_timer.c",0xc3);
  }
  return *(undefined4 *)((param_1 + 0x150) * 4 + 0x50015000);
}


