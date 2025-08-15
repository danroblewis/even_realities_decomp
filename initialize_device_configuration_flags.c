/*
 * Function: initialize_device_configuration_flags
 * Entry:    0005f638
 * Prototype: undefined initialize_device_configuration_flags()
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_device_configuration_flags(int param_1)

{
  _DAT_5000e500 = 1;
  if (*(char *)(param_1 + 0x86) != '\0') {
    _DAT_5000e00c = 1;
    return;
  }
  _DAT_5000e000 = 1;
  _DAT_5000e004 = 1;
  return;
}


