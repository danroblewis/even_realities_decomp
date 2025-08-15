/*
 * Function: reset_system_parameter_and_byte
 * Entry:    00037098
 * Prototype: undefined reset_system_parameter_and_byte()
 */


void reset_system_parameter_and_byte(void)

{
  CURRENT_STOCK_INDEX = 0;
  SYSTEM_PARAMETER_AND_WORK_MODE_STATUS = 0;
  set_system_byte_69();
  return;
}


