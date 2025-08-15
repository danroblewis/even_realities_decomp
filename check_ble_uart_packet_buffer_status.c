/*
 * Function: check_ble_uart_packet_buffer_status
 * Entry:    000861c2
 * Prototype: undefined check_ble_uart_packet_buffer_status()
 */


void check_ble_uart_packet_buffer_status(int param_1)

{
  int extraout_r2;
  undefined8 uVar1;
  
  uVar1 = is_ble_uart_packet_buffer_ready(*(undefined4 *)(param_1 + 0x14));
  if (((int)uVar1 != 0) && (extraout_r2 != 0)) {
    *(int *)(extraout_r2 + 0xc) = (int)((ulonglong)uVar1 >> 0x20);
  }
  return;
}


