/*
 * Function: FUN_00065190
 * Entry:    00065190
 * Prototype: undefined FUN_00065190()
 */


undefined4 FUN_00065190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event_handler",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x115,param_4);
                    /* WARNING: Subroutine does not return */
    assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_clock.c",0x115);
  }
  if (DAT_2000b320 == '\0') {
    uVar1 = 0xbad0000;
    DAT_2000b320 = '\x01';
    DAT_2000b31c = param_1;
  }
  else {
    uVar1 = 0xbad000c;
  }
  return uVar1;
}


