/*
 * Function: FUN_00080e38
 * Entry:    00080e38
 * Prototype: undefined FUN_00080e38()
 */


bool FUN_00080e38(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc0);
  if ((iVar2 == 0) || (-1 < (int)((uint)*(byte *)(iVar2 + 0xd) << 0x1f))) {
    bVar1 = 2;
  }
  else if ((int)((uint)*(byte *)(iVar2 + 0xd) << 0x1b) < 0) {
    if (*(char *)(iVar2 + 0xc) == '\x10') {
      bVar1 = 4;
    }
    else {
      bVar1 = 3;
    }
  }
  else {
    bVar1 = 3;
  }
  *(byte *)(param_1 + 9) = bVar1;
  return *(byte *)(param_1 + 10) <= bVar1;
}


