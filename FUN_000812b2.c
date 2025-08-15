/*
 * Function: FUN_000812b2
 * Entry:    000812b2
 * Prototype: undefined FUN_000812b2()
 */


uint FUN_000812b2(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = uVar2 & 8;
  if (uVar1 != 0) {
    if (-1 < (int)(uVar2 << 0xd)) {
      if ((uVar2 & 0x600) == 0x400) {
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
      }
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


