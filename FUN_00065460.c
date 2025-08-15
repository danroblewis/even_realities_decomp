/*
 * Function: FUN_00065460
 * Entry:    00065460
 * Prototype: undefined FUN_00065460()
 */


uint FUN_00065460(void)

{
  int iVar1;
  
  iVar1 = FUN_00065434();
  return ((uint)*(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) << 0x1a) >> 0x1f;
}


