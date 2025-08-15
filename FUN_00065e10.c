/*
 * Function: FUN_00065e10
 * Entry:    00065e10
 * Prototype: undefined FUN_00065e10()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065e10(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_2000b328 != '\x01') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state == NRFX_DRV_STATE_INITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x6c,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x6c);
  }
  _DAT_5002a304 = 1 << (param_1 & 0xff);
  return;
}


