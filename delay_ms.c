/*
 * Function: delay_ms
 * Entry:    0007d14a
 * Prototype: undefined delay_ms()
 */


void delay_ms(int param_1)

{
  handle_unsigned_division(param_1 * 0x8000 + 999,param_1 >> 0x11,1000,0);
  get_schedule_timing();
  return;
}


