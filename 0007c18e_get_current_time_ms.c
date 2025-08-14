/*
 * Function: get_current_time_ms
 * Entry:    0007c18e
 * Prototype: undefined get_current_time_ms()
 */


undefined8 get_current_time_ms(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_00074f68();
  uVar1 = (uint)((ulonglong)(lVar2 * 1000) >> 0x20);
  return CONCAT44(uVar1 >> 0xf,(uint)(lVar2 * 1000) >> 0xf | uVar1 * 0x20000);
}


