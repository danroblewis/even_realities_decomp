/*
 * Function: handle_ble_connection_disconnect_event
 * Entry:    00081a76
 * Prototype: undefined handle_ble_connection_disconnect_event()
 */


void handle_ble_connection_disconnect_event(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  code *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(undefined2 *)(param_2 + 4);
  bt_connection_disconnect_with_validation_and_callback_and_state_validation(param_2);
  if (param_3 == 0) {
    iVar2 = search_linked_list_element_by_value(param_1,uVar1);
    if (iVar2 != 0) {
      pcVar3 = *(code **)(*(int *)(iVar2 + 4) + 0x18);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(param_1,uVar4,0);
      }
      handle_ble_connection_timeout_with_uart_setup(iVar2);
      return;
    }
  }
  else if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00081a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar4,param_3);
    return;
  }
  return;
}


