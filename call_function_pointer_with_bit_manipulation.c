/*
 * Function: call_function_pointer_with_bit_manipulation
 * Entry:    0007fb20
 * Prototype: undefined call_function_pointer_with_bit_manipulation()
 */


void call_function_pointer_with_bit_manipulation(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined1 local_c;
  undefined3 uStack_b;
  undefined4 uStack_8;
  
  _local_c = CONCAT31((int3)(param_2 >> 8),(char)((param_2 & 3) << 6));
  uStack_8 = param_3;
  call_function_pointer_with_parameter_from_structure_alt(param_1,1,&local_c,1,param_1);
  return;
}


