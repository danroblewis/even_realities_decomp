/*
 * Function: read_sensor_data_and_scale_by_1024
 * Entry:    0007d0aa
 * Prototype: undefined read_sensor_data_and_scale_by_1024()
 */


void read_sensor_data_and_scale_by_1024(int *param_1)

{
  read_sensor_data_with_retry(0x1c04,param_1);
  *param_1 = *param_1 >> 10;
  return;
}


