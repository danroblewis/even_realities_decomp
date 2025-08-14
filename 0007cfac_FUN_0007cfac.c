/*
 * Function: FUN_0007cfac
 * Entry:    0007cfac
 * Prototype: undefined FUN_0007cfac()
 */


int FUN_0007cfac(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_c;
  
  iVar2 = 100;
  local_c = 0;
  do {
    iVar1 = FUN_000302f8(0x4714,&local_c);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_c == 0) break;
    FUN_0003016c(1);
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  iVar1 = -1;
  if (iVar2 != -1) {
    iVar1 = 0;
  }
  return iVar1;
}


