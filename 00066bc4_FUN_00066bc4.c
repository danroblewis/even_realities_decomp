/*
 * Function: FUN_00066bc4
 * Entry:    00066bc4
 * Prototype: undefined FUN_00066bc4()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00066bc4(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)DAT_2000b378;
  if (uVar2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state != NRFX_QSPI_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x2e8,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x2e8);
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    if (DAT_2000b348 == 0) {
      DAT_2000b381 = 0;
      _DAT_5002b51c = param_2;
      _DAT_5002b520 = param_1;
      if ((DAT_2000b380 != '\0') || (iVar1 = FUN_000664f0(1), iVar1 != 0xbad0007)) {
        _DAT_5002b100 = 0;
        _DAT_5002b00c = 1;
        iVar1 = FUN_0006649c();
        return iVar1;
      }
    }
    else if (uVar2 == 1) {
      DAT_2000b381 = 0;
      DAT_2000b378 = 4;
      _DAT_5002b100 = uVar3;
      _DAT_5002b304 = uVar2;
      if (DAT_2000b380 == '\0') {
        _DAT_5002b51c = param_2;
        _DAT_5002b520 = param_1;
        FUN_000664f0(0);
      }
      else {
        _DAT_5002b00c = 1;
        _DAT_5002b51c = param_2;
        _DAT_5002b520 = param_1;
      }
      iVar1 = 0xbad0000;
    }
    else {
      iVar1 = 0xbad000b;
    }
  }
  else {
    iVar1 = 0xbad000a;
  }
  return iVar1;
}


