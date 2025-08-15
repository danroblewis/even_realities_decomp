/*
 * Function: setup_timer_configuration
 * Entry:    00067dfc
 * Prototype: undefined setup_timer_configuration()
 */


undefined4 setup_timer_configuration(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 4);
  (&DAT_2000b420)[uVar2 * 2] = param_3;
  if ((&DAT_2000b41c)[uVar2 * 8] == '\0') {
    (&DAT_2000b41c)[uVar2 * 8] = 1;
    if (param_2 != 0) {
      setup_interrupt_timing_configuration();
    }
    uVar1 = 0xbad0000;
  }
  else {
    uVar1 = 0xbad0005;
  }
  return uVar1;
}


