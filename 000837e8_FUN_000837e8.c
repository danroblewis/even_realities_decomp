/*
 * Function: FUN_000837e8
 * Entry:    000837e8
 * Prototype: undefined FUN_000837e8(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


undefined4 FUN_000837e8(int param_1,byte param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
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
  iVar3 = *(int *)(param_1 + 0x10) + (uint)param_2 * 0xc;
  if ((*(uint *)(iVar3 + 0x88) & 7) == 1) {
    *(uint *)(iVar3 + 0x88) = param_5;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
    *(undefined4 *)(iVar3 + 0x80) = param_3;
    *(undefined4 *)(iVar3 + 0x84) = param_4;
    (**(code **)(*(int *)(param_1 + 4) + (uint)param_2 * 0xc))();
    uVar4 = 0;
  }
  else {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
    if (param_5 == (*(uint *)(iVar3 + 0x88) & 0xc0)) {
      uVar4 = 0xffffff88;
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}


