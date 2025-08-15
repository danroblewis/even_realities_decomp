/*
 * Function: FUN_00082bb8
 * Entry:    00082bb8
 * Prototype: undefined FUN_00082bb8()
 */


void FUN_00082bb8(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00082b98();
  if (iVar1 != 0) {
    process_ble_service_discovery_and_handle_assignment(*param_1,param_1 + 1,1);
    return;
  }
  return;
}


