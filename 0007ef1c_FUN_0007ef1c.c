/*
 * Function: FUN_0007ef1c
 * Entry:    0007ef1c
 * Prototype: undefined FUN_0007ef1c()
 */


undefined4 FUN_0007ef1c(int param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *param_2 = *(undefined1 *)(*(int *)(param_1 + 0x14) + 8);
    return 0;
  }
  return 0xffffffa8;
}


