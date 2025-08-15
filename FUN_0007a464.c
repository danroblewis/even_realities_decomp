/*
 * Function: FUN_0007a464
 * Entry:    0007a464
 * Prototype: undefined FUN_0007a464()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0007a464(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_20002f14)(DAT_20002f08);
  if (iVar1 != 0) {
    return 0xffff8fe9;
  }
  if (param_1 == 0) {
    if (DAT_2000d3ac == 0) {
      _DAT_50844500 = 1;
      do {
      } while (_DAT_50845910 != 0);
    }
    DAT_2000d3ac = DAT_2000d3ac + 1;
  }
  else if (DAT_2000d3ac != 0) {
    if (DAT_2000d3ac == 1) {
      do {
      } while (_DAT_50845910 != 0);
      _DAT_50844500 = _DAT_50845910;
      FUN_0007a2ac(0x1ffffff);
    }
    DAT_2000d3ac = DAT_2000d3ac + -1;
    (*DAT_20002f18)(DAT_20002f08);
    return 0;
  }
  (*DAT_20002f18)(DAT_20002f08);
  return 0;
}


