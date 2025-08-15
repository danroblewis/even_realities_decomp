/*
 * Function: handle_unsigned_division_and_calculate_ble_schedule_timing_alt2
 * Entry:    0007c26e
 * Prototype: undefined handle_unsigned_division_and_calculate_ble_schedule_timing_alt2()
 */


void handle_unsigned_division_and_calculate_ble_schedule_timing_alt2(int param_1)

{
  handle_unsigned_division(param_1 * 0x8000 + 999,param_1 >> 0x11,1000,0);
  calculate_ble_schedule_timing();
  return;
}


