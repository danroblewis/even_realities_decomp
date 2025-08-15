/*
 * Function: bt_connection_disconnect_with_state_management_and_callback_execution_and_parameter
 * Entry:    000574ec
 * Prototype: undefined bt_connection_disconnect_with_state_management_and_callback_execution_and_parameter()
 */


void bt_connection_disconnect_with_state_management_and_callback_execution_and_parameter
               (int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  setup_error_handling(param_1 + 0x30,uVar1);
  FUN_000732d4(param_1 + 0x50,0x818dd);
  return;
}


