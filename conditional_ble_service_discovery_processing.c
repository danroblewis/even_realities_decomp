/*
 * Function: conditional_ble_service_discovery_processing
 * Entry:    00082bb8
 * Prototype: undefined conditional_ble_service_discovery_processing()
 */


void conditional_ble_service_discovery_processing(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = conditional_bit_set_or_clear();
  if (iVar1 != 0) {
    process_ble_service_discovery_and_handle_assignment(*param_1,param_1 + 1,1);
    return;
  }
  return;
}


