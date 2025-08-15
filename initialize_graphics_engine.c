/*
 * Function: initialize_graphics_engine
 * Entry:    00086726
 * Prototype: undefined initialize_graphics_engine()
 */


void initialize_graphics_engine(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[6] = param_1 + 6;
  param_1[7] = param_1 + 6;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}


