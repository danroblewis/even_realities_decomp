/*
 * Function: execute_callback_with_state_check_and_memory_buffer_reset
 * Entry:    00084880
 * Prototype: undefined execute_callback_with_state_check_and_memory_buffer_reset()
 */


void execute_callback_with_state_check_and_memory_buffer_reset(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_24 [4];
  int local_20;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    fill_memory_buffer(local_24,0,0x14);
    local_24[0] = 4;
    local_20 = iVar1;
    execute_callback_function_pointer_if_valid(param_1,local_24);
    *param_2 = 0;
  }
  return;
}


