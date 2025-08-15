/*
 * Function: FUN_00085bf6
 * Entry:    00085bf6
 * Prototype: undefined FUN_00085bf6()
 */


void FUN_00085bf6(int *param_1)

{
  if (param_1 != (int *)0x0) {
    while (param_1 != (int *)*param_1) {
      FUN_00085974((int *)*param_1 + -0xd);
    }
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  return;
}


