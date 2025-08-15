/*
 * Function: route_ble_connection_request_based_on_state_and_call_appropriate_processor
 * Entry:    00084348
 * Prototype: undefined route_ble_connection_request_based_on_state_and_call_appropriate_processor()
 */


undefined4
route_ble_connection_request_based_on_state_and_call_appropriate_processor
          (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  switch(*(undefined1 *)(iVar1 + 0x20)) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    uVar2 = 1;
    break;
  case 2:
    uVar2 = 0;
    goto LAB_00084374;
  case 3:
    uVar2 = 1;
LAB_00084374:
    uVar2 = process_ble_connection_request_with_validation_and_data_processing
                      (iVar1,uVar2,param_2,param_3);
    return uVar2;
  default:
    return 0xffffffed;
  }
  uVar2 = process_ble_connection_request_with_bit_flag_processing(iVar1,uVar2,param_2);
  return uVar2;
}


