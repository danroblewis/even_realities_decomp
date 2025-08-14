/*
 * Function: FUN_00080f92
 * Entry:    00080f92
 * Prototype: undefined FUN_00080f92()
 */


uint FUN_00080f92(void)

{
  uint uVar1;
  
  uVar1 = FUN_0005e938();
  if ((uVar1 != 0) && (uVar1 = (uint)*(ushort *)(uVar1 + 0xe), uVar1 != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


