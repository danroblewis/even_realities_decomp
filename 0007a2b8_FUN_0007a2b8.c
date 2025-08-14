/*
 * Function: FUN_0007a2b8
 * Entry:    0007a2b8
 * Prototype: undefined FUN_0007a2b8()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007a2b8(uint param_1)

{
  if (param_1 == 0) {
    return 0xf50000;
  }
  do {
    if ((_DAT_50845a00 & 0x100) != 0) {
      _DAT_50845a08 = param_1 | 0x100;
      return 1;
    }
  } while ((param_1 & _DAT_50845a00) == 0);
  _DAT_50845a08 = param_1;
  return 0;
}


