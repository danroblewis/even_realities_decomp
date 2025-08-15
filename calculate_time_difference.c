/*
 * Function: calculate_time_difference
 * Entry:    00024d2c
 * Prototype: undefined calculate_time_difference()
 */


int calculate_time_difference(void)

{
  int iVar1;
  
  iVar1 = calculate_ble_connection_timing_with_validation();
  return iVar1 - TIMESTAMP_CALCULATION_AND_STORAGE;
}


