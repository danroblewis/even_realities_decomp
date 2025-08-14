/*
 * Function: FUN_00080b0e
 * Entry:    00080b0e
 * Prototype: undefined FUN_00080b0e()
 */


void FUN_00080b0e(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (*(code **)(param_2 + 0x38) != (code *)0x0) {
      (**(code **)(param_2 + 0x38))(param_1 + 0x18);
    }
    FUN_0005f24c(param_1);
    return;
  }
  return;
}


