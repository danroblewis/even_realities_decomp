/*
 * Function: call_function_with_font_parameters
 * Entry:    0004904c
 * Prototype: undefined call_function_with_font_parameters()
 */


void call_function_with_font_parameters
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  update_ble_connection_priority_with_magnetometer
            (DAT_2000a09c,0xfffffff0,param_3,&DAT_2000a09c,param_4);
  DAT_2001d446 = 1;
  return;
}


