/*
 * Function: FUN_00065d3c
 * Entry:    00065d3c
 * Prototype: undefined FUN_00065d3c()
 */


undefined4 FUN_00065d3c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","handler",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x34);
                    /* WARNING: Subroutine does not return */
    FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_ipc.c",0x34);
  }
  if (DAT_2000b328 == '\0') {
    FUN_000500ac(0x2a);
    uVar1 = 0xbad0000;
    DAT_2000b328 = '\x01';
    DAT_2000b324 = param_2;
    DAT_2000b32c = param_3;
  }
  else {
    uVar1 = 0xbad000c;
  }
  return uVar1;
}


