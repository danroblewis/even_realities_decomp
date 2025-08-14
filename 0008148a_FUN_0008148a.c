/*
 * Function: FUN_0008148a
 * Entry:    0008148a
 * Prototype: undefined FUN_0008148a()
 */


uint FUN_0008148a(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xb);
  if ((uVar1 != 0) && (uVar1 = *(uint *)(param_1 + 0xc0), uVar1 != 0)) {
    uVar1 = (uint)*(byte *)(uVar1 + 0xc);
  }
  return uVar1;
}


