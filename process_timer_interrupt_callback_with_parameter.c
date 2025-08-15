/*
 * Function: process_timer_interrupt_callback_with_parameter
 * Entry:    00063bcc
 * Prototype: undefined process_timer_interrupt_callback_with_parameter()
 */


void process_timer_interrupt_callback_with_parameter(void)

{
  int iVar1;
  
  iVar1 = process_data_with_callback_and_parameter_alt(0xc);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 4) = &DAT_000fa9cc;
  }
  return;
}


