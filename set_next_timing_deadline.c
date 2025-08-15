/*
 * Function: set_next_timing_deadline
 * Entry:    00032c0c
 * Prototype: undefined set_next_timing_deadline()
 */


void set_next_timing_deadline(void)

{
  longlong lVar1;
  
  lVar1 = calculate_ble_connection_timing_scaled();
  NEXT_TIMING_DEADLINE_SETTING_STATE_1 = (int)(lVar1 + 10000);
  NEXT_TIMING_DEADLINE_SETTING_STATE_2 = (int)((ulonglong)(lVar1 + 10000) >> 0x20);
  return;
}


