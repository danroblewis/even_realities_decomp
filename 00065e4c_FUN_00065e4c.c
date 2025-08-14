/*
 * Function: FUN_00065e4c
 * Entry:    00065e4c
 * Prototype: undefined FUN_00065e4c()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065e4c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_2000b328 != '\x01') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state == NRFX_DRV_STATE_INITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x72,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x72);
  }
  _DAT_5002a308 = 1 << (param_1 & 0xff);
  return;
}


