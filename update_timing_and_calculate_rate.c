/*
 * Function: update_timing_and_calculate_rate
 * Entry:    000267ac
 * Prototype: void update_timing_and_calculate_rate(int timing_data)
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void update_timing_and_calculate_rate(int timing_data) */

void update_timing_and_calculate_rate(int timing_data)

{
  uint current_time_ms;
  longlong raw_timestamp;
  
  raw_timestamp = thunk_FUN_00074f68();
  current_time_ms =
       (uint)(raw_timestamp * 1000) >> 0xf |
       (int)((ulonglong)(raw_timestamp * 1000) >> 0x20) * 0x20000;
  *(float *)(timing_data + 0x40) = (float)(current_time_ms - *(int *)(timing_data + 0x3c)) / 1000.0;
  *(uint *)(timing_data + 0x38) = current_time_ms;
  *(uint *)(timing_data + 0x3c) = current_time_ms;
  return;
}


