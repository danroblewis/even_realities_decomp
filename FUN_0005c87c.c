/*
 * Function: FUN_0005c87c
 * Entry:    0005c87c
 * Prototype: undefined FUN_0005c87c()
 */


void FUN_0005c87c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar3 = param_1 + 0x90;
  local_20 = param_2;
  uStack_1c = param_3;
  iVar1 = FUN_00080f92(*(undefined1 *)(param_1 + 8),iVar3);
  FUN_00082c9c(1,0xffff,&LAB_0005a2fc_1,&local_20);
  if (iVar1 != 0) {
    FUN_0005c80c(*(undefined1 *)(param_1 + 8),iVar3);
  }
  iVar2 = FUN_00059b5c(*(undefined1 *)(param_1 + 8),param_2);
  if ((iVar2 != 0) && (FUN_000828da(iVar2 + 1,param_3), iVar1 != 0)) {
    FUN_0005a8bc(*(undefined1 *)(param_1 + 8),iVar3);
  }
  return;
}


