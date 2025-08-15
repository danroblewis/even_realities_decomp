/*
 * Function: calculate_ble_connection_timing_with_scaling_alt
 * Entry:    0007d33a
 * Prototype: undefined calculate_ble_connection_timing_with_scaling_alt()
 */


undefined8 calculate_ble_connection_timing_with_scaling_alt(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = calculate_ble_connection_timing_with_validation();
  uVar1 = (uint)((ulonglong)(lVar2 * 1000) >> 0x20);
  return CONCAT44(uVar1 >> 0xf,(uint)(lVar2 * 1000) >> 0xf | uVar1 * 0x20000);
}


