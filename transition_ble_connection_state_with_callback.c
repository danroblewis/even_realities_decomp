/*
 * Function: transition_ble_connection_state_with_callback
 * Entry:    0008181a
 * Prototype: undefined transition_ble_connection_state_with_callback()
 */


void transition_ble_connection_state_with_callback(undefined4 param_1,int param_2)

{
  bt_connection_state_transition_with_callback_execution(param_1,param_2 + 4);
  return;
}


