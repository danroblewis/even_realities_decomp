/*
 * Function: FUN_00065f80
 * Entry:    00065f80
 * Prototype: undefined FUN_00065f80()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065f80(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x100000) || (param_1 - 0xff8000 < 0x1000)) {
    if ((param_1 & 3) == 0) {
      _DAT_50039584 = 1;
      _DAT_50039504 = 1;
      FUN_00065f04();
      FUN_00065ef0();
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","nrfx_is_word_aligned((void const *)addr)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",0x196,param_4);
    uVar1 = 0x196;
  }
  else {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","is_valid_address(addr, 1)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",0x195,param_4);
    uVar1 = 0x195;
  }
                    /* WARNING: Subroutine does not return */
  assertion_failure("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_nvmc.c",uVar1);
}


