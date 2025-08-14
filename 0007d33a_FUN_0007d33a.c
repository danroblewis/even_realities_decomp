/*
 * Function: FUN_0007d33a
 * Entry:    0007d33a
 * Prototype: undefined FUN_0007d33a()
 */


undefined8 FUN_0007d33a(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_00074f68();
  uVar1 = (uint)((ulonglong)(lVar2 * 1000) >> 0x20);
  return CONCAT44(uVar1 >> 0xf,(uint)(lVar2 * 1000) >> 0xf | uVar1 * 0x20000);
}


