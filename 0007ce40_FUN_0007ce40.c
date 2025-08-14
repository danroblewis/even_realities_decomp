/*
 * Function: FUN_0007ce40
 * Entry:    0007ce40
 * Prototype: undefined FUN_0007ce40()
 */


undefined8 FUN_0007ce40(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_00074f68();
  uVar1 = (uint)((ulonglong)(lVar2 * 1000) >> 0x20);
  return CONCAT44(uVar1 >> 0xf,(uint)(lVar2 * 1000) >> 0xf | uVar1 * 0x20000);
}


