/*
 * Function: reset_sensor_data_buffers
 * Entry:    0002ebc8
 * Prototype: undefined reset_sensor_data_buffers()
 */


void reset_sensor_data_buffers(void)

{
  DAT_20018da6 = 0;
  SENSOR_DATA_BUFFER_RESET = 0;
  SENSOR_DATA_BUFFER_RESET_ALT = 0;
  return;
}


