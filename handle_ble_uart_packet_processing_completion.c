/*
 * Function: handle_ble_uart_packet_processing_completion
 * Entry:    00086384
 * Prototype: undefined handle_ble_uart_packet_processing_completion()
 */


void handle_ble_uart_packet_processing_completion(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (param_1 != 0) {
    (*(code *)0x88840)((DAT_20002bb8 / 1000000) * param_1);
    return;
  }
  return;
}


