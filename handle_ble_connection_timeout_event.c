/*
 * Function: handle_ble_connection_timeout_event
 * Entry:    00081a60
 * Prototype: undefined handle_ble_connection_timeout_event()
 */


void handle_ble_connection_timeout_event(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 == 0) &&
     (iVar1 = search_linked_list_element_by_value(param_1,*(undefined2 *)(param_2 + 4)), iVar1 != 0)
     ) {
    handle_ble_connection_timeout_with_uart_setup();
    return;
  }
  return;
}


