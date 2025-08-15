/*
 * Function: handle_ble_connection_state_transition_to_disconnected
 * Entry:    00082366
 * Prototype: undefined handle_ble_connection_state_transition_to_disconnected()
 */


void handle_ble_connection_state_transition_to_disconnected
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  handle_ble_connection_state_change
            (param_1,0xc,0xd,**(undefined2 **)(param_2 + 0xc),(*(undefined2 **)(param_2 + 0xc))[1],
             param_2,param_3);
  return;
}


