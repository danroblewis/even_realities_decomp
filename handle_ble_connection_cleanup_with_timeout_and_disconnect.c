/*
 * Function: handle_ble_connection_cleanup_with_timeout_and_disconnect
 * Entry:    000822fc
 * Prototype: undefined handle_ble_connection_cleanup_with_timeout_and_disconnect()
 */


void handle_ble_connection_cleanup_with_timeout_and_disconnect
               (undefined4 param_1,int *param_2,int param_3)

{
  int *extraout_r1;
  int *piVar1;
  
  piVar1 = param_2;
  if (param_3 == 0) {
    call_callback_function_from_structure();
    piVar1 = extraout_r1;
  }
  if (*(int *)(*param_2 + 0x124) != 0) {
    handle_ble_connection_timeout_with_uart_setup(*param_2 + 0x160,piVar1,0xf0000,0);
  }
  bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
            (param_2);
  return;
}


