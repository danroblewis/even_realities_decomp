/*
 * Function: manage_timer_interrupt_priority
 * Entry:    0006385c
 * Prototype: undefined manage_timer_interrupt_priority()
 */


uint manage_timer_interrupt_priority(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    if (TIMER_INTERRUPT_FLAG_AND_PRIORITY == 0) {
      return 0xfffffff4;
    }
    uVar1 = 0x1f - LZCOUNT(TIMER_INTERRUPT_FLAG_AND_PRIORITY);
    uVar3 = TIMER_INTERRUPT_FLAG_AND_PRIORITY & ~(1 << (uVar1 & 0xff));
    uVar2 = TIMER_INTERRUPT_FLAG_AND_PRIORITY >> (uVar1 & 0xff);
    TIMER_INTERRUPT_FLAG_AND_PRIORITY = uVar3;
  } while (-1 < (int)(uVar2 << 0x1f));
  return uVar1;
}


