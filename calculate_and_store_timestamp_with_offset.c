/*
 * Function: calculate_and_store_timestamp_with_offset
 * Entry:    0002a4d8
 * Prototype: void calculate_and_store_timestamp_with_offset(uint time_offset)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void calculate_and_store_timestamp_with_offset(uint time_offset) */

void calculate_and_store_timestamp_with_offset(uint time_offset)

{
  longlong current_timestamp;
  
  current_timestamp = calculate_mathematical_operation_with_bit_shifting();
  TIMESTAMP_CALCULATION_AND_STORAGE_BUFFER = (int)(current_timestamp + (ulonglong)time_offset);
  SYSTEM_TIMESTAMP_AND_MONITORING_DATA = (int)(current_timestamp + (ulonglong)time_offset >> 0x20);
  return;
}


