/*
 * Function: FUN_0007db50
 * Entry:    0007db50
 * Prototype: undefined FUN_0007db50()
 */


void FUN_0007db50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0007dac0();
  if (uVar1 < 7) {
    iVar2 = get_work_mode();
    iVar3 = FUN_0000e1a4(param_1,param_2,1000,0,param_4);
    iVar2 = uVar1 * 0xc + iVar2;
    *(int *)(iVar2 + 0x1136) = *(int *)(iVar2 + 0x1136) + iVar3;
    iVar2 = get_work_mode();
    *(int *)(iVar2 + 0x10d2) = *(int *)(iVar2 + 0x10d2) + iVar3;
  }
  return;
}


