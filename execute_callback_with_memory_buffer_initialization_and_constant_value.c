/*
 * Function: execute_callback_with_memory_buffer_initialization_and_constant_value
 * Entry:    000848b0
 * Prototype: undefined execute_callback_with_memory_buffer_initialization_and_constant_value()
 */


void execute_callback_with_memory_buffer_initialization_and_constant_value(undefined4 param_1)

{
  undefined1 local_1c [20];
  
  fill_memory_buffer(local_1c,0,0x14);
  local_1c[0] = 5;
  execute_callback_function_pointer_if_valid(param_1,local_1c);
  return;
}


