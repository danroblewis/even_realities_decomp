/*
 * Function: FUN_0007c3ea
 * Entry:    0007c3ea
 * Prototype: undefined FUN_0007c3ea()
 */


byte * FUN_0007c3ea(byte *param_1)

{
  int iVar1;
  
  if (param_1 != (byte *)0x0) {
    if ((*param_1 & 0x10) == 0) {
      iVar1 = 6;
    }
    else {
      iVar1 = 3;
    }
    if ((int)((uint)*param_1 << 0x1c) < 0) {
      iVar1 = iVar1 + 1;
    }
    param_1 = (byte *)((uint)param_1[1] + (uint)param_1[2] + iVar1);
  }
  return param_1;
}


