/*
 * Function: process_buffer_validation_wrapper
 * Entry:    00084e66
 * Prototype: undefined process_buffer_validation_wrapper()
 */


void process_buffer_validation_wrapper(int param_1,undefined4 param_2)

{
  process_buffer_validation_and_set_status
            (param_1,param_2,*(int *)(param_1 + 8) - 0x18U & 0xfffffff8);
  return;
}


