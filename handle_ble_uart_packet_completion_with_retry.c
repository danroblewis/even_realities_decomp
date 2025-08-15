/*
 * Function: handle_ble_uart_packet_completion_with_retry
 * Entry:    000852ba
 * Prototype: undefined handle_ble_uart_packet_completion_with_retry()
 */


void handle_ble_uart_packet_completion_with_retry(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 100;
  *(undefined4 *)(param_1 + 0x14) = 1;
  do {
    iVar1 = clear_multiple_interrupt_flags(param_1,2,0);
    if (iVar1 != 0) break;
    handle_ble_uart_packet_processing_completion(1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(param_2 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  return;
}


