/*
 * Function: handle_ble_connection_state_transition_to_state_5_with_timeout
 * Entry:    00081962
 * Prototype: undefined handle_ble_connection_state_transition_to_state_5_with_timeout()
 */


void handle_ble_connection_state_transition_to_state_5_with_timeout
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = handle_ble_connection_state_transition_with_validation
                    (*param_1,5,param_2,0,0,param_2,param_3);
  if ((int)uVar1 != 0) {
    decrement_reference_count_and_cleanup_memory(param_2);
    return;
  }
  handle_ble_connection_timeout_with_uart_setup
            (param_1 + 0x30,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4);
  return;
}


