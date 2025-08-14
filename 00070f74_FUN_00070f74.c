/*
 * Function: FUN_00070f74
 * Entry:    00070f74
 * Prototype: undefined FUN_00070f74(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


void FUN_00070f74(int param_1,int param_2,undefined1 *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &LAB_000a8ea0;
  }
  FUN_0008705a(param_2,param_3,0x20);
  *(undefined4 *)(param_2 + 0x24) = param_4;
  *(undefined4 *)(param_2 + 0x28) = param_5;
  *(int *)(param_2 + 0x20) = param_1;
  *(undefined4 *)(param_2 + 0x2c) = param_6;
  *(undefined4 *)(param_2 + 0x30) = param_7;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(int *)(param_2 + 0x34) = param_1;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  *(int *)(param_1 + 4) = param_2 + 0x34;
  **(int **)(param_2 + 0x38) = param_2 + 0x34;
  return;
}


