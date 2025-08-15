/*
 * Function: handle_ble_characteristic_operation_with_handle_validation_and_callback
 * Entry:    000821c0
 * Prototype: undefined handle_ble_characteristic_operation_with_handle_validation_and_callback()
 */


undefined4
handle_ble_characteristic_operation_with_handle_validation_and_callback
          (undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = read_ble_data_uint16(param_2 + 0xc);
  handle_ble_characteristic_operation_with_handle_validation
            (*(undefined4 *)*param_1,uVar1,*(undefined4 *)(param_2 + 0xc),
             *(undefined2 *)(param_2 + 0x10));
  iVar2 = bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter_and_state_management
                    (param_1,0x1e,0);
  if (iVar2 != 0) {
    handle_ble_characteristic_value_change_with_debug_init(param_1,iVar2);
  }
  return 0;
}


