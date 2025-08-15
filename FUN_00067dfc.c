/*
 * Function: FUN_00067dfc
 * Entry:    00067dfc
 * Prototype: undefined FUN_00067dfc()
 */


undefined4 FUN_00067dfc(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 4);
  (&DAT_2000b420)[uVar2 * 2] = param_3;
  if ((&DAT_2000b41c)[uVar2 * 8] == '\0') {
    (&DAT_2000b41c)[uVar2 * 8] = 1;
    if (param_2 != 0) {
      FUN_00067d84();
    }
    uVar1 = 0xbad0000;
  }
  else {
    uVar1 = 0xbad0005;
  }
  return uVar1;
}


