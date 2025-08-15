/*
 * Function: FUN_00066b24
 * Entry:    00066b24
 * Prototype: undefined FUN_00066b24()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066b24(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_r3;
  
  if (DAT_2000b378 == '\0') {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","m_cb.state != NRFX_QSPI_STATE_UNINITIALIZED",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x2b1,in_r3);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_qspi.c",0x2b1);
  }
  process_data_with_callback_and_parameter_alt3(0x2b);
  FUN_00066478();
  uVar5 = _DAT_5002b53c;
  uVar4 = _DAT_5002b538;
  uVar3 = _DAT_5002b534;
  uVar2 = _DAT_5002b530;
  uVar1 = _DAT_5002b528;
  if (DAT_2000b382 == '\0') {
    FUN_000851fa(_DAT_5002b524 & 0xff);
    FUN_000851fa(uVar1 & 0xff);
    FUN_000851fa(uVar2 & 0xff);
    FUN_000851fa(uVar3 & 0xff);
    if ((uVar4 & 0xff) != 0xff) {
      FUN_000851fa(uVar4 & 0xff);
    }
    if ((uVar5 & 0xff) != 0xff) {
      FUN_000851fa(uVar5 & 0xff);
    }
  }
  DAT_2000b378 = 0;
  return;
}


