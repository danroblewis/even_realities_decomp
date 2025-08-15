/*
 * Function: handle_ble_characteristic_value_change_with_callback_iteration
 * Entry:    000822bc
 * Prototype: undefined handle_ble_characteristic_value_change_with_callback_iteration()
 */


void handle_ble_characteristic_value_change_with_callback_iteration
               (undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (param_3 == 0) {
    call_callback_function_from_structure();
    pcVar3 = *(code **)(param_2 + 8);
    uVar1 = *(ushort *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
              (param_2);
    uVar2 = 0;
    if (pcVar3 != (code *)0x0) {
      for (; uVar2 < uVar1; uVar2 = uVar2 + 1) {
        (*pcVar3)(param_1,uVar4);
      }
    }
    return;
  }
  bt_connection_disconnect_with_callback_validation_and_parameter_and_state_validation_and_callback_execution
            (param_2,param_2,param_3,param_4);
  return;
}


