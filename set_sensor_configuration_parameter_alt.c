/*
 * Function: set_sensor_configuration_parameter_alt
 * Entry:    000330a8
 * Prototype: undefined set_sensor_configuration_parameter_alt()
 */


undefined4 set_sensor_configuration_parameter_alt(int param_1)

{
  if (param_1 != 0) {
    if (DAT_20002424 != param_1) {
      DAT_20002424 = param_1;
    }
    DAT_2000242c = 0;
    return 0;
  }
  return 0xffffffff;
}


