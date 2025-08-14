/*
 * Function: FUN_0006615c
 * Entry:    0006615c
 * Prototype: undefined FUN_0006615c()
 */


undefined4 FUN_0006615c(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","p_config",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",0x78);
    uVar1 = 0x78;
  }
  else {
    if (param_2 != 0) {
      uVar2 = (uint)DAT_2000b340;
      if (uVar2 == 0) {
        DAT_2000b342 = (ushort)DAT_2000b340;
        DAT_2000b341 = DAT_2000b340;
        DAT_2000b345 = *(undefined1 *)(param_1 + 0x15);
        DAT_2000b330 = param_2;
        DAT_2000b334 = uVar2;
        DAT_2000b338 = uVar2;
        if ((*(byte *)(param_1 + 0x10) < 0x51) && (*(byte *)(param_1 + 0x11) < 0x51)) {
          FUN_00066050();
          uVar1 = 0xbad0000;
          DAT_2000b340 = 1;
        }
        else {
          uVar1 = 0xbad0004;
        }
      }
      else {
        uVar1 = 0xbad0005;
      }
      return uVar1;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","event_handler",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",0x79);
    uVar1 = 0x79;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_pdm.c",uVar1);
}


