/*
 * Function: enable_timer_interrupt
 * Entry:    00063524
 * Prototype: undefined enable_timer_interrupt()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enable_timer_interrupt(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    DAT_2000b2d8 = DAT_2000b2d8 | 1 << (param_1 & 0xff);
    uVar1 = 0x50015000;
    _DAT_50015304 = 0x10000 << (param_1 & 0xff);
    iVar2 = (HARDWARE_TIMER_INTERRUPT_CONFIGURATION >> (param_1 & 0xff)) << 0x1f;
    bVar3 = iVar2 < 0;
    if (bVar3) {
      uVar1 = 0x200000;
      iVar2 = -0x1fff1f00;
    }
    if (bVar3) {
      *(undefined4 *)(iVar2 + 0x100) = uVar1;
    }
  }
  return;
}


