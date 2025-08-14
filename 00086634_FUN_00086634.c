/*
 * Function: FUN_00086634
 * Entry:    00086634
 * Prototype: undefined FUN_00086634()
 */


void FUN_00086634(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar2 = getCurrentExceptionNumber();
      uVar2 = uVar2 & 0x1f;
    }
    if (uVar2 == 0) {
      FUN_000501d4();
      return;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_1);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


