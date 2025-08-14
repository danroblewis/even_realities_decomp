/*
 * Function: FUN_00065448
 * Entry:    00065448
 * Prototype: undefined FUN_00065448()
 */


ushort FUN_00065448(void)

{
  int iVar1;
  
  iVar1 = FUN_00065434();
  return *(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) & 1;
}


