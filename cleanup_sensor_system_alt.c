/*
 * Function: cleanup_sensor_system_alt
 * Entry:    000330d8
 * Prototype: undefined cleanup_sensor_system_alt()
 */


undefined4 cleanup_sensor_system_alt(void)

{
  if (SENSOR_SYSTEM_STATUS_AND_CONFIGURATION != 0) {
    release_resource_mutex_if_valid();
  }
  return 0;
}


