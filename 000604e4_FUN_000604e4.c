/*
 * Function: FUN_000604e4
 * Entry:    000604e4
 * Prototype: undefined FUN_000604e4()
 */


undefined4 FUN_000604e4(int param_1,byte param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = (uint)param_2;
  if (uVar2 < 4) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar3 = *(uint *)(uVar2 * 0xc + *(int *)(param_1 + 0x10) + 0x88) & 0xc0;
    if ((uVar3 == 0) || (param_3 == uVar3)) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar2 * 0xc + 0x88) = 1;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      (**(code **)(*(int *)(param_1 + 4) + uVar2 * 0xc + 4))();
      uVar4 = 0;
    }
    else {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar4 = 0xffffffff;
    }
    return uVar4;
  }
  DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","type < CLOCK_CONTROL_NRF_TYPE_COUNT",
               "WEST_TOPDIR/zephyr/drivers/clock_control/clock_control_nrf.c",0x15d);
                    /* WARNING: Subroutine does not return */
  FUN_0007e2ec("WEST_TOPDIR/zephyr/drivers/clock_control/clock_control_nrf.c",0x15d);
}


