/*
 * Function: FUN_00087510
 * Entry:    00087510
 * Prototype: undefined FUN_00087510()
 */


int FUN_00087510(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x10000) {
    param_1 = param_1 << 0x10;
    iVar1 = 0x10;
  }
  else {
    iVar1 = 0;
  }
  if (param_1 < 0x1000000) {
    param_1 = param_1 << 8;
    iVar1 = iVar1 + 8;
  }
  if (param_1 < 0x10000000) {
    param_1 = param_1 << 4;
    iVar1 = iVar1 + 4;
  }
  if (param_1 < 0x40000000) {
    if ((int)(param_1 << 2) < 0) {
      return iVar1 + 2;
    }
    if ((int)(param_1 << 3) < 0) {
      return iVar1 + 3;
    }
    iVar1 = 0x20;
  }
  else if (-1 < (int)param_1) {
    return iVar1 + 1;
  }
  return iVar1;
}


