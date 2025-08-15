/*
 * Function: setup_ble_connection_with_driver_check_and_parameter_processing
 * Entry:    00084418
 * Prototype: undefined setup_ble_connection_with_driver_check_and_parameter_processing()
 */


int setup_ble_connection_with_driver_check_and_parameter_processing
              (int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  iVar2 = check_driver_ready(*(undefined4 *)(iVar4 + 0x1c));
  if (iVar2 == 0) {
    iVar2 = -0x13;
  }
  else {
    iVar2 = comprehensive_parameter_validation_and_processing_with_bounds_checking(param_1,0);
    if (-1 < iVar2) {
      iVar2 = *(int *)(iVar4 + 0x24);
      if (iVar2 != 0) {
        iVar5 = *(int *)(param_1 + 4);
        cVar1 = *(char *)(iVar5 + 0x20);
        if ((cVar1 != '\0') && (cVar1 != '\x01')) {
          return -0x86;
        }
        iVar2 = validate_ble_connection_request_packet(iVar2,iVar2,(int)&uStack_1c + 2);
        if (iVar2 == -0x16) {
          return -0x16;
        }
        iVar3 = pack_parameters_and_call_callback
                          (*(undefined4 *)(iVar5 + 0x1c),4,cVar1 * '\x02' + '\t',uStack_1c._2_1_,
                           iVar3);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      iVar2 = process_ble_connection_parameters_with_state_based_routing(param_1,iVar4 + 0x28,0);
      if ((iVar2 == 0) &&
         (iVar2 = process_ble_connection_parameters_with_state_based_routing(param_1,iVar4 + 0x30,1)
         , iVar2 == 0)) {
        iVar3 = process_ble_connection_parameters_with_state_based_routing(param_1,iVar4 + 0x38,2);
        return iVar3;
      }
    }
  }
  return iVar2;
}


