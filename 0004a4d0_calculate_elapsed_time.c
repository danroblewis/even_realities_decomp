/*
 * Function: calculate_elapsed_time
 * Entry:    0004a4d0
 * Prototype: undefined __stdcall calculate_elapsed_time(undefined4 elapsed_time_ptr)
 */


void calculate_elapsed_time(longlong *elapsed_time_ptr)

{
  longlong lVar1;
  
  lVar1 = get_system_timestamp_ms();
  *elapsed_time_ptr =
       (lVar1 - CONCAT44(TIMESTAMP_REFERENCE_LOW,TIMESTAMP_REFERENCE_HIGH)) +
       CONCAT44(CURRENT_TIMESTAMP_LOW,CURRENT_TIMESTAMP_HIGH);
  return;
}


