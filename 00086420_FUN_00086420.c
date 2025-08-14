/*
 * Function: FUN_00086420
 * Entry:    00086420
 * Prototype: undefined FUN_00086420()
 */


void FUN_00086420(int param_1,int param_2,int param_3,int param_4)

{
  *(int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0x18) = param_4 * param_3 + param_2;
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(int *)(param_1 + 0x28) = param_1 + 0x28;
  *(int *)(param_1 + 0x2c) = param_1 + 0x28;
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x20) = param_2;
  return;
}


