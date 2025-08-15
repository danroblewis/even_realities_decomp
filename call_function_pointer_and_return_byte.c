/*
 * Function: call_function_pointer_and_return_byte
 * Entry:    0007f012
 * Prototype: undefined call_function_pointer_and_return_byte()
 */


undefined1 call_function_pointer_and_return_byte(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 0xc))();
  return *(undefined1 *)(iVar1 + 4);
}


