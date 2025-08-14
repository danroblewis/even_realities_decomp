/*
 * Function: FUN_000651d8
 * Entry:    000651d8
 * Prototype: undefined FUN_000651d8()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000651d8(void)

{
  int iVar1;
  undefined4 in_r3;
  
  if (DAT_2000b320 == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_clock_cb.module_initialized",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x12e,in_r3);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x12e);
  }
  iVar1 = FUN_000500f0(5);
  if (iVar1 == 0) {
    FUN_000500ac(5);
  }
  _DAT_50005518 = 1;
  _DAT_50005514 = 1;
  _DAT_50005580 = 1;
  return;
}


