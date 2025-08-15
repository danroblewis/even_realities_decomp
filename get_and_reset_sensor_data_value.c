/*
 * Function: get_and_reset_sensor_data_value
 * Entry:    0002f928
 * Prototype: undefined get_and_reset_sensor_data_value()
 */


undefined4 get_and_reset_sensor_data_value(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_20007bb0;
  DAT_20007bb0 = 0;
  return uVar1;
}


