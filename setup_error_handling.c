/*
 * Function: setup_error_handling
 * Entry:    000864e8
 * Prototype: undefined setup_error_handling()
 */


void setup_error_handling(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  return;
}


