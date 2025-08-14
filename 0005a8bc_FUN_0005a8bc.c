/*
 * Function: FUN_0005a8bc
 * Entry:    0005a8bc
 * Prototype: undefined FUN_0005a8bc()
 */


void FUN_0005a8bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  char *local_24;
  int iStack_20;
  undefined1 local_14;
  byte local_13;
  
  uVar4 = FUN_00059b5c();
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
    uVar3 = 0;
  }
  else {
    local_14 = *(undefined1 *)(iVar1 + 8);
    local_13 = FUN_0008270c(iVar1 + 0xc,(int)((ulonglong)uVar4 >> 0x20),iVar1);
    uVar3 = 2;
    local_13 = local_13 & 1;
    puVar2 = &local_14;
  }
  iStack_20 = FUN_00053034(param_1,param_2,puVar2,uVar3);
  if (iStack_20 != 0) {
    local_24 = "Failed to store Client Features (err %d)";
    local_28 = 3;
    FUN_00082a42(&DAT_00088128,0x1840,&local_28);
  }
  return;
}


