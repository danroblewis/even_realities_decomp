/*
 * Function: handle_ble_characteristic_value_change_with_callback_and_debug
 * Entry:    000821f4
 * Prototype: undefined handle_ble_characteristic_value_change_with_callback_and_debug()
 */


void handle_ble_characteristic_value_change_with_callback_and_debug
               (undefined4 param_1,int param_2,undefined2 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return;
  }
  uVar3 = bt_connection_disconnect_with_callback_and_parameter_and_state_validation_and_callback_execution_and_parameter_and_state_management
                    (param_1,1,4);
  iVar1 = (int)uVar3;
  if (iVar1 == 0) {
    process_and_compress_data_wrapper
              (&DAT_00088100,0x1040,&stack0xfffffff0,2,0,(int)((ulonglong)uVar3 >> 0x20),extraout_r2
               ,extraout_r3);
    return;
  }
  puVar2 = (undefined1 *)ble_memory_allocation_utility(iVar1 + 0xc,4);
  *puVar2 = (char)param_2;
  *(undefined2 *)(puVar2 + 1) = param_3;
  puVar2[3] = param_4;
  handle_ble_characteristic_value_change_with_debug_init(param_1,iVar1);
  return;
}


