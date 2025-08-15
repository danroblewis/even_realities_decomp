/*
 * Function: reset_system_parameter_and_byte
 * Entry:    00037098
 * Prototype: undefined reset_system_parameter_and_byte()
 */


void reset_system_parameter_and_byte(void)

{
  CURRENT_STOCK_INDEX = 0;
  DAT_2001b816 = 0;
  set_system_byte_69();
  return;
}


