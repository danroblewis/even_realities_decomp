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
  
  current_timestamp = FUN_0007cb2c();
  DAT_200040c8 = (int)(current_timestamp + (ulonglong)time_offset);
  DAT_200040cc = (int)(current_timestamp + (ulonglong)time_offset >> 0x20);
  return;
}


