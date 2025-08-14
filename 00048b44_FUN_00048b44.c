/*
 * Function: FUN_00048b44
 * Entry:    00048b44
 * Prototype: undefined FUN_00048b44()
 */


undefined4 FUN_00048b44(int param_1)

{
  if (0x7c < param_1) {
    param_1 = 0x7d;
  }
  if (param_1 < 0x21) {
    param_1 = 0x21;
  }
  DAT_20002544 = param_1;
  return 0;
}


