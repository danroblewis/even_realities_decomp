/*
 * Function: FUN_000825ac
 * Entry:    000825ac
 * Prototype: undefined FUN_000825ac()
 */


void FUN_000825ac(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined1 *)(iVar1 + 0x10) = param_4;
  *(undefined2 *)(iVar1 + 4) = 1;
  return;
}


