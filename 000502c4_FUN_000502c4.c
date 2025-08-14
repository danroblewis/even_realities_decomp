/*
 * Function: FUN_000502c4
 * Entry:    000502c4
 * Prototype: undefined FUN_000502c4(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 */


void FUN_000502c4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)(param_3 + -0x20) = param_4;
  *(undefined4 *)(param_3 + -0x1c) = param_5;
  *(undefined4 *)(param_3 + -0x18) = param_6;
  *(undefined **)(param_3 + -8) = &DAT_0007ddd8;
  *(undefined4 *)(param_3 + -0x14) = param_7;
  *(undefined4 *)(param_3 + -4) = 0x1000000;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(int *)(param_1 + 0x50) = param_3 + -0x20;
  *(undefined4 *)(param_1 + 0xd4) = 0xfd00;
  return;
}


