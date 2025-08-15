/*
 * Function: fill_memory_buffer_with_zeros
 * Entry:    0007f69e
 * Prototype: undefined fill_memory_buffer_with_zeros()
 */


undefined4
fill_memory_buffer_with_zeros(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    fill_memory_buffer(param_1,0,0xa2c,param_4,param_4);
    uVar1 = 0;
  }
  return uVar1;
}


