/*
 * Function: FUN_00065494
 * Entry:    00065494
 * Prototype: undefined FUN_00065494()
 */


uint FUN_00065494(void)

{
  int iVar1;
  
  iVar1 = FUN_00065434();
  return ((uint)*(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) << 0x1e) >> 0x1f;
}


