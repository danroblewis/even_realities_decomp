/*
 * Function: FUN_0007daa4
 * Entry:    0007daa4
 * Prototype: undefined FUN_0007daa4()
 */


undefined8 FUN_0007daa4(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = calculate_ble_connection_timing_with_validation();
  uVar1 = (uint)((ulonglong)(lVar2 * 1000) >> 0x20);
  return CONCAT44(uVar1 >> 0xf,(uint)(lVar2 * 1000) >> 0xf | uVar1 * 0x20000);
}


