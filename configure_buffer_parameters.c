/*
 * Function: configure_buffer_parameters
 * Entry:    00076b48
 * Prototype: undefined configure_buffer_parameters()
 */


void configure_buffer_parameters(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fill_memory_buffer(param_1 + 0x17,0,8);
  param_1[8] = param_1;
  param_1[9] = 0x86f35;
  param_1[10] = 0x86f5b;
  param_1[0xb] = 0x86f93;
  param_1[0xc] = &LAB_00086fb6_1;
  return;
}


