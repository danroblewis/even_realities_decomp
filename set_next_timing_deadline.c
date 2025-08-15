/*
 * Function: set_next_timing_deadline
 * Entry:    00032c0c
 * Prototype: undefined set_next_timing_deadline()
 */


void set_next_timing_deadline(void)

{
  longlong lVar1;
  
  lVar1 = calculate_ble_connection_timing_scaled();
  DAT_20004948 = (int)(lVar1 + 10000);
  DAT_2000494c = (int)((ulonglong)(lVar1 + 10000) >> 0x20);
  return;
}


