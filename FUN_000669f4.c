/*
 * Function: FUN_000669f4
 * Entry:    000669f4
 * Prototype: undefined FUN_000669f4()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000669f4(byte *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_2000b378 == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state != NRFX_QSPI_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x1dd,param_4);
    uVar2 = 0x1dd;
LAB_00066a1a:
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",uVar2);
  }
  if (DAT_2000b378 == '\x01') {
    if ((DAT_2000b380 != '\0') || (iVar1 = FUN_000664f0(), iVar1 != 0xbad0007)) {
      _DAT_5002b308 = 1;
      FUN_000667e0();
      if (param_2 != 0) {
        FUN_00066720(param_1[1],param_2);
      }
      DAT_2000b381 = 0;
      _DAT_5002b100 = 0;
      _DAT_5002b634 =
           (uint)param_1[2] << 0xc | (uint)param_1[1] << 8 | (uint)*param_1 |
           (uint)param_1[3] << 0xd | (uint)param_1[4] << 0xe | (uint)param_1[5] << 0xf;
      iVar1 = FUN_0006649c();
      if (iVar1 != 0xbad0007) {
        _DAT_5002b100 = 0;
        if (param_3 != 0) {
          FUN_000666e0(param_1[1],param_3);
        }
        return 0xbad0000;
      }
      if (param_1[4] == 0) {
        DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config->wipwait",
                     "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x20a,param_4);
        uVar2 = 0x20a;
        goto LAB_00066a1a;
      }
    }
    uVar2 = 0xbad0007;
  }
  else {
    uVar2 = 0xbad000b;
  }
  return uVar2;
}


