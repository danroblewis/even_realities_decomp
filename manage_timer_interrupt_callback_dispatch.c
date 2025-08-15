/*
 * Function: manage_timer_interrupt_callback_dispatch
 * Entry:    00063be0
 * Prototype: undefined manage_timer_interrupt_callback_dispatch()
 */


void manage_timer_interrupt_callback_dispatch(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)TIMER_INTERRUPT_CALLBACK_STATE_BUFFER;
  if ((uVar1 == 0) && (uVar2 = dispatch_timer_interrupt_callbacks(0), (int)uVar2 != 0)) {
    TIMER_INTERRUPT_CALLBACK_DISPATCH_MANAGEMENT_STATE = uVar1;
    handle_ble_connection_timeout_with_uart_setup
              (&DAT_200066f0,(int)((ulonglong)uVar2 >> 0x20),0x8000,0);
    return;
  }
  return;
}


