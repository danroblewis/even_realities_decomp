/*
 * Function: FUN_00081326
 * Entry:    00081326
 * Prototype: undefined FUN_00081326()
 */


undefined4 FUN_00081326(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [180];
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_00055ba0(auStack_d0,param_1);
    iVar2 = FUN_0004fa34(auStack_c0,auStack_d0);
    if (iVar2 != 0) {
      FUN_00055ba0(auStack_d0,param_2);
      iVar2 = FUN_00080058(param_3,auStack_d0,auStack_c0);
      if (iVar2 != 0) {
        puVar4 = (undefined1 *)(param_3 + -1);
        puVar3 = (undefined1 *)(param_3 + 0x10);
        do {
          puVar4 = puVar4 + 1;
          uVar1 = *puVar4;
          puVar3 = puVar3 + -1;
          *puVar4 = *puVar3;
          *puVar3 = uVar1;
        } while (puVar4 != (undefined1 *)(param_3 + 7));
        return 0;
      }
    }
  }
  return 0xffffffea;
}


