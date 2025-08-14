/*
 * Function: FUN_000869dc
 * Entry:    000869dc
 * Prototype: undefined FUN_000869dc()
 */


uint FUN_000869dc(void)

{
  undefined8 in_d0;
  undefined4 uStack_4;
  
  uStack_4 = (uint)((ulonglong)in_d0 >> 0x20);
  return (uStack_4 | 0x80000000) + 0x100000 >> 0x1f;
}


