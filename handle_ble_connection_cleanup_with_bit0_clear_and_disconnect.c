/*
 * Function: handle_ble_connection_cleanup_with_bit0_clear_and_disconnect
 * Entry:    00082346
 * Prototype: undefined handle_ble_connection_cleanup_with_bit0_clear_and_disconnect()
 */


void handle_ble_connection_cleanup_with_bit0_clear_and_disconnect
               (undefined4 param_1,int *param_2,int param_3)

{
  if (param_3 == 0) {
    call_callback_function_from_structure();
  }
  FUN_00081e14(*param_2 + 0x120,0);
  bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
            (param_2);
  return;
}


