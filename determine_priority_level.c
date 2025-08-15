/*
 * Function: determine_priority_level
 * Entry:    00080e38
 * Prototype: undefined __stdcall determine_priority_level(undefined4 priority_ctx)
 */


bool determine_priority_level(int priority_ctx)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(priority_ctx + 0xc0);
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
  *(byte *)(priority_ctx + 9) = bVar1;
  return *(byte *)(priority_ctx + 10) <= bVar1;
}


