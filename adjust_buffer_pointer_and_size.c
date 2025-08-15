/*
 * Function: adjust_buffer_pointer_and_size
 * Entry:    00085aee
 * Prototype: undefined adjust_buffer_pointer_and_size()
 */


int * adjust_buffer_pointer_and_size(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    if ((param_2 == 0) || (uVar1 = param_1[1], uVar1 < param_2)) {
      param_1 = (int *)0x0;
    }
    else {
      param_1[1] = uVar1 - param_2;
      param_1 = (int *)(*param_1 + (param_1[2] - uVar1));
    }
  }
  return param_1;
}


