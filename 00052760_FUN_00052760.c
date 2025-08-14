/*
 * Function: FUN_00052760
 * Entry:    00052760
 * Prototype: undefined FUN_00052760()
 */


void FUN_00052760(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined8 uVar5;
  undefined1 auStack_34 [32];
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = FUN_00072e9c();
    if ((uVar1 & 5) != 0) {
      FUN_00072fe8(param_1);
    }
    FUN_000864e8(auStack_34);
    uVar4 = extraout_r1;
    while (uVar5 = thunk_FUN_000727ac(param_1 + 0x10,uVar4,0,0),
          uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20), iVar2 = (int)uVar5, iVar2 != 0) {
      iVar3 = (**(code **)(param_1 + 0x3c))(iVar2,param_2);
      if (iVar3 == 0) {
        FUN_00080b0e(iVar2,param_1);
        uVar4 = extraout_r1_00;
      }
      else {
        FUN_0005f200(auStack_34,iVar2);
        uVar4 = extraout_r1_01;
      }
    }
    while (iVar2 = thunk_FUN_000727ac(auStack_34,uVar4,0,0), iVar2 != 0) {
      FUN_0005f200(param_1 + 0x10,iVar2);
      uVar4 = extraout_r1_02;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_000865fc(&DAT_20005bb8,param_1);
    }
  }
  return;
}


