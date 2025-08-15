/*
 * Function: cleanup_sensor_system
 * Entry:    000330c4
 * Prototype: undefined cleanup_sensor_system()
 */


undefined4 cleanup_sensor_system(void)

{
  if (DAT_20002424 != 0) {
    acquire_resource_mutex_if_valid();
  }
  return 0;
}


