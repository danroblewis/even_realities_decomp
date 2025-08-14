/*
 * Function: FUN_00056020
 * Entry:    00056020
 * Prototype: undefined FUN_00056020()
 */


void FUN_00056020(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  
  while( true ) {
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    puVar3 = *(undefined4 **)(param_1 + 0x20);
    if (puVar3 == (undefined4 *)0x0) break;
    uVar4 = *puVar3;
    if (puVar3 == *(undefined4 **)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
    pcVar6 = (code *)puVar3[1];
    uVar7 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    FUN_00086502(&DAT_20003a60,puVar3,uVar4,uVar5);
    (*pcVar6)(param_1,uVar7,0);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


