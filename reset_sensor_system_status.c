/*
 * Function: reset_sensor_system_status
 * Entry:    00030cc4
 * Prototype: undefined reset_sensor_system_status()
 */


void reset_sensor_system_status(void)

{
  SENSOR_SYSTEM_STATUS_MANAGEMENT = 0;
  return;
}


