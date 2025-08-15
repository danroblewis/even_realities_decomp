/*
 * Function: initialize_system_state_with_memory_setup
 * Entry:    00079760
 * Prototype: undefined initialize_system_state_with_memory_setup()
 */


void initialize_system_state_with_memory_setup(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    initialize_memory_with_jump_table_handling("Can\'t initialize mutex, was NULL\r\n");
  }
  *param_1 = 0;
  param_1[1] = 0x3a00003a;
  return;
}


