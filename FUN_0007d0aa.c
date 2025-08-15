/*
 * Function: FUN_0007d0aa
 * Entry:    0007d0aa
 * Prototype: undefined FUN_0007d0aa()
 */


void FUN_0007d0aa(int *param_1)

{
  read_sensor_data_with_retry(0x1c04,param_1);
  *param_1 = *param_1 >> 10;
  return;
}


