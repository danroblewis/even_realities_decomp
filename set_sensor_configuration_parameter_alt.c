/*
 * Function: set_sensor_configuration_parameter_alt
 * Entry:    000330a8
 * Prototype: undefined set_sensor_configuration_parameter_alt()
 */


undefined4 set_sensor_configuration_parameter_alt(int param_1)

{
  if (param_1 != 0) {
    if (SENSOR_SYSTEM_STATUS_AND_CONFIGURATION != param_1) {
      SENSOR_SYSTEM_STATUS_AND_CONFIGURATION = param_1;
    }
    SENSOR_CONFIGURATION_PARAMETERS = 0;
    return 0;
  }
  return 0xffffffff;
}


