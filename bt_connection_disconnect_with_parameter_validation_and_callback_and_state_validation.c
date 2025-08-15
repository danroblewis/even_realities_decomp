/*
 * Function: bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation
 * Entry:    000573f4
 * Prototype: undefined bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation()
 */


int bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation
              (int param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 local_18;
  
  uVar1 = 0x20003ab0;
  if (param_1 != 6) {
    uVar1 = 0;
  }
  local_18 = param_4;
  iVar2 = bt_connection_state_transition_with_callback_execution(uVar1,4,0x10000,0);
  if (iVar2 == 0) {
    local_18 = 3;
    process_and_compress_data_with_validation(&DAT_00088160,0x1840,&local_18);
    return 0;
  }
  puVar3 = (undefined1 *)ble_memory_allocation_utility(iVar2 + 0xc,4);
  *puVar3 = (char)param_1;
  puVar3[1] = param_2;
  *(undefined2 *)(puVar3 + 2) = param_3;
  return iVar2;
}


