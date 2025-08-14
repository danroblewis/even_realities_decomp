/*
 * Function: FUN_0008673e
 * Entry:    0008673e
 * Prototype: undefined FUN_0008673e()
 */


void FUN_0008673e(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00074d74();
  if (iVar3 == 0) {
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
    iVar3 = FUN_0007440c(param_1 + 0x18);
    if (iVar3 != 0) {
      FUN_000738d4();
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
      FUN_00086634(uVar4);
      return;
    }
  }
  return;
}


