/*
 * Function: FUN_00084e9a
 * Entry:    00084e9a
 * Prototype: undefined FUN_00084e9a()
 */


int FUN_00084e9a(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  while( true ) {
    uVar3 = (uint)*(byte *)(param_1 + iVar1);
    if (uVar3 - 0x30 < 10) {
      iVar2 = iVar2 + -0x30;
    }
    else if (uVar3 - 0x41 < 6) {
      iVar2 = iVar2 + -0x37;
    }
    else {
      if (5 < uVar3 - 0x61) {
        return 0;
      }
      iVar2 = iVar2 + -0x57;
    }
    if (iVar1 == 3) break;
    iVar2 = (uVar3 + iVar2) * 0x10;
    iVar1 = iVar1 + 1;
  }
  return uVar3 + iVar2;
}


