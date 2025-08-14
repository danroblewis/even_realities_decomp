/*
 * Function: FUN_000848d2
 * Entry:    000848d2
 * Prototype: undefined FUN_000848d2()
 */


undefined4 FUN_000848d2(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar4 = **(int **)(param_1 + 4);
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar5 = *(int *)(iVar6 + 0xc);
  if (*(int *)(iVar5 + 0x58) == 0) {
    uVar3 = 0xfffffff3;
  }
  else if (*(int *)(iVar5 + 100) == 0) {
    *(undefined4 *)(iVar5 + 100) = param_2;
    *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x68) = param_3;
    *(undefined4 *)(iVar4 + 0x534) = param_2;
    *(undefined4 *)(iVar4 + 0x538) = param_3;
    *(uint *)(iVar4 + 0x200) = *(uint *)(iVar4 + 0x200) | 0x20;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}


