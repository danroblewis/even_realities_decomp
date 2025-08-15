/*
 * Function: cleanup_sensor_system
 * Entry:    000330c4
 * Prototype: undefined cleanup_sensor_system()
 */


undefined4 cleanup_sensor_system(void)

{
  if (SENSOR_SYSTEM_STATUS_AND_CONFIGURATION != 0) {
    acquire_resource_mutex_if_valid();
  }
  return 0;
}


