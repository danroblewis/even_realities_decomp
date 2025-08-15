/*
 * Function: handle_ble_connection_state_transition_to_state_5
 * Entry:    00081940
 * Prototype: undefined handle_ble_connection_state_transition_to_state_5()
 */


void handle_ble_connection_state_transition_to_state_5(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = handle_ble_connection_state_transition_with_validation(param_1,5,param_2,0,0,param_2);
  if (iVar1 != 0) {
    decrement_reference_count_and_cleanup_memory(param_2);
    return;
  }
  return;
}


