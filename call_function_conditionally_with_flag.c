/*
 * Function: call_function_conditionally_with_flag
 * Entry:    0004906c
 * Prototype: undefined call_function_conditionally_with_flag()
 */


void call_function_conditionally_with_flag(void)

{
  if (FONT_PARAMETER_FUNCTION_CALLS == '\x01') {
    update_ble_connection_priority_with_magnetometer(DAT_2000a09c,0xfffffff2);
    FONT_PARAMETER_FUNCTION_CALLS = '\0';
  }
  return;
}


