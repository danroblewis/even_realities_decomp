/*
 * Function: set_sensor_configuration_parameter
 * Entry:    00033088
 * Prototype: undefined set_sensor_configuration_parameter()
 */


undefined4 set_sensor_configuration_parameter(int param_1)

{
  if (param_1 != 0) {
    if (DAT_20002428 != param_1) {
      DAT_20002428 = param_1;
    }
    DAT_2000242c = 1;
    return 0;
  }
  return 0xffffffff;
}


