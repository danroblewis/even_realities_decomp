/*
 * Function: thunk_FUN_00085cf2
 * Entry:    00086380
 * Prototype: undefined thunk_FUN_00085cf2(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5)
 */


void thunk_FUN_00085cf2(int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  *param_1 = param_3;
  param_1[2] = param_5;
  param_1[3] = param_3 + param_4;
  *(undefined2 *)(param_1 + 4) = 0;
  if (param_2 < 2) {
    param_1[5] = 0;
  }
  else {
    param_1[5] = (int)(param_1 + param_2 * 6 + -6);
    param_1[param_2 * 6 + -6] = 0;
    *(uint *)(param_1[5] + 8) = param_2 - 2;
    *(undefined4 *)(param_1[5] + 4) = 0;
    *(undefined4 *)(param_1[5] + 0xc) = 0;
    *(undefined1 *)(param_1[5] + 0x10) = 0;
    if (param_2 != 2) {
      *(int **)param_1[5] = param_1 + 6;
    }
  }
  return;
}


