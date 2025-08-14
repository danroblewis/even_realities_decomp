/*
 * Function: FUN_00066214
 * Entry:    00066214
 * Prototype: undefined FUN_00066214()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00066214(void)

{
  undefined4 in_r3;
  
  if (DAT_2000b340 == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.drv_state != NRFX_DRV_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",0xdd,in_r3);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",0xdd);
  }
  if (DAT_2000b341 == '\0') {
    DAT_2000b341 = '\x02';
    DAT_2000b344 = 1;
    _DAT_e000e204 = 0x40;
  }
  else if (DAT_2000b341 != '\x01') {
    return 0xbad000b;
  }
  return 0xbad0000;
}


