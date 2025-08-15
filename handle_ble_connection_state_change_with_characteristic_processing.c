/*
 * Function: handle_ble_connection_state_change_with_characteristic_processing
 * Entry:    00082aee
 * Prototype: undefined handle_ble_connection_state_change_with_characteristic_processing(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined1 param_5, undefined4 param_6)
 */


int handle_ble_connection_state_change_with_characteristic_processing
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
              undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = handle_ble_connection_state_change_with_parameter_validation(0xf0000,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_2;
    *(undefined1 *)(iVar1 + 0x11) = param_5;
    *(undefined4 *)(iVar1 + 0x14) = param_6;
    *(code **)(iVar1 + 0xc) = param_4;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    iVar2 = process_ble_characteristic_value_change_with_callback_execution(param_1,param_5,param_6)
    ;
    if (iVar2 != 0) {
      update_ble_connection_state(iVar2,0,0,1);
      *(int *)(iVar1 + 8) = iVar2;
      iVar2 = (*param_4)(iVar2,param_6,param_3);
      if ((iVar2 == 0) && (iVar2 = enqueue_ble_connection_request(param_1,iVar1), iVar2 == 0)) {
        return 0;
      }
      cleanup_ble_connection_and_free_memory(iVar1);
      return iVar2;
    }
    cleanup_ble_connection_and_free_memory(iVar1);
  }
  return -0xc;
}


