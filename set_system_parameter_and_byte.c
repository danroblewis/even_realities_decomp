/*
 * Function: set_system_parameter_and_byte
 * Entry:    0003707c
 * Prototype: undefined set_system_parameter_and_byte()
 */


undefined4 set_system_parameter_and_byte(undefined1 param_1)

{
  CURRENT_STOCK_INDEX = param_1;
  SYSTEM_PARAMETER_AND_WORK_MODE_STATUS = param_1;
  set_system_byte_69();
  return 0;
}


