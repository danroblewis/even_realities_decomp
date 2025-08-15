/*
 * Function: set_buffer_bytes_when_condition_met
 * Entry:    0007ef04
 * Prototype: undefined set_buffer_bytes_when_condition_met()
 */


int set_buffer_bytes_when_condition_met
              (int param_1,undefined1 *param_2,undefined4 param_3,undefined1 param_4)

{
  bool bVar1;
  
  bVar1 = param_1 == 1;
  if (bVar1) {
    param_4 = 3;
  }
  if (bVar1) {
    param_2[1] = (char)param_1;
  }
  if (bVar1) {
    param_2[4] = (char)param_1;
    *param_2 = param_4;
    param_1 = 0;
  }
  if (bVar1) {
    param_2[2] = param_4;
  }
  else {
    param_1 = 1;
  }
  if (bVar1) {
    param_2[3] = param_4;
  }
  return param_1;
}


