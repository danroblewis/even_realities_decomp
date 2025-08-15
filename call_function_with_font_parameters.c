/*
 * Function: call_function_with_font_parameters
 * Entry:    0004904c
 * Prototype: undefined call_function_with_font_parameters()
 */


void call_function_with_font_parameters
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  update_ble_connection_priority_with_magnetometer
            (FONT_PARAMETER_PROCESSING_BUFFER,0xfffffff0,param_3,&FONT_PARAMETER_PROCESSING_BUFFER,
             param_4);
  FONT_PARAMETER_FUNCTION_CALLS = 1;
  return;
}


