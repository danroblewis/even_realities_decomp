/*
 * Function: copy_interrupt_configuration_data
 * Entry:    00066644
 * Prototype: undefined copy_interrupt_configuration_data()
 */


void copy_interrupt_configuration_data(void)

{
  DAT_2000b36c = HARDWARE_INTERRUPT_CONFIG_REGISTER;
  DAT_2000b370 = DAT_2000b358;
  DAT_2000b374 = DAT_2000b360;
  HARDWARE_INTERRUPT_CONFIG_REGISTER = HARDWARE_INTERRUPT_STATUS_REGISTER;
  if (HARDWARE_INTERRUPT_STATUS_REGISTER != 0) {
    DAT_2000b358 = HARDWARE_INTERRUPT_CONFIGURATION;
    DAT_2000b360 = INTERRUPT_CONFIGURATION_COPY_BUFFER;
    HARDWARE_INTERRUPT_STATUS_REGISTER = 0;
    return;
  }
  return;
}


