/*
 * Function: FUN_00080e14
 * Entry:    00080e14
 * Prototype: undefined FUN_00080e14()
 */


uint FUN_00080e14(uint param_1)

{
  bool bVar1;
  
  if (param_1 < 0x10) {
    if (0xd < param_1) {
      return 1;
    }
    bVar1 = param_1 == 5;
    if (bVar1) {
      param_1 = 3;
    }
  }
  else {
    if (param_1 == 0x13) {
      return 1;
    }
    bVar1 = param_1 == 0x1a;
    if (bVar1) {
      param_1 = 1;
    }
  }
  if (!bVar1) {
    param_1 = 2;
  }
  return param_1;
}


