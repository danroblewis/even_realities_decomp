/*
 * Function: manage_timer_interrupt_callback_dispatch
 * Entry:    00063be0
 * Prototype: undefined manage_timer_interrupt_callback_dispatch()
 */


void manage_timer_interrupt_callback_dispatch(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)DAT_2001d563;
  if ((uVar1 == 0) && (uVar2 = dispatch_timer_interrupt_callbacks(0), (int)uVar2 != 0)) {
    DAT_2000b310 = uVar1;
    FUN_0007350c(&DAT_200066f0,(int)((ulonglong)uVar2 >> 0x20),0x8000,0);
    return;
  }
  return;
}


