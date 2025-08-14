/*
 * Function: FUN_00084b14
 * Entry:    00084b14
 * Prototype: undefined FUN_00084b14()
 */


void FUN_00084b14(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *local_c;
  
  local_c = param_2;
  iVar1 = FUN_00083eb8(param_1,param_2,&local_c,param_4,param_1);
  if (-1 < iVar1) {
    FUN_00083ede(*local_c,*(undefined1 *)(local_c + 1),*param_1);
  }
  return;
}


