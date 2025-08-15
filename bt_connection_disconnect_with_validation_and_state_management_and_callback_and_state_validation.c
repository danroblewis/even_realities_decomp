/*
 * Function: bt_connection_disconnect_with_validation_and_state_management_and_callback_and_state_validation
 * Entry:    00057468
 * Prototype: undefined bt_connection_disconnect_with_validation_and_state_management_and_callback_and_state_validation()
 */


undefined4
bt_connection_disconnect_with_validation_and_state_management_and_callback_and_state_validation
          (undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (BLE_CONNECTION_DISCONNECT_WITH_VALIDATION_STATE_MANAGEMENT_CALLBACK_AND_STATE_VALIDATION != 0)
  {
    uVar1 = bt_connection_disconnect_with_state_management_and_callback_and_state_validation();
    return uVar1;
  }
  BT_CONNECTION_DISCONNECT_VALIDATION_AND_STATE_MANAGEMENT_STATE = &DAT_0008b264;
  *param_2 = &
             BLE_CONNECTION_DISCONNECT_WITH_VALIDATION_STATE_MANAGEMENT_CALLBACK_AND_STATE_VALIDATION
  ;
  return 0;
}


