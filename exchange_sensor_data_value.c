/*
 * Function: exchange_sensor_data_value
 * Entry:    0002f910
 * Prototype: undefined exchange_sensor_data_value()
 */


undefined4 exchange_sensor_data_value(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = SENSOR_DATA_EXCHANGE_VALUE;
  SENSOR_DATA_EXCHANGE_VALUE = param_1;
  return uVar1;
}


