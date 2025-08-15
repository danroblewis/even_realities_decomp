/*
 * Function: copy_interrupt_configuration_data
 * Entry:    00066644
 * Prototype: undefined copy_interrupt_configuration_data()
 */


void copy_interrupt_configuration_data(void)

{
  DAT_2000b36c = DAT_2000b350;
  DAT_2000b370 = DAT_2000b358;
  DAT_2000b374 = DAT_2000b360;
  DAT_2000b350 = DAT_2000b354;
  if (DAT_2000b354 != 0) {
    DAT_2000b358 = DAT_2000b35c;
    DAT_2000b360 = DAT_2000b364;
    DAT_2000b354 = 0;
    return;
  }
  return;
}


