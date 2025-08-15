/*
 * Function: FUN_00083778
 * Entry:    00083778
 * Prototype: undefined FUN_00083778()
 */


void FUN_00083778(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + -8);
  *(int *)(param_1 + -8) = iVar1 + 1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
    return;
  }
  FUN_0005f638();
  return;
}


