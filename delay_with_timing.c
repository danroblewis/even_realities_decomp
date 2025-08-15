/*
 * Function: delay_with_timing
 * Entry:    0007cb8e
 * Prototype: undefined __stdcall delay_with_timing(undefined4 delay_milliseconds)
 */


void delay_with_timing(int delay_milliseconds)

{
  handle_unsigned_division(delay_milliseconds * 0x8000 + 999,delay_milliseconds >> 0x11,1000,0);
  calculate_ble_schedule_timing();
  return;
}


