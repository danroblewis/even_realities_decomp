/*
 * Function: FUN_000655ec
 * Entry:    000655ec
 * Prototype: undefined FUN_000655ec()
 */


int FUN_000655ec(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (7 < param_1) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","index < 8",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpiote.h",0x2aa,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/hal/nrf_gpiote.h",0x2aa);
  }
  return param_1 * 4 + 0x100;
}


