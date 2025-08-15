/*
 * Function: FUN_000654ac
 * Entry:    000654ac
 * Prototype: undefined FUN_000654ac()
 */


ushort FUN_000654ac(void)

{
  int iVar1;
  
  iVar1 = FUN_00065434();
  return *(ushort *)((int)&DAT_20002bc0 + (iVar1 + 8) * 2) >> 0xd;
}


