/*
 * Function: FUN_00084ade
 * Entry:    00084ade
 * Prototype: undefined FUN_00084ade()
 */


void FUN_00084ade(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00084abe(*(undefined4 *)(param_1 + 4));
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 == 0) {
    *(undefined1 *)(*(int *)(iVar1 + 0xc) + 0xcd) = 1;
    return;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0xc) + 0xcd) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0xbc) = 0xffffffff;
  FUN_0008496c(param_1,*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10),
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x14));
  return;
}


