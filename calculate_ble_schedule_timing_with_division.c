/*
 * Function: calculate_ble_schedule_timing_with_division
 * Entry:    0007c038
 * Prototype: undefined calculate_ble_schedule_timing_with_division()
 */


void calculate_ble_schedule_timing_with_division(int param_1)

{
  handle_unsigned_division(param_1 * 0x8000 + 999,param_1 >> 0x11,1000,0);
  calculate_ble_schedule_timing();
  return;
}


