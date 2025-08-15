/*
 * Function: map_work_mode_to_state_value
 * Entry:    0002c30c
 * Prototype: undefined map_work_mode_to_state_value()
 */


undefined4 map_work_mode_to_state_value(int param_1,undefined4 param_2)

{
  if (param_1 != 0xb) {
    if (param_1 == 0xc) {
      param_2 = 1;
    }
    return param_2;
  }
  return 0x1e13380;
}


