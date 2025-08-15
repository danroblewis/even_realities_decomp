/*
 * Function: wait_for_hardware_interrupt_flag_with_timeout
 * Entry:    0006649c
 * Prototype: undefined wait_for_hardware_interrupt_flag_with_timeout()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 wait_for_hardware_interrupt_flag_with_timeout(void)

{
  undefined **ppuVar1;
  
  if (DAT_2000b37c == 0) {
    ppuVar1 = &PTR_LAB_00050394_1_0000c350;
  }
  else {
    ppuVar1 = (undefined **)((uint)(DAT_2000b37c * 1000) / 10);
  }
  while ((_DAT_5002b100 == 0 && (HARDWARE_INTERRUPT_FLAG_REGISTER == '\0'))) {
    handle_ble_uart_packet_processing_completion(10);
    ppuVar1 = (undefined **)((int)ppuVar1 - 1);
    if (ppuVar1 == (undefined **)0x0) {
      return 0xbad0007;
    }
  }
  if (HARDWARE_INTERRUPT_FLAG_REGISTER != '\0') {
    return 0xbad0007;
  }
  return 0xbad0000;
}


