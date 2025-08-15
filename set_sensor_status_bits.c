/*
 * Function: set_sensor_status_bits
 * Entry:    00032808
 * Prototype: undefined set_sensor_status_bits()
 */


byte set_sensor_status_bits(byte param_1)

{
  GLASSBOX_CHARGE_STATUS_AND_SENSOR_BITS =
       GLASSBOX_CHARGE_STATUS_AND_SENSOR_BITS & 0x80 | param_1 & 0x7f;
  return param_1 & 0x7f;
}


