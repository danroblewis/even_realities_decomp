/*
 * Function: execute_callbacks_and_clear_reference
 * Entry:    0007eece
 * Prototype: undefined execute_callbacks_and_clear_reference()
 */


void execute_callbacks_and_clear_reference(undefined4 *param_1)

{
  execute_callback_loop_until_completion
            (*param_1,param_1[2],*(undefined4 *)param_1[1],((undefined4 *)param_1[1])[1]);
  *(undefined4 *)param_1[1] = 0;
  return;
}


