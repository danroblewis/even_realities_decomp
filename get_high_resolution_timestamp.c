/*
 * Function: get_high_resolution_timestamp
 * Entry:    0007ce40
 * Prototype: undefined get_high_resolution_timestamp()
 */


undefined8 get_high_resolution_timestamp(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_00074f68();
  uVar1 = (uint)((ulonglong)(lVar2 * 1000) >> 0x20);
  return CONCAT44(uVar1 >> 0xf,(uint)(lVar2 * 1000) >> 0xf | uVar1 * 0x20000);
}


