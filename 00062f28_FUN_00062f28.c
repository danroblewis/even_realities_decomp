/*
 * Function: FUN_00062f28
 * Entry:    00062f28
 * Prototype: undefined FUN_00062f28()
 */


void FUN_00062f28(int param_1,undefined1 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar3 = FUN_00086406();
  if ((iVar3 != 0) || (DAT_2001d564 == '\0')) {
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
      piVar7 = *(int **)(param_1 + 4);
      uVar8 = FUN_00084abe(piVar7,uVar5);
      if ((int)uVar8 != 0) break;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority((int)((ulonglong)uVar8 >> 0x20));
      }
      InstructionSynchronizationBarrier(0xf);
    }
    iVar3 = *(int *)(iVar6 + 0xc);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) && (*(int *)(iVar3 + 0xbc) < 0)) {
      *(undefined4 *)(iVar3 + 0xbc) = *(undefined4 *)(*piVar7 + 0x54c);
    }
LAB_00062fa2:
    **(undefined1 **)(iVar6 + 0x14) = param_2;
    FUN_0008496c(param_1,*(undefined4 *)(iVar6 + 0x14),1);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
    return;
  }
  do {
    iVar3 = 100;
    do {
      iVar4 = FUN_00084abe(*(undefined4 *)(param_1 + 4));
      if (iVar4 != 0) {
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
        uVar8 = FUN_00084abe(*(undefined4 *)(param_1 + 4),uVar5);
        if ((int)uVar8 != 0) goto LAB_00062fa2;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority((int)((ulonglong)uVar8 >> 0x20));
        }
        InstructionSynchronizationBarrier(0xf);
        break;
      }
      thunk_FUN_00086384(1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    get_schedule_timing(0x21,0);
  } while( true );
}


