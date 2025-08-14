/*
 * Function: FUN_0007c0c8
 * Entry:    0007c0c8
 * Prototype: undefined FUN_0007c0c8()
 */


uint FUN_0007c0c8(void)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_00074f68();
  return (uint)(lVar1 * 1000) >> 0xf | (int)((ulonglong)(lVar1 * 1000) >> 0x20) * 0x20000;
}


