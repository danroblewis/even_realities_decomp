/*
 * Function: FUN_00060788
 * Entry:    00060788
 * Prototype: undefined FUN_00060788()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00060788(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_2000b094;
  DAT_2000b094 = 1;
  if (iVar3 == 0) {
    DAT_2000b088 = iVar3;
    DAT_2000b090 = iVar3;
    DAT_2000b08c = 1;
    iVar3 = FUN_0004b908(&DAT_2000b0b8);
    if (iVar3 < 0) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","err >= 0",
                   "WEST_TOPDIR/zephyr/drivers/clock_control/clock_control_nrf.c",0x230);
      uVar4 = 0x230;
      goto LAB_000607c4;
    }
  }
  if (param_1 != 0) {
    if (1 < param_1 - 1U) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","0",
                   "WEST_TOPDIR/zephyr/drivers/clock_control/clock_control_nrf.c",0x242);
      uVar4 = 0x242;
LAB_000607c4:
                    /* WARNING: Subroutine does not return */
      FUN_0007e2ec("WEST_TOPDIR/zephyr/drivers/clock_control/clock_control_nrf.c",uVar4);
    }
    if ((param_1 != 1) || ((_DAT_5000541c & 3) != 2)) {
      iVar3 = FUN_00086406();
      if ((iVar3 == 0) && (DAT_2001d564 != '\0')) {
        _DAT_50005308 = 2;
        bVar1 = false;
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          uVar4 = getBasePriority();
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
          setBasePriority(0x20);
        }
        InstructionSynchronizationBarrier(0xf);
        bVar1 = true;
      }
      while ((-1 < (int)(_DAT_50005418 << 0xf) || (((_DAT_50005418 & 3) != 2 && (param_1 != 1))))) {
        if (bVar1) {
          FUN_0004ff38(uVar4);
        }
        else {
          get_schedule_timing(0x21,0);
        }
        if (((_DAT_50005518 & 0xff) == 1) && (_DAT_50005104 != 0)) {
          _DAT_50005104 = 0;
          _DAT_50005518 = 2;
          _DAT_e000e280 = 0x20;
          _DAT_50005008 = 1;
        }
      }
      if (bVar1) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar4);
        }
        InstructionSynchronizationBarrier(0xf);
      }
      else {
        _DAT_50005304 = 2;
      }
    }
  }
  return;
}


