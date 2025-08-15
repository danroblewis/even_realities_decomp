/*
 * Function: FUN_000852ba
 * Entry:    000852ba
 * Prototype: undefined FUN_000852ba()
 */


void FUN_000852ba(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 100;
  *(undefined4 *)(param_1 + 0x14) = 1;
  do {
    iVar1 = FUN_0008523e(param_1,2,0);
    if (iVar1 != 0) break;
    thunk_FUN_00086384(1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(param_2 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  return;
}


