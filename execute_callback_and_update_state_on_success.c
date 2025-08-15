/*
 * Function: execute_callback_and_update_state_on_success
 * Entry:    00084c94
 * Prototype: undefined execute_callback_and_update_state_on_success()
 */


void execute_callback_and_update_state_on_success(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  iVar1 = pack_parameters_and_call_callback(**(undefined4 **)(param_1 + 4),7,1);
  if (-1 < iVar1) {
    *puVar2 = 0;
  }
  return;
}


