/*
 * Function: set_sensor_enable_state
 * Entry:    0002eb28
 * Prototype: undefined set_sensor_enable_state()
 */


void set_sensor_enable_state(uint param_1,int param_2)

{
  if (param_1 < 3) {
    if (param_2 != 0) {
      (&DAT_20018da6)[param_1] = 1;
      return;
    }
    (&DAT_20018da6)[param_1] = 0;
  }
  return;
}


