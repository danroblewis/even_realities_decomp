/*
 * Function: FUN_0007f150
 * Entry:    0007f150
 * Prototype: undefined FUN_0007f150()
 */


int FUN_0007f150(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0004e048(param_2,param_1 + 0x200);
  if (iVar1 == 0) {
    uVar2 = FUN_0007f00e(*(undefined4 *)(param_1 + 0x200));
    iVar1 = FUN_0004e2b4(param_1 + 0x204,uVar2,param_1,0x200,
                         *(undefined4 *)(*(int *)(param_1 + 0x200) + 4),
                         *(undefined4 *)(*(int *)(param_1 + 0x200) + 8),0);
  }
  return iVar1;
}


