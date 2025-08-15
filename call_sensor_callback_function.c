/*
 * Function: call_sensor_callback_function
 * Entry:    0003016c
 * Prototype: undefined call_sensor_callback_function()
 */


void call_sensor_callback_function(void)

{
                    /* WARNING: Could not recover jumptable at 0x00030172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(SENSOR_DATA_TRANSMISSION_AND_CALLBACK_MANAGEMENT + 0xc))();
  return;
}


