/*
 * Function: FUN_00053cb0
 * Entry:    00053cb0
 * Prototype: undefined FUN_00053cb0(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined1 param_5)
 */


void FUN_00053cb0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  
  *param_2 = param_3;
  param_2[1] = param_4;
  *(undefined1 *)(param_2 + 2) = param_5;
  iVar1 = FUN_0005ee18();
  *(undefined4 **)(&DAT_2000abf8 + iVar1 * 0xc) = param_2;
  return;
}


