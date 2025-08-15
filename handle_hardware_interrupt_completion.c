/*
 * Function: handle_hardware_interrupt_completion
 * Entry:    00066c88
 * Prototype: undefined handle_hardware_interrupt_completion()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_hardware_interrupt_completion(void)

{
  if (_DAT_5002b100 == 0) {
    return;
  }
  _DAT_5002b100 = 0;
  if (HARDWARE_INTERRUPT_TRIGGER_REGISTER == '\0') {
    if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\x03') {
      HARDWARE_INTERRUPT_TRIGGER_REGISTER = 1;
      _DAT_5002b004 = 1;
      _DAT_5002b100 = 0;
      return;
    }
    if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER != '\x04') {
      if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER != '\x02') {
        HARDWARE_INTERRUPT_TRIGGER_REGISTER = 1;
        _DAT_5002b100 = 0;
        return;
      }
      HARDWARE_INTERRUPT_TRIGGER_REGISTER = 1;
      _DAT_5002b008 = 1;
      _DAT_5002b100 = 0;
      return;
    }
    HARDWARE_INTERRUPT_TRIGGER_REGISTER = 1;
    _DAT_5002b00c = 1;
    _DAT_5002b100 = 0;
    return;
  }
  if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\x03') {
    DAT_2000b368 = 2;
  }
  else {
    if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER == '\x04') {
      DAT_2000b368 = 3;
      DAT_2000b36c = _DAT_5002b51c;
      DAT_2000b370._0_1_ = (undefined1)_DAT_5002b520;
      goto LAB_00066cd8;
    }
    if (HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER != '\x02') goto LAB_00066cd8;
    DAT_2000b368 = 1;
  }
  copy_interrupt_configuration_data();
LAB_00066cd8:
  if (HARDWARE_INTERRUPT_CONFIG_REGISTER == 0) {
    HARDWARE_CONFIGURATION_AND_INTERRUPT_MANAGER = '\x01';
  }
  if (HARDWARE_INTERRUPT_FLAG_REGISTER == '\0') {
    (*HARDWARE_CONFIGURATION_AND_INTERRUPT_HANDLING_MANAGER)(0,DAT_2000b34c);
  }
  DAT_2000b368 = 0;
  return;
}


