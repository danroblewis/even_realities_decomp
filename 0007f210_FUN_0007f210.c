/*
 * Function: FUN_0007f210
 * Entry:    0007f210
 * Prototype: undefined FUN_0007f210()
 */


int FUN_0007f210(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0007e9dc(*param_1,*(undefined2 *)(param_1 + 1),param_2,param_3);
  if (param_3 <= iVar1) {
    iVar1 = param_3;
  }
  return iVar1;
}


