/*
 * Function: FUN_00082e24
 * Entry:    00082e24
 * Prototype: undefined FUN_00082e24()
 */


void FUN_00082e24(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar3 = param_2;
  process_ble_connection_state();
  iVar1 = FUN_0008253a(param_1,param_2);
  if (iVar1 == 0) {
    finalize_ble_connection_with_magnetometer();
    return;
  }
  pcVar2 = *(code **)(iVar1 + 4);
  update_ble_connection_state_and_cleanup(param_1,iVar1);
  finalize_ble_connection_with_magnetometer();
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,0xe,0,0,param_2,uVar3);
  }
  return;
}


