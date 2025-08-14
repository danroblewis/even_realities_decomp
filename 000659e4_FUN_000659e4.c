/*
 * Function: FUN_000659e4
 * Entry:    000659e4
 * Prototype: undefined FUN_000659e4()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000659e4(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_14;
  
  uVar2 = param_1;
  local_14 = param_2;
  iVar1 = FUN_00065478();
  if (iVar1 == 0) {
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","pin_has_trigger(pin)",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x364,uVar2);
    uVar3 = 0x364;
  }
  else {
    iVar1 = FUN_00065460(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_00065494(param_1), iVar1 == 0)) {
      uVar2 = FUN_000654ac(param_1);
      iVar1 = FUN_000655ec();
      *(undefined4 *)(iVar1 + 0x5000d000) = 0;
      iVar1 = (short)uVar2 * 4;
      *(uint *)(iVar1 + 0x5000d510) = *(uint *)(iVar1 + 0x5000d510) | 1;
      if (param_2 != 0) {
        _DAT_5000d304 = 1 << (uVar2 & 0xff);
      }
      return;
    }
    if (param_2 != 0) {
      iVar1 = FUN_00065434(param_1);
      uVar2 = ((uint)*(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) << 0x1b) >> 0x1d;
      if (uVar2 == 4) {
        iVar1 = 3;
      }
      else if (uVar2 == 5) {
        iVar1 = 2;
      }
      else {
        local_14 = param_1;
        iVar1 = FUN_00065584(&local_14);
        iVar1 = (*(uint *)(iVar1 + 0x10) >> (local_14 & 0xff) & 1) + 2;
      }
      FUN_000851ca(param_1,iVar1);
      return;
    }
    DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","int_enable",
                 "WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",0x373,uVar2);
    uVar3 = 0x373;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/modules/hal/nordic/nrfx/drivers/src/nrfx_gpiote.c",uVar3);
}


