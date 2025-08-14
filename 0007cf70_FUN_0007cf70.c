/*
 * Function: FUN_0007cf70
 * Entry:    0007cf70
 * Prototype: undefined FUN_0007cf70()
 */


undefined4 FUN_0007cf70(void)

{
  int iVar1;
  char cVar2;
  int local_c;
  
  cVar2 = 'e';
  local_c = 0;
  while( true ) {
    iVar1 = FUN_000302f8(0x4410,&local_c);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    if (local_c << 0x1f < 0) break;
    cVar2 = cVar2 + -1;
    FUN_0003016c(1);
    if (cVar2 == '\0') {
      return 0xfffffffe;
    }
  }
  return 0;
}


