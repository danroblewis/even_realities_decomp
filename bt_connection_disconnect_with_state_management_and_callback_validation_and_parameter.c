/*
 * Function: bt_connection_disconnect_with_state_management_and_callback_validation_and_parameter
 * Entry:    0005791c
 * Prototype: undefined bt_connection_disconnect_with_state_management_and_callback_validation_and_parameter()
 */


void bt_connection_disconnect_with_state_management_and_callback_validation_and_parameter
               (undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int local_14;
  
  puVar4 = &BLE_CONNECTION_BATCH_PROCESSING_TABLE;
  uVar5 = param_1;
  local_14 = param_2;
  while( true ) {
    if (&BT_CONNECTION_CALLBACK_LIST_START < puVar4) {
      DEBUG_PRINT2("ASSERTION FAIL [%s] @ %s:%d\n","fchan <= _bt_l2cap_fixed_chan_list_end",
                   "WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",0x185,uVar5);
      DEBUG_PRINT2("\tunexpected list end location\n");
                    /* WARNING: Subroutine does not return */
      trigger_system_service_call("WEST_TOPDIR/zephyr/subsys/bluetooth/host/l2cap.c",0x185);
    }
    if ((undefined4 *)((int)&DAT_00087fe8 + 3) < puVar4) break;
    iVar2 = (*(code *)puVar4[1])(param_1,&local_14);
    if (-1 < iVar2) {
      uVar1 = *(undefined2 *)puVar4;
      *(undefined2 *)(local_14 + 0x14) = uVar1;
      *(undefined2 *)(local_14 + 0x24) = uVar1;
      iVar2 = bt_connection_disconnect_with_parameter_validation_and_callback_and_state_validation_and_callback_execution
                        (param_1,local_14,puVar4[2]);
      if (iVar2 == 0) {
        return;
      }
      if ((code *)**(undefined4 **)(local_14 + 4) != (code *)0x0) {
        (*(code *)**(undefined4 **)(local_14 + 4))();
      }
      *(uint *)(local_14 + 0x10) = *(uint *)(local_14 + 0x10) | 1;
      pcVar3 = *(code **)(*(int *)(local_14 + 4) + 0x1c);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(local_14,local_14 + 0x10);
      }
    }
    puVar4 = puVar4 + 3;
  }
  return;
}


