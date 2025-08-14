/*
 * Function: FUN_0007ab00
 * Entry:    0007ab00
 * Prototype: undefined FUN_0007ab00()
 */


void FUN_0007ab00(int param_1)

{
  if (param_1 == 0) {
    FUN_000795b4("ctx cannot be NULL");
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x60) = 1;
  return;
}


