/*
 * Function: calculate_sensor_threshold_value
 * Entry:    00068b14
 * Prototype: undefined __stdcall calculate_sensor_threshold_value(undefined4 sensor_mode)
 */


char calculate_sensor_threshold_value(uint sensor_mode)

{
  char cVar1;
  
  cVar1 = 1 < sensor_mode;
  if (sensor_mode != 0) {
    cVar1 = cVar1 + '\x01';
  }
  if (3 < sensor_mode) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


