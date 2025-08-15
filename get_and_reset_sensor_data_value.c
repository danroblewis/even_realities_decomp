/*
 * Function: get_and_reset_sensor_data_value
 * Entry:    0002f928
 * Prototype: undefined get_and_reset_sensor_data_value()
 */


undefined4 get_and_reset_sensor_data_value(void)

{
  undefined4 uVar1;
  
  uVar1 = SENSOR_DATA_EXCHANGE_VALUE;
  SENSOR_DATA_EXCHANGE_VALUE = 0;
  return uVar1;
}


