/*
 * Function: handle_ble_connection_timeout_with_uart_setup
 * Entry:    00081720
 * Prototype: undefined handle_ble_connection_timeout_with_uart_setup()
 */


void handle_ble_connection_timeout_with_uart_setup(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = get_counter_value(param_1 + 0x2c,param_1);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (((int)uVar2 != 0) && ((*(int *)(iVar1 + 0x30) != 0 || (*(int *)(iVar1 + 0x4c) != 0)))) {
    handle_ble_connection_timeout_with_uart_setup(iVar1 + 0x50,iVar1,0,0);
    return;
  }
  return;
}


