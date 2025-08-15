/*
 * Function: exchange_sensor_data_value
 * Entry:    0002f910
 * Prototype: undefined exchange_sensor_data_value()
 */


undefined4 exchange_sensor_data_value(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_20007bb0;
  DAT_20007bb0 = param_1;
  return uVar1;
}


