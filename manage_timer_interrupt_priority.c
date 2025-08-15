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
    if (DAT_2000b2d4 == 0) {
      return 0xfffffff4;
    }
    uVar1 = 0x1f - LZCOUNT(DAT_2000b2d4);
    uVar3 = DAT_2000b2d4 & ~(1 << (uVar1 & 0xff));
    uVar2 = DAT_2000b2d4 >> (uVar1 & 0xff);
    DAT_2000b2d4 = uVar3;
  } while (-1 < (int)(uVar2 << 0x1f));
  return uVar1;
}


