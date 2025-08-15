/*
 * Function: FUN_00065f1c
 * Entry:    00065f1c
 * Prototype: undefined FUN_00065f1c()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00065f1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 < (undefined4 *)0x100000) {
    if (((uint)param_1 & 0xfff) == 0) {
      _DAT_50039584 = 2;
      _DAT_50039504 = 2;
      *param_1 = 0xffffffff;
      do {
      } while (-1 < _DAT_50039400 << 0x1f);
      FUN_00065ef0();
      uVar1 = 0xbad0000;
    }
    else {
      uVar1 = 0xbad000a;
    }
    return uVar1;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","is_valid_address(addr, 0)",
               "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",0x107,param_4);
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",0x107);
}


