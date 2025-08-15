/*
 * Function: initialize_proximity_sensor
 * Entry:    00086688
 * Prototype: undefined initialize_proximity_sensor()
 */


undefined4 initialize_proximity_sensor(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return 0;
}


